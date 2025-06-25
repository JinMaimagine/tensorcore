import sys
import string

def hex_to_int(h: str, bits: int = 32, signed: bool = True) -> int:
    """
    将十六进制字符串（可带 '0x' 前缀或不带）转换为整数。
    bits: 多少位来解释（默认32）
    signed: True 按二补码算有符号数；False 按无符号数。
    """
    u = int(h, 16) & ((1 << bits) - 1)
    if signed and (u & (1 << (bits - 1))):
        return u - (1 << bits)
    return u

def int_to_hex(i: int, bits: int = 32, width: int = 0) -> str:
    """
    将整数转换为十六进制字符串（0x...）。  
    bits: 多少位二补码来表示；  
    width: 格式化时不含 '0x' 的最小字符宽度，不传就不填充。
    """
    mask = (1 << bits) - 1
    u = i & mask
    if width:
        s = f"{u:0{width}x}"
    else:
        s = f"{u:x}"
    return "0x" + s

def main():
    """
    交互式：输入一个数，如果以 0x 开头或包含 A-F 则按 hex 解析，
    否则按十进制整数解析并输出 hex。
    """
    s = input("请输入一个数 (支持 0x 前缀的 hex 或 10 进制整数)：").strip()
    try:
        # 判断是否 hex
        is_hex = s.lower().startswith("0x") or any(c in string.hexdigits for c in s if not c.isdigit())
        if is_hex:
            val_s = hex_to_int(s)
            val_u = hex_to_int(s, signed=False)
            print(f"{s} -> 有符号 int32: {val_s}")
            print(f"{s} -> 无符号 uint32: {val_u}")
        else:
            i = int(s, 10)
            h = int_to_hex(i)
            print(f"{i} -> hex32: {h}")
    except ValueError:
        print("输入格式错误，请输入合法的 hex 或 整数。")

if __name__ == "__main__":
    main()