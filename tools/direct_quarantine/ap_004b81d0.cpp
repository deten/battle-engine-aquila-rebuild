// auto-ported from 004b81d0_vslot0.c (CMessageBox::vslot0, 175 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMessageBox;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_008a9d88 GLOBAL_AT(int, 0x008a9d88)
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef uint32_t (BEA_THISCALL* FUN_0044b310_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044b310_t> FUN_0044b310 = {(FUN_0044b310_t)0x0044b310};
typedef uint32_t (BEA_THISCALL* FUN_004b7b80_t)(uint32_t);
static const bea_guard<FUN_004b7b80_t> FUN_004b7b80 = {(FUN_004b7b80_t)0x004b7b80};
typedef uint32_t (BEA_THISCALL* FUN_004b7ea0_t)(uint32_t);
static const bea_guard<FUN_004b7ea0_t> FUN_004b7ea0 = {(FUN_004b7ea0_t)0x004b7ea0};
typedef uint32_t (BEA_THISCALL* FUN_004b8020_t)(uint32_t);
static const bea_guard<FUN_004b8020_t> FUN_004b8020 = {(FUN_004b8020_t)0x004b8020};
typedef uint32_t (BEA_THISCALL* FUN_004b8ef0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b8ef0_t> FUN_004b8ef0 = {(FUN_004b8ef0_t)0x004b8ef0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_THISCALL ap_004b81d0(CMessageBox * this_, int param_1)
{
  int iVar1;
  int iVar2;
  
  switch(*(undefined2 *)(param_1 + 4)) {
  case 3000:
    FUN_004b8020(bea_arg(this_));
    return;
  case 0xbb9:
  case 0xbbb:
    *(undefined4 *)(this_ + 0x30) = 1;
    FUN_004b7b80(bea_arg(this_));
    break;
  case 0xbba:
    iVar1 = *(int *)(this_ + 8);
    iVar2 = *(int *)(iVar1 + 0x28);
    if (iVar2 != 0) {
      FUN_0044b310(bea_arg(&DAT_00672fc8), bea_arg(iVar2));
      *(undefined4 *)(iVar1 + 0x28) = 0;
    }
    FUN_004e5bd0(bea_arg(this_ + 0xc), bea_arg(*(undefined4 *)(this_ + 8)));
    FUN_004b8ef0(bea_arg(DAT_008a9d88), bea_arg(*(undefined4 *)(this_ + 8)));
    *(undefined4 *)(this_ + 8) = 0;
    param_1 = 0x3e4ccccd;
    FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&param_1), bea_arg(0xbb9), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
    return;
  case 0xbbc:
    FUN_004b7ea0(bea_arg(this_));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b81d0, ap_004b81d0));
