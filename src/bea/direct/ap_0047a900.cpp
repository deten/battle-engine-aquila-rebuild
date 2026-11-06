// auto-ported from 0047a900_vslot59.c (CGillMHead::vslot59, 185 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGillMHead;
#define DAT_00623bb4 GLOBAL_AT(int, 0x00623bb4)
#define DAT_0062ca48 GLOBAL_AT(int, 0x0062ca48)
#define s_close_006289e4 ((char*)0x006289e4)
#define s_attack_00624438 ((char*)0x00624438)
typedef undefined4 (BEA_THISCALL* FUN_004f4530_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f4530_t> FUN_004f4530 = {(FUN_004f4530_t)0x004f4530};
typedef uint32_t (BEA_THISCALL* FUN_004f4560_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f4560_t> FUN_004f4560 = {(FUN_004f4560_t)0x004f4560};
typedef undefined4 (BEA_THISCALL* FUN_004fd760_t)(uint32_t);
static const bea_guard<FUN_004fd760_t> FUN_004fd760 = {(FUN_004fd760_t)0x004fd760};

static undefined4 BEA_THISCALL ap_0047a900(CGillMHead * this_)
{
  CGillMHead *pCVar1;
  int iVar2;
  int iVar3;
  
  pCVar1 = this_ + 8;
  iVar2 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar2 == -1) {
    return 1;
  }
  iVar2 = FUN_004f4530(bea_arg(this_), bea_arg(&DAT_00623bb4));
  iVar3 = bea_vcall<uint32_t>(pCVar1, 0x58);
  if (iVar3 != iVar2) {
    iVar2 = FUN_004f4530(bea_arg(this_), bea_arg(s_attack_00624438));
    iVar3 = bea_vcall<uint32_t>(pCVar1, 0x58);
    if (iVar3 != iVar2) {
      iVar2 = FUN_004f4530(bea_arg(this_), bea_arg(s_close_006289e4));
      iVar3 = bea_vcall<uint32_t>(pCVar1, 0x58);
      if (iVar3 == iVar2) {
        FUN_004f4560(bea_arg(this_), bea_arg(&DAT_0062ca48), bea_arg(1), bea_arg(1));
      }
      return 0;
    }
    iVar2 = FUN_004fd760(bea_arg(this_));
    if (iVar2 != 0) {
      FUN_004f4560(bea_arg(this_), bea_arg(s_close_006289e4), bea_arg(1), bea_arg(0));
      return 0;
    }
  }
  FUN_004f4560(bea_arg(this_), bea_arg(s_attack_00624438), bea_arg(1), bea_arg(0));
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047a900, ap_0047a900));
