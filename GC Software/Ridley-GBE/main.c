#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
RIDLEY GAMEBOY EMULATOR
VERSION 0.0.0
*/
int main()
{

    char[256] gb_rom;
    printf("RidleyGBEv000 Loaded.\n");
    gets(gb_rom);

    //START FUNCTIONS
    memLoadROM(gb_rom);

    return 0;
}
