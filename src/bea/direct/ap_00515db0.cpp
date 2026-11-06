// auto-ported from 00515db0_FUN_00515db0.c (FUN_00515db0, 100 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_80000001 GLOBAL_AT(int, 0x80000001)
#define s_Software_Lost_Toys_Battle_Engine_0063e1d4 ((char*)0x0063e1d4)
#define s_REG_SZ_0063e1fc ((char*)0x0063e1fc)

static uint32_t BEA_STDCALL ap_00515db0(LPCSTR param_1, BYTE *param_2)
{
  BYTE BVar1;
  uint uVar2;
  BYTE *pBVar3;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  HKEY &local_8 = *reinterpret_cast<HKEY *>(bea_frame_ + 0x10 - 0x8);
  DWORD &local_4 = *reinterpret_cast<DWORD *>(bea_frame_ + 0x10 - 0x4);
  RegCreateKeyExA((HKEY)&DAT_80000001,s_Software_Lost_Toys_Battle_Engine_0063e1d4,0,
                  s_REG_SZ_0063e1fc,1,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pBVar3 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    BVar1 = *pBVar3;
    pBVar3 = pBVar3 + 1;
  } while (BEA_LOOP_GUARD((BVar1 != '\0')));
  RegSetValueExA(local_8,param_1,0,1,param_2,~uVar2);
  return RegCloseKey(local_8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515db0, ap_00515db0));
