// auto-ported from 004de860_FUN_004de860.c (FUN_004de860, 67 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_0054b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0054b800_t> FUN_0054b800 = {(FUN_0054b800_t)0x0054b800};

static void BEA_THISCALL ap_004de860(void * this_)
{
  int iVar1;
  int iVar2;
  
  if (*(int **)((int)this_ + 0x4c) != (int *)0x0) {
    iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x4c), 0x24);
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x15c)) {
      do {
        FUN_0054b800(bea_arg(*(undefined4 *)(*(int *)(iVar1 + 0x160) + iVar2 * 4)), bea_arg(this_), bea_arg(0));
        iVar2 = iVar2 + 1;
      } while (BEA_LOOP_GUARD((iVar2 < *(int *)(iVar1 + 0x15c))));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004de860, ap_004de860));
