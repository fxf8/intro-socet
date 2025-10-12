
module eight_bit_adder(
    input logic [7:0] a,
    input logic [7:0] b,
    output logic [8:0] c
);
    logic [6:0] carries;
    // TODO: Implement logic for an eight-bit full adder
    // *by instantiating 'full_adder' modules!*
    // Note: One solution to this would be simply:
    // assign c = a + b;
    // HINT: For ease of implementation, you can use
    // a "generate" loop: https://www.systemverilog.io/verification/generate/

    genvar i;

    generate
        for (i = 0; i <= 7; i += 1) begin : gen_full_adder_loop
            if (i == 0) begin : gen_first_iteration
                full_adder fa (
                    .a(a[i]), .b(b[i]), .cin(1'b0),
                    .s(c[i]), .cout(carries[i])
                );
            end

            else if (i == 7) begin : gen_last_iteration
                full_adder fa (
                    .a(a[i]), .b(b[i]), .cin(carries[i - 1]),
                    .s(c[i]), .cout(c[i + 1])
                );
            end

            else begin : gen_default_iteration
                full_adder fa (
                    .a(a[i]), .b(b[i]), .cin(carries[i - 1]),
                    .s(c[i]), .cout(carries[i])
                );
            end
        end
    endgenerate
endmodule

// Name: Rajin Braynard
