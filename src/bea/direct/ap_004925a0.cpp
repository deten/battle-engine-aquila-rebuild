// auto-ported from 004925a0_FUN_004925a0.c (FUN_004925a0, 206 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__GetNextEntryWithinLine_n_0062dc04 ((char*)0x0062dc04)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_THISCALL* FUN_004922f0_t)(uint32_t);
static const bea_guard<FUN_004922f0_t> FUN_004922f0 = {(FUN_004922f0_t)0x004922f0};
typedef undefined4 (BEA_THISCALL* FUN_004924b0_t)(uint32_t);
static const bea_guard<FUN_004924b0_t> FUN_004924b0 = {(FUN_004924b0_t)0x004924b0};

static int BEA_THISCALL ap_004925a0(void * this_)
{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this_ + 100) == 0) {
    FUN_00441740(&DAT_0066f580,s_WARNING__GetNextEntryWithinLine_n_0062dc04);
    return 0;
  }
  if (*(undefined4 **)this_ != (undefined4 *)0x0) {
    *(undefined4 *)this_ = **(undefined4 **)this_;
  }
  iVar1 = *(int *)this_;
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar2 = FUN_004924b0(bea_arg(this_));
    if ((iVar2 == 0) && (iVar2 = FUN_004922f0(bea_arg(this_)), iVar2 == 0)) break;
    iVar2 = *(int *)((int)this_ + 0x60);
    if ((((-1 < iVar2) && (iVar2 < 5)) && (-1 < *(short *)((int)this_ + 0x5c))) &&
       (((iVar2 = 0x40 >> (4U - (char)iVar2 & 0x1f), *(short *)((int)this_ + 0x5c) < iVar2 &&
         (-1 < *(short *)((int)this_ + 0x5e))) && (*(short *)((int)this_ + 0x5e) < iVar2)))) {
      iVar1 = *(int *)(*(int *)(*(int *)((int)this_ + 0x90) + *(int *)((int)this_ + 0x60) * 4) + 4 +
                      ((0x40 >> (4U - (char)*(int *)((int)this_ + 0x60) & 0x1f)) *
                       (int)*(short *)((int)this_ + 0x5e) + (int)*(short *)((int)this_ + 0x5c)) * 8);
      *(int *)this_ = iVar1;
    }
  }
  *(undefined4 *)((int)this_ + 100) = 0;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004925a0, ap_004925a0));
