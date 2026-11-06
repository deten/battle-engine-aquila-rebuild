// auto-ported from 0047c730_vslot9.c (CGroundUnit::vslot9, 379 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (8 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CUnit;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define s_Thruster_00623080 ((char*)0x00623080)
#define s_C__dev_ONSLAUGHT2_GroundUnit_cpp_0062cb0c ((char*)0x0062cb0c)
typedef uint32_t (BEA_THISCALL* CUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot9_t> CUnit__vslot9 = {(CUnit__vslot9_t)0x004f86d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0047c730(CGroundUnit * this_, int param_1)
{
  undefined4 uVar1;
  void *this_00;
  uint uVar2;
  int iVar3;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x48);
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x44);
  undefined1 (&local_3c)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x50 - 0x3c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  iVar3 = 1;
  *(undefined4 *)(param_1 + 0x90) = 1;
  CUnit__vslot9(bea_arg((CUnit *)this_), bea_arg(param_1));
  *(undefined4 *)(this_ + 600) = 0;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 200);
  *(undefined4 *)(this_ + 0x100) = uVar1;
  *(undefined4 *)(this_ + 0x104) = uVar1;
  *(undefined4 *)(this_ + 0x108) = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xd0);
  if (*(int *)(*(int *)(this_ + 0x164) + 0xc) != 0) {
    while(BEA_LOOP_GUARD(( true ))) {
      bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_Thruster_00623080,iVar3,&local_4c,local_3c,1,0);
      if (((local_4c == 0.0f) && (fStack_48 == 0.0f)) && (fStack_44 == 0.0f)) break;
      this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x10), bea_arg(s_C__dev_ONSLAUGHT2_GroundUnit_cpp_0062cb0c), bea_arg(0x23));
      if (this_00 == (void *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        *(undefined4 *)((int)this_00 + 4) = 0;
        FUN_004cb040(bea_arg(this_00));
      }
      FUN_004e5b20(bea_arg(this_ + 0x1d4), bea_arg(this_00));
      iVar3 = iVar3 + 1;
    }
  }
  *(undefined4 *)(this_ + 0x25c) = 0;
  *(undefined4 *)(this_ + 0x250) = 0;
  *(undefined4 *)(this_ + 0x254) = 0;
  if ((*(int *)(this_ + 0x164) != 0) && (*(int *)(*(int *)(this_ + 0x164) + 0x10c) != 0)) {
    uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar2 = uVar2 & 0x8000ffff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
    }
    *(float *)(this_ + 0x25c) = (float)(int)uVar2 * 9.58738e-05f;
  }
  *(undefined4 *)(this_ + 0x1e4) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047c730, ap_0047c730));
