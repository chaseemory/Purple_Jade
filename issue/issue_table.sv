`include "Purple_Jade_pkg.svh"
`include "issue_reservation_pkg.svh"

module issue_table
  ( // Misc inputs
    input   logic                 clk_i
  , input   logic                 reset_i

  // Interface to ROB/REG FILE
  , output  logic [$clog2(NUM_PHYS_REG)-1:0] new_instr_addr_1
  , output  logic [$clog2(NUM_PHYS_REG)-1:0] new_instr_addr_2

  , input   logic                            new_instr_data_1_v
  , input   logic                            new_instr_data_2_v

  , input   logic [WORD_SIZE_P-1:0]          new_instr_data_1
  , input   logic [WORD_SIZE_P-1:0]          new_instr_data_2

  // Renaming logic interface
  , input   renamed_instruction_t instruction_i
  , input   logic                 valid_i
  , output  logic                 ready_o

  // Functional Unit interface
  , output  issued_instruction_t  instruction_o
  , input   logic [NUM_FU-1:0]    ready_i
  , output  logic [NUM_FU-1:0]    valid_o

  // CDB Interface
  , input   CDB_t [NUM_FU-1:0]    cdb
  );


  // ISSUE TABLE
  issued_instruction_t            [issue_entries-1:0] tabled_inst;
  issued_instruction_t            [issue_entries-1:0] tabled_inst_n;

  logic                           [issue_entries-1:0] valid_inst;
  logic                           [issue_entries-1:0] valid_inst_n;

  logic                           [issue_entries-1:0] inst_ready;

  logic                   [$clog2(issue_entries)-1:0] chosen;


  // ORDER TABLE
  logic [issue_entries-1:0][$clog2(issue_entries)-1:0] instr_order_table;
  logic [issue_entries-1:0][$clog2(issue_entries)-1:0] instr_order_table_n;

  logic                             [issue_entries:0] order_inst_v;
  logic                           [issue_entries-1:0] order_inst_v_n;

  logic                     [$clog2(issue_entries):0] inst_count;
  logic                     [$clog2(issue_entries):0] inst_count_n;

  logic                           [issue_entries-1:0] order_inst_less;
  logic                           [issue_entries-1:0] ordered_instr_ready;

  logic                     [$clog2(issue_entries):0] chosen_ordered;


  // CDB tag Comparison
  logic [$clog2(issue_entries)-1:0][NUM_FU-1:0] src1_tag_match;
  logic [$clog2(issue_entries)-1:0][NUM_FU-1:0] src2_tag_match;
  
  always_comb begin : tag_match
    integer q, r;
    for(q = 0; q < issue_entries; q++) begin : instruction_to_match
      for(r = 0; r < NUM_FU; r++) begin : FU_to_match
        src1_tag_match[q][r] = (cdb[r].dest[$clog2(NUM_PHYS_REG)-1:0] == tabled_inst[q].source_1_id);
        src1_tag_match[q][r] = (cdb[r].dest[$clog2(NUM_PHYS_REG)-1:0] == tabled_inst[q].source2_imm[$clog2(NUM_PHYS_REG)-1:0]);
      end // FU_to_match
    end // do_we_shift_instruction
  end // tag_match
  



  /*  CHOOSE AN INSTRUCTION TO ISSUE
      First we determine which instructions in the table are ready
      then we use the table that orders the instructions to reference those values into a decoder
        to determine which instruction to issue
      Then we dereference the pointer in the Order table, to see which tabled instruction to choose
  */
  logic [issue_entries-1:0] ready_ordered_instr;
  always_comb begin : determine_which_instructions_are_ready
    integer m;
    for(m = 0; m < issue_entries; m++) begin : tabled_ready_instructions
      inst_ready[m] = (tabled_inst[m].source_1_v & tabled_inst[m].source_2_v & valid_inst[m]);
    end // ready_instructions     

    integer s;
    for(s = 0; s < issue_entries; s++) begin : feed_ordered_instructions_into_decoder
      ordered_instr_ready[s] = (inst_ready[instr_order_table[s]] & order_inst_v[s]);
    end // feed_ordered_instructions_into_decoder
  end // determine_which_instructions_are_ready


  logic chosen_valid;
  bsg_priority_encode #(.width_p(issue_entries)
                       ,.lo_to_hi_p(1)
                      ) chosen_selector

    ( .i(ready_ordered_instr)
    , .addr_o(chosen_ordered[$clog2(issue_entries)-1:0])
    , .v_o(chosen_valid)
    );
  assign chosen_ordered[$clog2(issue_entries)] = ~chosen_valid; // Chosen will be larger than table if invalid, next state counts on this
  assign chosen                                = instr_order_table[chosen_ordered[$clog2(issue_entries)-1:0]];



  /*  SHIFT THE ORDERED TABLE IF WE MUST
      First we will determine if each entry in the ordered table is less than the chosen instruction
      then we will either shift them "up" or not based on that value
      Shifting in all zeros if it goes past the end of the table
  */

  assign instr_order_table[issue_entries] = '0;
  assign order_inst_v_n[issue_entries]    = '0;

  
  
  always_comb begin : shift_ordered_table

    integer k, j;
    for(k = 0; k < issue_entries; k++) begin : do_we_shift_order_table_entry
      order_inst_less[k] = (k < chosen_ordered);
    end // do_we_shift_instruction

    for(j = 0; j < issue_entries; j++) begin : shift_order_table_entry
      case(order_inst_less[j])
        1'b0: begin 
          instr_order_table_n[j]  = instr_order_table[j+1];
          order_inst_v_n[j]       = order_inst_v[j+1];
        end
        1'b1: begin
          instr_order_table_n[j]  = instr_order_table[j];
          order_inst_v_n[j]       = order_inst_v[j];
        end        
      endcase // tabled_inst_less[j]
    end // shift_order_table_entry

    if(accepting_new_instruction) begin : place_new_instruction_in_ordered_table
      instr_order_table_n[inst_count_n] = new_instr_loc; // Put pointer to new instruction in ordered table
      order_inst_v_n[inst_count_n]      = 1'b1;
    end // place_new_instruction_in_ordered_table
  end // shift_ordered_table



  

  /*  INGEST NEW INSTRUCTION
      Assign all values to new "issued_instruction_t" struct for input to table
      Read values from RF if they are there
  */
  issued_instruction_t new_instr;

  // Retrieve Values in REG FILE
  assign new_instr_addr_1 = new_instr.source_1_id;
  assign new_instr_addr_2 = instruction_i.source2_imm[$clog2(NUM_PHYS_REG)-1:0];

  always_comb begin : setup_new_instruction
    new_instr.dest_id     = instruction_i.dest_id;
    new_instr.source_1_id = instruction_i.source_1;
    new_instr.source2_imm = instruction_i.source2_imm;

    if(new_instr_data_1_v) begin : read_register_data_1
      new_instr.source_1_data     = new_instr_data_1;
      new_instr.source_1_v        = 1'b1;
    end // if(new_instr_data_1_v)
    else begin 
      new_instr.source_1_data     = '0;
      new_instr.source_1_v        = 1'b0;
    end
    if(new_instr.imm) begin : if_immediate
      new_instr.source2_imm_data  = new_instr.source2_imm;
      new_instr.source_2_v        = 1'b1;
    end // if_immediate
    else if(new_instr_data_2_v) begin : read_register_data_2
      new_instr.source2_imm_data  = new_instr_data_2;
      new_instr.source_2_v        = 1'b1;
    end // if(new_instr_data_1_v)
    else begin 
      new_instr.source2_imm_data  = '0;
      new_instr.source_2_v        = 1'b0;
    end

    new_instr.pc                  = instruction_i.pc;
    new_instr.opcode              = instruction_i.opcode;
    new_instr.func_unit           = instruction_i.func_unit;
    new_instr.flags               = instruction_i.flags;
    new_instr.bcc_op              = instruction_i.bcc_op;
    new_instr.branch_speculation  = instruction_i.branch_speculation;
    new_instr.w_v                 = instruction_i.w_v;
    new_instr.freed_reg           = instruction_i.freed_reg;
    new_instr.alloc_reg           = instruction_i.alloc_reg;

  end // setup_new_instruction  


  // DETERMINE WHERE NEXT INSTRUCTION WILL GO
  logic [$clog2(issue_entries)-1:0] new_instr_loc;
  logic                             new_instr_loc_v;
  bsg_priority_encode #(.width_p(issue_entries)
                       ,.lo_to_hi_p(1)
                      ) new_selector

    ( .i(valid_inst)
    , .addr_o(new_instr_loc)
    , .v_o(new_instr_loc_v)
    );

  // Instruction Count Logic / New Instruction Input Logic
  logic accepting_new_instruction, issuing_instruction, ready_o_n;
  assign accepting_new_instruction  = (ready_o & valid_i);
  assign issuing_instruction        = chosen_valid;         // A valid instruction has been chose to issue by Decoder

  assign ready_o_n                  = (inst_count_n != issue_entries); // Dont accept new instructions if we are full next cycle

  always_comb begin : instruction_count_logic
    case({accepting_new_instruction, issuing_instruction})
      2'b01:    inst_count_n = inst_count - 1'b1;
      2'b10:    inst_count_n = inst_count + 1'b1;
      default:  inst_count_n = inst_count;
    endcase // {accepting_new_instruction, issuing_instruction}
  end // instruction_count_logic


  // DETERMINE WHICH FU WILL BE USED AND SET OUTPUTS CORRECTLY
  logic [NUM_FU-1:0] chosen_fu;
  bsg_decode #(.num_out_p(NUM_FU)
    ) FU_out
    (.i(tabled_inst[chosen].func_unit)
    ,.o(chosen_fu)
    );


  
  always_comb begin : setting_output_valid_for_FU
    integer t;
    for(t = 0; t < NUM_FU; t++) begin : FU_and_issuing_instruction_to_be_valid
      valid_o[t] = chosen_fu & issuing_instruction;
    end // FU_and_issuing_instruction
  end // setting_output_valid_for_FU


  
  
  always_ff @(posedge clk_i) begin

    integer i;
    if(reset_i) begin : reset_logic
      for(i = 0; i < issue_entries; i++) begin : reset
        valid_inst[i]   <= '0;
        order_inst_v[i] <= '0;
      end // reset
    inst_count      <= '0;
    ready_o         <= '0;
    //valid_instr_out <= '0;
    end // reset_logic
    else begin : normal_operation
      integer l;
      for(l = 0; l < issue_entries; l++)  begin : shift_ordered_instruction_and_insert_new_instruction
        instr_order_table[l]  <= instr_order_table_n[l];
        order_inst_v_n[l]     <= order_inst_v_n[l];
      end // shift_ordered_instruction_and_insert_new_instruction
      
      if(accepting_new_instruction)       begin : place_new_instruction_in_table
        tabled_inst[new_instr_loc]  <= new_instr;
        valid_inst[new_instr_loc]   <= 1'b1;
      end // place_new_instruction_in_table

      if(issuing_instruction)             begin : clear_issued_instr_location
        tabled_inst[chosen] <= '0;
        valid_inst[chosen]  <= '0;
      end // clear_issued_instr_location

      // MISC signals
      ready_o <= ready_o_n;
      inst_count <= inst_count_n;
    end // normal_operation
  end // always_ff @(posedge clk_i)
  



  // Assign instruction outputs
  assign instruction_o = tabled_inst[chosen];

endmodule // issue_table