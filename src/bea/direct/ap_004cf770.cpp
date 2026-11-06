// auto-ported from 004cf770_vslot14.c (CTextureRes::vslot14, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CTweakSLONG;
#define DAT_009cc0f8 GLOBAL_AT(int, 0x009cc0f8)
#define DAT_00631170 GLOBAL_AT(int, 0x00631170)
#define DAT_00704868 GLOBAL_AT(int, 0x00704868)
#define DAT_0082b5b0 GLOBAL_AT(char, 0x0082b5b0)
typedef uint32_t (BEA_THISCALL* CTweakSLONG__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakSLONG__vslot0_t> CTweakSLONG__vslot0 = {(CTweakSLONG__vslot0_t)0x00528ad0};

static void BEA_STDCALL ap_004cf770(int param_1)
{
  CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_009cc0f8), bea_arg((float)param_1));
  if (DAT_00631170 != DAT_00704868) {
    DAT_0082b5b0 = 1;
    DAT_00631170 = DAT_00704868;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf770, ap_004cf770));
