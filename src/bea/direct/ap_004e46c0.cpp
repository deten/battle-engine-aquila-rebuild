// auto-ported from 004e46c0_vslot9.c (CSpawnPoint::vslot9, 251 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CSpawnPoint;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_00855110 GLOBAL_AT(int, 0x00855110)
#define DAT_008a9bb4 GLOBAL_AT(int, 0x008a9bb4)
#define DAT_008a9bb8 GLOBAL_AT(int, 0x008a9bb8)
#define DAT_008a9bbc GLOBAL_AT(int, 0x008a9bbc)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};

static uint32_t BEA_THISCALL ap_004e46c0(CSpawnPoint * this_, int param_1)
{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  this_[0x2c] = (CSpawnPoint)((byte)this_[0x2c] & 0xfd);
  fVar4 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(puVar1));
  if (fVar4 < (float10)*(float *)(param_1 + 0xc)) {
    fVar4 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(puVar1));
    *(float *)(param_1 + 0xc) = (float)fVar4;
  }
  CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
  FUN_004e5a80(bea_arg(&DAT_00855110), bea_arg(this_));
  iVar2 = *(int *)(param_1 + 0x3c0);
  *(int *)(this_ + 0x7c) = iVar2;
  if (DAT_008a9bb4 != 0) {
    if (iVar2 == 1) {
      *(undefined4 *)(this_ + 0x7c) = 2;
    }
    else if (iVar2 == 2) {
      *(undefined4 *)(this_ + 0x7c) = 1;
    }
  }
  *(undefined4 *)(this_ + 0x84) = *puVar1;
  *(undefined4 *)(this_ + 0x88) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x90) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this_ + 0xc4) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this_ + 200) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this_ + 0xcc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this_ + 0x120) = *(undefined4 *)(param_1 + 0xa0);
  if (*(int *)(this_ + 0x7c) == 1) {
    *(undefined4 *)(this_ + 0x440) = DAT_008a9bb8;
  }
  else {
    *(undefined4 *)(this_ + 0x440) = DAT_008a9bbc;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(this_ + 0x448) = 1;
  *(undefined4 *)(this_ + 0x444) = uVar3;
  return *(uint32_t*)((char*)this_ + 0x444);
  return *(uint32_t*)((char*)this_ + 0x444);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e46c0, ap_004e46c0));
