`define sig(name, stage) name``_stage_``stage
`define sigm(name, stage) name``_stage_``stage``_m//说明这个stage modify了这个信号
package pkg;
  typedef enum logic [2:0] {
    MODE_IDLE = 3'b000,
    MODE_INT2 = 3'b001,//not implemented
    MODE_INT4 = 3'b010,
    MODE_INT8 = 3'b011,
    MODE_BF16 = 3'b100,
    MODE_FP16 = 3'b101,
    MODE_TF32 = 3'b110,
    MODE_FP32 = 3'b111
  } mode_caculation; //precision
typedef enum logic {
    MODE_NORMAL = 1'b0,
    MODE_MIXED = 1'b1
}mode_precision;//混合精度?
endpackage

