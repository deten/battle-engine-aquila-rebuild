// auto-ported from 00505960_FUN_00505960.c (FUN_00505960, 333 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00855128 GLOBAL_AT(undefined4*, 0x00855128)
#define DAT_00855120 GLOBAL_AT(undefined4*, 0x00855120)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_C__dev_ONSLAUGHT2_WaypointManage_0063d1f8 ((char*)0x0063d1f8)
#define s__d__d_0063d1f0 ((char*)0x0063d1f0)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00505960(void * this_, void *param_1, int param_2, int param_3)
{
  void *this_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  this_00 = param_1;
  local_4 = this_;
  FUN_00548570(bea_arg(param_1), bea_arg(&param_1), bea_arg(1));
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((char)param_1 + 1), bea_arg(0x25), bea_arg(s_C__dev_ONSLAUGHT2_WaypointManage_0063d1f8), bea_arg(0x1a));
  *(undefined4 *)((int)this_ + 4) = uVar1;
  iVar3 = 0;
  if ('\0' < (char)param_1) {
    do {
      FUN_00548570(bea_arg(this_00), bea_arg(*(int *)((int)this_ + 4) + iVar3), bea_arg(1));
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 < (char)param_1)));
  }
  *(undefined1 *)(*(int *)((int)this_ + 4) + iVar3) = 0;
  if (param_2 < 0x21) {
    FUN_00548570(bea_arg(this_00), bea_arg(&param_2), bea_arg(2));
    iVar3 = 0;
    DAT_00855128 = DAT_00855120;
    if (DAT_00855120 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *DAT_00855120;
    }
    while (BEA_LOOP_GUARD((iVar2 != 0))) {
      if (iVar3 == (short)param_2) {
        FUN_004e5a80(bea_arg((void *)((int)this_ + 8)), bea_arg(iVar2));
      }
      DAT_00855128 = (int *)DAT_00855128[1];
      iVar3 = iVar3 + 1;
      if (DAT_00855128 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *DAT_00855128;
      }
    }
  }
  else {
    FUN_00548570(bea_arg(this_00), bea_arg(&local_4), bea_arg(4));
    iVar3 = param_3;
    if (local_4 != (void *)0x0) {
      do {
        FUN_00548570(bea_arg(this_00), bea_arg(&param_2), bea_arg(2));
        FUN_00441740(&DAT_0066f580,s__d__d_0063d1f0,(int)local_4,(int)(short)param_2);
        if (((-1 < (short)param_2) && (iVar2 = *(int *)(iVar3 + (short)param_2 * 4), iVar2 != 0)) &&
           ((*(uint *)(iVar2 + 0x34) & 0x1000) != 0)) {
          FUN_004e5a80(bea_arg((void *)((int)this_ + 8)), bea_arg(iVar2));
        }
        local_4 = (void *)((int)local_4 + -1);
      } while (BEA_LOOP_GUARD((local_4 != (void *)0x0)));
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00505960, ap_00505960));
