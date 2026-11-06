// auto-ported from 0042c600_vslot2.c (CConsoleVariableMenu::vslot2, 160 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x200: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_00665830 GLOBAL_AT(int, 0x00665830)
#define DAT_00624d48 GLOBAL_AT(int, 0x00624d48)
#define s__s___s___s__s_00625480 ((char*)0x00625480)
typedef uint32_t (BEA_STDCALL* FUN_0042a540_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042a540_t> FUN_0042a540 = {(FUN_0042a540_t)0x0042a540};
typedef uint32_t (BEA_STDCALL* FUN_0042a5f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042a5f0_t> FUN_0042a5f0 = {(FUN_0042a5f0_t)0x0042a5f0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_STDCALL ap_0042c600(int param_1, undefined4 param_2)
{
  char *v0;
  int iVar1;

  alignas(16) uint8_t bea_frame_[0x200] = {};   // the original stack frame (emulate_frame)
  char (&local_200)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x200 - 0x200);
  char (&local_100)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x200 - 0x100);
  iVar1 = 0;
  v0 = DAT_00665830;
  do {
    if (v0 == (char *)0x0) {
LAB_0042c629:
      FUN_0055de9b(param_2,&DAT_00624d48);
      return;
    }
    if (param_1 == iVar1) {
      if (v0 != (char *)0x0) {
        FUN_0042a5f0(bea_arg(v0), bea_arg(local_200));
        FUN_0042a540(bea_arg(v0), bea_arg(local_100));
        FUN_0055de9b(param_2,s__s___s___s__s_00625480,v0,local_100,v0 + 0x20,local_200);
        return;
      }
      goto LAB_0042c629;
    }
    v0 = *(char **)(v0 + 0xac);
    iVar1 = iVar1 + 1;
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042c600, ap_0042c600));
