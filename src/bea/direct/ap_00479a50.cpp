// auto-ported from 00479a50_vslot117.c (CGillM::vslot117, 237 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGillM;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_LegMotion_00623074 ((char*)0x00623074)
#define s_C__dev_ONSLAUGHT2_GillM_cpp_0062c9e8 ((char*)0x0062c9e8)
typedef void * (BEA_THISCALL* FUN_004983b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004983b0_t> FUN_004983b0 = {(FUN_004983b0_t)0x004983b0};
typedef uint32_t (BEA_THISCALL* FUN_00498bf0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00498bf0_t> FUN_00498bf0 = {(FUN_00498bf0_t)0x00498bf0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00479a50(CGillM * this_, int param_1)
{
  void *this_00;
  int iVar1;
  undefined4 *this_01;
  CGillM *pCVar2;
  char *pcVar3;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  pcVar3 = s_LegMotion_00623074;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar1 = FUN_004aa630(bea_arg(this_00), bea_arg(pcVar3));
  if (iVar1 != -1) {
    this_01 = (undefined4 *)
              FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xf0), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_GillM_cpp_0062c9e8), bea_arg(0x2d));
    pCVar2 = (CGillM *)0x0;
    if (this_01 == (undefined4 *)0x0) {
      this_01 = (undefined4 *)0x0;
    }
    else {
      if (this_ != (CGillM *)0x0) {
        pCVar2 = this_ + 8;
      }
      FUN_004983b0(bea_arg(this_01), bea_arg(pCVar2));
      *this_01 = ((void*)0x005dbc74);
    }
    *(undefined4 **)(this_ + 0x70) = this_01;
    iVar1 = *(int *)(param_1 + 0x3bc);
    FUN_00498bf0(bea_arg(this_01), bea_arg(*(undefined4 *)(iVar1 + 0x144)), bea_arg(*(undefined4 *)(iVar1 + 0x148)), bea_arg(*(undefined4 *)(iVar1 + 0x14c)), bea_arg(0x4059999a), bea_arg(0x3f7d70a4), bea_arg(*(undefined4 *)(iVar1 + 0x150)), bea_arg(*(undefined4 *)(iVar1 + 0x140)));
    return;
  }
  *(undefined4 *)(this_ + 0x70) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00479a50, ap_00479a50));
