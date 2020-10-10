
//Windows-PC Enviroment
int winstart();
int winopenrom();
int winsetuprom();
FILE *rom_file;

//Gameboy variables
unsigned char *rom_mem;
unsigned char *ram_mem;
unsigned char *vram_mem;

union
unsigned char a;
unsigned char b;
unsigned char c;
unsigned char d;
unsigned char e;
unsigned char f;
unsigned char h;
unsigned char l;
unsigned short




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
