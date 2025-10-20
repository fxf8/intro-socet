
module tb_copier;

  // TB Signals (connect to DUT)
  logic CLK = 0, nRST;
  logic [7:0] src_addr, dst_addr, copy_size;
  logic start, finished;

  // TODO: (optional) declare any other debugging-related
  // metadata signals you want here.
  // Adding things like a test number, or a string containing
  // the name of the test can be helpful for discerning when tests
  // start/stop when viewed in the waveforms.

  // TODO: Instantiate another memory_if interface
  // for connecting the copier to the memory
  memory_if testif ();

  // Clock generation
  always #(10) CLK++;

  copier DUT (
      .CLK(CLK),
      .nRST(nRST),
      .src_addr(src_addr),
      .dst_addr(dst_addr),
      .copy_size(copy_size),
      .start(start),
      .finished(finished),
      .memif(testif.request)
  );

  // Name: Rajin Braynard

  memory MEM (
      .CLK(CLK),
      .nRST(nRST),
      .testif(testif.response),
      .memif(testif.response)
  );

  task reset();
    begin
      nRST = '0;
      repeat (2) @(posedge CLK);
      nRST = '1;
      @(posedge CLK);
      #(1);
    end
  endtask

  // Name: Rajin Braynard

  /*
    * reset_signals
    *
    * Set all signals to a "neutral" value. Can be helpful between tests.
    */
  task reset_signals();
    begin
      src_addr = 0;
      dst_addr = 0;
      copy_size = 0;
      start = 0;

      testif.wen = 0;
      testif.ren = 0;
      testif.wdata = 0;
      testif.addr = 0;
    end
  endtask

  // Name: Rajin Braynard
  /*
    * initialize_memory
    *
    * Uses 'testif' to perform 'size' number of writes
    * sequentially starting at address 'src'. The writes
    * contain random data.
    */
  task initialize_memory(input logic [7:0] src, input logic [7:0] size);
    begin
      testif.ren = 1'b0;
      for (int i = 0; i < size; i++) begin
        testif.wen   = 1'b1;
        testif.addr  = (src + 8'(i));
        testif.wdata = $urandom()[7:0];
        $display("Writing byte data \'%h\' to address 0x%h", testif.wdata, testif.addr);
        @(posedge CLK);
        #(1);
        while (!testif.ready) begin
          @(posedge CLK);
          #(1);
        end
        testif.wen = 1'b0;
      end
    end
  endtask

  /*
    * TODO: Fill in the task to perform a copy. The
    * testbench should send a start signal, and wait
    * for a finished signal.
    *
    * Then, fill in code for the testbench to read back the
    * data and compare the values between source and dest to
    * check that they're the same, and produce an error message
    * when they aren't. You may print a "passed" message if you like,
    * but this is not required.
    *
    * HINT: This will require 2-3 loops: 1 for waiting on the
    * copy operation, and 1-2 for reading back from memory with
    * the "testif" interface.
    *
    * If you would prefer the checking to be broken out into separate
    * task(s), you are welcome to add any tasks or functions you want.
    */
  task static do_copy(input logic [7:0] source_address, input logic [7:0] destination_address,
                      input logic [7:0] data_size);
  // Name: Rajin Braynard
    begin
      // Result checking template
      logic [7:0] expected, actual;

      $display("Copying %d bytes from src address 0x%h to dst address 0x%h", data_size,
               source_address, destination_address);

      src_addr = source_address;
      dst_addr = destination_address;
      copy_size = data_size;
      start = 1;

      @(posedge CLK);
      #(1);
      while (!finished) begin
        @(posedge CLK);
        #(1);
      end

      for (int i = 0; i < data_size; i++) begin
        expected = MEM.memory[source_address + 8'(i)];
        actual = MEM.memory[destination_address + 8'(i)];

        if (expected === actual) begin
          $display(
              "Passed, byte data \'%h\' at src address 0x%h matches byte data \'%h\' at dst address 0x%h",
              expected, source_address + 8'(i), actual, destination_address + 8'(i));
        end else begin
          $error(
              "Failed, byte data \'%h\' at src address 0x%h does not match byte data \'%h\' at dst address 0x%h",
              expected, source_address + 8'(i), actual, destination_address + 8'(i));

        end
      end
    end
  endtask

  // Name: Rajin Braynard

  initial begin

    $dumpfile("waveform.fst");
    $dumpvars(0, tb_copier);

    nRST = 1'b1;

    $timeformat(-9, 2, " ns", 20);  // Set formatting for printing time

    reset_signals();
    reset();

    // TODO: Make two more test cases to run your design!
    initialize_memory(8'h0, 8'h8);  // Init 8 bytes starting at 0x0
    do_copy(8'h0, 8'hF0, 8'h8);  // Test copying 8 bytes from 0x0 to 0xF0
    do_copy(8'hA0, 8'hC0, 8'hF);  // Test copying 16 bytes from 0xA0 to 0xC0
    do_copy(8'hD0, 8'hD8, 8'h8);  // Test copying 8 bytes from 0xD0 to 0xD8

    $finish;
  end

endmodule
