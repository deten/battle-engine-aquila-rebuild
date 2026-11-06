// auto-ported from 00450460_FUN_00450460.c (FUN_00450460, 302 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0089d8e8 GLOBAL_AT(int, 0x0089d8e8)
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static void BEA_CDECL ap_00450460(float param_1, float param_2, float param_3, uint param_4)
{
  uint uVar1;
  int local_8;
  
  local_8 = (int)(longlong)ROUND(param_3 * 5.01f);
  uVar1 = param_4 >> 0x18;
  param_1 = param_1 - (float)(local_8 + -1) * 6.0f * 0.5f;
  switch(local_8 + -1) {
  case 0:
    param_4 = 0xffff6f4f;
    break;
  case 1:
  case 2:
    param_4 = 0xff4f6fff;
    break;
  case 3:
  case 4:
    param_4 = 0xff6fff5f;
  }
  if (0 < local_8) {
    do {
      FUN_005563d0(bea_arg(param_1 + 2.0f), bea_arg(param_2 + 2.0f), bea_arg(0x3dcccccd), bea_arg(DAT_0089d8e8), bea_arg((uVar1 * 0x7f & 0xff00) << 0x10), bea_arg(0x3f333333), bea_arg(0x3f333333), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
      FUN_005563d0(bea_arg(param_1), bea_arg(param_2), bea_arg(0x3dcccccd), bea_arg(DAT_0089d8e8), bea_arg(((param_4 >> 8 & 0xffff0000) * uVar1 ^ param_4) & 0xffffff ^
                   (param_4 >> 8 & 0xff0000) * uVar1), bea_arg(0x3f333333), bea_arg(0x3f333333), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
      param_1 = param_1 + 6.0f;
      local_8 = local_8 + -1;
    } while (BEA_LOOP_GUARD((local_8 != 0)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00450460, ap_00450460));
