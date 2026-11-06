// auto-ported from 004a4790_FUN_004a4790.c (FUN_004a4790, 119 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef void* (BEA_THISCALL* FUN_004e5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5c90_t> FUN_004e5c90 = {(FUN_004e5c90_t)0x004e5c90};

static void BEA_THISCALL ap_004a4790(void * this_)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this_ + 0x18);
  if (iVar1 < *(int *)((int)this_ + 0x14) + -1) {
    *(int *)((int)this_ + 0x18) = iVar1 + 1;
  }
  else {
    if (*(int *)((int)this_ + 0x14) < 3) {
      return;
    }
    *(undefined4 *)((int)this_ + 0x18) = 0;
  }
  piVar2 = (int *)FUN_004e5c90(bea_arg((void *)((int)this_ + 8)), bea_arg(*(undefined4 *)((int)this_ + 0x18)));
  iVar3 = bea_vcall<uint32_t>(piVar2, 0xc);
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar3 != 0) {
      FUN_00468770(0);
      return;
    }
    iVar3 = *(int *)((int)this_ + 0x18) + 1;
    *(int *)((int)this_ + 0x18) = iVar3;
    if (*(int *)((int)this_ + 0x14) <= iVar3) break;
    piVar2 = (int *)FUN_004e5c90(bea_arg((void *)((int)this_ + 8)), bea_arg(iVar3));
    iVar3 = bea_vcall<uint32_t>(piVar2, 0xc);
  }
  *(int *)((int)this_ + 0x18) = iVar1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4790, ap_004a4790));
