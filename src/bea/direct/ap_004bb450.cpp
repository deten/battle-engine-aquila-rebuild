// auto-ported from 004bb450_vslot7.c (CPCMusic::vslot7, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CPCMusic;

static void BEA_THISCALL ap_004bb450(CPCMusic * this_, undefined4 param_1)
{
  undefined4 a1;
  
  if (this_[8] != (CPCMusic)0x0) {
    bea_vcall<uint32_t>(this_, 0xc);
    this_[8] = (CPCMusic)0x0;
  }
  a1 = *(undefined4 *)(this_ + 0x2c);
  *(undefined4 *)(this_ + 0x34) = a1;
  *(undefined4 *)(this_ + 0x28) = a1;
  bea_vcall<uint32_t>(this_, 0x14, a1);
  bea_vcall<uint32_t>(this_, 0x8, param_1);
  this_[8] = (CPCMusic)0x1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bb450, ap_004bb450));
