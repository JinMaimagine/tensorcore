package params;

typedef struct packed {
    int regfile_unitbits;//int4=16 else 32 单个PE中存储多个块乘累加,但是没有将块加和的时候的值
    
} PE_pkg_t;

localparam int FP_FORMAT_BITS = 3; 
typedef enum logic [FP_FORMAT_BITS-1:0] {
    IDLE    = 'd0,
    READ_C  = 'd1,
    SYSTOLIC = 'd2,//有规律流动状态
    RESET = 'd3,//重置状态
    FINISH='d4  //完全算完
    // add new formats here
} state_t;



endpackage