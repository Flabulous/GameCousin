
//Windows-PC Enviroment
int winstart();
int winopenrom();
int winsetuprom();
FILE *rom_file;

//Gameboy variables
unsigned char *rom_mem;
unsigned char *ram_mem;
unsigned char *vram_mem;

//Registers (I think this will work)
typedef union af {
    unsigned char a;
    unsigned char f;
    unsigned short af;

};
typedef union bc {
    unsigned char b;
    unsigned char c;
    unsigned short bc;
};
typedef union de {
    unsigned char d;
    unsigned char e;
    unsigned short de;
};
typedef union hl {
    unsigned char h;
    unsigned char l;
    unsigned short hl;
};
//Opcodes
unsigned char *ops_tbl;

//x0
int NOP();
int STOP();
int


//x1
int LDBCN();
int LDBCA();
int INCBC();
int INCB();
