// auto-ported from 004e47e0_FUN_004e47e0.c (FUN_004e47e0, 516 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_0083d0a0 GLOBAL_AT(int, 0x0083d0a0)
#define DAT_0083d0a4 GLOBAL_AT(int, 0x0083d0a4)
#define DAT_0083d0a8 GLOBAL_AT(int, 0x0083d0a8)
#define DAT_0083d0ac GLOBAL_AT(int, 0x0083d0ac)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define s_BE_Respawn_Ground_Effect_006326c0 ((char*)0x006326c0)
#define s_BE_Respawn_Air_Effect_006326dc ((char*)0x006326dc)
typedef undefined4 * (BEA_CDECL* FUN_004bf090_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_004bf090_t> FUN_004bf090 = {(FUN_004bf090_t)0x004bf090};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};

static int * BEA_THISCALL ap_004e47e0(void * this_, int param_1)
{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_14)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0x14);
  undefined4 * &local_10 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x20 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  piVar3 = (int *)FUN_004bf090(3,0);
  if (piVar3 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar3, 0x24, (int)this_ + 0x80);
    *(undefined4 *)((int)this_ + 0xe8) = 0;
    *(undefined4 *)((int)this_ + 0xf0) = 0;
    *(undefined4 *)((int)this_ + 0xf4) = 0;
    *(undefined4 *)((int)this_ + 0xf8) = 1;
    *(undefined4 *)((int)this_ + 0xfc) = 0;
    *(undefined4 *)((int)this_ + 0x100) = 2;
    *(undefined4 *)((int)this_ + 0x104) = 2;
    *(undefined4 *)((int)this_ + 0x108) = 1;
    *(undefined4 *)((int)this_ + 0x114) = 0xbf800000;
    *(undefined4 *)((int)this_ + 0xec) = 0;
    *(undefined4 *)((int)this_ + 0x110) = 0;
    *(undefined4 *)((int)this_ + 0x10c) = 0;
    *(undefined4 *)((int)this_ + 0x118) = 0;
    *(undefined4 *)((int)this_ + 0x11c) = 0;
  }
  if (param_1 != 0) {
    local_10 = (undefined4 *)0x0;
    FUN_004cb040(bea_arg(local_14));
    if (*(int *)((int)this_ + 0x444) == 0) {
      pcVar5 = s_BE_Respawn_Ground_Effect_006326c0;
    }
    else {
      pcVar5 = s_BE_Respawn_Air_Effect_006326dc;
    }
    uVar4 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(pcVar5));
    FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar4), bea_arg(local_14), bea_arg(DAT_0083d0a0), bea_arg(DAT_0083d0a4), bea_arg(DAT_0083d0a8), bea_arg(DAT_0083d0ac), bea_arg(0), bea_arg(0));
    puVar1 = (undefined4 *)((int)this_ + 0x1c);
    if (local_10 != (undefined4 *)0x0) {
      if (local_10[0x12] == 0x461c4000) {
        local_10[0x20] = *puVar1;
        local_10[0x21] = *(undefined4 *)((int)this_ + 0x20);
        local_10[0x22] = *(undefined4 *)((int)this_ + 0x24);
        local_10[0x23] = *(undefined4 *)((int)this_ + 0x28);
        local_10[0x10] = local_10[0x20];
        local_10[0x11] = local_10[0x21];
        local_10[0x12] = local_10[0x22];
        local_10[0x13] = local_10[0x23];
        *local_10 = *puVar1;
        local_10[1] = *(undefined4 *)((int)this_ + 0x20);
        local_10[2] = *(undefined4 *)((int)this_ + 0x24);
        local_10[3] = *(undefined4 *)((int)this_ + 0x28);
        iVar2 = local_10[0x2b];
      }
      else {
        local_10[0x10] = *local_10;
        local_10[0x11] = local_10[1];
        local_10[0x12] = local_10[2];
        local_10[0x13] = local_10[3];
        *local_10 = *puVar1;
        local_10[1] = *(undefined4 *)((int)this_ + 0x20);
        local_10[2] = *(undefined4 *)((int)this_ + 0x24);
        local_10[3] = *(undefined4 *)((int)this_ + 0x28);
        iVar2 = local_10[0x2b];
      }
      if (iVar2 != -0x40800000) {
        local_10[0x2b] = DAT_00672fd0;
      }
    }
    FUN_004cb050(bea_arg(local_14));
  }
  return (int *)(piVar3);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e47e0, ap_004e47e0));
