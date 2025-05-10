#include <stdint.h>
#include <string.h>

int float_to_half  (double r) {   // SV real → int16
    _Float16 h = (_Float16)r;
    uint16_t u;  memcpy(&u, &h, 2);
    return (int)u;
}