// auto-ported from 00500d10_FUN_00500d10.c (FUN_00500d10, 73 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00500e70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500e70_t> FUN_00500e70 = {(FUN_00500e70_t)0x00500e70};

static void BEA_CDECL ap_00500d10(int *param_1)
{
  void *this_local;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar1 = 0;
    if (0 < param_1[1]) {
      iVar3 = 0;
      do {
        if ((*(int *)(*(int *)(*param_1 + iVar3) + 0x88) == iVar2) &&
           (this_local = (void *)((int *)(*param_1 + iVar3))[1], this_local != (void *)0x0)) {
          FUN_00500e70(bea_arg(this_local), bea_arg(1));
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x24;
      } while (BEA_LOOP_GUARD((iVar1 < param_1[1])));
    }
    iVar2 = iVar2 + 1;
  } while (BEA_LOOP_GUARD((iVar2 < 6)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500d10, ap_00500d10));
