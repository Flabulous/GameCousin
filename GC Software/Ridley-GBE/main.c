/*
GAMECOUSIN OS "RIDLEY"
VERSION 0.0.0

Contains:
- GUI that loads on startup of the GC
- Recompiler that takes the selected ROM and changes it from SHARP assembly to some sort of assembly
- Runtime that will play the recompiled ROM
- Clock modifier that will control the chip's clock speed to match the framerate of the GB's exactly.

DISCLAIMER:
- This program will not emulate all of the original GameBoy's properties exactly. All it needs is a clock speed modifier
    to match the speed of the original GB. Certain things like ROM bank switching do not need to be recreated and can be looked
    over, as the code that will activate them still technically point to the correct area in the ROM. Things like TASs and any%
    SpeedRuns should still work on this emulator. ACE may not work and will have to be modified as the processor will not read
    code in Sharp ASM (No on-the-spot recompiler).
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int winruntime();

int main()
{
    #ifdef _WIN32 // Includes both 32 bit and 64 bit
	    #ifdef _WIN64
	        winruntime();
	    #else
	        winruntime();
	    #endif
    #endif

    return 0;
}
