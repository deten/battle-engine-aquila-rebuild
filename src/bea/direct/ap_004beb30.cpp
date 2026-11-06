// auto-ported from 004beb30_FUN_004beb30.c (FUN_004beb30, 497 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00809db4 GLOBAL_AT(int, 0x00809db4)
#define DAT_00809db0 GLOBAL_AT(int, 0x00809db0)
#define DAT_00809dc0 GLOBAL_AT(int, 0x00809dc0)

static void BEA_CDECL ap_004beb30(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  int local_14;
  
  local_1c = DAT_00809db4 << 9;
  iVar1 = DAT_00809db4 << 8;
  local_14 = 0;
  iVar4 = DAT_00809db0;
  iVar8 = DAT_00809db4;
  do {
    iVar5 = (DAT_00809db4 - DAT_00809db0) + iVar4;
    iVar7 = iVar8;
    if (iVar8 <= iVar5) {
      psVar6 = (short *)((int)&DAT_00809dc0 + (iVar1 + DAT_00809db0 + local_14) * 2);
      iVar3 = local_1c;
      do {
        if ((-1 < iVar3) && (iVar3 < 0x20000)) {
          iVar2 = (DAT_00809db0 - DAT_00809db4) + iVar8;
          if ((-1 < iVar2) &&
             ((iVar2 < 0x100 &&
              (*(short *)((int)&DAT_00809dc0 + DAT_00809db0 * 2 + iVar3 + local_14 * -2) != -1)))) {
            DAT_00809db4 = iVar7;
            DAT_00809db0 = DAT_00809db0 - local_14;
            return;
          }
          if (((-1 < iVar4) && (iVar4 < 0x100)) && (*psVar6 != -1)) {
            DAT_00809db4 = iVar7;
            DAT_00809db0 = DAT_00809db0 + local_14;
            return;
          }
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + 0x200;
        psVar6 = psVar6 + 0x100;
      } while (BEA_LOOP_GUARD((iVar7 <= iVar5)));
    }
    for (iVar3 = (DAT_00809db0 - DAT_00809db4) + iVar8; BEA_LOOP_GUARD((iVar3 <= iVar4)); iVar3 = iVar3 + 1) {
      if ((-1 < iVar3) && (iVar3 < 0x100)) {
        if ((-1 < iVar8) &&
           ((iVar8 < 0x100 && (*(short *)((int)&DAT_00809dc0 + (iVar1 + iVar3) * 2) != -1)))) {
          DAT_00809db0 = iVar3;
          DAT_00809db4 = DAT_00809db4 - local_14;
          return;
        }
        if (((-1 < iVar5) && (iVar5 < 0x100)) &&
           (*(short *)((int)&DAT_00809dc0 + ((DAT_00809db4 + iVar7) * 0x100 + iVar3) * 2) != -1)) {
          DAT_00809db0 = iVar3;
          DAT_00809db4 = DAT_00809db4 + local_14;
          return;
        }
      }
    }
    local_14 = local_14 + 1;
    iVar1 = iVar1 + -0x100;
    iVar8 = iVar8 + -1;
    local_1c = local_1c + -0x200;
    iVar4 = iVar4 + 1;
    if (0xff < local_14) {
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004beb30, ap_004beb30));
