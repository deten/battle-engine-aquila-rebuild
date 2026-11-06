// auto-ported from 0040bfd0_vslot50.c (CBattleEngine::vslot50, 428 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_006601e8 GLOBAL_AT(int, 0x006601e8)
#define DAT_006601ec GLOBAL_AT(int, 0x006601ec)
#define DAT_006601f0 GLOBAL_AT(int, 0x006601f0)
#define DAT_006601f4 GLOBAL_AT(int, 0x006601f4)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define s_Oily_Smoke_Effect_006234c8 ((char*)0x006234c8)
typedef uint32_t (BEA_THISCALL* FUN_0040dfb0_t)(uint32_t);
static const bea_guard<FUN_0040dfb0_t> FUN_0040dfb0 = {(FUN_0040dfb0_t)0x0040dfb0};
typedef uint32_t (BEA_THISCALL* FUN_0042e750_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042e750_t> FUN_0042e750 = {(FUN_0042e750_t)0x0042e750};
typedef uint32_t (BEA_THISCALL* FUN_0046f550_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046f550_t> FUN_0046f550 = {(FUN_0046f550_t)0x0046f550};
typedef undefined4 (BEA_THISCALL* FUN_004705d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004705d0_t> FUN_004705d0 = {(FUN_004705d0_t)0x004705d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};
typedef uint32_t (BEA_THISCALL* FUN_005337e0_t)(uint32_t);
static const bea_guard<FUN_005337e0_t> FUN_005337e0 = {(FUN_005337e0_t)0x005337e0};

static undefined4 BEA_THISCALL ap_0040bfd0(CBattleEngine * this_)
{
  CBattleEngine *pCVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 uVar3;
  
  if (((byte)this_[0x2c] & 4) != 0) {
    return 0;
  }
  if (*(int *)(this_ + 0x574) != 0) {
    this_00 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(*(int *)(*(int *)(this_ + 0x574) + 0x2c) + -1));
    if (this_00 != (void *)0x0) {
      FUN_0042e750(bea_arg(this_00), bea_arg(0), bea_arg(*(int *)(*(int *)(this_ + 0x574) + 0x2c) + -1));
    }
  }
  this_[0x2c] = (CBattleEngine)((byte)this_[0x2c] | 4);
  FUN_0046f550(bea_arg(&DAT_008a9a98), bea_arg(*(undefined4 *)(*(int *)(this_ + 0x574) + 0x2c)));
  if (*(void **)(this_ + 0x74) != (void *)0x0) {
    FUN_005337e0(bea_arg(*(void **)(this_ + 0x74)));
    if (*(int **)(this_ + 0x74) != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)(this_ + 0x74), 0x4, 1);
    }
    *(undefined4 *)(this_ + 0x74) = 0;
  }
  FUN_0040dfb0(bea_arg(this_));
  uVar3 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Oily_Smoke_Effect_006234c8));
  FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar3), bea_arg(this_ + 0x5f8), bea_arg(DAT_006601e8), bea_arg(DAT_006601ec), bea_arg(DAT_006601f0), bea_arg(DAT_006601f4), bea_arg(0), bea_arg(0));
  puVar2 = *(undefined4 **)(this_ + 0x5fc);
  pCVar1 = this_ + 0x1c;
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[0x12] == 0x461c4000) {
      puVar2[0x20] = *(undefined4 *)pCVar1;
      puVar2[0x21] = *(undefined4 *)(this_ + 0x20);
      puVar2[0x22] = *(undefined4 *)(this_ + 0x24);
      puVar2[0x23] = *(undefined4 *)(this_ + 0x28);
      puVar2[0x10] = *(undefined4 *)pCVar1;
      puVar2[0x11] = *(undefined4 *)(this_ + 0x20);
      puVar2[0x12] = *(undefined4 *)(this_ + 0x24);
      puVar2[0x13] = *(undefined4 *)(this_ + 0x28);
      *puVar2 = *(undefined4 *)pCVar1;
      puVar2[1] = *(undefined4 *)(this_ + 0x20);
      puVar2[2] = *(undefined4 *)(this_ + 0x24);
      puVar2[3] = *(undefined4 *)(this_ + 0x28);
      if (puVar2[0x2b] != -0x40800000) {
        puVar2[0x2b] = DAT_00672fd0;
        return 1;
      }
    }
    else {
      puVar2[0x10] = *puVar2;
      puVar2[0x11] = puVar2[1];
      puVar2[0x12] = puVar2[2];
      puVar2[0x13] = puVar2[3];
      *puVar2 = *(undefined4 *)pCVar1;
      puVar2[1] = *(undefined4 *)(this_ + 0x20);
      puVar2[2] = *(undefined4 *)(this_ + 0x24);
      puVar2[3] = *(undefined4 *)(this_ + 0x28);
      if (puVar2[0x2b] != -0x40800000) {
        puVar2[0x2b] = DAT_00672fd0;
      }
    }
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040bfd0, ap_0040bfd0));
