// auto-ported from 004eae10_vslot9.c (CStart::vslot9, 266 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CStart;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_00855100 GLOBAL_AT(int, 0x00855100)
#define DAT_008a9bb4 GLOBAL_AT(int, 0x008a9bb4)
#define DAT_008a9bb8 GLOBAL_AT(int, 0x008a9bb8)
#define DAT_008a9bbc GLOBAL_AT(int, 0x008a9bbc)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_004eaf20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004eaf20_t> FUN_004eaf20 = {(FUN_004eaf20_t)0x004eaf20};

static uint32_t BEA_THISCALL ap_004eae10(CStart * this_, int param_1)
{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  puVar1 = (undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  this_[0x2c] = (CStart)((byte)this_[0x2c] & 0xfd);
  fVar3 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(puVar1));
  if (fVar3 < (float10)*(float *)(param_1 + 0xc)) {
    fVar3 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(puVar1));
    *(float *)(param_1 + 0xc) = (float)fVar3;
  }
  CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
  FUN_004e5a80(bea_arg(&DAT_00855100), bea_arg(this_));
  iVar2 = *(int *)(param_1 + 0x3c0);
  *(int *)(this_ + 0x80) = iVar2;
  if (DAT_008a9bb4 != 0) {
    if (iVar2 == 1) {
      *(undefined4 *)(this_ + 0x80) = 2;
    }
    else if (iVar2 == 2) {
      *(undefined4 *)(this_ + 0x80) = 1;
    }
  }
  *(undefined4 *)(this_ + 0x88) = *puVar1;
  *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0x90) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x94) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this_ + 200) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this_ + 0xcc) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this_ + 0xd0) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this_ + 0x124) = *(undefined4 *)(param_1 + 0xa0);
  if (*(int *)(this_ + 0x80) == 1) {
    *(undefined4 *)(this_ + 0x444) = DAT_008a9bb8;
  }
  else {
    *(undefined4 *)(this_ + 0x444) = DAT_008a9bbc;
  }
  *(undefined4 *)(this_ + 0x448) = *(undefined4 *)(param_1 + 0x3bc);
  return FUN_004eaf20(bea_arg(this_), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004eae10, ap_004eae10));
