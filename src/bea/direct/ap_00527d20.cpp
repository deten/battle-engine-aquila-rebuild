// auto-ported from 00527d20_FUN_00527d20.c (FUN_00527d20, 121 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define s_RM__Failed_ValidSoFar_on___s__d__0064bca4 ((char*)0x0064bca4)
#define s_RM__Failed_ValidSoFar_on___s__d__0064bc78 ((char*)0x0064bc78)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_00513e00_t)(uint32_t);
static const bea_guard<FUN_00513e00_t> FUN_00513e00 = {(FUN_00513e00_t)0x00513e00};
typedef const char * (BEA_STDCALL* FUN_005be628_t)(uint32_t);
static const bea_guard<FUN_005be628_t> FUN_005be628 = {(FUN_005be628_t)0x005be628};

static undefined4 BEA_THISCALL ap_00527d20(void * this_)
{
  int iVar1;
  char *pcVar2;
  
  if (*(int *)((int)this_ + 0x10) == 0) {
    if (*(int *)((int)this_ + 0xc) == 0) {
      iVar1 = FUN_00513e00(bea_arg(&DAT_00855bb0));
      if (iVar1 < 0) {
        pcVar2 = (char *)FUN_005be628(bea_arg(iVar1));
        FUN_00441740(&DAT_0066eb90,s_RM__Failed_ValidSoFar_on___s__d__0064bca4,
                     *(char **)((int)this_ + 8),*(int *)((int)this_ + 0xc),pcVar2);
      }
    }
    else {
      iVar1 = FUN_00513e00(bea_arg(&DAT_00855bb0));
      if (iVar1 < 0) {
        pcVar2 = (char *)FUN_005be628(bea_arg(iVar1));
        FUN_00441740(&DAT_0066eb90,s_RM__Failed_ValidSoFar_on___s__d__0064bc78,
                     *(char **)((int)this_ + 8),*(int *)((int)this_ + 0xc),pcVar2);
        *(int *)((int)this_ + 0xc) = *(int *)((int)this_ + 0xc) + -1;
        return 0;
      }
    }
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00527d20, ap_00527d20));
