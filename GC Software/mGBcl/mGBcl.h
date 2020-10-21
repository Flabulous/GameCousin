
//PC Enviroment
int pcstart();
int pcopenrom();
int pcsetuprom();
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

//Pointers
unsigned short SP; //Stack pointer
unsigned short PC; //Program Counter

//Instructions
unsigned char *inst_tbl;

//x0
int NOP();
int STOP();
int JR_NZ();
int JR_NC();
int LD_BB();
int LD_DB();
int LD_HB();
int LD_HLB();
int ADD_AB();
int SUB_B();
int AND_B();
int OR_B();
int RET_NZ();
int RET_NC();
int LDH_XA();
int LDH_AX();
//x1
int LD_BCX();
int LD_
