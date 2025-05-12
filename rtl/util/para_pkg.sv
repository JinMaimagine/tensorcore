package params;
//always块必须能综合在一起,不然出现多个always块
//取C：放C，取出A,B,开始systolic,继续doublebuffer取B,每完成一轮,取C，取A，继续doublebuffer取B，直到完成
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
localparam SRAMA=8*16*32;//8行16列每个都是FP32
localparam SRAMB=8*16*32*2;//dbbuffer
localparam SRAMC=8*16*32*2;//dbbuffer
//我觉得D的逻辑可以很简单,就是对应bit数算完了我就往回传
localparam SRAMD=8*16*32*2;//dbbuffer
typedef logic[3:0] maxaddr_t;
typedef enum logic [3:0] {
    FP32_m16n16k16 = 'd0,//注意混合精度C是FP32
    FP32_m8n32k16 = 'd1,
    FP32_m32n8k16 = 'd2,
    FP16_m16n16k16 = 'd3,
    FP16_m8n32k16 = 'd4,
    FP16_m32n8k16 = 'd5,
    INT8_m16n16k16 = 'd6,
    INT8_m8n32k16 = 'd7,
    INT8_m32n8k16 = 'd8,
    INT4_m16n16k16 = 'd9,
    INT4_m8n32k16 = 'd10,
    INT4_m32n8k16 = 'd11
} full_type_t;
typedef enum logic [1:0] {
    FP32 = 'd0,//注意混合精度C是FP32
    FP16 = 'd1,
    INT8 = 'd2,
    INT4 = 'd3
} type_t;
typedef enum logic [1:0] {
    ROW_FP32 = 'd0,//注意混合精度C是FP32
    ROW_FP16 = 'd1,
    ROW_INT8 = 'd2,
    ROW_INT4 = 'd3
} row_t;
typedef enum logic [1:0] {
    COL_FP32 = 'd0,//注意混合精度C是FP32
    COL_FP16 = 'd1,
    COL_INT8 = 'd2,
    COL_INT4 = 'd3
} col_t;
typedef enum logic {
    ROW = 'd0,//注意混合精度C是FP32
    COL = 'd1
} attr_t;
typedef enum logic [1:0]{
    A = 'd0,//注意混合精度C是FP32
    B = 'd1,
    C = 'd2
} mat_t;
typedef logic [1:0] rc_t;
//对于A:2'b00:M32K16,2'b01:M16K16,2'b10:M8K16
//对于B:2'b00:K16N8,2'b01:K16N16,2'b10:K16N32 
//对于C:2'b00:M32N8,2'b01:M16N16,2'b10:M8N32
typedef struct packed{
    logic [31:0] A_BASE;//A的起始地址,一定为0
    logic [31:0] B_BASE;//B的起始地址，存完A之后的地址  m*k*width
    logic [31:0] C_BASE;//C的起始地址，存完A,B之后的地址 m*k*width+n*k*width
    logic [31:0] D_BASE;//D的起始地址，存完A,B,C之后的地址 m*k*width+n*k*width
    logic [2:0] sel;//100是A，010是B，001是C，000是D
    int recvbits;//接收的位数
    logic [4:0] burst_num;
    logic [7:0] burst_size;
    logic request_valid;
} AXI_out_t;
typedef struct packed{
    logic finish;
} AXI_in_t;
localparam int PATTERN_BIT = 3;
typedef enum logic [PATTERN_BIT-1:0] {
    NOMAL = 'd0,
    BROADCAST = 'd1//INT4,INT8
} pattern_t;
//TODO:这些的bit是可以缩短的，并非一定要用int，后面根据最长的来优化吧
typedef struct packed {
    int counter_A;//A要充多少次
    int counter_B;//B要充多少次(一次A会充多次B)
    pattern_t pattern;//数据流动的模式
    //把这些实现的信号实现在里面
    //AXI_out_t axi;//AXI相关配置,可能不需要能传输的最大bit数这么多,如果需要，这个参数可以删除
    //AXI_in_t axi_in;
    maxaddr_t MAX_SRAMADDR;
    int systolic_time;//systolic经历的周期
    int accumlate_time;
    int writeback_time;
    //int SRAM_ADDR_INC;//SRAM地址增量,就是32bit
    //一些time，分别是什么时候开始结束什么状态,
} SYSTOLIC_pkg_t;
typedef struct packed {
    //每个PE中8个32bit的regfile,总共一个累加阶段,全都在最后阶段累加
    logic[1:0] time2valid;//对于FP需要2 cycle,对于INT需要1 cycle
} PE_pkg_t;

localparam int STATE_BIT = 4;
//FP,INT进行pipeline都要2个cycle,不同的是INT后续有累加阶段累加，FP没有
typedef enum logic [STATE_BIT-1:0] {
    IDLE    = 'd0,
    READ_C  = 'd1,
    SYSTOLIC = 'd2,//有规律流动状态
    ACCUMULATE = 'd3,//累加状态
    WAIT_A ='d4,//等待充A
    WAIT_B='d5,//等待充B
    WAIT_C='d6,//等待充C
    WRITE_BACK='d7,
    FINISH='d8  //完全算完
    // add new formats here
} state_t;



endpackage