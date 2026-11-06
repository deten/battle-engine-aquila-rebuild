// auto-ported from 005007f0_FUN_005007f0.c (FUN_005007f0, 457 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_vbuftexture_cp_00633d5c ((char*)0x00633d5c)
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef void * (BEA_THISCALL* FUN_00488210_t)(uint32_t);
static const bea_guard<FUN_00488210_t> FUN_00488210 = {(FUN_00488210_t)0x00488210};
typedef int (BEA_THISCALL* FUN_00488330_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00488330_t> FUN_00488330 = {(FUN_00488330_t)0x00488330};
typedef int (BEA_THISCALL* FUN_004883f0_t)(uint32_t);
static const bea_guard<FUN_004883f0_t> FUN_004883f0 = {(FUN_004883f0_t)0x004883f0};
typedef uint32_t (BEA_THISCALL* FUN_004885e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004885e0_t> FUN_004885e0 = {(FUN_004885e0_t)0x004885e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_005007f0(void * this_, int param_1)
{
  void *this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 * &local_10 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x10 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x10 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  local_10 = this_;
  if (param_1 != 0) {
    iVar4 = 0x400;
    if (0x400 < param_1) {
      do {
        iVar4 = iVar4 * 2;
      } while (BEA_LOOP_GUARD((iVar4 < param_1)));
    }
    if (iVar4 != 0) {
      local_10 = (undefined4 *)
                 FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x24), bea_arg(0x2f), bea_arg(s_C__dev_ONSLAUGHT2_vbuftexture_cp_00633d5c), bea_arg(0xfb));
      if (local_10 == (undefined4 *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        this_00 = (void *)FUN_00488210(bea_arg(local_10));
      }
      uVar8 = 2;
      uVar7 = 0xd2;
      iVar1 = FUN_00488330(bea_arg(this_00), bea_arg(iVar4), bea_arg(*(undefined4 *)((int)this_ + 0x24)), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(*(undefined4 *)((int)this_ + 0x28)));
      FUN_0042d080(bea_arg(CONCAT31((int3)((uint)iVar1 >> 8),-1 < iVar1)), bea_arg(uVar7), bea_arg(uVar8));
      *(undefined1 *)((int)this_ + 0x2c) = 0;
      if (0 < *(int *)((int)this_ + 0x30)) {
        if (*(int *)((int)this_ + 0x34) != 0) {
          iVar1 = FUN_004885e0(bea_arg(this_00), bea_arg(&local_10));
          if (iVar1 < 0) {
            FUN_0042d080(bea_arg(0), bea_arg(0xd2), bea_arg(5));
          }
          else {
            if (*(char *)((int)this_ + 0x2c) == '\0') {
              uVar8 = 0x3e9;
              uVar7 = 0xd2;
              iVar1 = FUN_004885e0(bea_arg(*(void **)((int)this_ + 0x4c)), bea_arg((int)this_ + 0x3c));
              FUN_0042d080(bea_arg(CONCAT31((int3)((uint)iVar1 >> 8),-1 < iVar1)), bea_arg(uVar7), bea_arg(uVar8));
              *(undefined1 *)((int)this_ + 0x2c) = 1;
            }
            uVar3 = *(uint *)((int)this_ + 0x34);
            puVar5 = *(undefined4 **)((int)this_ + 0x3c);
            puVar6 = local_10;
            for (uVar2 = uVar3 >> 2; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
            if (*(char *)((int)this_ + 0x2c) != '\0') {
              FUN_004883f0(bea_arg(*(void **)((int)this_ + 0x4c)));
              *(undefined4 *)((int)this_ + 0x3c) = 0;
              *(undefined1 *)((int)this_ + 0x2c) = 0;
            }
            *(undefined1 *)((int)this_ + 0x2c) = 1;
            *(undefined4 **)((int)this_ + 0x3c) = local_10;
          }
        }
        if (*(undefined4 **)((int)this_ + 0x4c) != (undefined4 *)0x0) {
          bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x4c), 0x0, 1);
        }
      }
      *(void **)((int)this_ + 0x4c) = this_00;
      *(int *)((int)this_ + 0x30) = iVar4;
      return;
    }
  }
  if (*(void **)((int)this_ + 0x4c) != (void *)0x0) {
    if (*(char *)((int)this_ + 0x2c) != '\0') {
      FUN_004883f0(bea_arg(*(void **)((int)this_ + 0x4c)));
      *(undefined4 *)((int)this_ + 0x3c) = 0;
      *(undefined1 *)((int)this_ + 0x2c) = 0;
    }
    if (*(undefined4 **)((int)this_ + 0x4c) != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x4c), 0x0, 1);
    }
    *(undefined4 *)((int)this_ + 0x4c) = 0;
  }
  *(undefined4 *)((int)this_ + 0x30) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005007f0, ap_005007f0));
