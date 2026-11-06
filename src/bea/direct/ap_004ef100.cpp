// auto-ported from 004ef100_vslot96.c (CSubmarine::vslot96, 22 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSubmarine;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot96_t)(uint32_t);
static const bea_guard<CUnit__vslot96_t> CUnit__vslot96 = {(CUnit__vslot96_t)0x004f9490};

static void BEA_THISCALL ap_004ef100(CSubmarine * this_)
{
  int iVar1;
  
  iVar1 = 3;
  do {
    CUnit__vslot96(bea_arg((CUnit *)this_));
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ef100, ap_004ef100));
