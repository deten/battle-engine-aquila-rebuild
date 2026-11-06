// auto-ported from 00452fd0_FUN_00452fd0.c (FUN_00452fd0, 153 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (7 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_0089d7f0 GLOBAL_AT(int, 0x0089d7f0)
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static void BEA_STDCALL ap_00452fd0(float param_1)
{
  int iVar1;
  float10 fVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  fVar2 = _CIfmod(bea_fcast<float10>(180.0f),bea_fcast<float10>(_DAT_008a9570) * bea_fcast<float10>(0.3f));
  iVar1 = 4;
  local_c = bea_piece32(bea_fcast<float>((bea_fcast<float10>(90.0f) - fVar2)));
  local_8 = (int)(longlong)ROUND(param_1 * 255.0f);
  do {
    FUN_005563d0(bea_arg(0x42ac0000), bea_arg(local_c), bea_arg(0x3f666666), bea_arg(DAT_0089d7f0), bea_arg(local_8 * 0x3f0000 | 0xffffff), bea_arg(0x3f000000), bea_arg(0x3f000000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
    local_c = bea_piece32(bea_fcast<float>(local_c) + 180.0f);
    iVar1 = iVar1 + -1;
  } while (((iVar1 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00452fd0, ap_00452fd0));
