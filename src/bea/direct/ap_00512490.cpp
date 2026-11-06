// auto-ported from 00512490_FUN_00512490.c (FUN_00512490, 412 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-28 compile: dropped the HACCEL typedef that clashed with windows.h; HWND cast for SendMessageA (0x512588); zero test also taken when unordered (C3, 0x5125bc)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00888a44 GLOBAL_AT(int, 0x00888a44)
#define DAT_00855424 GLOBAL_AT(int, 0x00855424)
#define PTR_DAT_0063dc1c GLOBAL_AT(void*, 0x0063dc1c)
typedef int (BEA_THISCALL* FUN_00513370_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513370_t> FUN_00513370 = {(FUN_00513370_t)0x00513370};
typedef undefined4 (BEA_THISCALL* FUN_0052bb80_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0052bb80_t> FUN_0052bb80 = {(FUN_0052bb80_t)0x0052bb80};
typedef float10 (BEA_STDCALL* FUN_0052cd20_t)(uint32_t);
static const bea_guard<FUN_0052cd20_t> FUN_0052cd20 = {(FUN_0052cd20_t)0x0052cd20};

static undefined4 BEA_THISCALL ap_00512490(void * this_, undefined4 param_1)
{
  LPMSG lpMsg;
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  
  uVar2 = 1;
  lpMsg = (LPMSG)((int)this_ + 0x33494);
  if (*(int *)((int)this_ + 0x32e48) == 0) {
    iVar1 = GetMessageA(lpMsg,(HWND)0x0,0,0);
  }
  else {
    iVar1 = PeekMessageA(lpMsg,(HWND)0x0,0,0,1);
  }
  if (iVar1 != 0) {
    iVar1 = TranslateAcceleratorA
                      (*(HWND *)((int)this_ + 0x32e94),*(HACCEL *)((int)this_ + 0x334b0),lpMsg);
    if (iVar1 == 0) {
      TranslateMessage(lpMsg);
      DispatchMessageA(lpMsg);
      uVar2 = 1;
    }
    goto LAB_00512603;
  }
  if ((*(int *)((int)this_ + 0x32e48) == 0) || (*(int *)((int)this_ + 0x32e4c) == 0))
  goto LAB_00512603;
  uVar2 = 0;
  iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0xc, *(int **)((int)this_ + 0x32ea0));
  if (iVar1 < 0) {
    if (iVar1 == -0x7789f797) {
      if (*(int *)((int)this_ + 0x32e44) != 0) {
        iVar1 = *(int *)((int)this_ + 0x32e40) * 0x516c;
        bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x20, *(int **)((int)this_ + 0x32e9c),*(int *)((int)this_ + 0x32e40),
                   (int)this_ + iVar1 + 0x450);
        *(undefined4 *)((int)this_ + 0x32e60) = *(undefined4 *)((int)this_ + iVar1 + 0x45c);
      }
      iVar1 = FUN_0052bb80(bea_arg(this_), bea_arg(1), bea_arg(0));
      if (iVar1 < 0) {
        SendMessageA((HWND)(uintptr_t)DAT_00888a44,0x10,0,0);
      }
    }
    uVar2 = 1;
  }
  fVar3 = bea_fcast<float10>(FUN_0052cd20(bea_arg(5)));
  fVar4 = bea_fcast<float10>(FUN_0052cd20(bea_arg(6)));
  if (bea_fcast<float10>(0.0f) == fVar4 || bea_isnan(fVar4)) {   // fcomp; test ah,0x40: equal or unordered (0x5125b2)
    if (*(int *)((int)this_ + 0x32e50) != 0) {
      return 0;
    }
LAB_005125db:
    if (*(int *)((int)this_ + 0x32e54) == 0) goto LAB_00512603;
  }
  else if (*(int *)((int)this_ + 0x32e50) == 0) goto LAB_005125db;
  *(undefined4 *)((int)this_ + 0x32e54) = 0;
  *(float *)((int)this_ + 0x33020) = bea_fcast<float>(fVar4);
  *(float *)((int)this_ + 0x3301c) = bea_fcast<float>(fVar3);
LAB_00512603:
  iVar1 = 0;
  do {
    FUN_00513370(bea_arg(this_), bea_arg(iVar1), bea_arg(param_1));
    iVar1 = iVar1 + 1;
  } while (BEA_LOOP_GUARD((iVar1 < 4)));
  PTR_DAT_0063dc1c = (undefined *)&DAT_00855424;
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512490, ap_00512490));
