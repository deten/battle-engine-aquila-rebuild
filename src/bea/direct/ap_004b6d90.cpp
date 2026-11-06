// auto-ported from 004b6d90_vslot0.c (COggLoader::vslot0, 88 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char COggLoader;

static int BEA_THISCALL ap_004b6d90(COggLoader * this_)
{
  COggLoader *pCVar1;
  int iVar2;
  
  pCVar1 = this_ + 0x102310;
  if (this_[0x102310] != (COggLoader)0x0) {
    pCVar1 = (COggLoader *)bea_vcall<uint32_t>(this_ + 0x20, 0x4, pCVar1);
    if (-1 < (int)pCVar1) {
      iVar2 = bea_vcall<uint32_t>(this_ + 0x20, 0x8, 0x100000,this_ + 0x2310,this_ + 0x102414);
      if (iVar2 < 0) {
        *(undefined4 *)(this_ + 0x102414) = 0;
        return iVar2;
      }
      pCVar1 = (COggLoader *)bea_vcall<uint32_t>(this_ + 0x20, 0xc);
    }
  }
  return (int)pCVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b6d90, ap_004b6d90));
