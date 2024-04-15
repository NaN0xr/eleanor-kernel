extern return_mhartid();

#define CLINT 0x2000000L
#define CLINT_MTIMECMP(hartid) (CLINT + 0x4000 + 8*(return_mhartid()))
#define CLINT_MTIME (CLINT + 0xBFF8)
