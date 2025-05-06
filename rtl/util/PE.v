module PE(
	// interface to system
    input wire CLK,                         // CLK = 200MHz
    input wire RESET,                       // RESET, Negedge is active
    input wire EN,                          // enable signal for the accelerator, high for active
    input wire SELECTOR,                    // B select read or use
    input wire B_EN,                         // enable B to flow
    // interface to PE row .....
    input wire [31:0] A_left,
    output reg [31:0] A_right,

    input wire [31:0] in_sum,
    output reg [31:0] out_sum,

    input wire [31:0] in_B_above,
    output wire [31:0] out_B_below
	);
    reg [31:0] B_1; 
    reg [31:0] B_2;

    // multiplier
    // accumulator (here use register to calculate and accumulate in one cycle)
    // registers for systolic dataflow
    always @(negedge RESET or posedge CLK) begin
        if(~RESET)
        begin
            out_sum <= 0;
            A_right <= 0;
            //out_B_below <= 0;
            B_1 <= 0;
            B_2 <= 0;
        end
        else
        begin
            if(EN)
            begin
                A_right <= A_left;              
                if(SELECTOR)
                begin                                       
                    out_sum <= B_2 * A_left + in_sum;
                    if(B_EN)
                    begin
                        B_1 <= in_B_above;
                        //out_B_below = B_1;
                    end
                end  
                else
                begin
                    out_sum <= B_1 * A_left + in_sum;
                    if(B_EN)
                    begin
                        B_2 <= in_B_above;
                        //out_B_below = B_2;
                    end
                end             
            end
        end
    end
    assign out_B_below = (SELECTOR) ? B_1 : B_2;
endmodule