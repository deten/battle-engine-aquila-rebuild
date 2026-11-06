// auto-ported from 0042f8a0_FUN_0042f8a0.c (FUN_0042f8a0, 221 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_CPhysicsScript_006258ac ((char*)0x006258ac)
typedef uint32_t (BEA_THISCALL* FUN_0042f8a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042f8a0_t> FUN_0042f8a0 = {(FUN_0042f8a0_t)0x0042f8a0};
typedef undefined4 * (BEA_CDECL* FUN_00434300_t)(uint32_t);
static const bea_guard<FUN_00434300_t> FUN_00434300 = {(FUN_00434300_t)0x00434300};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0042f8a0(void * this_, void *param_1)
{
  void *this_00;
  int *piVar1;
  undefined4 *this_01;
  int iVar2;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  this_00 = param_1;
  FUN_00548570(bea_arg(param_1), bea_arg(&local_8), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(&local_4), bea_arg(4));
  piVar1 = (int *)FUN_00434300(bea_arg(local_8));
  *(int **)((int)this_ + 4) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = local_4;
    if (0 < local_4) {
      do {
        FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(1));
        iVar2 = iVar2 + -1;
      } while (BEA_LOOP_GUARD((iVar2 != 0)));
    }
  }
  else {
    bea_vcall<uint32_t>(piVar1, 0xc, this_00);
  }
  FUN_00548570(bea_arg(this_00), bea_arg(&local_8), bea_arg(4));
  if (local_8 != 0) {
    *(undefined4 *)((int)this_ + 8) = 0;
    return;
  }
  this_01 = (undefined4 *)
            FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_006258ac), bea_arg(0x32e));
  if (this_01 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this_ + 8) = 0;
    FUN_0042f8a0(bea_arg((void *)0x0), bea_arg(this_00));
    return;
  }
  *this_01 = ((void*)0x005d98a8);
  this_01[1] = 0;
  this_01[2] = 0;
  *(undefined4 **)((int)this_ + 8) = this_01;
  FUN_0042f8a0(bea_arg(this_01), bea_arg(this_00));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042f8a0, ap_0042f8a0));
