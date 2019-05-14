`include "Purple_Jade_pkg.svh"
`include "issue_reservation_pkg.svh"

module issue_table
  #(parameter issue_entries = -1
  )
  ( // Misc inputs
    input   logic                 clk_i
  , input   logic                 reset_i

  // Renaming logic interface
  , input   renamed_instruction_t instruction_i
  , input   logic                 valid_i
  , output  logic                 ready_o

  // Reservation Station interface
  , output  issued_instruction_t  instruction_o
  , input   logic [NUM_FU-1:0]    ready_i
  , output  logic [NUM_FU-1:0]    valid_o

  // CDB Interface
  , input   logic [NUM_FU-1:0][$clog2(NUM_PHYS_REG)-1:0]  cdb_tag
  , input   logic [NUM_FU-1:0][WORD_SIZE_P-1:0]           cdb_data

  );

  // Issue Table
  issued_instruction_t [issue_entries:0]    tabled_inst;
  issued_instruction_t [issue_entries-1:0]  tabled_inst_n;
  logic                [issue_entries:0]    valid_inst;
  logic                [issue_entries-1:0]  valid_inst_n;

  logic        [$clog2(issue_entries):0]    chosen;
  logic        [$clog2(issue_entries)-1:0]  count;
  logic        [$clog2(issue_entries)-1:0]  count_n;

  assign tabled_inst[issue_entries] = '0;
  assign valid_inst[issue_entries]  = '0;

  logic [issue_entries-1:0] tabled_inst_less;
  logic [issue_entries-1:0] inst_ready;


  always_comb begin
    genvar k;
    for(k = 0; k < issue_entries; k++) begin : do_we_shift_instruction_n
      assign tabled_inst_less = (j < chosen);
    end // do_we_shift_instruction

    genvar j;
    for(j = 0; j < issue_entries; j++) begin : shift_instruction_n
      case(tabled_inst_less[j])
        1'b0: begin 
          tabled_inst_n[j]  = tabled_inst[j+1];
          valid_inst_n[j]   = valid_inst[j+1];
        end
        1'b1: begin
          tabled_inst_n[j]  = tabled_inst[j];
          valid_inst_n[j]   = valid_inst[j];
        end        
      endcase // tabled_inst_less[j]
    end // shift_instruction

    genvar m;
    for(m = 0; m < issue_entries; m++) begin : ready_instructions
      inst_ready[m] = (tabled_inst[m].source_1_v & tabled_inst[m].source_2_v & valid_inst[m]);
    end // ready_instructions

  end

  logic chosen_valid;
  bsg_priority_encode #(.width_p(issue_entries)
                       ,.lo_to_hi_p(1)
                      ) chosen_selector

    ( .i(inst_ready)
    , .addr_o(chosen[$clog2(issue_entries)-1:0])
    , .v_o(chosen_valid)
    );
  assign chosen[$clog2(issue_entries)] = ~chosen_valid; // Chosen will be larger than table if invalid, next state counts on this



  always_ff @(posedge clk_i) begin
    
    if(reset_i) begin : reset_logic
      genvar i;
      for(i = 0; i < issue_entries; i++) begin : reset
        valid_inst[i]   <= 1'b0;
        tabled_inst[i]  <= '0;
        oldest          <= '0;
      end // reset
    end // reset_logic

    else begin
      genvar l;
      for(l = 0; l < issue_entries; l++) begin : shift_instruction
        tabled_inst[l]  <= tabled_inst_n[l];
        valid_inst[l]   <= valid_inst_n[l];
      end // shift_instruction
    end

  end // always_ff @(posedge clk_i)




endmodule // issue_table