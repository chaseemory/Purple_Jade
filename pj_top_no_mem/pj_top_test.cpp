#include "Vpj_top_fu_lsu.h"
#include "Vpj_top_execute_stage.h"
#include "Vpj_top_rename_stage.h"
#include "Vpj_top_arch_state.h"
#include "Vpj_top_rob.h"
#include "Vpj_top_store_buffer.h"
#include "Vpj_top_commit_stage.h"
#include "Vpj_top_fe_top.h"
#include "Vpj_top_be_top.h"
#include "Vpj_top_pj_top.h"
#include "Vpj_top.h"
#include "verilated.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <cstdlib>

#define ROB_ENTRY 64

using namespace std;

static vluint64_t main_time = 0;

static void tick(Vpj_top* top) {
    top->clk_i = ((top->clk_i == 0) ? 1 : 0);
    top->eval();
}

static void cycle(Vpj_top* top) {
    tick(top);
    tick(top);
}

static vluint32_t fetchingPC(Vpj_top* top) {
    return top->pj_top->front_end->program_counter_fetch_r;
}

static bool is_committing(Vpj_top* top) {
    return top->pj_top->back_end->commit->reorder_buffer->rob_rename_valid_o;
}

static vluint64_t pc(Vpj_top* top) {
    vluint32_t* rob = top->pj_top->back_end->commit->reorder_buffer->committing_instr;
    return (rob[2] >> 12) & 0xffff;
}

static vluint64_t w_v(Vpj_top* top) {
    vluint32_t* rob = top->pj_top->back_end->commit->reorder_buffer->committing_instr;
    return (rob[0] >> 11) & 0x1;
}

static vluint64_t reg_w(Vpj_top* top) {
    vluint32_t* rob = top->pj_top->back_end->commit->reorder_buffer->committing_instr;
    return rob[0] & 0xf;
}

static vluint32_t reg_data(Vpj_top* top) {
    vluint32_t* rob = top->pj_top->back_end->commit->reorder_buffer->committing_instr;
    return ((rob[2] & 0x7ff) << 5) | (rob[1] >> 27);
}

static vluint64_t mem_v(Vpj_top* top) {
    return top->pj_top->back_end->commit->sb->sb_mem_v_o;
}

static vluint64_t mem_addr(Vpj_top* top) {
    return top->pj_top->back_end->commit->sb->sb_mem_addr_o;
}

static vluint64_t mem_data(Vpj_top* top) {
    return top->pj_top->back_end->commit->sb->sb_mem_data_o;
}

static vluint32_t flag(Vpj_top* top) {
    return (top->pj_top->back_end->commit->states->flag_n) & 0xf;
}
static vluint64_t flag_mask(Vpj_top* top) {
    vluint32_t* rob = top->pj_top->back_end->commit->reorder_buffer->committing_instr;
    return (rob[0] >> 17) & 0xf;
}

static vluint32_t getbits(vluint32_t* vec, int start, int len) {
    vluint32_t mask = ~(0xffffffff << len);
    if ((start / 32) == ((start + len - 1) / 32)) {
        return (vec[start / 32] >> (start % 32)) & mask;
    } else {
        vluint32_t lower = (vec[start / 32] >> (start % 32)) & mask;
        vluint32_t upper = (vec[(start + len - 1) / 32] << (32 - (start % 32)));
        return (lower | upper) & mask;
    }
}

static string printFU(vluint64_t fu) {
    string res = string("");
    if (fu == 0)
        res = string("NOOP  ");
    else if (fu == 1)
        res = string("ALU   ");
    else if (fu == 2)
        res = string("LOGIC ");
    else if (fu == 3)
        res = string("MEM   ");
    else if (fu == 4)
        res = string("BRANCH");
    else if (fu == 5)
        res = string("MUL   ");
    else if (fu == 6)
        res = string("DIV   ");
    else
        res = string("NOT A VALID FU");
    return res;
}

static void printRenamed(Vpj_top* top) {
    vluint32_t* decoded = top->pj_top->back_end->decoded_i;
    vluint32_t* renamed = top->pj_top->back_end->rename_issue_entry;
    cout << "| pc " << setw(4) << hex  << getbits(decoded, 17, 16);
    cout << "| rob# " << ((renamed[0] >> 5) & 0x3f);
    cout << "| w_v   " << getbits(decoded, 1, 1);
    cout << "| dest  " << getbits(decoded, 53, 4) << " -> " << ((renamed[2] >> 3) & 0x7f); 
    cout << "| rs1  " << getbits(decoded, 49, 4) << " -> " <<  (((renamed[1] >> 28) & 0xf) | ((renamed[2] & 0x7) << 4));
    cout << "| simm " << getbits(decoded, 44, 5);
    if (!(decoded[0] & 0x1))
        cout << "| rs2  " << getbits(decoded, 33, 4) << " -> " << ((renamed[1] >> 12) & 0x7f);
    if (!getbits(renamed, 4, 1))
        cout << "| wfs " << getbits(renamed,0 , 4);
    cout << endl;
    vluint32_t* rob = top->pj_top->back_end->rename_rob_entry;
    if (getbits(rob, 42, 1))
        cout << "| predicted pc " << getbits(decoded, 57, 16) << endl;
}

static void printDecoded(Vpj_top* top) {
    vluint32_t* decoded = top->pj_top->fe_fifo_data;
    vluint32_t decoded_v = top->pj_top->fe_fifo_valid;
    if (!decoded_v)
        cout << "decoded not valid" << endl;
    cout << "| pc " << setw(4) << hex  << getbits(decoded, 17, 16);
    cout << "| w_v   " << getbits(decoded, 1, 1);
    cout << "| dest  " << getbits(decoded, 53, 4); 
    cout << "| rs1  " << getbits(decoded, 49, 4);
    if (!(decoded[0] & 0x1))
        cout << "| rs2  " << getbits(decoded, 33, 4);
    cout << endl; 
}

static void printIssued(Vpj_top* top) {
    vluint32_t* issued = top->pj_top->back_end->issue_exe_entry;
    cout << "| pc " << setw(4) << hex << (((issued[1] & 0x7ff) << 5) | ((issued[0] >> 27) & 0x1f));
    cout << "| rob# " << ((issued[0] >> 4) & 0x3f);
    cout << "| rs1  " << (((issued[3] & 0x7) << 4) | ((issued[2] >> 28) & 0x1f)) << " " << ((issued[2] >> 12) & 0xffff);
    cout << "| rs2  " << ((issued[1] >> 11) & 0xffff);
    cout << "| FU  " << printFU(((issued[0] >> 21) & 0x7));
    cout << "| op  " << ((issued[0] >> 24) & 0x7) << endl;
}

static void printRobWb(Vpj_top* top) {
    vluint64_t* cdb = top->pj_top->back_end->commit->reorder_buffer->cdb;
    bool first = true;
    for (int i = 0; i < 7; i++) {
        if ((cdb[i] >> 33) & 0x1) {
            if (first) {
                cout << "Rob_wb" << endl;
                first = false;
            }
            vluint32_t* rob = top->pj_top->back_end->commit->reorder_buffer->rob_q[(cdb[i] & 0x3f)];
            cout << "| pc  " << ((rob[2] >> 12) & 0xffff);
            cout << "| num " << (cdb[i] & 0x3f) << " | value  " << ((cdb[i] >> 6) & 0xffff);
            cout << "| flag " << ((cdb[i] >> 22) & 0xf);
            cout << "| FU  " << printFU(i) << endl;
        }
    }
    if (top->pj_top->back_end->commit->sb->exe_sb_v_i){
        vluint64_t wb = top->pj_top->back_end->commit->sb->exe_sb_i;
        cout << endl << "Sb_wb" << endl;
        cout << "| sb#  " << ((wb >> 32) & 0xf);
        cout << "| addr  " << ((wb >> 16) & 0xffff);
        cout << "| data  " << (wb & 0xffff);
    }
}

static void printReg(Vpj_top* top, int num=0, bool one=false) {
    vluint32_t* v = top->pj_top->back_end->commit->states->valid;
    vluint32_t* r = top->pj_top->back_end->commit->states->reg_q;
    if (!one) {
        for (int i = 0; i < 128; i++) {
            vluint32_t vi = (v[i / 32] >> (i % 32)) & 0x1;
            vluint32_t ri = (r[i / 2] >> ((i % 2) * 16)) & 0xffff;
            cout << hex << i << " " << ((vi) ? 1 : 0)  << "  " << ri << endl;
        }
    } else {
        vluint32_t vi = (v[num / 32] >> (num % 32)) & 0x1;
        vluint32_t ri = (r[num / 2] >> ((num % 2) * 16)) & 0xffff;
        cout << hex << num << " " << ((vi) ? 1 : 0)  << "  " << ri << endl;
    }
}

static vluint64_t ripLut(vluint32_t* lut, int num) {
    if ((num / 32) == ((num + 6) / 32)) {
        return (lut[num / 32] >> (num % 32)) & 0x7f;
    } else {
        vluint32_t lower = (lut[num / 32] >> (num % 32)) & 0x7f;
        vluint32_t upper = (lut[(num + 6) / 32] << (32 - (num % 32)));
        return (lower | upper) & 0x7f;
    }
}

static void printLut(Vpj_top* top, bool spec=true) {
    vluint32_t* lut = (spec) ? top->pj_top->back_end->rename->lut_spec_q
                             : top->pj_top->back_end->rename->lut_q;

    for (int i = 0; i < 16; i++) {
        cout << hex << i << " " << ripLut(lut, i * 7) << endl;
    }
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    assert(argc > 1);
    Vpj_top* top = new Vpj_top;
    top->clk_i = 1;
    top->eval();
    tick(top);
    // clock low check reset
    top->reset_i = 1;
    tick(top);
    tick(top);
    top->reset_i = 0;
    tick(top);
    string trace_name = string(argv[1]);
    ifstream trace(trace_name);
    string line;
    vluint64_t instr = 0;
    bool passed = false;
    if (argc != 3) {
        cout << endl << "running....... " << endl;
        passed = true;
        while (getline(trace, line)) {
            std::stringstream ss;
            while (!(is_committing(top) | top->pj_top->be_fe_mispredict)) {
                cycle(top);
            }
            // parsing committing instructions
            // pc
            ss << setw(4) << setfill('0') << hex << pc(top);
            vluint64_t reg_write = w_v(top);
            ss << setw(1) << hex << reg_write;
            if (reg_write) {
                ss << setw(4) << setfill('0') << hex << reg_w(top);
                ss << setw(4) << setfill('0') << hex << reg_data(top);
            } else {
                ss << setw(4) << setfill('0') << hex << 0;
                ss << setw(4) << setfill('0') << hex << 0;
            }
            vluint64_t mem_write = mem_v(top);
            ss << setw(1) << hex << mem_write;
            if (mem_write) {
                ss << setw(4) << setfill('0') << hex << mem_addr(top);
                ss << setw(4) << setfill('0') << hex << mem_data(top);
            } else {
                ss << setw(4) << setfill('0') << hex << 0;
                ss << setw(4) << setfill('0') << hex << 0;            
            }
            ss << setw(1) << hex << flag(top);
            cycle(top);
            if (line.compare(ss.str()) != 0) {
                cout << "ERROR: Trace mismatch on instr number " << hex << instr << endl;
                cout << "  got "<< ss.str() << " expected " << line << endl;
                passed = false;
                break;
            }
            cout << "Matched : " << ss.str() << endl;
            instr++;
        }
    } else {
        // step
        vluint64_t cycle_count = 0;
        getline(trace, line);
        bool skip = false;
        string condition;
        int code;
       while(true) {
            string cmd_line;            
            if (!skip) {
               getline(std::cin, cmd_line);
            }

            stringstream ss(cmd_line);
            string cmd;
            ss >> cmd;
            if (cmd == string("quit"))
                break;
            // printing what happened
            if (cmd == string("lut")) {
                // print lut
                string rep;
                ss >> rep;
                if (!rep.size()) {
                    printLut(top);
                } else {
                    printLut(top, false);
                }
                cout << endl;
                continue;
            }

            if (cmd == string("rob_size")) {
                cout << "rob size is " << hex << (vluint32_t)( 64 - top->pj_top->back_end->commit->reorder_buffer->rob_num_n)<< endl;
                continue;
            }

            if (cmd == string("wfs")) {
                cout << "wfs vector " << endl;
                vluint32_t* v = &(top->pj_top->back_end->st_clear_vector);
                vluint32_t* num = top->pj_top->back_end->issue_sb_num_vector;
                for (int i = 0; i < 32; i++) {
                    cout << "| " << getbits(num, i * 4, 4) << " " << getbits(v, i, 1) << endl;
                }
                continue;
            }

            if (cmd == string("fe")) {
                printDecoded(top);
                continue;               
            }

            if (cmd == string("fpc")) {
                cout << hex << "fetching " << fetchingPC(top) << endl;
                continue;
            }

            if (cmd == string("reg")) {
                string num;
                ss >> num;
                if (!num.size()) {
                    printReg(top);
                } else {
                    printReg(top, strtol(num.c_str(), NULL, 16), true);
                }
                continue;
            }

            if (cmd == string("until")) {
                string condition_code;
                ss >> condition_code;
                ss >> condition;
                skip = true;
                if (condition_code == string("pc"))
                    code = 0;                            
                continue;
            }

            cout << "CYCLE " << dec << cycle_count << hex << endl;
            // renaming instr
            if (top->pj_top->back_end->rename->__PVT__renamed_v_o) {
                cout << "Renamed" << endl;
                printRenamed(top);
                cout << endl;
            }
            // issuing instr
            if (top->pj_top->back_end->__PVT__issue_exe_v) {
                cout << "Issued" << endl;
                printIssued(top);
                 cout << endl;
            }

            // instructions writting back
            printRobWb(top);
            cout << endl;

            if (top->pj_top->back_end->execute->lsu_fu->valid_pipe) {
                if (top->pj_top->back_end->execute->lsu_fu->opcode_r == 1) {
                    cout << "| LD addr " << hex << (vluint32_t) top->pj_top->back_end->execute->lsu_fu->mem_addr_r;
                    cout << "| Mem read " << hex << (vluint32_t) top->pj_top->back_end->execute->lsu_fu->mem_data_i;
                    if (top->pj_top->back_end->execute->lsu_fu->sb_ld_bypass_valid_i) 
                        cout << "| forward " << hex << (vluint32_t) top->pj_top->back_end->execute->lsu_fu->sb_ld_bypass_value_i;
                    cout << endl;
                }
            }

            // committing instructions
            if (is_committing(top) | top->pj_top->be_fe_mispredict) {
                cout << "Committed :" << endl << "| pc ";
                cout << setw(4) << hex << pc(top);
                vluint64_t reg_write = w_v(top);
                if (reg_write) {
                    cout << "| reg ";
                    cout << setw(4) << hex << reg_w(top);
                    cout << setw(4) << " " << hex << reg_data(top);
                }
                vluint64_t mem_write = mem_v(top);
                if (mem_write) {
                    cout << "| mem ";
                    cout << setw(4) << hex << mem_addr(top);
                    cout << setw(4) << " " << hex << mem_data(top);
                }
                cout << "| flag ";
                cout << " " << hex << (int) top->pj_top->back_end->commit->states->flag_n << " " << (int) top->pj_top->back_end->commit->states->rob_flag_valid_i; 
                cout << " " << flag_mask(top) << " " << (int) top->pj_top->back_end->commit->states->new_flag << endl;
                vluint32_t* rob = top->pj_top->back_end->commit->reorder_buffer->committing_instr;
                if (getbits(rob, 42, 1))
                    cout << "| predicted pc " << getbits(rob, 93, 16) << endl;
            }

            if (top->pj_top->be_fe_mispredict) {
                cout << "Misprediction redirecting to " << hex << (vluint32_t) top->pj_top->be_fe_redirected_pc << endl;
            }
            cout << setfill('-') << setw(20) << "-" << setfill(' ') <<endl;
            cout << endl;
            // check if is committing

            if (skip) {
                if (code == 0 && condition == line.substr(0, 4)) {
                    skip = false;
                }
            }

            if (is_committing(top)) {
                if (!getline(trace, line))
                    break;
            }
            cycle_count++;
            cycle(top);
        }
    }

    if (passed) {
        cout << endl << "TEST PASSED" << endl;
    }

    delete top; 
    return 0;
}