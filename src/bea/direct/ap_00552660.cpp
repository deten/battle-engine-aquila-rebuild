// auto-ported from 00552660_FUN_00552660.c (FUN_00552660, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static void BEA_THISCALL ap_00552660(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_0089d680 == '\0') {
    if (*(char *)((int)this_ + 0x704) == '\x01') {
      iVar2 = 0;
      if (0 < *(int *)((int)this_ + 0x5bc)) {
        puVar1 = (undefined4 *)((int)this_ + 0x10);
        do {
          FUN_00401000(bea_arg(puVar1 + -1), bea_arg(0));
          *puVar1 = 0x46800000;
          iVar2 = iVar2 + 1;
          puVar1 = puVar1 + 2;
        } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0x5bc))));
        return;
      }
    }
    else {
      *(undefined4 *)((int)this_ + *(int *)((int)this_ + 0x5bc) * 8 + 8) = 0xbf800000;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00552660, ap_00552660));
