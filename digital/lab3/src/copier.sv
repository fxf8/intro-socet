
module copier #(
    parameter NUM_CNT_BITS = 8
) (
    input CLK,
    nRST,
    input logic [7:0] src_addr,
    dst_addr,
    input logic [7:0] copy_size,
    input logic start,
    output logic finished,
    memory_if.request memif
);

  // TODO: Use module instantiations + glue logic to implement
  // a module which copies 'copy_size' bytes of data from 'src_addr'
  // to 'dst_addr' when 'start' goes high, and sets 'finished' when
  // the transfer is complete.
  // This behavior is similar to a simple DMA, or "Direct Memory Access"
  // unit, which is used to move data around memory without wasting processor
  // compute time.
  //
  // HINT: Draw out an RTL diagram of this module first using the submodules
  // "data_register" and "flex_counter"


  // Name: Rajin Braynard

  typedef enum logic [1:0] {
    IDLE = 2'b00,
    READ = 2'b01,
    WRITE = 2'b10,
    FINISHED = 2'b11
  } state_t;

  state_t current_state, next_state;
  logic [7:0] index;
  logic [7:0] copied_word;
  logic rollover_flag;
  logic count_enable;
  logic clear_counter;
  logic register_write_enable;

  data_register register (
      .CLK  (CLK),
      .nRST (nRST),
      .WEN  (register_write_enable),
      .wdata(memif.rdata),
      .data (copied_word)
  );

  flex_counter #(
      .NUM_CNT_BITS(NUM_CNT_BITS)
  ) counter (
      .clk(CLK),
      .n_rst(nRST),
      .clear(clear_counter),
      .count_enable(count_enable),
      .rollover_val(copy_size - 1),
      .count_out(index),
      .rollover_flag(rollover_flag)
  );

  // 3-process FSM

  always_ff @(posedge CLK, negedge nRST) begin
    if (!nRST) begin
      current_state <= IDLE;
    end else begin
      current_state <= next_state;
    end
  end

  // Name: Rajin Braynard
  //
  always_comb begin
    next_state = current_state;

    unique case (current_state)
      IDLE: begin
        if (start) begin
          next_state = READ;
        end
      end

      READ: begin
        if (memif.ready) begin
          next_state = WRITE;
        end
      end

      WRITE: begin
        if (rollover_flag) begin
          next_state = FINISHED;
        end else begin
          next_state = READ;
        end
      end

      FINISHED: begin
        next_state = IDLE;
      end
    endcase
  end

  // Name: Rajin Braynard

  always_comb begin
    finished = 1'b0;
    memif.ren = 1'b0;
    memif.wen = 1'b0;
    memif.addr = '0;
    memif.wdata = '0;

    clear_counter = 1'b0;
    count_enable = 1'b0;
    register_write_enable = 1'b0;

    unique case (current_state)
      IDLE: begin
        clear_counter = 1'b1;
        finished = 1'b0;
      end

      READ: begin
        memif.ren = 1'b1;
        memif.addr = src_addr + index;
        register_write_enable = 1'b1;
      end

      WRITE: begin
        memif.wen = 1'b1;
        memif.addr = dst_addr + index;
        memif.wdata = copied_word;

        count_enable = 1'b1;
      end

      FINISHED: begin
        finished = 1'b1;
      end
    endcase
  end

  // Name: Rajin Braynard
endmodule
