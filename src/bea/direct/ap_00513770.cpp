// auto-ported from 00513770_FUN_00513770.c (FUN_00513770, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_00622d9c GLOBAL_AT(int, 0x00622d9c)
#define s_D3D_Error__0063df00 ((char*)0x0063df00)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef const char * (BEA_STDCALL* FUN_005be628_t)(uint32_t);
static const bea_guard<FUN_005be628_t> FUN_005be628 = {(FUN_005be628_t)0x005be628};

static int BEA_THISCALL ap_00513770(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  int iVar1;
  LPCSTR lpOutputString;
  
  iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x68, *(int **)((int)this_ + 0x32ea0),param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 < 0) {
    CRenderThing__vslot3(s_D3D_Error__0063df00);
    lpOutputString = (LPCSTR)FUN_005be628(bea_arg(iVar1));
    OutputDebugStringA(lpOutputString);
    CRenderThing__vslot3(&DAT_00622d9c);
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513770, ap_00513770));
