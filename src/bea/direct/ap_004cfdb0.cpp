// auto-ported from 004cfdb0_vslot14.c (CVideoDetailLevel::vslot14, 533 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CVideoDetailLevel;
#define DAT_00856f70 GLOBAL_AT(int, 0x00856f70)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_00856f78 GLOBAL_AT(int, 0x00856f78)
#define DAT_009cc114 GLOBAL_AT(int, 0x009cc114)
#define DAT_00856f74 GLOBAL_AT(int, 0x00856f74)
typedef uint32_t (BEA_THISCALL* FUN_004a44c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a44c0_t> FUN_004a44c0 = {(FUN_004a44c0_t)0x004a44c0};

static void BEA_THISCALL ap_004cfdb0(CVideoDetailLevel * this_, int param_1)
{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 1) {
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x28)), bea_arg(*(undefined4 *)
                  (((uint8_t *)&DAT_00856f70) +
                  *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                  DAT_008889f0 * 0x516c)));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x2c)), bea_arg(0));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x30)), bea_arg(0));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x38)), bea_arg(*(undefined4 *)(this_ + 0x4c)));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x3c)), bea_arg(0));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x34)), bea_arg(0));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x40)), bea_arg(2));
    uVar1 = 1;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return;
      }
      FUN_004a44c0(bea_arg(*(void **)(this_ + 0x28)), bea_arg(*(undefined4 *)
                    (((uint8_t *)&DAT_00856f78) +
                    *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                    DAT_008889f0 * 0x516c)));
      FUN_004a44c0(bea_arg(*(void **)(this_ + 0x2c)), bea_arg(2));
      FUN_004a44c0(bea_arg(*(void **)(this_ + 0x30)), bea_arg(2));
      FUN_004a44c0(bea_arg(*(void **)(this_ + 0x38)), bea_arg(1));
      FUN_004a44c0(bea_arg(*(void **)(this_ + 0x3c)), bea_arg(*(undefined4 *)(this_ + 0x54)));
      FUN_004a44c0(bea_arg(*(void **)(this_ + 0x34)), bea_arg(1));
      FUN_004a44c0(bea_arg(*(void **)(this_ + 0x40)), bea_arg(DAT_009cc114));
      uVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 0x44), 0x48);
      FUN_004a44c0(bea_arg(*(void **)(this_ + 0x44)), bea_arg(uVar1));
      iVar2 = bea_vcall<uint32_t>(*(int **)(this_ + 0x48), 0x40);
      if (iVar2 < 2) {
        return;
      }
      FUN_004a44c0(bea_arg(*(void **)(this_ + 0x48)), bea_arg(1));
      return;
    }
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x28)), bea_arg(*(undefined4 *)
                  (((uint8_t *)&DAT_00856f74) +
                  *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                  DAT_008889f0 * 0x516c)));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x2c)), bea_arg(1));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x30)), bea_arg(1));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x38)), bea_arg(1));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x3c)), bea_arg(*(undefined4 *)(this_ + 0x50)));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x34)), bea_arg(1));
    FUN_004a44c0(bea_arg(*(void **)(this_ + 0x40)), bea_arg(DAT_009cc114));
    uVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 0x44), 0x48);
  }
  FUN_004a44c0(bea_arg(*(void **)(this_ + 0x44)), bea_arg(uVar1));
  FUN_004a44c0(bea_arg(*(void **)(this_ + 0x48)), bea_arg(0));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cfdb0, ap_004cfdb0));
