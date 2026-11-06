// auto-ported from 004dcb90_vslot11.c (CRTMesh::vslot11, 13 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRTMesh;
typedef uint32_t (BEA_THISCALL* FUN_004aa900_t)(uint32_t);
static const bea_guard<FUN_004aa900_t> FUN_004aa900 = {(FUN_004aa900_t)0x004aa900};

static void BEA_THISCALL ap_004dcb90(CRTMesh * this_)
{
  if (*(void **)(this_ + 0x14) != (void *)0x0) {
    FUN_004aa900(bea_arg(*(void **)(this_ + 0x14)));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dcb90, ap_004dcb90));
