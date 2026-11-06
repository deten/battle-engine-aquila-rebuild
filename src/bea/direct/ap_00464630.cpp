// auto-ported from 00464630_vslot3.c (CFEPSaveGame::vslot3, 197 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};

static void BEA_THISCALL ap_00464630(int this_, undefined4 param_1, undefined4 param_2)
{
  int iVar1;

  switch(param_1) {
  case 0x2a:
    iVar1 = *(int *)(this_ + 0xc) + -1;
    *(int *)(this_ + 0xc) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(this_ + 0xc) = 0;
    }
    FUN_00468770(0);
    return;
  case 0x2b:
    iVar1 = *(int *)(this_ + 0xc) + 1;
    *(int *)(this_ + 0xc) = iVar1;
    if (0xff < iVar1) {
      *(undefined4 *)(this_ + 0xc) = 0xff;
    }
    FUN_00468770(0);
    return;
  case 0x2c:
    FUN_00468770(1);
    return;
  case 0x2e:
    FUN_00468770(2);
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0), bea_arg(0));
    break;
  case 0x36:
    iVar1 = *(int *)(this_ + 8) + -1;
    *(int *)(this_ + 8) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(this_ + 8) = 0;
    }
    FUN_00468770(0);
    return;
  case 0x37:
    iVar1 = *(int *)(this_ + 8) + 1;
    *(int *)(this_ + 8) = iVar1;
    if (0xff < iVar1) {
      *(undefined4 *)(this_ + 8) = 0xff;
    }
    FUN_00468770(0);
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00464630, ap_00464630));
