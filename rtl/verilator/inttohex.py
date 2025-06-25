def int32_to_hex(i: int) -> str:
    """
    将有符号 32 位整数转换为 0x 开头的十六进制字符串。
    例如：int32_to_hex(-1) -> '0xffffffff'
    """
    # 限制到 32 位
    u = i & 0xFFFFFFFF
    return f"0x{u:08x}"

def hex_to_int32(h: str) -> int:
    """
    将十六进制字符串转换为有符号 32 位整数。
    支持 '0x..' 或者不带前缀的十六进制。
    例如：hex_to_int32('0xffffffff') -> -1
    """
    u = int(h, 16) & 0xFFFFFFFF
    # 如果最高位是 1，就视作负数
    if u & 0x80000000:
        return u - (1 << 32)
    return u

# 示例
if __name__ == "__main__":
    for x in [-656341795]:
        hx = int32_to_hex(x)
        rx = hex_to_int32(hx)
        print(f"{x} -> {hx} -> {rx}")