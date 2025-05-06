module PE(
	// interface to system
    input wire CLK,                         // CLK = 200MHz
    input wire RESET,                       // RESET, Negedge is active
    input wire EN,                          // enable signal for the accelerator, high for active
    // interface to PE row .....
    input wire [31:0] A_left,
    output reg [31:0] A_right,

    input wire [31:0] in_sum,
    output reg [31:0] out_sum,

    input wire [31:0] in_B_above,
    output wire [31:0] out_B_below
	);
    
    // multiplier
    // accumulator (here use register to calculate and accumulate in one cycle)
    // registers for systolic dataflow
    always @(negedge RESET or posedge CLK) begin
        if(~RESET)
        begin
            out_sum <= 0;
            A_right <= 0;
        end
        else
        begin
            if(EN)
            begin
                A_right <= A_left;              
                out_B_below <= in_B_above;
            end
        end
    end
endmodule