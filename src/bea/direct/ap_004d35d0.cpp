// auto-ported from 004d35d0_vslot9.c (CPod::vslot9, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPod;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot9_t> CUnit__vslot9 = {(CUnit__vslot9_t)0x004f86d0};

static uint32_t BEA_THISCALL ap_004d35d0(CPod * this_, int param_1)
{
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x2000010;
  *(undefined4 *)(this_ + 0x250) = 1;
  *(undefined4 *)(this_ + 0x254) = 0;
  CUnit__vslot9(bea_arg((CUnit *)this_), bea_arg(param_1));
  *(undefined4 *)(this_ + 600) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this_ + 0x25c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0x260) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x264) = *(undefined4 *)(param_1 + 0x10);
  return *(uint32_t*)((char*)this_ + 0x264);
  return *(uint32_t*)((char*)this_ + 0x264);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d35d0, ap_004d35d0));
