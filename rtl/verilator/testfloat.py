import numpy as np

# 16-bit小端字节流
bytes_le = bytes.fromhex('c1c6')  # 小端顺序
# 转成 numpy float16
value = np.frombuffer(bytes_le, dtype=np.float16)[0]

print(value)
