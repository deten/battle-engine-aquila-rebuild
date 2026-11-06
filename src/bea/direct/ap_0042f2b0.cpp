// auto-ported from 0042f2b0_vslot3.c (CUnitStatement::vslot3, 285 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CUnitStatement;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_CPhysicsScript_006258ac ((char*)0x006258ac)
typedef uint32_t (BEA_THISCALL* FUN_0042f3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042f3d0_t> FUN_0042f3d0 = {(FUN_0042f3d0_t)0x0042f3d0};
typedef undefined4 * (BEA_CDECL* FUN_00431bb0_t)(uint32_t);
static const bea_guard<FUN_00431bb0_t> FUN_00431bb0 = {(FUN_00431bb0_t)0x00431bb0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0042f2b0(CUnitStatement * this_, void *param_1)
{
  void *this_00;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *this_01;
  int iVar3;
  CUnitStatement *pCVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  this_00 = param_1;
  pCVar4 = this_ + 0xb;
  do {
    pCVar4 = pCVar4 + 1;
    FUN_00548570(bea_arg(this_00), bea_arg(pCVar4), bea_arg(1));
  } while (BEA_LOOP_GUARD((*pCVar4 != (CUnitStatement)0x0)));
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_006258ac), bea_arg(0x7c5));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = ((void*)0x005d988c);
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *(undefined4 **)(this_ + 0x10c) = puVar1;
  FUN_00548570(bea_arg(this_00), bea_arg(&local_8), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(&local_4), bea_arg(4));
  piVar2 = (int *)FUN_00431bb0(bea_arg(local_8));
  puVar1[1] = piVar2;
  if (piVar2 == (int *)0x0) {
    iVar3 = local_4;
    if (0 < local_4) {
      do {
        FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(1));
        iVar3 = iVar3 + -1;
      } while (BEA_LOOP_GUARD((iVar3 != 0)));
    }
  }
  else {
    bea_vcall<uint32_t>(piVar2, 0xc, this_00);
  }
  FUN_00548570(bea_arg(this_00), bea_arg(&local_8), bea_arg(4));
  if (local_8 == 0) {
    this_01 = (undefined4 *)
              FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_006258ac), bea_arg(0x29a));
    if (this_01 != (undefined4 *)0x0) {
      *this_01 = ((void*)0x005d988c);
      this_01[1] = 0;
      this_01[2] = 0;
      puVar1[2] = this_01;
      FUN_0042f3d0(bea_arg(this_01), bea_arg(this_00));
      return;
    }
    puVar1[2] = 0;
    FUN_0042f3d0(bea_arg((void *)0x0), bea_arg(this_00));
    return;
  }
  puVar1[2] = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042f2b0, ap_0042f2b0));
