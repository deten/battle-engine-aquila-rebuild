// auto-ported from 00516450_FUN_00516450.c (FUN_00516450, 95 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0088a510 GLOBAL_AT(int, 0x0088a510)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_00516450(void)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = &DAT_0088a510;
  do {
    iVar3 = 0;
    if (0 < *piVar2) {
      do {
        iVar1 = *(int *)(piVar2[-1] + iVar3 * 4);
        if (iVar1 != 0) {
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
          *(undefined4 *)(piVar2[-1] + iVar3 * 4) = 0;
        }
        iVar3 = iVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar3 < *piVar2)));
    }
    if (piVar2[-1] != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2[-1]));
      piVar2[-1] = 0;
    }
    piVar2 = piVar2 + 0x10a;
  } while (BEA_LOOP_GUARD(((int)piVar2 < 0x896868)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00516450, ap_00516450));
