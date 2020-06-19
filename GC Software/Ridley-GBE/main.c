#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
RIDLEY GAMEBOY EMULATOR
VERSION 0.0.0
*/
int main()
{
    char bios_rom[256];
    char game_rom[256];
    printf("RidleyGBEv000 Loaded.");

    printf("\nEnter the name of the GameBoy BIOS ROM: ");
    gets(bios_rom);

    printf("\n Enter the name of the GameBoy GAME ROM: ");
    gets(game_rom);

    return 0;
}
