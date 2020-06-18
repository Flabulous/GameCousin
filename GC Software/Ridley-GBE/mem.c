#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int memLoadROM(char[256] gbrom)
{
    FILE *rom;

    rom = fopen(gbrom, "w");

    if (rom == NULL) {
        printf("Error opening file.");
        return -1;
    }

    return rom;
}
