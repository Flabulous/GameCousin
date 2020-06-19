#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

FILE memLoadROM(char gbrom[256])
{
    FILE *rom;
    FILE *fail = 0;

    rom = fopen(gbrom, "w");

    if (rom == NULL) {
        printf("\nError Opening File\n");
        return *fail;

    } else {
        printf("\nROM Loaded.\n");
        return *rom;
    }
}
