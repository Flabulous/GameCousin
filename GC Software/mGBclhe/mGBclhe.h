//PC Enviroment
int pcstart();
int pcopenrom();
int pcsetuprom();
FILE *rom_file;

//Gameboy variables
unsigned char *rom_mem;
unsigned char *ram_mem;
unsigned char *vram_mem;


//Registers (I think this will work (that means it's not going to))
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
 *inst_tbl;



//This is poorly formatted. Sorry. Will refactor when I don't have better things to do
// X  - 8b of data
// XX - 16b of data

      /*x0*/
/*0x*/ int NOP();
/*1x*/ int STOP();
/*2x*/ int JR_NZ_X();
/*3x*/ int JR_NC_X();
/*4x*/ int LD_BB();
/*5x*/ int LD_DB();
/*6x*/ int LD_HB();
/*7x*/ int LD_HLB();
/*8x*/ int ADD_AB();
/*9x*/ int SUB_B();
/*Ax*/ int AND_B();
/*Bx*/ int OR_B();
/*Cx*/ int RET_NZ();
/*Dx*/ int RET_NC();
/*Ex*/ int LDH_XA();
/*Fx*/ int LDH_AX();

      /*x1*/
/*0x*/ int LD_BCXX();
/*1x*/ int LD_DEXX();
/*2x*/ int LD_HLXX();
/*3x*/ int LD_SPXX();
/*4x*/ int LD_BC();
/*5x*/ int LD_DC();
/*6x*/ int LD_HC();
/*7x*/ int LD_HLC();
/*8x*/ int ADD_AC();
/*9x*/ int SUB_C();
/*Ax*/ int AND_C();
/*Bx*/ int OR_C();
/*Cx*/ int POP_BC();
/*Dx*/ int POP_DE();
/*Ex*/ int POP_HL();
/*Fx*/ int POP_AF();

      /*x2*/
/*0x*/ int LD_BCA();
/*1x*/ int LD_DEA();
/*2x*/ int LD_HLPA();
/*3x*/ int LD_HLMA();
/*4x*/ int LD_BD();
/*5x*/ int LD_DD();
/*6x*/ int LD_HD();
/*7x*/ int LD_HLD();
/*8x*/ int ADD_AD();
/*9x*/ int SUB_D();
/*Ax*/ int AND_D();
/*Bx*/ int OR_D();
/*Cx*/ int JP_NZ_XX();
/*Dx*/ int JP_NC_XX();
/*Ex*/ int LD_CA();
/*Fx*/ int LD_AC();

      /*x3*/
/*0x*/ int INC_BC();
/*1x*/ int INC_DE();
/*2x*/ int INC_HL();
/*3x*/ int INC_SP();
/*4x*/ int LD_BE();
/*5x*/ int LD_DE();
/*6x*/ int LD_HE();
/*7x*/ int LD_HLE();
/*8x*/ int ADD_AE();
/*9x*/ int SUB_E();
/*Ax*/ int AND_E();
/*Bx*/ int OR_E();
/*Cx*/ int JP_XX();
/*Dx   NULL */
/*Ex   NULL */
/*Fx*/ int DI();

      /*x4*/
/*0x*/ int INC_B();
/*1x*/ int INC_D();
/*2x*/ int INC_H();
/*3x*/ int INC_HL();
/*4x*/ int LD_BH();
/*5x*/ int LD_DH();
/*6x*/ int LD_HH();
/*7x*/ int LD_HLH();
/*8x*/ int ADD_AH();
/*9x*/ int SUB_H();
/*Ax*/ int AND_H();
/*Bx*/ int OR_H
/*Cx*/ int CALL_NZXX();
/*Dx*/ int CALL_NCXX();
/*Ex   NULL*/
/*Fx   NULL*/

      /*x5*/
/*0x*/ int DEC_B();
/*1x*/ int DEC_D();
/*2x*/ int DEC_H();
/*3x*/ int DEC_HL();
/*4x*/ int LD_BL();
/*5x*/ int LD_DL();
/*6x*/ int LD_HL();
/*7x*/ int LD_
/*8x*/ int
/*9x*/ int
/*Ax*/ int
/*Bx*/ int
/*Cx*/ int
/*Dx*/ int
/*Ex*/ int
/*Fx*/ int

      /*x6*/
/*0x*/ int
/*1x*/ int
/*2x*/ int
/*3x*/ int
/*4x*/ int
/*5x*/ int
/*6x*/ int
/*7x*/ int
/*8x*/ int
/*9x*/ int
/*Ax*/ int
/*Bx*/ int
/*Cx*/ int
/*Dx*/ int
/*Ex*/ int
/*Fx*/ int

      /*x7*/
/*0x*/ int
/*1x*/ int
/*2x*/ int
/*3x*/ int
/*4x*/ int
/*5x*/ int
/*6x*/ int
/*7x*/ int
/*8x*/ int
/*9x*/ int
/*Ax*/ int
/*Bx*/ int
/*Cx*/ int
/*Dx*/ int
/*Ex*/ int
/*Fx*/ int

      /*x8*/
/*0x*/ int
/*1x*/ int
/*2x*/ int
/*3x*/ int
/*4x*/ int
/*5x*/ int
/*6x*/ int
/*7x*/ int
/*8x*/ int
/*9x*/ int
/*Ax*/ int
/*Bx*/ int
/*Cx*/ int
/*Dx*/ int
/*Ex*/ int
/*Fx*/ int
