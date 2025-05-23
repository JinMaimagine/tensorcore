import struct
import math

# ---------------------------------------------------------
# 基础：二进制⇄浮点数
# ---------------------------------------------------------
# ----------------  FP16 bits  →  float32  ----------------
def fp16_to_float32(h_bits: int) -> float:
    buf = struct.pack('<H', h_bits)       # 2 bytes, raw bits
    return struct.unpack('<e', buf)[0]    # interpret as IEEE-754 binary16

# ----------------  float32    →  FP16 bits ---------------
def float32_to_fp16_bits(f: float) -> int:
    buf = struct.pack('<e', f)            # round to nearest binary16
    return struct.unpack('<H', buf)[0]    # get 16-bit int bit-pattern

# ---------------------------------------------------------
# 十六进制（大写、无 0x 前缀；FP32 8 字节，FP16 4 字节）
# ---------------------------------------------------------
def float32_to_hex32(f: float) -> str:
    return struct.pack('<f', f).hex().upper()

def fp16_bits_to_hex16(h_bits: int) -> str:
    return struct.pack('<H', h_bits).hex().upper()

def hex32_to_float32(hexstr: str) -> float:
    return struct.unpack('<f', bytes.fromhex(hexstr))[0]

def hex16_to_float32(hexstr: str) -> float:
    return fp16_to_float32(struct.unpack('<H', bytes.fromhex(hexstr))[0])

# ---------------------------------------------------------
# 浮点 → 整数  (与 C/C++ 的 static_cast<int>(float) 行为一致)
# ---------------------------------------------------------
def fp16_to_int(h_bits: int) -> int:
    return int(round(fp16_to_float32(h_bits)))

def float32_to_int(f: float) -> int:
    return int(round(f))

# ---------------------------------------------------------
# —— 示例演示 ——
if __name__ == '__main__':
    # ① 从 FP16 十六进制到 FP32
    h_hex = '3C00'                # 1.0 (binary16)
    h_bits = int(h_hex, 16)
    f32   = fp16_to_float32(h_bits)
    print("FP16 hex", h_hex, "→ float32", f32)      # 1.0

    # ② FP32 ↔ FP16
    f = -2.2856
    h_bits2 = float32_to_fp16_bits(f)
    print("float32", f, "→ FP16 bits 0x%04X" % h_bits2,
          "→ back to", fp16_to_float32(h_bits2))

    # ③ 浮点 → 整数
    print("FP16(0x3555) → int =", fp16_to_int(0x3555))   # 0.333 → 0
    print("FP32(-7.9)  → int =", float32_to_int(-7.9))   # −8

    # ④ 十六进制 bit-pattern
    print("float32 7.33594  hex =", float32_to_hex32(7.33594))
    print(" FP16  0x3555 hex =", fp16_bits_to_hex16(0x3555))
