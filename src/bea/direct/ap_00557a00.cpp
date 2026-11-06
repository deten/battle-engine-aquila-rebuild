// auto-ported from 00557a00_FUN_00557a00.c (FUN_00557a00, 88 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00652764 GLOBAL_AT(int, 0x00652764)
#define DAT_0065275c GLOBAL_AT(int, 0x0065275c)
#define DAT_00652754 GLOBAL_AT(int, 0x00652754)
#define DAT_0065274c GLOBAL_AT(int, 0x0065274c)
#define DAT_0065273c GLOBAL_AT(int, 0x0065273c)
#define s_Q8W8V8U8_00652740 ((char*)0x00652740)
#define s_A8R8G8B8_00652774 ((char*)0x00652774)
#define s_X8R8G8B8_00652780 ((char*)0x00652780)
#define s_R5G6B5_0065276c ((char*)0x0065276c)
#define s_A1R5G5B5_00652798 ((char*)0x00652798)
#define s_UNKNOWN_00624310 ((char*)0x00624310)
#define s_A4R4G4B4_0065278c ((char*)0x0065278c)

static char * BEA_CDECL ap_00557a00(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    return (char *)(s_UNKNOWN_00624310);
  case 1:
    return (char *)(s_A1R5G5B5_00652798);
  case 2:
    return (char *)(s_A4R4G4B4_0065278c);
  case 3:
    return (char *)(s_X8R8G8B8_00652780);
  case 4:
    return (char *)(s_A8R8G8B8_00652774);
  case 5:
    return (char *)(s_R5G6B5_0065276c);
  case 6:
    return (char *)(&DAT_00652764);
  case 7:
    return (char *)(&DAT_0065275c);
  case 8:
    return (char *)(&DAT_00652754);
  case 9:
    return (char *)(&DAT_0065274c);
  case 10:
    return (char *)(s_Q8W8V8U8_00652740);
  default:
    return (char *)(&DAT_0065273c);
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00557a00, ap_00557a00));
