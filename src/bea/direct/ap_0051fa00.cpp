// auto-ported from 0051fa00_vslot3.c (CFEPScreenPos::vslot3, 298 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPScreenPos;
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_THISCALL* FUN_00421910_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00421910_t> FUN_00421910 = {(FUN_00421910_t)0x00421910};
typedef uint32_t (BEA_THISCALL* FUN_00421940_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00421940_t> FUN_00421940 = {(FUN_00421940_t)0x00421940};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef uint32_t (BEA_THISCALL* FUN_0051f490_t)(uint32_t);
static const bea_guard<FUN_0051f490_t> FUN_0051f490 = {(FUN_0051f490_t)0x0051f490};

static void BEA_THISCALL ap_0051fa00(CFEPScreenPos * this_, undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  switch(param_1) {
  case 0x2a:
    iVar1 = *(int *)(this_ + 8);
    *(int *)(this_ + 8) = iVar1 + -1;
    if (iVar1 + -1 < -0x32) {
      *(undefined4 *)(this_ + 8) = 0xffffffce;
    }
    FUN_00421940(bea_arg(&DAT_00660620), bea_arg(*(undefined4 *)(this_ + 8)));
    FUN_00468770(0);
    return;
  case 0x2b:
    iVar1 = *(int *)(this_ + 8);
    *(int *)(this_ + 8) = iVar1 + 1;
    if (0x40 < iVar1 + 1) {
      *(undefined4 *)(this_ + 8) = 0x40;
    }
    FUN_00421940(bea_arg(&DAT_00660620), bea_arg(*(undefined4 *)(this_ + 8)));
    FUN_00468770(0);
    return;
  case 0x2c:
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0x11), bea_arg(0x1e));
    FUN_00468770(1);
    return;
  case 0x2e:
    FUN_00468770(2);
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0x11), bea_arg(0x1e));
    FUN_0051f490(bea_arg(this_ + 0x10));
    break;
  case 0x36:
    iVar1 = *(int *)(this_ + 4);
    *(int *)(this_ + 4) = iVar1 + -4;
    if (iVar1 + -4 < -0x3f) {
      *(undefined4 *)(this_ + 4) = 0xffffffc1;
    }
    FUN_00421910(bea_arg(&DAT_00660620), bea_arg(*(undefined4 *)(this_ + 4)));
    FUN_00468770(0);
    return;
  case 0x37:
    iVar1 = *(int *)(this_ + 4);
    *(int *)(this_ + 4) = iVar1 + 4;
    if (0x40 < iVar1 + 4) {
      *(undefined4 *)(this_ + 4) = 0x40;
    }
    FUN_00421910(bea_arg(&DAT_00660620), bea_arg(*(undefined4 *)(this_ + 4)));
    FUN_00468770(0);
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051fa00, ap_0051fa00));
