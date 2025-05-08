package params;
//`STATE(FP,32,16,16,16)
`define STATE(TYPE,TYPENUM,Mdim,Ndim,Kdim) STATE_``TYPE``TYPENUM``_``m``Mdim``n``Ndim``k``Kdim 
`define STATE_FP32_m16n16k16
`define STATE_FP32_m8n32k16
`define STATE_FP32_m32n8k16
`define STATE_FP16_m16n16k16
`define STATE_FP16_m8n32k16
`define STATE_FP16_m32n8k16
`define STATE_INT8_m16n16k16
`define STATE_INT8_m8n32k16
`define STATE_INT8_m32n8k16
`define STATE_INT4_m16n16k16
`define STATE_INT4_m8n32k16
`define STATE_INT4_m32n8k16

//`PARAM(FP,32,16,16,16)
`define PARAM(TYPE,TYPENUM,Mdim,Ndim,Kdim) PAREM_``TYPE``TYPENUM``_``m``Mdim``n``Ndim``k``Kdim
`define PARAM_FP32_m16n16k16     
`define PARAM_FP32_m8n32k16
`define PARAM_FP32_m32n8k16
`define PARAM_FP16_m16n16k16
`define PARAM_FP16_m8n32k16
`define PARAM_FP16_m32n8k16
`define PARAM_INT8_m16n16k16
`define PARAM_INT8_m8n32k16
`define PARAM_INT8_m32n8k16
`define PARAM_INT4_m16n16k16
`define PARAM_INT4_m8n32k16
`define PARAM_INT4_m32n8k16

//同上继续...... 
//AXI相关配置,用来传递给AXI的可变变量
typedef struct packed{
    int recvbits;//接收的位数
} AXI_t;

typedef struct packed {
    int regfile_unitbits;//int4=16 else 32 单个PE中存储多个块乘累加,但是没有将块加和的时候的值
    int regfile_num;//register的数量,for FP32 is 4 
    AXI_t axi;//AXI相关配置,可能不需要能传输的最大bit数这么多,如果需要，这个参数可以删除
    //一些time，分别是什么时候开始结束什么状态,
} PE_pkg_t;

localparam int STATE_BIT = 3; 
typedef enum logic [STATE_BIT-1:0] {
    IDLE    = 'd0,
    READ_C  = 'd1,
    SYSTOLIC = 'd2,//有规律流动状态
    ACCUMULATE = 'd3,//累加状态
    RESET = 'd4,//重置状态
    FINISH='d5  //完全算完
    // add new formats here
} state_t;

localparam int PATTERN_BIT = 3;
typedef enum logic [PATTERN_BIT-1:0] {
    NOMAL = 'd0,
    BROADCAST = 'd1//INT4,INT8
} pattern_t;

endpackage