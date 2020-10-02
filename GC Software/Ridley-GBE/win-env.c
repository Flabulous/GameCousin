#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
FILE *rom_file;
*rom_mem;
int SIZE;

int winruntime() {
    printf("Ridley v0.01 Loaded.\n");

    char input[256];
getrom:
    printf("Enter the name of the ROM:\n");
    gets(input);
    int i = winopenrom(input);
    if (i == -1) {goto getrom;} else {winsetuprom();}
    gets(input);
    return 0;
}

int winopenrom(char nme[256])
{
    rom_file = fopen(nme, "r");
    if (rom_file == NULL) {
        printf("Error opening file\n");
        return -1;
    }

    printf("File opened.\n");
    return 0;
}

int winsetuprom()
{
    fseek(rom_file, 0, SEEK_END);
    SIZE = ftell(rom_file);
    fseek(rom_file,0,SEEK_SET);

    rom_mem = malloc(SIZE);
    printf("ROM is %d bytes in size, allocated %d bytes.", SIZE, rom_mem);

    printf("Loading...\n");
    for(int i=1; i<=SIZE; i++) {
        *(rom_mem+i) = fgetc(rom_file);
        //printf(" %x ",*(rom_mem+i));
    }
    printf("\nLoaded.\n");

    return 0;
}
