// auto-ported from 0042d4d0_FUN_0042d4d0.c (FUN_0042d4d0, 363 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0066e950 GLOBAL_AT(undefined4*, 0x0066e950)
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_0066e8f0 GLOBAL_AT(int, 0x0066e8f0)
#define DAT_0066e8f4 GLOBAL_AT(int, 0x0066e8f4)
#define DAT_0066e8f8 GLOBAL_AT(int, 0x0066e8f8)
#define DAT_0066e8fc GLOBAL_AT(int, 0x0066e8fc)
#define _DAT_0066e900 GLOBAL_AT(int, 0x0066e900)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)
#define DAT_0089be48 GLOBAL_AT(int, 0x0089be48)
#define DAT_0089bdfc GLOBAL_AT(int, 0x0089bdfc)
#define DAT_0089bdf5 GLOBAL_AT(char, 0x0089bdf5)
#define DAT_0089bdf8 GLOBAL_AT(int, 0x0089bdf8)
#define DAT_0089be2c GLOBAL_AT(int, 0x0089be2c)
#define DAT_0089bdf7 GLOBAL_AT(char, 0x0089bdf7)
#define DAT_0089be28 GLOBAL_AT(int, 0x0089be28)
#define DAT_0089be10 GLOBAL_AT(int, 0x0089be10)
#define DAT_0089bdf6 GLOBAL_AT(char, 0x0089bdf6)
#define DAT_0089be14 GLOBAL_AT(int, 0x0089be14)

static undefined4 BEA_CDECL ap_0042d4d0(void)
{
  int iVar1;
  bool bVar2;
  
  if ((DAT_0066e950 != (int *)0x0) && (DAT_00662df4 == 0)) {
    DAT_0066e8f0 = 0;
    DAT_0066e8f4 = 0;
    DAT_0066e8f8 = 0;
    DAT_0066e8fc = 0;
    _DAT_0066e900 = 0;
    iVar1 = bea_vcall<uint32_t>(DAT_0066e950, 0x24, DAT_0066e950,0x14,&DAT_0066e8f0);
    if (iVar1 < 0) {
      iVar1 = bea_vcall<uint32_t>(DAT_0066e950, 0x1c, DAT_0066e950);
      if (iVar1 == -0x7ff8ffe2) {
        do {
          iVar1 = bea_vcall<uint32_t>(DAT_0066e950, 0x1c, DAT_0066e950);
        } while (BEA_LOOP_GUARD((iVar1 == -0x7ff8ffe2)));
        return 0;
      }
    }
    else {
      if (DAT_00662df4 == 0) {
        DAT_0089bda8 = DAT_0089bda8 + DAT_0066e8f0;
        DAT_0089bda4 = DAT_0089bda4 + DAT_0066e8f4;
        DAT_0089be48 = DAT_0089be48 + DAT_0066e8f8;
      }
      bVar2 = (DAT_0066e8fc & 0x80) == 0;
      if (bVar2) {
        DAT_0089bdfc = DAT_0089bdfc | DAT_0089bdf5;
      }
      DAT_0089bdf8 = (uint)!bVar2;
      DAT_0089bdf5 = !bVar2;
      bVar2 = (DAT_0066e8fc & 0x8000) == 0;
      if (bVar2) {
        DAT_0089be2c = DAT_0089be2c | DAT_0089bdf7;
      }
      DAT_0089be28 = (uint)!bVar2;
      DAT_0089bdf7 = !bVar2;
      if ((DAT_0066e8fc & 0x800000) != 0) {
        DAT_0089be10 = 1;
        DAT_0089bdf6 = 1;
        return 0;
      }
      DAT_0089be10 = 0;
      DAT_0089be14 = DAT_0089be14 | DAT_0089bdf6;
      DAT_0089bdf6 = 0;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042d4d0, ap_0042d4d0));
