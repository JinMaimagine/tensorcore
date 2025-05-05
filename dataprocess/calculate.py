#TODO:目前没有校验FP16的计算,我会在决定FP16的计算方式之后再修改代码中FP的dot部分，例如,对于FP16的乘累加,是否转换为FP32再截断,其次还要验证numpy处理的行为
#TODO:还没有支持混合精度的模式,直接手动加
import numpy as np
def read_2d(filepath,dtype):
    matrix = []
    with open(filepath, 'r') as f:
        for line in f:
            row_str = line.strip().split()
            row_vals = [dtype(x) for x in row_str]
            matrix.append(row_vals)
    return np.array(matrix)
def caculate(file1,file2,file3,dtype):
    assert file1.startswith('a')
    assert file2.startswith('b')
    assert file3.startswith('c')
    a=read_2d(file1,dtype)
    b=read_2d(file2,dtype)
    c=read_2d(file3,dtype)
    assert a.shape[1]== b.shape[0]
    assert a.shape[0]== c.shape[0]
    assert b.shape[1]== c.shape[1]
    d=np.dot(a,b)+c
    for i in range(d.shape[0]):
        for j in range(d.shape[1]):
            print(d[i, j], end=" ")
        print()

if __name__ == "__main__":
    dtype=np.int32
    import sys
    file1 = sys.argv[1]
    file2 = sys.argv[2]
    file3 = sys.argv[3]
    if len(sys.argv) > 4:
        dtype = sys.argv[4]
    mapping = {
            "int": int,
            "int32": np.int32,
            "float": float,
            "float32": np.float32,
            "float16": np.float16,
            "fp16": np.float16,
            "np.float16": np.float16,
            "np.float32": np.float32
        }
    caculate(file1, file2, file3,mapping[dtype])
            
