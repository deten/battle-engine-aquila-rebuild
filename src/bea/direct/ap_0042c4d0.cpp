// auto-ported from 0042c4d0_vslot2.c (CConsoleCommandMenu::vslot2, 81 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066582c GLOBAL_AT(int, 0x0066582c)
#define DAT_00624d48 GLOBAL_AT(int, 0x00624d48)
#define s__s___s__00625474 ((char*)0x00625474)
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_STDCALL ap_0042c4d0(int param_1, undefined4 param_2)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_0066582c;
  do {
    if (iVar1 == 0) {
LAB_0042c4ee:
      FUN_0055de9b(param_2,&DAT_00624d48);
      return;
    }
    if (param_1 == iVar2) {
      if (iVar1 != 0) {
        FUN_0055de9b(param_2,s__s___s__00625474,iVar1,iVar1 + 0x20);
        return;
      }
      goto LAB_0042c4ee;
    }
    iVar1 = *(int *)(iVar1 + 0xa8);
    iVar2 = iVar2 + 1;
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042c4d0, ap_0042c4d0));
