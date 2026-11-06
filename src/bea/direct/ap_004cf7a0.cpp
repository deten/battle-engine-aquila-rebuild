// auto-ported from 004cf7a0_vslot15.c (CTextureRes::vslot15, 16 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-28: sign test (Video Options showed Texture Resolution Low, tools/menu_test.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_009cc104 GLOBAL_AT(int, 0x009cc104)
#define DAT_009cc114 GLOBAL_AT(int, 0x009cc114)

static uint BEA_CDECL ap_004cf7a0(void)
{
  uint uVar1;
  
  uVar1 = DAT_009cc104;
  // the original's `cmp eax, -1; jg`: a negative value (Ghidra's unsigned
  // `0x7fffffff < x`, never true for the int it is declared as here)
  if (DAT_009cc104 < 0) {
    uVar1 = DAT_009cc114;
  }
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf7a0, ap_004cf7a0));
