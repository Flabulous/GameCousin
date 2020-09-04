#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

FILE memLoadROM(char gbrom[256])
{
    FILE *rom;
    FILE *fail = 0;

    rom = fopen(gbrom, "w");

    if (rom == NULL) {
        return *fail;

    } else {
        return *rom;
    }
}
