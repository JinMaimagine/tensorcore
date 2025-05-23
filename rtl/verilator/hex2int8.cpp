#include <cstdint>
#include <sstream>
#include <stdexcept>
#include <string>
#include <iostream>
#include <iomanip>

/* ------------------------------------------------------------
 * hex_to_int8
 *   s  :   十六进制字符串，可带 “0x/0X” 前缀，也可省略。
 *           长度不限（会按最低 8 bit 截取），大小写均可。
 *   返回:   int8_t，遵循 8-bit 二进制补码规则。
 *   异常:   输入包含非十六进制字符时抛 std::invalid_argument
 * ------------------------------------------------------------ */
int8_t hex_to_int8(const std::string& s)
{
    // 1) 去掉前导 "0x"/"0X"（若有）
    std::string t = s;
    if (t.rfind("0x", 0) == 0 || t.rfind("0X", 0) == 0)
        t.erase(0, 2);

    // 2) 解析为无符号 32 bit，以便容纳任意位数
    uint32_t tmp = 0;
    std::stringstream ss(t);
    ss >> std::hex >> tmp;
    if (ss.fail() || !ss.eof())          // 包含非法字符
        throw std::invalid_argument("invalid hex string: " + s);

    // 3) 截取最低 8 bit，再解释成 int8_t（自动符号扩展）
    return static_cast<int8_t>(tmp & 0xFFu);
}

/* ------------ 演示 ------------ */
int main()
{
    while(1)
    {
    std::string in;
    std::cin>>in;
    int8_t v = hex_to_int8(in);
    std::cout << std::setw(10) << in << "  -->  "
                << std::showbase << std::internal << std::hex
                << std::setw(4) << +static_cast<int>(v) << std::dec
                << "  (" << static_cast<int>(v) << ")\n";
    }
       
    return 0;
}
