// auto-ported from 005246a0_vslot1.c (COggFileRead::vslot1, 104 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char COggFileRead;
typedef char IAT;
#define DAT_00629038 GLOBAL_AT(int, 0x00629038)
typedef int (BEA_THISCALL* FUN_00524180_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00524180_t> FUN_00524180 = {(FUN_00524180_t)0x00524180};
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};
typedef uint32_t (BEA_CDECL* ogg_sync_clear_t)(...);
#define ogg_sync_clear (*(ogg_sync_clear_t*)0x005d8350)   /* OGG.DLL import, via the IAT */

static undefined4 BEA_THISCALL ap_005246a0(COggFileRead * this_, undefined4 param_1)
{
  int iVar1;
  
  bea_vcall<uint32_t>(this_, 0xc);
  iVar1 = FUN_0055e490(bea_arg(param_1), bea_arg(&DAT_00629038));
  *(int *)(this_ + 0x2008) = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_00524180(bea_arg(this_), bea_arg(0), bea_arg(0));
    if (iVar1 != -1) {
      return 0;
    }
    ogg_sync_clear(this_ + 0x2014);
    FUN_0055e4a3(bea_arg(*(undefined4 *)(this_ + 0x2008)));
    *(undefined4 *)(this_ + 0x2008) = 0;
  }
  return 0x80004005;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005246a0, ap_005246a0));
