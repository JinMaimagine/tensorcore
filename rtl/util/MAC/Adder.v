`timescale 1ns / 1ps
`include "CLA_4.v"
module Adder(mode,X,Y,Cin,S,Cout);
    input [31:0] X, Y;
    input Cin;
    input mode;//=1:32bit   =0:16bit
    output[31:0]S;
    output Cout;
    wire Cout0,Cout1,Cout2,Cout3,Cout4,Cout5,Cout6;
    CLA_4 add0(X[3:0],Y[3:0],Cin,S[3:0],Cout0);
    CLA_4 add1(X[7:4],Y[7:4],Cout0,S[7:4],Cout1);
    CLA_4 add2(X[11:8],Y[11:8],Cout1,S[11:8],Cout2);
    CLA_4 add3(X[15:12],Y[15:12],Cout2,S[15:12],Cout3);
    wire connect;
    assign connect = mode ? Cout3 : 0;
    CLA_4 add4(X[19:16],Y[19:16],connect,S[19:16],Cout4);
    CLA_4 add5(X[23:20],Y[23:20],Cout4,S[23:20],Cout5);
    CLA_4 add6(X[27:24],Y[27:24],Cout5,S[27:24],Cout6);
    CLA_4 add7(X[31:28],Y[31:28],Cout6,S[31:28],Cout);
//    CLA_4 add0(X[0],X[1],X[2],X[3],Y[0],Y[1],Y[2],Y[3],Cin,S[0],S[1],S[2],S[3],Cout0);
//    CLA_4 add1(X[4],X[5],X[6],X[7],Y[4],Y[5],Y[6],Y[7],Cout0,S[4],S[5],S[6],S[7],Cout1);
//    CLA_4 add2(X[8],X[9],X[10],X[11],Y[8],Y[9],Y[10],Y[11],Cout1,S[8],S[9],S[10],S[11],Cout2);
//    CLA_4 add3(X[12],X[13],X[14],X[15],Y[12],Y[13],Y[14],Y[15],Cout2,S[12],S[13],S[14],S[15],Cout3);
//    CLA_4 add4(X[16],X[17],X[18],X[19],Y[16],Y[17],Y[18],Y[19],Cout3,S[16],S[17],S[18],S[19],Cout4);     
//    CLA_4 add5(X[20],X[21],X[22],X[23],Y[20],Y[21],Y[22],Y[23],Cout4,S[20],S[21],S[22],S[23],Cout5);     
//    CLA_4 add6(X[24],X[25],X[26],X[27],Y[24],Y[25],Y[26],Y[27],Cout5,S[24],S[25],S[26],S[27],Cout6);     
//    CLA_4 add7(X[28],X[29],X[30],X[31],Y[28],Y[29],Y[30],Y[31],Cout6,S[28],S[29],S[30],S[31],Cout);          
 endmodule
 
 module Adder_4(mode,X,Y,S);
    input [127:0] X, Y;
    input mode;//=1:32bit   =0:16bit
    output[127:0]S;
    //output Cout[3:0];//32bit应该不会进位?    
    wire Cout[3:0];//TODO:我觉得目前不会进位其实&&Cout出来了也没必要处理
    Adder add0(mode,X[31:0],Y[31:0],1'b0,S[31:0],Cout[0]);
    Adder add1(mode,X[63:32],Y[63:32],1'b0,S[63:32],Cout[1]);
    Adder add2(mode,X[95:64],Y[95:64],1'b0,S[95:64],Cout[2]);
    Adder add3(mode,X[127:96],Y[127:96],1'b0,S[127:96],Cout[3]);    
 endmodule
 