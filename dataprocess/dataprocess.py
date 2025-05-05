import sys
import os
import re
import numpy as np
import struct
#需要注意端序的问题
def process_int32(data_list):
    output_list = []
    for bits in data_list:
        val = int(bits, 2)           
        if val >= 2**31:             
            val -= 2**32             
        output_list.append(val)
    return output_list
def process_int4(data_list):
    output_list=[]
    for data in data_list:
        data = int(data, 2)
        if data > 7:
            data = data - 16
        output_list.append(data)
    return output_list
def process_int8(data_list):
    output_list=[]
    for data in data_list:
        data = int(data, 2)
        if data > 127:
            data = data - 256
        output_list.append(data)
    return output_list
def process_fp16(data_list):
    output_list=[]
    for data in data_list:
        data= int(data, 2)
        val=data.to_bytes(2, byteorder='big')
        f16=np.frombuffer(val, dtype=np.float16)[0]
        output_list.append(f16)
    return output_list
def process_fp32(data_list):
    output_list=[]
    for data in data_list:
        data= int(data, 2)
        val=data.to_bytes(4, byteorder='big')
        f32=struct.unpack('>f', val)[0]
        output_list.append(f32)
    return output_list
def process(data_list, datatype, width,dim):
    method='process_'+datatype+str(width)
    func = globals().get(method)
    return np.array(func(data_list)).reshape(dim)
def main():
    path=os.path.dirname(os.path.abspath(__file__))
    filein=os.path.join(path, sys.argv[1])
    filename=os.path.splitext(os.path.basename(filein))[0]
    fileout=os.path.join(path,filename+".txt")
    with open(filein, 'rb') as f:
        data=f.read()
    data_str = ''.join(format(b, '08b') for b in data)
    pattern = re.search(r'(a|b|c)_(int|fp)(\d+)_m(\d+)n(\d+)k(\d+)', filename)
    name=pattern.group(1)
    datatype=pattern.group(2)
    width=int(pattern.group(3))
    m=int(pattern.group(4))
    n=int(pattern.group(5))
    k=int(pattern.group(6))
    dim=(m,k) if name=='a' else (k,n) if name=='b' else (m,n)
    data_list=[]
    for i in range(0, len(data_str), width):
        data_list.append(data_str[i:i+width])
    processed_str=process(data_list, datatype,width,dim)
    #如果要打印原始的数据,将processed_str改为data_list
    with open(fileout, 'w') as f:
        for i in range(dim[0]):
            for j in range(dim[1]):
                f.write(f"{processed_str[i,j]:<15.9e}") if datatype=='fp' else f.write(f"{processed_str[i,j]}")
                if(j!=dim[1]-1):
                    f.write(" ")
                else:
                    f.write("\n")
if __name__ == "__main__":
    main()