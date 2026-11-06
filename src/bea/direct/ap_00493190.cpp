// auto-ported from 00493190_FUN_00493190.c (FUN_00493190, 862 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_WheelBase_0062dca0 ((char*)0x0062dca0)
#define s_WheelMotion_0062cb54 ((char*)0x0062cb54)
#define s_C__dev_ONSLAUGHT2_MCBuggy_cpp_0062dc80 ((char*)0x0062dc80)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef int (BEA_THISCALL* FUN_004aa680_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa680_t> FUN_004aa680 = {(FUN_004aa680_t)0x004aa680};
typedef undefined4 (BEA_THISCALL* FUN_004aa820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004aa820_t> FUN_004aa820 = {(FUN_004aa820_t)0x004aa820};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00493190(void * this_, void *param_1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *this_00;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x40);
  undefined1 (&local_3c)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x50 - 0x3c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  *(undefined4 *)((int)this_ + 0x18) = 1;
  for (iVar1 = FUN_004aa820(bea_arg(param_1), bea_arg(s_WheelBase_0062dca0), bea_arg(1)); BEA_LOOP_GUARD((iVar1 != 0));
      iVar1 = FUN_004aa820(bea_arg(param_1), bea_arg(s_WheelBase_0062dca0), bea_arg(iVar1))) {
    iVar1 = *(int *)((int)this_ + 0x18) + 1;
    *(int *)((int)this_ + 0x18) = iVar1;
  }
  iVar1 = *(int *)((int)this_ + 0x18) + -1;
  *(int *)((int)this_ + 0x18) = iVar1;
  iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar1 * 0x10), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCBuggy_cpp_0062dc80), bea_arg(0x44));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  *(int *)((int)this_ + 0xc) = iVar1;
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x18) << 2), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCBuggy_cpp_0062dc80), bea_arg(0x45));
  *(undefined4 *)((int)this_ + 0x10) = uVar2;
  iVar1 = 0;
  if (0 < *(int *)((int)this_ + 0x18)) {
    iVar4 = 0;
    do {
      *(undefined4 *)(*(int *)((int)this_ + 0x10) + iVar1 * 4) = 0;
      puVar3 = (undefined4 *)(iVar4 + *(int *)((int)this_ + 0xc));
      iVar1 = iVar1 + 1;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      iVar4 = iVar4 + 0x10;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0x18))));
  }
  iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)param_1 + 0x15c) << 4), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCBuggy_cpp_0062dc80), bea_arg(0x4d));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  *(int *)((int)this_ + 0x28) = iVar1;
  iVar1 = *(int *)((int)param_1 + 0x15c);
  iVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar1 * 0x30), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCBuggy_cpp_0062dc80), bea_arg(0x4e));
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar5 = iVar4;
    if (-1 < iVar1 + -1) {
      do {
        FUN_004011b0(bea_arg(iVar5), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
        iVar1 = iVar1 + -1;
        iVar5 = iVar5 + 0x30;
      } while (BEA_LOOP_GUARD((iVar1 != 0)));
    }
  }
  *(int *)((int)this_ + 0x24) = iVar4;
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)param_1 + 0x15c) << 2), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCBuggy_cpp_0062dc80), bea_arg(0x4f));
  *(undefined4 *)((int)this_ + 0x2c) = uVar2;
  iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)param_1 + 0x15c) << 4), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCBuggy_cpp_0062dc80), bea_arg(0x51));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  *(int *)((int)this_ + 0x34) = iVar1;
  iVar1 = *(int *)((int)param_1 + 0x15c);
  iVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar1 * 0x30), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCBuggy_cpp_0062dc80), bea_arg(0x52));
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar5 = iVar4;
    if (-1 < iVar1 + -1) {
      do {
        FUN_004011b0(bea_arg(iVar5), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
        iVar1 = iVar1 + -1;
        iVar5 = iVar5 + 0x30;
      } while (BEA_LOOP_GUARD((iVar1 != 0)));
    }
  }
  *(int *)((int)this_ + 0x30) = iVar4;
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)param_1 + 0x15c) << 2), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCBuggy_cpp_0062dc80), bea_arg(0x53));
  *(undefined4 *)((int)this_ + 0x38) = uVar2;
  iVar1 = 0;
  if (0 < *(int *)((int)param_1 + 0x15c)) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)((int)this_ + 0x2c) + -4 + iVar1 * 4) = 0xbf800000;
      *(undefined4 *)(*(int *)((int)this_ + 0x38) + -4 + iVar1 * 4) = 0xbf800000;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)param_1 + 0x15c))));
  }
  uVar2 = FUN_004aa630(bea_arg(param_1), bea_arg(s_WheelMotion_0062cb54));
  iVar4 = FUN_004aa680(bea_arg(param_1), bea_arg(uVar2));
  iVar1 = *(int *)(iVar4 + 0x14);
  iVar4 = *(int *)(iVar4 + 0x18);
  *(int *)((int)this_ + 0x20) = iVar1;
  iVar1 = (iVar4 - iVar1) + 1;
  *(int *)((int)this_ + 0x1c) = iVar1;
  iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar1 * *(int *)((int)this_ + 0x18) * 0x10), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCBuggy_cpp_0062dc80), bea_arg(0x66));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  *(int *)((int)this_ + 0xc4) = iVar1;
  iVar1 = 0;
  if (0 < *(int *)((int)this_ + 0x18)) {
    do {
      iVar4 = iVar1 + 1;
      this_00 = (void *)FUN_004aa820(bea_arg(param_1), bea_arg(s_WheelBase_0062dca0), bea_arg(iVar4));
      iVar5 = 0;
      if (0 < *(int *)((int)this_ + 0x1c)) {
        do {
          FUN_004b0fb0(bea_arg(this_00), bea_arg(*(int *)((int)this_ + 0x20) + iVar5), bea_arg(0), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(local_3c), bea_arg(&local_4c), bea_arg(1), bea_arg(0), bea_arg(0));
          puVar3 = (undefined4 *)
                   ((*(int *)((int)this_ + 0x1c) * iVar1 + iVar5) * 0x10 + *(int *)((int)this_ + 0xc4)
                   );
          iVar5 = iVar5 + 1;
          *puVar3 = local_4c;
          puVar3[1] = local_48;
          puVar3[2] = local_44;
          puVar3[3] = local_40;
        } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)this_ + 0x1c))));
      }
      iVar1 = iVar4;
    } while (BEA_LOOP_GUARD((iVar4 < *(int *)((int)this_ + 0x18))));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00493190, ap_00493190));
