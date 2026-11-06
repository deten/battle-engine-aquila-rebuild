// auto-ported from 0052bb80_FUN_0052bb80.c (FUN_0052bb80, 250 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: dialog template is the resource id 0x90 (push 0x90 at 0x52bbc6), not the address of a global
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_0052af00_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052af00_t> FUN_0052af00 = {(FUN_0052af00_t)0x0052af00};
typedef undefined4 (BEA_THISCALL* FUN_0052b840_t)(uint32_t);
static const bea_guard<FUN_0052b840_t> FUN_0052b840 = {(FUN_0052b840_t)0x0052b840};
typedef int (BEA_STDCALL* FUN_0052c4f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052c4f0_t> FUN_0052c4f0 = {(FUN_0052c4f0_t)0x0052c4f0};
typedef float10 (BEA_STDCALL* FUN_0052cd20_t)(uint32_t);
static const bea_guard<FUN_0052cd20_t> FUN_0052cd20 = {(FUN_0052cd20_t)0x0052cd20};

static undefined4 BEA_THISCALL ap_0052bb80(void * this_, int param_1, undefined4 param_2)
{
  int iVar1;
  HMODULE hInstance;
  INT_PTR IVar2;
  undefined4 uVar3;
  LPCSTR lpTemplateName;
  HWND hWndParent;
  code *lpDialogFunc;
  void *dwInitParam;
  
  if (param_1 == 0) {
    if ((*(int *)((int)this_ + 0x32e44) == 0) && (iVar1 = FUN_0052b840(bea_arg(this_)), iVar1 < 0)) {
      FUN_0052c4f0(bea_arg(0x8200000c), bea_arg(1));
      return 0x80004005;
    }
    hWndParent = *(HWND *)((int)this_ + 0x32e94);
    lpDialogFunc = ((void*)0x0052bc80);
    lpTemplateName = (LPCSTR)0x90;   // MAKEINTRESOURCE(0x90)
    dwInitParam = this_;
    hInstance = GetModuleHandleA((LPCSTR)0x0);
    IVar2 = DialogBoxParamA(hInstance,lpTemplateName,hWndParent,lpDialogFunc,(LPARAM)dwInitParam);
    if (IVar2 != 1) {
      return 0;
    }
    *(undefined4 *)((int)this_ + 0x32e44) =
         *(undefined4 *)
          ((int)this_ +
          *(int *)((int)this_ + (*(int *)((int)this_ + 0x32e40) + 1) * 0x516c) * 0xf68 +
          *(int *)((int)this_ + 0x32e40) * 0x516c + 0x13b8);
  }
  bea_vcall<uint32_t>(this_, 0x28, param_2);
  iVar1 = FUN_0052af00(bea_arg(this_), bea_arg(1));
  if (-1 < iVar1) {
    if (*(int *)((int)this_ + 0x32e50) == 0) {
      *(undefined4 *)((int)this_ + 0x32e54) = 1;
      FUN_0052cd20(bea_arg(1));
      FUN_0052cd20(bea_arg(2));
    }
    return 0;
  }
  uVar3 = FUN_0052c4f0(bea_arg(iVar1), bea_arg(1));
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052bb80, ap_0052bb80));
