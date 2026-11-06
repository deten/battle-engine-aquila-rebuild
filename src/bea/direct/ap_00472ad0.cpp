// auto-ported from 00472ad0_FUN_00472ad0.c (FUN_00472ad0, 108 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};

static void BEA_THISCALL ap_00472ad0(void * this_)
{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  if (*(char *)((int)this_ + 0x1c) != '\0') {
    iVar4 = 5;
    if (*(int *)((int)this_ + 0x44) == 2) {
      iVar4 = 3;
    }
    iVar1 = *(int *)((int)this_ + 0x20);
    *(int *)((int)this_ + 0x20) = iVar1 + 1;
    bVar3 = false;
    while (BEA_LOOP_GUARD(((iVar2 = *(int *)((int)this_ + 0x20), iVar4 < iVar2 ||
           ((*(int *)((int)this_ + iVar2 * 4 + 0x2c) == 0 && (!bVar3))))))) {
      *(int *)((int)this_ + 0x20) = iVar2 + 1;
      if (iVar4 < iVar2 + 1) {
        bVar3 = true;
        *(int *)((int)this_ + 0x20) = iVar1;
      }
    }
    if (iVar4 < *(int *)((int)this_ + 0x20)) {
      *(int *)((int)this_ + 0x20) = iVar4;
    }
    if (*(int *)((int)this_ + 0x20) != iVar1) {
      FUN_00468770(0);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472ad0, ap_00472ad0));
