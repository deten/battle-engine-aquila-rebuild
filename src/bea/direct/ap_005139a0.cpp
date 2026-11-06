// auto-ported from 005139a0_FUN_005139a0.c (FUN_005139a0, 106 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define s_Create_texture_failed___s_0063df0c ((char*)0x0063df0c)
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef const char * (BEA_STDCALL* FUN_005be628_t)(uint32_t);
static const bea_guard<FUN_005be628_t> FUN_005be628 = {(FUN_005be628_t)0x005be628};

static int BEA_THISCALL ap_005139a0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
  int iVar1;
  char *v0;
  
  iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x5c, *(int **)((int)this_ + 0x32ea0),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,0);
  if (iVar1 < 0) {
    v0 = (char *)FUN_005be628(bea_arg(iVar1));
    FUN_00441740(&DAT_0066eb90,s_Create_texture_failed___s_0063df0c,v0);
    FUN_0042d080(bea_arg(0), bea_arg(0xca), bea_arg(0xffffffff));
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005139a0, ap_005139a0));
