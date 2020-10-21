#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "ridley.h"

int winstart() {
    printf("Ridley v0.01 Loaded.\n");

    char input[256];

getrom:
    printf("Enter the name of the ROM:\n");
    gets(input);
    int i = winopenrom(input);
    if (i == -1) {goto getrom;} else {winsetuprom();} //In case of improper file, go back to start

    gets(input);

    return 0;
}

int winopenrom(char nme[256])
{
    //Open ROM file
    rom_file = fopen(nme, "rb");

    //In case of improper file, return
    if (rom_file == NULL) {
        fclose(rom_file);
        printf("Error opening file\n");
        return -1;
    }

    printf("File opened.\n");
    return 0;
}

int winsetuprom()
{
    //Find size of ROM file (totally not grabbed from Stack)
    fseek(rom_file, 0, SEEK_END);
    int SIZE = ftell(rom_file);
    rewind(rom_file);

    printf("ROM is %d bytes in size.\n", SIZE);

    rom_mem = malloc(SIZE); //allocate enough memory

    //Load selected ROM into memory
    printf("Loading...\n");
    fread(rom_mem, 1, SIZE, rom_file);

//    DEBUG CODE
//    int c = 0;
//    for(int i=1; i<=SIZE; i++) {
//        printf(" %X ",rom_mem[i]);
//        c = c+1;
//    }

    //Close original ROM file (look ma, I'm memory safe!)
    fclose(rom_file);

    printf("Loaded. Internal ROM name:\n");
    //Grab internal ROM name (I hope this works with other ROMs)
    for (int i = 0x133; i <= 0x14E; i++) {
        printf("%c",rom_mem[i]);
    }
    printf("\n");


    return 0;
}
