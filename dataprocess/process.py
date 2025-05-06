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

    def __mul__(self, other):
        a = int(''.join(str(bit) for bit in self.value), 2)
        b = int(''.join(str(bit) for bit in other.value), 2)
        prod = (a * b) & 0xFFFFFFFF
        bits = [int(b) for b in f'{prod:032b}']
        strs=''.join(str(bit) for bit in bits)
        return strs

    def __repr__(self):
        strs=""
        strs=''.join(str(bit) for bit in self.value)
        return strs
    

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
for i in range(dim):
    for j in range(dim):
        C[i][j]=A[i][j]*B[i][j]

print("A:")
for row in A:
    print([str(elem) for elem in row])

print("B:")
for row in B:
    print([str(elem) for elem in row])

print("C:")
for row in C:
    print(row)  # C 里是字符串或整数，直接打印就行
