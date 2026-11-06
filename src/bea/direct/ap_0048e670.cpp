// auto-ported from 0048e670_vslot1.c (CLandscapeTexture::vslot1, 279 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CLandscapeTexture;
#define DAT_006fabf4 GLOBAL_AT(undefined4*, 0x006fabf4)
#define DAT_0062d864 GLOBAL_AT(int, 0x0062d864)
#define DAT_006fabdc GLOBAL_AT(int, 0x006fabdc)
#define DAT_006fabf0 GLOBAL_AT(int, 0x006fabf0)
#define DAT_00888aac GLOBAL_AT(int, 0x00888aac)
#define DAT_00888ab0 GLOBAL_AT(int, 0x00888ab0)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef uint32_t (BEA_THISCALL* FUN_004f7ab0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f7ab0_t> FUN_004f7ab0 = {(FUN_004f7ab0_t)0x004f7ab0};
typedef int (BEA_THISCALL* FUN_005139a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005139a0_t> FUN_005139a0 = {(FUN_005139a0_t)0x005139a0};

static uint32_t BEA_THISCALL ap_0048e670(CLandscapeTexture * this_)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x8);
  undefined4 * &puStack_4 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x10 - 0x4);
  if (DAT_006fabf4 == (int *)0x0) {
    uVar1 = 0x200;
    DAT_0062d864 = 0x200;
    if (DAT_006fabdc != 0) {
      uVar1 = 0x100;
      DAT_0062d864 = 0x100;
    }
    DAT_006fabf0 = (uint)(DAT_006fabdc != 0);
    while (BEA_LOOP_GUARD(((DAT_00888aac < uVar1 && (DAT_0062d864 = uVar1, DAT_00888ab0 < uVar1))))) {
      DAT_006fabf0 = DAT_006fabf0 + 1;
      uVar1 = uVar1 >> 1;
      DAT_0062d864 = uVar1;
    }
    FUN_0042d080(bea_arg(CONCAT31((int3)(uVar1 >> 8),0x7f < uVar1)), bea_arg(0xc5), bea_arg(0xffffffff));
    FUN_005139a0(bea_arg(&DAT_00855bb0), bea_arg(DAT_0062d864), bea_arg(DAT_0062d864), bea_arg(1), bea_arg(0), bea_arg(0x17), bea_arg(2), bea_arg(&DAT_006fabf4));
    iVar2 = bea_vcall<uint32_t>(DAT_006fabf4, 0x4c, DAT_006fabf4,0,&local_8,0,0);
    uVar1 = DAT_0062d864;
    uVar4 = DAT_0062d864;
    if (-1 < iVar2) {
      for (; BEA_LOOP_GUARD((uVar1 != 0)); uVar1 = uVar1 - 1) {
        uVar3 = 0;
        if (uVar4 != 0) {
          puVar5 = puStack_4;
          for (uVar3 = uVar4 >> 1; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
            *puVar5 = 0x18e318e3;
            puVar5 = puVar5 + 1;
          }
          for (uVar4 = (uint)((uVar4 & 1) != 0); BEA_LOOP_GUARD((uVar3 = DAT_0062d864, uVar4 != 0)); uVar4 = uVar4 - 1
              ) {
            *(undefined2 *)puVar5 = 0x18e3;
            puVar5 = (undefined4 *)((int)puVar5 + 2);
          }
        }
        puStack_4 = (undefined4 *)((int)puStack_4 + local_8);
        uVar4 = uVar3;
      }
      bea_vcall<uint32_t>(DAT_006fabf4, 0x50, DAT_006fabf4,0);
    }
  }
  return FUN_004f7ab0(bea_arg(this_), bea_arg(DAT_0062d864), bea_arg(1), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e670, ap_0048e670));
