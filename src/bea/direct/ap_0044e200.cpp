// auto-ported from 0044e200_vslot62.c (CFenrir::vslot62, 62 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @hand-fixed 2026-10-31 from the asm: Ghidra lost param_2 (unaff_EDI).  The float comes from param_2's vslot 0x34
// (ECX = param_2), and the fallback is the thiscall CComplexThing::vslot62(this, param_1, param_2); the autoport
// read the value through param_1 and called the base as stdcall (param_1, param_1).  The Fenrir's "fenrir_diedelay"
// was wrong, and the 742 recording's player died inside the Fenrir at 56.9 instead of escaping at 51.6.
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char CFenrir;
#define s_fenrir_diedelay_00628e78 ((char*)0x00628e78)
typedef void (BEA_THISCALL* CComplexThing__vslot62_t)(void*, int*, int*);
static const bea_guard<CComplexThing__vslot62_t> CComplexThing__vslot62 = {(CComplexThing__vslot62_t)0x004f45e0};

static void BEA_THISCALL ap_0044e200(CFenrir * this_, int *param_1, int *param_2)
{
  char cVar1 = (char)bea_vcall<uint32_t>(param_1, 0x50, s_fenrir_diedelay_00628e78);
  if (cVar1 != '\0') {
    float10 fVar2 = (float10)bea_vcall<float10>(param_2, 0x34);
    *(float *)(this_ + 0x27c) = (float)fVar2;
    return;
  }
  CComplexThing__vslot62(bea_arg(this_), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044e200, ap_0044e200));
