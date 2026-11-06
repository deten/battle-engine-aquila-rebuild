// auto-ported from 004741b0_FUN_004741b0.c (FUN_004741b0, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_0067a070 GLOBAL_AT(int, 0x0067a070)
#define DAT_0067a071 GLOBAL_AT(int, 0x0067a071)
#define DAT_00662b2c GLOBAL_AT(int, 0x00662b2c)
#define DAT_0062c8c4 GLOBAL_AT(int, 0x0062c8c4)
#define s_C__dev_ONSLAUGHT2_gcgamut_cpp_0062c968 ((char*)0x0062c968)
#define s_cg_gamutlocked_0062c918 ((char*)0x0062c918)
#define s_cg_showgamut_0062c8e0 ((char*)0x0062c8e0)
#define s_cg_renderimposters_0062c8cc ((char*)0x0062c8cc)
#define s_Determines_if_the_gamut_gets_rec_0062c928 ((char*)0x0062c928)
#define s_Determines_if_the_gamut_is_displ_0062c8f0 ((char*)0x0062c8f0)
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_004741b0(void * this_, undefined4 param_1)
{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this_ + 0x14) = 8;
  *(undefined4 *)((int)this_ + 8) = 0x40;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2000), bea_arg(0x36), bea_arg(s_C__dev_ONSLAUGHT2_gcgamut_cpp_0062c968), bea_arg(0x39));
  *(undefined4 *)((int)this_ + 0xc) = uVar1;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1000), bea_arg(0x36), bea_arg(s_C__dev_ONSLAUGHT2_gcgamut_cpp_0062c968), bea_arg(0x3a));
  *(undefined4 *)((int)this_ + 0x10) = uVar1;
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_gamutlocked_0062c918), bea_arg(s_Determines_if_the_gamut_gets_rec_0062c928), bea_arg(3), bea_arg(&DAT_0067a070), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_showgamut_0062c8e0), bea_arg(s_Determines_if_the_gamut_is_displ_0062c8f0), bea_arg(3), bea_arg(&DAT_0067a071), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_renderimposters_0062c8cc), bea_arg(&DAT_00662b2c), bea_arg(3), bea_arg(&DAT_0062c8c4), bea_arg(0), bea_arg(0));
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004741b0, ap_004741b0));
