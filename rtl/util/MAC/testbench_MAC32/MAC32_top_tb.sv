`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer:        Tzu-Han Hsu
// Create Date:     07/22/2022 04:52:54 PM
// Module Name:     Normalizer
// Project Name:    IEEE-754 & RISC-V Compatible Multiply-Accumulate Unit
// HDL(Version):    SystemVerilog
//
// Dependencies:    MAC32_top.v
//
//////////////////////////////////////////////////////////////////////////////////
// Description:     Testbench of MAC32_top module
//
//////////////////////////////////////////////////////////////////////////////////
// Revision:
//
//////////////////////////////////////////////////////////////////////////////////

//new testbench
//------------------------------------------------------------
//  Testbench  : MAC_top_tb.sv
//  Purpose    : Self‑checking TB for the two‑stage‑pipelined
//               floating‑point MAC_top that now supports three
//               precision modes via fp_mode[1:0].
//
//  fp_mode 00 : FP32  (fp32 * fp32 + fp32)
//  fp_mode 01 : FP16  (fp16 * fp16 + fp16)  ‑ result in lower 16 b
//  fp_mode 10 : MIXED (fp16 * fp16 + fp32)  ‑ result is fp32
//
//  Key ideas
//  ----------
//  1.   Two‑cycle output latency ⇒ a 2‑deep expected‑value queue.
//  2.   Three *drive_* tasks generate stimulus + golden result.
//  3.   DPI‑C helpers (float ↔ half) are declared but *not* coded
//       here – replace with your existing C wrappers or packages.
//------------------------------------------------------------

`include "MAC32_top.sv"

module MAC32_top_tb;

   //---------------------------------------------
   //  Clock & Reset
   //---------------------------------------------
   logic clk;
   logic rst_n;

   // 100 MHz free‑running clock
   initial begin
      clk = 0;
      $display("[TB DEBUG] clk initial block entered");
      forever begin
         #5 clk = ~clk;
         $display("[TB DEBUG] clk toggled to %b at %0t", clk, $time);
      end
   end

   // Active‑low async reset – keep low for two cycles
   initial begin
      rst_n = 0;
      $display("[TB DEBUG] rst_n initial block entered, rst_n=%b", rst_n);
      repeat (2) @(posedge clk);
      rst_n = 1;
      $display("[TB DEBUG] rst_n deasserted at %0t", $time);
   end

   //---------------------------------------------
   //  DUT interface signals
   //---------------------------------------------
   logic  [1:0] fp_mode;         // precision mode selector
   logic  [2:0] Rounding_mode_i; // left unchanged from original TB
   logic [31:0] A_i, B_i, C_i;   // operands
   logic [31:0] Result_o;        // result
   logic        OF_o, UF_o, NX_o, NV_o; // IEEE flags

   // ====== 调试信号输出 ======
    initial begin
        $display("==== MAC32_top_tb simulation started ====");
        $monitor("[%0t] clk=%b rst_n=%b A=%h B=%h C=%h OF=%b UF=%b NX=%b NV=%b",
            $time, clk, rst_n, A_i, B_i, C_i, OF_o, UF_o, NX_o, NV_o);
    end


   //---------------------------------------------
   //  DUT instance – *rename* the module below if
   //  your top is still called MAC32_top.
   //---------------------------------------------
   MAC32_top dut (
      .clk           (clk),
      .rst_n         (rst_n),
      .fp_mode       (fp_mode),
      .Rounding_mode_i(Rounding_mode_i),
      .A_i           (A_i),
      .B_i           (B_i),
      .C_i           (C_i),
      .Result_o      (Result_o),
      .OF_o          (OF_o),
      .UF_o          (UF_o),
      .NX_o          (NX_o),
      .NV_o          (NV_o)
   );

   //---------------------------------------------
   //  DPI‑C declarations for half precision
   //  (replace bodies in C, or swap for a pkg)
   //---------------------------------------------
   // import "DPI-C" function int   float_to_half (real r);
//    import "DPI-C" function real  half_to_float (int h16); //用不到

   // Helpers for fp32 ⇄ real using SV built‑ins
   // function automatic [31:0] real_to_fp32 (real r);
   //    real_to_fp32 = $shortrealtobits(shortreal'(r));
   // endfunction
   function automatic [31:0] real_to_fp32 (real r);
    shortreal s;
    s = r;
    real_to_fp32 = $shortrealtobits(s);
   endfunction

   function automatic real fp32_to_real (logic [31:0] bits);
      fp32_to_real = real'($bitstoshortreal(bits));
   endfunction

   //---------------------------------------------
   //  Expected‑value structure & queue (2‑cycle)
   //---------------------------------------------
   typedef struct packed {
      logic [31:0] res;
      logic        OF, UF, NX, NV;
   } exp_t;

   exp_t exp_q[$];                 // dynamic queue – easiest!

   int   err_cnt;
   int   vec_cnt;                  // total vectors issued

   //---------------------------------------------
   //  Stimulus tasks – one per mode
   //---------------------------------------------
   // exp_t golden;
   // real res_real;
   // // -------- FP32 task (mode 00) ----------------
   // task automatic drive_fp32 (input shortreal a, b, c);
   //    $display("TB DEBUG: in drive_fp32 a=%f b=%f c=%f", a, b, c);
      
   //    fp_mode           = 2'b00;
   //    A_i               = real_to_fp32(a);
   //    B_i               = real_to_fp32(b);
   //    C_i               = real_to_fp32(c);
   //    //--------------------------------------------------
   //    //  Golden model in *real* (double precision)
   //    //--------------------------------------------------
   //    res_real     = a + b * c;
   //    golden.res        = real_to_fp32(res_real);
   //    //  **Flag modelling left as exercise**
   //    golden.OF =1'b0;
   //    golden.UF =1'b0;
   //    golden.NX =1'b0;
   //    golden.NV =1'b0;
   //    exp_q.push_back(golden);
   //    vec_cnt++;
   //    $display("[%0t] drive_fp32: a=%f b=%f c=%f | A_i=%h B_i=%h C_i=%h | golden.res=%h | exp_q.size=%0d", 
   //    $time, a, b, c, A_i, B_i, C_i, golden.res, exp_q.size());
   // endtask

   // // -------- FP16 normal task (mode 01) ---------
   // task automatic drive_fp16_norm (input real a, b, c);
   //    exp_t golden;
   //    real res_real;
   //    fp_mode = 2'b01;
   //    //---------------------------------------------
   //    //  Pack half values into lower 16 bits; upper
   //    //  16 bits are *don't‑care* in DUT – fill zero.
   //    //---------------------------------------------
   //    A_i = {16'h0000, float_to_half(a)};
   //    B_i = {16'h0000, float_to_half(b)};
   //    C_i = {16'h0000, float_to_half(c)};

   //    // Golden: compute in real, convert back to half,
   //    // then zero‑extend to 32 bits to match DUT.
   //    res_real     = a + b * c;
   //    golden.res        = {16'h0000, float_to_half(res_real)};
   //    golden.OF =1'b0;
   //    golden.UF =1'b0;
   //    golden.NX =1'b0;
   //    golden.NV =1'b0;
   //    exp_q.push_back(golden);
   //    vec_cnt++;
   //    $display("[%0t] drive_fp16_norm: a=%f b=%f c=%f | A_i=%h B_i=%h C_i=%h | golden.res=%h | exp_q.size=%0d", 
   //    $time, a, b, c, A_i, B_i, C_i, golden.res, exp_q.size());
   // endtask

   // // -------- FP16 mixed task (mode 10) ----------
   // task automatic drive_fp16_mixed (input real a_fp32, b, c);
   //    exp_t golden;
   //    real res_real;
   //    fp_mode = 2'b10;
   //    A_i = real_to_fp32(a_fp32); // 32 bits
   //    B_i = {16'h0000, float_to_half(b)};
   //    C_i = {16'h0000, float_to_half(c)};

   //    res_real     = a_fp32 + b * c;
   //    golden.res        = real_to_fp32(res_real);
   //    golden.OF =1'b0;
   //    golden.UF =1'b0;
   //    golden.NX =1'b0;
   //    golden.NV =1'b0;
   //    exp_q.push_back(golden);
   //    vec_cnt++;
   //    $display("[%0t] drive_fp16_mixed: a_fp32=%f b=%f c=%f | A_i=%h B_i=%h C_i=%h | golden.res=%h | exp_q.size=%0d", 
   //    $time, a_fp32, b, c, A_i, B_i, C_i, golden.res, exp_q.size());
   // endtask

   //---------------------------------------------
   //  Pipeline comparator (fires every clock)
   //---------------------------------------------
   int cycle;

   always_ff @(posedge clk or negedge rst_n) begin
      //   $display("[TB DEBUG] always_ff entered, clk=%b, rst_n=%b, cycle=%0d, time=%0t", clk, rst_n, cycle, $time);
        if (!rst_n) begin
            // $display("[TB DEBUG] always_ff: in reset");
            cycle   <= 0;
            err_cnt <= 0;
            cycle  <= 0;
        end else begin
            cycle <= cycle + 1;
            // $display("[TB DEBUG] always_ff: cycle incremented to %0d", cycle);
            // 添加100周期检查
         if (cycle >= 200) begin
               $display("\n=== Simulation terminated after 200 clock cycles ===");
               $finish;
         end
            // Wait for two cycles of latency before checking.
            if (cycle >= 3 && exp_q.size() > 0) 
            begin
                exp_t exp = exp_q.pop_front();
               //  $display("[%0t] DEBUG: Result_o=%h, exp.res=%h, fp_mode=%0d", $time, 
                                                      // Result_o, exp.res, fp_mode); // 可选调试输出
                if (Result_o != exp.res) begin
                    $display("[%0t] MISMATCH : got %h exp %h (mode %0d)",
                        $time, Result_o, exp.res, fp_mode);
                end else begin
                    $display("[%0t] PASS : got %h == exp %h (mode %0d)",
                        $time, Result_o, exp.res, fp_mode);
                end
                err_cnt<= err_cnt + 1;
            end
        end
    end

   //---------------------------------------------
   //  Test programme – randomised vectors
   //---------------------------------------------

   int a_bits, b_bits, c_bits;
   shortreal a, b, c;
   shortreal res_real;
   exp_t golden;

   initial begin
      Rounding_mode_i = 3'd0;         // Round‑to‑nearest‑even
      vec_cnt = 0;
      // $display("[TB DEBUG] main initial block entered");
      //------------------------------------------------------
      //  Wait reset de‑asserted before launching vectors
      //------------------------------------------------------
      @(posedge rst_n);
      // $display("[TB DEBUG] reset deasserted, start stimulus at %0t", $time);
      
      // ------- FP32 phase --------------------------------
      // Test case 1: Simple multiplication and addition
      // 2.5 (40200000), 1.5 (3fc00000), 3.0 (40400000)
      fp_mode = 2'b00;
      A_i = 32'h40200000;  // 2.5
      B_i = 32'h3fc00000;  // 1.5
      C_i = 32'h40400000;  // 3.0
      golden.res = 32'h40e00000;  // 7.0 (2.5 + 1.5 * 3.0)
      golden.OF = 1'b0;
      golden.UF = 1'b0;
      golden.NX = 1'b0;
      golden.NV = 1'b0;
      exp_q.push_back(golden);
      vec_cnt++;
      $display("[%0t] drive_fp32: A_i=%h (2.5) B_i=%h (1.5) C_i=%h (3.0) | golden.res=%h (7.0) | exp_q.size=%0d", 
         $time, A_i, B_i, C_i, golden.res, exp_q.size());
      @(posedge clk);

      // Test case 2: Zero test
      // 0.0 (00000000), 5.0 (40a00000), 2.0 (40000000)
      A_i = 32'h00000000;  // 0.0
      B_i = 32'h40a00000;  // 5.0
      C_i = 32'h40000000;  // 2.0
      golden.res = 32'h41200000;  // 10.0 (0.0 + 5.0 * 2.0)
      exp_q.push_back(golden);
      vec_cnt++;
      $display("[%0t] drive_fp32: A_i=%h (0.0) B_i=%h (5.0) C_i=%h (2.0) | golden.res=%h (10.0) | exp_q.size=%0d", 
         $time, A_i, B_i, C_i, golden.res, exp_q.size());
      @(posedge clk);

      // Test case 3: Negative numbers
      // -2.0 (c0000000), -3.0 (c0400000), 4.0 (40800000)
      A_i = 32'hc0000000;  // -2.0
      B_i = 32'hc0400000;  // -3.0
      C_i = 32'h40800000;  // 4.0
      golden.res = 32'hc1600000;  // -14.0 (-2.0 + (-3.0 * 4.0))
      exp_q.push_back(golden);
      vec_cnt++;
      $display("[%0t] drive_fp32: A_i=%h (-2.0) B_i=%h (-3.0) C_i=%h (4.0) | golden.res=%h (-14.0) | exp_q.size=%0d", 
         $time, A_i, B_i, C_i, golden.res, exp_q.size());
      @(posedge clk);

      // Test case 4: Small numbers
      // 0.125 (3e000000), 0.25 (3e800000), 0.5 (3f000000)
      A_i = 32'h3e000000;  // 0.125
      B_i = 32'h3e800000;  // 0.25
      C_i = 32'h3f000000;  // 0.5
      golden.res = 32'h3e800000;  // 0.25 (0.125 + 0.25 * 0.5)
      exp_q.push_back(golden);
      vec_cnt++;
      $display("[%0t] drive_fp32: A_i=%h (0.125) B_i=%h (0.25) C_i=%h (0.5) | golden.res=%h (0.25) | exp_q.size=%0d", 
         $time, A_i, B_i, C_i, golden.res, exp_q.size());
      @(posedge clk);

      // Test case 5: Larger numbers
      // 100.0 (42c80000), 200.0 (43480000), 300.0 (43960000)
      A_i = 32'h42c80000;  // 100.0
      B_i = 32'h43480000;  // 200.0
      C_i = 32'h43960000;  // 300.0
      golden.res = 32'h47ea8000;  // 60100.0 (100.0 + 200.0 * 300.0)
      exp_q.push_back(golden);
      vec_cnt++;
      $display("[%0t] drive_fp32: A_i=%h (100.0) B_i=%h (200.0) C_i=%h (300.0) | golden.res=%h (60100.0) | exp_q.size=%0d", 
         $time, A_i, B_i, C_i, golden.res, exp_q.size());
      @(posedge clk);

      //------------------------------------------------------
      //  Flush the 2‑cycle pipeline & finish
      //------------------------------------------------------
      repeat (3) @(posedge clk);
      $display("\n========================================================");
      $display("  Test complete : %0d vectors, %0d errors", vec_cnt, err_cnt);
      $display("========================================================\n");
      $finish;
   end

endmodule

