// auto-ported from 00489b40_vslot50.c (CInfantryUnit::vslot50, 671 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CInfantryUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_0067a6b8 GLOBAL_AT(int, 0x0067a6b8)
#define DAT_0067a6bc GLOBAL_AT(int, 0x0067a6bc)
#define DAT_0067a6c0 GLOBAL_AT(int, 0x0067a6c0)
#define DAT_0067a6c4 GLOBAL_AT(int, 0x0067a6c4)
typedef undefined4 (BEA_THISCALL* CGroundUnit__vslot50_t)(uint32_t);
static const bea_guard<CGroundUnit__vslot50_t> CGroundUnit__vslot50 = {(CGroundUnit__vslot50_t)0x0047ce80};
typedef int (BEA_THISCALL* FUN_00401fa0_t)(uint32_t);
static const bea_guard<FUN_00401fa0_t> FUN_00401fa0 = {(FUN_00401fa0_t)0x00401fa0};
typedef uint32_t (BEA_THISCALL* FUN_00426480_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00426480_t> FUN_00426480 = {(FUN_00426480_t)0x00426480};
typedef uint32_t (BEA_THISCALL* FUN_0047cea0_t)(uint32_t);
static const bea_guard<FUN_0047cea0_t> FUN_0047cea0 = {(FUN_0047cea0_t)0x0047cea0};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static undefined4 BEA_THISCALL ap_00489b40(CInfantryUnit * this_)
{
  CInfantryUnit *pCVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;

  alignas(16) uint8_t bea_frame_[0x3e0] = {};   // the original stack frame (emulate_frame)
  undefined ** &local_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3e0 - 0x3d8);
  undefined4 &uStack_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d4);
  undefined4 &uStack_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d0);
  undefined4 &uStack_3cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3cc);
  undefined4 &uStack_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3c8);
  undefined4 &local_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x338);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3e0 - 0x1c);
  uint &local_18 = *reinterpret_cast<uint *>(bea_frame_ + 0x3e0 - 0x18);
  CInfantryUnit * &local_14 = *reinterpret_cast<CInfantryUnit * *>(bea_frame_ + 0x3e0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x4);
  iVar4 = CGroundUnit__vslot50(bea_arg((CGroundUnit *)this_));
  if (iVar4 == 0) {
    return 0;
  }
  *(float *)(this_ + 0x264) = DAT_00672fd0 + 15.0f;
  FUN_00426480(bea_arg(*(void **)(this_ + 0x38)), bea_arg(0xffffffff));
  piVar5 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xe8)));
  if (piVar5 != (int *)0x0) {
    FUN_0048dcf0(bea_arg(&local_3d8));
    local_3d8 = ((void*)0x005d8c80);
    local_18 = 0;
    local_c = 0;
    local_4 = 0;
    local_8 = 0;
    iVar4 = *(int *)(*(int *)(this_ + 0x164) + 0xe8);
    iVar6 = 0;
    piVar2 = (int *)*DAT_008553f8;
    DAT_008553f8[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = *piVar2;
    }
    while (((local_1c != 0))) {
      if (iVar6 == iVar4) goto LAB_00489c2a;
      iVar6 = iVar6 + 1;
      piVar2 = *(int **)(DAT_008553f8[2] + 4);
      DAT_008553f8[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        local_1c = 0;
      }
      else {
        local_1c = *piVar2;
      }
    }
    local_1c = 0;
LAB_00489c2a:
    local_338 = *(undefined4 *)(this_ + 0x138);
    local_10 = 1;
    local_14 = this_;
    iVar4 = bea_vcall<uint32_t>(this_, 0x10c);
    if (iVar4 == 0) {
      iVar4 = FUN_00401fa0(bea_arg(this_));
      local_18 = -(uint)(iVar4 != 0) & 2;
    }
    else {
      local_18 = 1;
    }
    uStack_3d4 = *(undefined4 *)(this_ + 0x1c);
    uStack_3d0 = *(undefined4 *)(this_ + 0x20);
    uStack_3cc = *(undefined4 *)(this_ + 0x24);
    uStack_3c8 = *(undefined4 *)(this_ + 0x28);
    bea_vcall<uint32_t>(piVar5, 0x24, &local_3d8);
  }
  if (*(int *)(*(int *)(this_ + 0x164) + 0x10) != 0) {
    *(undefined4 *)(this_ + 0x274) = 0;
    FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0x10)), bea_arg(this_ + 0x270), bea_arg(DAT_0067a6b8), bea_arg(DAT_0067a6bc), bea_arg(DAT_0067a6c0), bea_arg(DAT_0067a6c4), bea_arg(0), bea_arg(0));
    puVar3 = *(undefined4 **)(this_ + 0x274);
    pCVar1 = this_ + 0x1c;
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[0x12] == 0x461c4000) {
        puVar3[0x20] = *(undefined4 *)pCVar1;
        puVar3[0x21] = *(undefined4 *)(this_ + 0x20);
        puVar3[0x22] = *(undefined4 *)(this_ + 0x24);
        puVar3[0x23] = *(undefined4 *)(this_ + 0x28);
        puVar3[0x10] = *(undefined4 *)pCVar1;
        puVar3[0x11] = *(undefined4 *)(this_ + 0x20);
        puVar3[0x12] = *(undefined4 *)(this_ + 0x24);
        puVar3[0x13] = *(undefined4 *)(this_ + 0x28);
        *puVar3 = *(undefined4 *)pCVar1;
        puVar3[1] = *(undefined4 *)(this_ + 0x20);
        puVar3[2] = *(undefined4 *)(this_ + 0x24);
        puVar3[3] = *(undefined4 *)(this_ + 0x28);
        iVar4 = puVar3[0x2b];
      }
      else {
        puVar3[0x10] = *puVar3;
        puVar3[0x11] = puVar3[1];
        puVar3[0x12] = puVar3[2];
        puVar3[0x13] = puVar3[3];
        *puVar3 = *(undefined4 *)pCVar1;
        puVar3[1] = *(undefined4 *)(this_ + 0x20);
        puVar3[2] = *(undefined4 *)(this_ + 0x24);
        puVar3[3] = *(undefined4 *)(this_ + 0x28);
        iVar4 = puVar3[0x2b];
      }
      if (iVar4 != -0x40800000) {
        puVar3[0x2b] = bea_piece32(DAT_00672fd0);
      }
    }
  }
  FUN_0047cea0(bea_arg(this_));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00489b40, ap_00489b40));
