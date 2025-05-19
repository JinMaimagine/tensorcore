package params;
//always块必须能综合在一起,不然出现多个always块
//取C：放C，取出A,B,开始systolic,继续doublebuffer取B,每完成一轮,取C，取A，继续doublebuffer取B，直到完成
//`PARAM(FP,32,16,16,16)

typedef enum logic [1:0]{
    M32K16N8,
    M16K16N16,
    M8K16N32
}shape_t;

typedef enum logic [1:0] {
    FP32 = 'd0,//注意混合精度C是FP32
    FP16 = 'd1,
    INT8 = 'd2,
    INT4 = 'd3
} type_t;


typedef struct packed{
shape_t compute_shape;
type_t data_type;
}compute_type_t;



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
type_t datatype;
rc_t rc;
}addrgen_t;
//每个矩阵配置一个
typedef struct packed{
    logic [31:0] A_BASE;//A的起始地址,一定为0
    logic [31:0] B_BASE;//B的起始地址，存完A之后的地址  m*k*width
    logic [31:0] C_BASE;//C的起始地址，存完A,B之后的地址 m*k*width+n*k*width
    logic [31:0] D_BASE;//D的起始地址，存完A,B,C之后的地址 m*k*width+n*k*width
} baseaddr_t;
typedef struct packed{
    logic [31:0] BASE;//基本地址
    logic [2:0] sel;//100是A，010是B，001是C，000是D
    logic issend;//D=1'b1,对于A,B,C=1'b0
    logic[31:0] bits;//接收的位数
    logic [4:0] burst_num;
    logic [7:0] burst_size;
    logic request_valid;//请求有效
} AXI_out_t;
typedef struct packed{
    logic finish;
    logic [255:0] data;
    logic [31:0] burst_id;
    logic valid;
} AXI_in_t;
//TODO:这些的bit是可以缩短的，并非一定要用int，后面根据最长的来优化吧
typedef struct packed {
    //把这些实现的信号实现在里面
    //AXI_out_t axi;//AXI相关配置,可能不需要能传输的最大bit数这么多,如果需要，这个参数可以删除
    //AXI_in_t axi_in;
    logic[31:0] systolic_time;//systolic经历的周期
    logic[31:0] waitwrite_time;
    logic[31:0] writeback_time;
    //int SRAM_ADDR_INC;//SRAM地址增量,就是32bit
    //一些time，分别是什么时候开始结束什么状态,
} SYSTOLIC_pkg_t;


localparam int STATE_BIT = 4;
//FP,INT进行pipeline都要2个cycle,不同的是INT后续有累加阶段累加，FP没有
//我需要在正确的时间将正确的数据放进去
typedef enum logic [STATE_BIT-1:0] {
    IDLE    = 'd0,
    READ_C  = 'd1,
    LOAD_A ='d2,//等待充A
    LOAD_B='d3,//等待充B
    SYSTOLIC = 'd4,//有规律流动状态
    ACCUMULATE = 'd5,//累加状态
    WAIT_WRITE='d6,
    WRITE_BACK='d7,
    FINISH='d8  //完全算完
    // add new formats here
} state_t;



endpackage