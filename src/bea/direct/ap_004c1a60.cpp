// auto-ported from 004c1a60_vslot9.c (CPDEmitter::vslot9, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CPDEmitter;
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static int BEA_THISCALL ap_004c1a60(CPDEmitter * this_, int param_1)
{
  int iVar1;
  
  *(float *)(param_1 + 0x60) = (float)*(int *)(this_ + 100);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  iVar1 = _rand();
  *(short *)(param_1 + 0x7e) = (short)(iVar1 % 0x14) + -0x14;
  return iVar1 / 0x14;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c1a60, ap_004c1a60));
