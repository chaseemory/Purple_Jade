`ifdef VERILATOR
`include "Purple_Jade_pkg.svh"
`endif

module issue_table
  ( // Misc inputs
    input   logic                                         clk_i
  , input   logic                                         reset_i

  // Interface to ROB/REG FILE
  , output  logic [$clog2(NUM_PHYS_REG)-1:0]              new_instr_addr_1
  , output  logic [$clog2(NUM_PHYS_REG)-1:0]              new_instr_addr_2

  , input   logic                                         new_instr_data_1_v
  , input   logic                                         new_instr_data_2_v

  , input   logic [WORD_SIZE_P-1:0]                       new_instr_data_1
  , input   logic [WORD_SIZE_P-1:0]                       new_instr_data_2

  // Renaming logic interface
  , input   renamed_instruction_t                         instruction_i
  , input   logic                                         valid_i
  , output  logic                                         ready_o

  // Functional Unit interface
  , output  issued_instruction_t                          instruction_o
  // , input   logic [NUM_FU-1:0]    ready_i
  , output  logic [NUM_FU-1:0]                            valid_o

  // Store Buffer Interface
  , output  logic [ISSUE_ENTRY-1:0][$clog2(SB_ENTRY)-1:0] issue_sb_num_vector_o
  , input   logic [ISSUE_ENTRY-1:0]                       st_clear_vector_i

  // CDB Interface
  , input   CDB_t                                         cdb [NUM_FU-1:0]
  );

  // House Keeping Values
  logic [$clog2(ISSUE_ENTRY):0]                     inst_count;
  logic [$clog2(ISSUE_ENTRY):0]                     inst_count_n;

  // ISSUE TABLE
  issued_instruction_t [ISSUE_ENTRY-1:0]            tabled_inst;
  logic [ISSUE_ENTRY-1:0]                           valid_inst;
  logic [ISSUE_ENTRY-1:0]                           inst_ready;
  logic [$clog2(ISSUE_ENTRY)-1:0]                   chosen;

  // ORDER TABLE
  logic [ISSUE_ENTRY:0][$clog2(ISSUE_ENTRY)-1:0]    instr_order_table;
  logic [ISSUE_ENTRY-1:0][$clog2(ISSUE_ENTRY)-1:0]  instr_order_table_n;

  logic [ISSUE_ENTRY:0]                             order_inst_v;
  logic [ISSUE_ENTRY-1:0]                           order_inst_v_n;

  logic [ISSUE_ENTRY-1:0]                           order_inst_less;
  logic [ISSUE_ENTRY-1:0]                           ordered_instr_ready;

  logic [$clog2(ISSUE_ENTRY)-1:0]                   chosen_ordered;

  logic accepting_new_instruction, issuing_instruction, ready_o_n;
  logic [$clog2(ISSUE_ENTRY)-1:0] new_instr_loc;
  logic                           new_instr_loc_v;

  // REGISTERED OUTPUTS SIGNALS
  issued_instruction_t                              chosen_instruction_r;
  logic [NUM_FU-1:0]                                valid_o_n;
  logic [NUM_FU-1:0]                                valid_o_r;


  // STORE BUFFER NON-SENSE 
  logic [ISSUE_ENTRY-1:0][$clog2(SB_ENTRY)-1:0]     store_buff_table;
  logic [ISSUE_ENTRY-1:0]                           store_buff_table_v;
  logic [ISSUE_ENTRY-1:0]                           store_buff_table_v_n;

  /*  DETERMINE NEXT STATE OF VALID BITS FOR STORE BUFFER TABLE
      Assign next state of Store buffer valid when either the table is valid or the
        read value that cycle is valid
      assign output table for valid bit return to internal store buffer table
  */
  always_comb begin : store_buff_table_v_next_logic

    for(int unsigned w = 0; w < ISSUE_ENTRY; w++) begin
      store_buff_table_v_n[w] = (store_buff_table_v[w] | st_clear_vector_i[w]);
    end // for(int unsigned w = 0; w < ISSUE_ENTRY; w++)

  end // store_buff_table_v_next_logic

  assign issue_sb_num_vector_o = store_buff_table;


  /*  INGEST NEW DATA OFF COMMON DATA BUS
      First compare all tags on the bus to determine if there are any matches
      Then use encoder to determine index in the data that is the match and if any match
  */
  logic [ISSUE_ENTRY-1:0][NUM_FU-1:0] src1_tag_match;
  logic [ISSUE_ENTRY-1:0][NUM_FU-1:0] src2_tag_match;
  
  always_comb begin : tag_match

    for(int unsigned q = 0; q < ISSUE_ENTRY; q++) begin : instruction_to_match

      for(int unsigned r = 0; r < NUM_FU; r++) begin : FU_to_match
        src1_tag_match[q][r] = (valid_inst[q] & cdb[r].valid) ? (cdb[r].dest[$clog2(NUM_PHYS_REG)-1:0] == tabled_inst[q].source_1_id) : '0;
        src2_tag_match[q][r] = (valid_inst[q] & cdb[r].valid) ? (cdb[r].dest[$clog2(NUM_PHYS_REG)-1:0] == tabled_inst[q].source2_imm[$clog2(NUM_PHYS_REG)-1:0]) : '0;
      end // FU_to_match

    end // do_we_shift_instruction

  end // tag_match
  
  logic [ISSUE_ENTRY-1:0][$clog2(NUM_FU)-1:0] src1_tag_index;
  logic [ISSUE_ENTRY-1:0][$clog2(NUM_FU)-1:0] src2_tag_index;
  logic [ISSUE_ENTRY-1:0]                     src1_tag_v;
  logic [ISSUE_ENTRY-1:0]                     src2_tag_v;

  generate

    genvar u;
    for(u = 0; u < ISSUE_ENTRY; u++) begin : src_tag_match_encode

      bsg_encode_one_hot #(.width_p(NUM_FU)
                          ,.lo_to_hi_p(1)
                           ) src_1_encoder
        (.i(src1_tag_match[u])
        ,.addr_o(src1_tag_index[u])
        ,.v_o(src1_tag_v[u])
        );

      bsg_encode_one_hot #(.width_p(NUM_FU)
                          ,.lo_to_hi_p(1)
                           ) src_2_encoder
        (.i(src2_tag_match[u])
        ,.addr_o(src2_tag_index[u])
        ,.v_o(src2_tag_v[u])
        );

    end // src_tag_match_encode

  endgenerate


  /*  CHOOSE AN INSTRUCTION TO ISSUE
      First we determine which instructions in the table are ready
      then we use the table that orders the instructions to reference those values into a decoder
        to determine which instruction to issue
      Then we dereference the pointer in the order table, to see which tabled instruction to choose
  */
  always_comb begin : determine_which_instructions_are_ready

    for(int unsigned m = 0; m < ISSUE_ENTRY; m++) begin : tabled_ready_instructions
      inst_ready[m] = (tabled_inst[m].source_1_v & tabled_inst[m].source_2_v & valid_inst[m] & store_buff_table_v[m]);
    end // ready_instructions     

    for(int unsigned s = 0; s < ISSUE_ENTRY; s++) begin : feed_ordered_instructions_into_decoder
      ordered_instr_ready[s] = (inst_ready[instr_order_table[s]] & order_inst_v[s]);
    end // feed_ordered_instructions_into_decoder

  end // determine_which_instructions_are_ready


  logic chosen_valid;
  bsg_priority_encode #(.width_p(ISSUE_ENTRY)
                       ,.lo_to_hi_p(1)
                      ) chosen_selector

    ( .i(ordered_instr_ready)
    , .addr_o(chosen_ordered) //[$clog2(ISSUE_ENTRY)-1:0])
    , .v_o(chosen_valid)
    );

  assign chosen                                = instr_order_table[chosen_ordered]; //[$clog2(ISSUE_ENTRY)-1:0]];


  /*  SHIFT THE ORDERED TABLE IF WE MUST
      First we will determine if each entry in the ordered table is less than the chosen instruction
      then we will either shift them "up" or not based on that value
      Shifting in all zeros if it goes past the end of the table
  */  
  always_comb begin : shift_ordered_table

    for(int unsigned k = 0; k < ISSUE_ENTRY; k++) begin : do_we_shift_order_table_entry
      order_inst_less[k] = (k < chosen_ordered);
    end // do_we_shift_instruction

    for(int unsigned j = 0; j < ISSUE_ENTRY; j++) begin : shift_order_table_entry

      case({chosen_valid, order_inst_less[j]})
        2'b10: begin
          instr_order_table_n[j]  = instr_order_table[j+1];
          order_inst_v_n[j]       = order_inst_v[j+1];
        end
        default: begin
          instr_order_table_n[j]  = instr_order_table[j];
          order_inst_v_n[j]       = order_inst_v[j];
        end

      endcase // tabled_inst_less[j]

    end // shift_order_table_entry

    if(accepting_new_instruction & issuing_instruction) begin : place_new_instruction_in_ordered_table
      instr_order_table_n[inst_count - 1'b1] = new_instr_loc; // Put pointer to new instruction in ordered table
      order_inst_v_n[inst_count[$clog2(ISSUE_ENTRY)-1:0] - 1'b1] = 1'b1;
    end
    else if(accepting_new_instruction) begin
      instr_order_table_n[inst_count] = new_instr_loc; // Put pointer to new instruction in ordered table
      order_inst_v_n[inst_count[$clog2(ISSUE_ENTRY)-1:0]] = 1'b1;
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
    if(instruction_i.imm) begin : if_immediate
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
    new_instr.imm                 = instruction_i.imm;
    new_instr.rob_dest            = instruction_i.rob_dest;
    new_instr.sb_dest             = instruction_i.sb_dest;
  end // setup_new_instruction  


  // DETERMINE WHERE NEXT INSTRUCTION WILL GO
  bsg_priority_encode #(.width_p(ISSUE_ENTRY)
                       ,.lo_to_hi_p(1)
                      ) new_selector

    ( .i(~valid_inst)
    , .addr_o(new_instr_loc)
    , .v_o(new_instr_loc_v)
    );

  // Instruction Count Logic / New Instruction Input Logic
  
  assign accepting_new_instruction  = (ready_o & valid_i);
  assign issuing_instruction        = chosen_valid;         // A valid instruction has been chose to issue by Decoder

  assign ready_o_n                  = (inst_count_n != ISSUE_ENTRY); // Dont accept new instructions if we are full next cycle

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

    for(int unsigned t = 0; t < NUM_FU; t++)                         begin : FU_and_issuing_instruction_to_be_valid
      valid_o_n[t] = chosen_fu[t] & issuing_instruction;
    end // FU_and_issuing_instruction

  end // setting_output_valid_for_FU


  always_ff @(posedge clk_i) begin

    if(reset_i) begin : reset_logic
      for(int unsigned i = 0; i < ISSUE_ENTRY; i++)   begin : reset
        valid_inst[i]         <= '0;
        order_inst_v[i]       <= '0;
        instr_order_table[i]  <= '0;
        order_inst_v[i]       <= '0;
        tabled_inst[i]        <= '0;
        store_buff_table[i]   <= '0;
        store_buff_table_v[i] <= '0;
      end // reset

      instr_order_table[ISSUE_ENTRY]  <= '0;
      order_inst_v[ISSUE_ENTRY]       <= '0;
      inst_count                      <= '0;
      ready_o                         <= '0;
      valid_o_r                       <= '0;
      chosen_instruction_r            <= '0;

    end // reset_logic

    else begin : normal_operation

      for(int unsigned l = 0; l < ISSUE_ENTRY; l++)   begin : shift_ordered_instruction_and_insert_new_instruction
        instr_order_table[l]  <= instr_order_table_n[l];
        order_inst_v[l]       <= order_inst_v_n[l];
      end // shift_ordered_instruction_and_insert_new_instruction
      
      for(int unsigned x = 0; x < ISSUE_ENTRY; x++)   begin : update_store_buff_valid
        store_buff_table_v[x] <= store_buff_table_v_n[x];
      end // update_store_buff_valid


      if(accepting_new_instruction)                     begin : place_new_instruction_in_table
        tabled_inst[new_instr_loc]        <= new_instr;
        valid_inst[new_instr_loc]         <= 1'b1;
        store_buff_table[new_instr_loc]   <= instruction_i.sb_dest;
        store_buff_table_v[new_instr_loc] <= instruction_i.is_wfs;
      end // place_new_instruction_in_table

      if(issuing_instruction)                           begin : clear_issued_instr_location
        tabled_inst[chosen]         <= '0;
        valid_inst[chosen]          <= '0;
        store_buff_table[chosen]    <= '0;
        store_buff_table_v[chosen]  <= '0;
      end // clear_issued_instr_location

      for(int unsigned y = 0; y < ISSUE_ENTRY; y++)   begin : ingest_data_on_CDB

        if(src1_tag_v[y] & ~tabled_inst[y].source_1_v)  begin : ingest_data_1
          tabled_inst[y].source_1_data <= cdb[src1_tag_index[y]].result;
          tabled_inst[y].source_1_v    <= 1'b1;
        end // ingest_data_1

        if(src2_tag_v[y] & ~tabled_inst[y].source_2_v)  begin : ingest_data_2
          tabled_inst[y].source2_imm_data <= cdb[src2_tag_index[y]].result;
          tabled_inst[y].source_2_v       <= 1'b1;
        end // ingest_data_2

      end // ingest_data_on_CDB

      // MISC signals
      ready_o               <= ready_o_n;
      inst_count            <= inst_count_n;
      valid_o_r             <= valid_o_n;
      chosen_instruction_r  <= chosen_valid ? tabled_inst[chosen] : '0;
    end // normal_operation
  end // always_ff @(posedge clk_i)

  // Assign instruction outputs
  assign instruction_o  = chosen_instruction_r;
  assign valid_o        = valid_o_r;

endmodule // issue_table