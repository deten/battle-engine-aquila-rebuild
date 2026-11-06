// auto-ported from 00512a60_vslot10.c (PCLTShell::vslot10, 203 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char PCLTShell;
#define DAT_0063dc20 GLOBAL_AT(char, 0x0063dc20)
#define DAT_008554d0 GLOBAL_AT(int, 0x008554d0)
#define DAT_008554d4 GLOBAL_AT(int, 0x008554d4)
#define DAT_008554d8 GLOBAL_AT(int, 0x008554d8)
#define DAT_008554dc GLOBAL_AT(int, 0x008554dc)

static undefined4 BEA_THISCALL ap_00512a60(PCLTShell * this_, undefined4 param_1)
{
  DAT_0063dc20 = (undefined1)param_1;
  bea_vcall<uint32_t>(this_, 0x14);
  bea_vcall<uint32_t>(this_, 0x18);
  bea_vcall<uint32_t>(*(int **)(this_ + 0x32ea0), 0x1a0, *(int **)(this_ + 0x32ea0),0);
  if (DAT_008554d0 != 0) {
    DAT_008554d0 = 0;
    bea_vcall<uint32_t>(*(int **)(this_ + 0x32ea0), 0x104, *(int **)(this_ + 0x32ea0),0,0);
  }
  if (DAT_008554d4 != 0) {
    DAT_008554d4 = 0;
    bea_vcall<uint32_t>(*(int **)(this_ + 0x32ea0), 0x104, *(int **)(this_ + 0x32ea0),1,0);
  }
  if (DAT_008554d8 != 0) {
    DAT_008554d8 = 0;
    bea_vcall<uint32_t>(*(int **)(this_ + 0x32ea0), 0x104, *(int **)(this_ + 0x32ea0),2,0);
  }
  if (DAT_008554dc != 0) {
    DAT_008554dc = 0;
    bea_vcall<uint32_t>(*(int **)(this_ + 0x32ea0), 0x104, *(int **)(this_ + 0x32ea0),3,0);
  }
  bea_vcall<uint32_t>(*(int **)(this_ + 0x32ea0), 0x190, *(int **)(this_ + 0x32ea0),0,0,0,0);
  DAT_0063dc20 = 1;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512a60, ap_00512a60));
