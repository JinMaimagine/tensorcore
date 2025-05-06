#generate UnsignedINT32随机数和结果:
#这个testbench只用UnsignedINT32验证能通过就行,UnsignedINT32=UnsignedINT32*UnsignedINT32,不考虑溢出
#检验单cycle
import random
import sys

#自己设置,可以换数据
random.seed(42)
class UnsignedINT32:
    def __init__(self):
        self.value = [ random.getrandbits(1) for _ in range(32) ]
        self.value2int = int(''.join(str(bit) for bit in self.value), 2)

    def __mul__(self, other):
        a = self.value2int
        b = other.value2int
        prod = (a * b) 
        return prod


    def __repr__(self):
        strs=""
        strs=''.join(str(bit) for bit in self.value)
        return f"('{strs}', {self.value2int})"
    

def gen(dim):#gen(4):4*4的数据，gen(8):8*8
    data = []
    for i in range(dim):
        row = []
        for j in range(dim):
            row.append(UnsignedINT32())
        data.append(row)
    return data


dim=int(sys.argv[1])
A=gen(dim)
B=gen(dim)
C = [[0 for _ in range(dim)] for _ in range(dim)]
D= [[0 for _ in range(dim)] for _ in range(dim)]
for i in range(dim):
    for j in range(dim):
        for k in range(dim):
            C[i][j] += A[i][k] * B[k][j]
        D[i][j] = (C[i][j],f"{C[i][j]:0100b}")






print("A:")
for row in A:
    print([elem for elem in row])

print("B:")
for row in B:
    print([elem for elem in row])

print("D:")
for row in D:
    print(row)  # C 里是字符串或整数，直接打印就行
