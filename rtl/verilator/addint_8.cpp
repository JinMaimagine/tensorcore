#include <iomanip>
#include <iostream>
#include <sstream>
#include <cstdint>
#include <limits>


static int32_t parse_hex32(const std::string& s)
{
    uint32_t tmp = 0;
    std::stringstream ss(s);
    ss >> std::hex >> tmp;                // 始终当无符号解析
    return static_cast<int32_t>(tmp);     // 保留比特，再解释为有符号
}


static int32_t parse_hex8(const std::string& s)
{
    uint32_t tmp = 0;
    std::stringstream ss(s);
    ss >> std::hex >> tmp;                // 始终当无符号解析
    return static_cast<int32_t>(static_cast<int8_t>(tmp));     // 保留比特，再解释为有符号
}

int main() {


    /* -------- 读取初值 -------- */
    std::string tok;
    if (!(std::cin >> tok)) return 0;
    int32_t acc = parse_hex32(tok);


    /* -------- 指令循环 -------- */
    while (std::cin >> tok) {
        if (tok == "in") {
            std::string h1, h2;
            if (!(std::cin >> h1 >> h2)) break;

            int32_t a = parse_hex8(h1);
            int32_t b = parse_hex8(h2);
            acc += a * b;                             // 有符号乘后累加
        }
        else if (tok == "print" || tok == "p") {
            std::cout << "acc = 0x"
                      << std::uppercase << std::hex << std::setw(8)
                      << std::setfill('0')
                      << static_cast<uint32_t>(acc)   // 打印比特模式
                      << std::dec << "  (" << acc << ')'
                      << std::endl;                   // endl 会 flush
        }
        else if (tok == "quit") {
            break;
        }
        else {
            std::cerr << "Unknown cmd: " << tok << '\n';
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return 0;
}
