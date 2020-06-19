#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct registers //Declare the standard 8 bit registers and the virtual 16 bit registers
{
    int8_t a;
    int8_t b;
    int8_t c;
    int8_t d;
    int8_t e;
    int8_t f;
    int8_t h;
    int8_t l;

    int16_t af;
    int16_t bc;
    int16_t de;
    int16_t hl;

    int16_t sp;
    int16_t pc;

};
