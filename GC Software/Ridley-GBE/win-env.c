#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
FILE *rom_file;
char rom_mem[];

int winruntime() {
    printf("Ridley v0.01 Loaded.\n");

    char input[256];
getrom:
    printf("Enter the name of the ROM:\n");
    gets(input);
    int i = winopenrom(input);
    if (i == -1) {goto getrom;} else {winsetuprom();}


    return 0;
}

int winopenrom(char nme[256])
{
    rom_file = fopen(nme, "r");
    if (rom_file == NULL) {
        printf("Error opening file\n");
        return -1;
    }

    printf("File opened.");
    return 0;
}

int winsetuprom()
{
    fseek(rom_file, 0, SEEK_END);
    int size = ftell(rom_file);
    fseek(rom_file,0,SEEK_SET);

    printf("Loading...");
    for(int i=0; i<=size; i++) {
        rom_mem[i] = fgetc(i);
    }
    printf("Loaded.");

    return 0;
}
