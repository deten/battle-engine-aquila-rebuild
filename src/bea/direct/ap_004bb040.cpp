// auto-ported from 004bb040_FUN_004bb040.c (FUN_004bb040, 454 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef undefined4 (BEA_CDECL* CFEPCredits__vslot0_t)(undefined4, ...);
static const bea_guard<CFEPCredits__vslot0_t> CFEPCredits__vslot0 = {(CFEPCredits__vslot0_t)0x004fdc10};
typedef bool (BEA_CDECL* FUN_00494b00_t)(uint32_t);
static const bea_guard<FUN_00494b00_t> FUN_00494b00 = {(FUN_00494b00_t)0x00494b00};
typedef bool (BEA_CDECL* FUN_00494b50_t)(uint32_t);
static const bea_guard<FUN_00494b50_t> FUN_00494b50 = {(FUN_00494b50_t)0x00494b50};
typedef undefined4 (BEA_CDECL* FUN_00495090_t)(uint32_t);
static const bea_guard<FUN_00495090_t> FUN_00495090 = {(FUN_00495090_t)0x00495090};
typedef undefined4 (BEA_CDECL* FUN_004950f0_t)(uint32_t);
static const bea_guard<FUN_004950f0_t> FUN_004950f0 = {(FUN_004950f0_t)0x004950f0};
typedef undefined4 (BEA_CDECL* FUN_004957d0_t)(uint32_t);
static const bea_guard<FUN_004957d0_t> FUN_004957d0 = {(FUN_004957d0_t)0x004957d0};
typedef bool (BEA_CDECL* FUN_00496270_t)(uint32_t);
static const bea_guard<FUN_00496270_t> FUN_00496270 = {(FUN_00496270_t)0x00496270};
typedef undefined4 (BEA_CDECL* FUN_00496910_t)(uint32_t);
static const bea_guard<FUN_00496910_t> FUN_00496910 = {(FUN_00496910_t)0x00496910};
typedef bool (BEA_CDECL* FUN_00496f60_t)(uint32_t);
static const bea_guard<FUN_00496f60_t> FUN_00496f60 = {(FUN_00496f60_t)0x00496f60};
typedef bool (BEA_CDECL* FUN_00498080_t)(uint32_t);
static const bea_guard<FUN_00498080_t> FUN_00498080 = {(FUN_00498080_t)0x00498080};
typedef undefined4 (BEA_CDECL* FUN_00498270_t)(uint32_t);
static const bea_guard<FUN_00498270_t> FUN_00498270 = {(FUN_00498270_t)0x00498270};
typedef bool (BEA_CDECL* FUN_0049c250_t)(uint32_t);
static const bea_guard<FUN_0049c250_t> FUN_0049c250 = {(FUN_0049c250_t)0x0049c250};
typedef bool (BEA_CDECL* FUN_0049c2d0_t)(uint32_t);
static const bea_guard<FUN_0049c2d0_t> FUN_0049c2d0 = {(FUN_0049c2d0_t)0x0049c2d0};
typedef bool (BEA_CDECL* FUN_0049eca0_t)(uint32_t);
static const bea_guard<FUN_0049eca0_t> FUN_0049eca0 = {(FUN_0049eca0_t)0x0049eca0};
typedef undefined4 (BEA_CDECL* FUN_0049ed30_t)(uint32_t);
static const bea_guard<FUN_0049ed30_t> FUN_0049ed30 = {(FUN_0049ed30_t)0x0049ed30};
typedef bool (BEA_CDECL* FUN_0049f600_t)(uint32_t);
static const bea_guard<FUN_0049f600_t> FUN_0049f600 = {(FUN_0049f600_t)0x0049f600};
typedef undefined4 (BEA_CDECL* FUN_0049f670_t)(uint32_t);
static const bea_guard<FUN_0049f670_t> FUN_0049f670 = {(FUN_0049f670_t)0x0049f670};

static undefined4 BEA_CDECL ap_004bb040(int param_1)
{
  int iVar1;
  
  iVar1 = FUN_00494b50(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = FUN_00494b00(bea_arg(param_1));
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_004950f0(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = FUN_00495090(bea_arg(param_1));
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_004957d0(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = FUN_00496f60(bea_arg(param_1));
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_004957d0(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = CFEPCredits__vslot0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_00496270(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = CFEPCredits__vslot0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0049c2d0(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = FUN_0049c250(bea_arg(param_1));
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_00496910(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = CFEPCredits__vslot0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_004957d0(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = FUN_00496f60(bea_arg(param_1));
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_00498270(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = FUN_00498080(bea_arg(param_1));
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0049c2d0(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = FUN_0049c250(bea_arg(param_1));
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0049ed30(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = FUN_0049eca0(bea_arg(param_1));
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0049c2d0(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = FUN_0049c250(bea_arg(param_1));
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0049f670(bea_arg(*(undefined4 *)(param_1 + 0x128)));
  if (iVar1 != 0) {
    iVar1 = FUN_0049f600(bea_arg(param_1));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bb040, ap_004bb040));
