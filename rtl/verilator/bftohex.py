import struct

def bf16_hex_to_float(h: str) -> float:
    """
    将一个 bfloat16 的十六进制字符串转换为 Python 浮点数。
    例如：bf16_hex_to_float('0x4128') -> 10.125
    """
    # 解析 hex，截取低 16 位
    ui16 = int(h, 16) & 0xFFFF
    # 左移 16 位到 float32 的高 16 位
    ui32 = ui16 << 16
    # 按大端 Interpret 为 float32
    return struct.unpack('>f', struct.pack('>I', ui32))[0]

def float_to_bf16_hex(f: float) -> str:
    """
    将 Python 浮点数转换为 bfloat16 的十六进制字符串，并做 round-to-nearest-even。
    例如：float_to_bf16_hex(10.125) -> '0x4128'
    """
    # float32 -> 32 位无符号整数
    ui32 = struct.unpack('>I', struct.pack('>f', f))[0]
    # 右移 16 位并做 round-to-nearest-even
    # 加 0x8000 相当于看第16位，小数部分>=0.5 则上舍；再 >>16
    bf16 = (ui32 + 0x8000) >> 16
    return f'0x{bf16:04x}'

# 示例
if __name__ == "__main__":
    
    for f in [61.25]:
        hx = float_to_bf16_hex(f)
        print(f"{f} -> {hx} (-> {bf16_hex_to_float(hx)})")