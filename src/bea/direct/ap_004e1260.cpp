// auto-ported from 004e1260_FUN_004e1260.c (FUN_004e1260, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// hand-checked 2026-10-27: the earlier float-param split converted -param_3 to an
// integer (the original stores its bits: fchs; fstp dword [ecx+0x24])
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004e1260(void * this_, int param_1, float param_2, float param_3, int param_4)
{
  int *piVar1;
  
  piVar1 = *(int **)((int)this_ + 0xc);
  if (piVar1 != (int *)0x0) {
    while (BEA_LOOP_GUARD(((piVar1[3] != param_1 || (*piVar1 != param_4))))) {
      piVar1 = (int *)piVar1[0x1d];
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    piVar1[10] = bea_piece32(param_2);
    // fld param_2; fcomp [ecx+0x20]; test ah, 1; je: taken unless C0, so a NaN
    // takes the negating branch like a smaller value (bug class 16, read from the asm)
    if (!(param_2 >= bea_fcast<float>(piVar1[8]))) {
      piVar1[9] = bea_piece32(-param_3);
      return;
    }
    piVar1[9] = bea_piece32(param_3);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e1260, ap_004e1260));
