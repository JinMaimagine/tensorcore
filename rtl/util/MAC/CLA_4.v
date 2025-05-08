module CLA_4 (
  input  [3:0] X,
  input  [3:0] Y,
  input        Cin,
  output [3:0] S,
  output       Cout
);
  
  wire [3:0] P = X ^ Y;
  wire [3:0] G = X & Y;

  
  wire c0 = Cin;
  wire c1 = G[0] | (P[0] & c0);
  wire c2 = G[1] | (P[1] & c1);
  wire c3 = G[2] | (P[2] & c2);

  
  assign Cout = G[3] | (P[3] & c3);
  
  assign S    = P ^ {c3, c2, c1, c0};
endmodule