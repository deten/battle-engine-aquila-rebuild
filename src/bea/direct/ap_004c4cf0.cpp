// auto-ported from 004c4cf0_vslot9.c (CPDMesh::vslot9, 201 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CPDMesh;
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_THISCALL ap_004c4cf0(CPDMesh * this_, int param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(float *)(param_1 + 0x60) = (float)*(int *)(this_ + 100);
  fVar1 = *(float *)(this_ + 0x70);
  uVar4 = _rand();
  fVar2 = *(float *)(this_ + 0x70);
  uVar5 = _rand();
  fVar3 = *(float *)(this_ + 0x70);
  uVar6 = _rand();
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(float *)(param_1 + 0xd0) = (float)(int)((uVar5 & 0xff) - 0x80) * fVar2 * 0.0078125f;
  *(float *)(param_1 + 200) = (float)(int)((uVar6 & 0xff) - 0x80) * fVar3 * 0.0078125f;
  *(float *)(param_1 + 0xcc) = (float)(int)((uVar4 & 0xff) - 0x80) * fVar1 * 0.0078125f;
  if (*(int *)(this_ + 0x5c) != 0) {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(int *)(this_ + 0x5c) + 0x164);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c4cf0, ap_004c4cf0));
