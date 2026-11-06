// auto-ported from 004f2580_FUN_004f2580.c (FUN_004f2580, 214 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_0083d560 GLOBAL_AT(int, 0x0083d560)
#define s_ERROR__No_string_for_id___d_00632e98 ((char*)0x00632e98)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static undefined * BEA_THISCALL ap_004f2580(void * this_, int param_1)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  LPCSTR lpMultiByteStr;
  int *piVar4;
  int iVar5;
  int *piVar6;
  LPCSTR pCVar7;
  
  iVar5 = 2;
  iVar2 = *(int *)this_;
  if (iVar2 == 2) {
    iVar5 = 3;
  }
  if (iVar2 == 3) {
    iVar5 = 3;
  }
  if (0 < iVar2) {
    iVar2 = 0;
    piVar6 = (int *)(*(int *)((int)this_ + 4) + 0xc);
    piVar4 = (int *)(*(int *)((int)this_ + 4) + 0x10);
    if (0 < *(int *)((int)this_ + 0x10)) {
      do {
        if (param_1 == *piVar6) {
          return (undefined *)((undefined *)(*(int *)((int)this_ + 8) + *piVar4 * 2));
        }
        piVar6 = piVar6 + iVar5;
        piVar4 = piVar4 + iVar5;
        iVar2 = iVar2 + 1;
      } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0x10))));
    }
    FUN_00441740(&DAT_0066f580,s_ERROR__No_string_for_id___d_00632e98,param_1);
    return (undefined *)(*(undefined **)((int)this_ + 8));
  }
  if (iVar2 != 0) {
    return (undefined *)(*(undefined **)((int)this_ + 8));
  }
  if ((param_1 < 0) || (*(int *)((int)this_ + 0x10) <= param_1)) {
    lpMultiByteStr = *(LPCSTR *)((int)this_ + 8);
  }
  else {
    lpMultiByteStr =
         (LPCSTR)(*(int *)(*(int *)((int)this_ + 4) + 4 + param_1 * 4) + *(int *)((int)this_ + 8));
  }
  uVar3 = 0xffffffff;
  pCVar7 = lpMultiByteStr;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pCVar7;
    pCVar7 = pCVar7 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  MultiByteToWideChar(0,0,lpMultiByteStr,-1,(LPWSTR)&DAT_0083d560,~uVar3);
  return (undefined *)(&DAT_0083d560);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2580, ap_004f2580));
