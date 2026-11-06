// auto-ported from 004b3180_FUN_004b3180.c (FUN_004b3180, 109 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static int BEA_CDECL ap_004b3180(void *param_1, int param_2)
{
  FUN_00423910(bea_arg(param_1));
  if (param_2 == 0) {
    param_2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x28), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xb29));
  }
  FUN_00423960(bea_arg(param_1), bea_arg(param_2), bea_arg(0x10), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg(param_2 + 0x10), bea_arg(0x10), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg(param_2 + 0x20), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg(param_2 + 0x24), bea_arg(4), bea_arg(1));
  return param_2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b3180, ap_004b3180));
