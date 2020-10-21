/*
mGBCL/HE MODULAR GAMEBOY COMPATIBILITY LAYER / HARDWARE EMULATOR
VERSION 0.0.0

Contains:
- GUI that loads on startup of the GC
- Clock modifier that will control the chip's clock speed to match the framerate of the GB's exactly.

DISCLAIMER:
- This program will not emulate all of the original GameBoy's properties exactly. It merely contains a clock speed modifier
    to continuously match the speed of the original GB.


*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "mGBcl.h"

int main()
{
    #ifdef _WIN32 // Includes both 32 bit and 64 bit
	    #ifdef _WIN64
	        pcstart();
	    #else
	        pcstart();
	    #endif
    #endif

    return 0;
}

int initGB()
{
    ram_mem = malloc(65536);
    vram_mem = malloc(65536);

    return 0;
}
