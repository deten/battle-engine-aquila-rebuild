// auto-ported from 0053d5f0_vslot1.c (CDXEngine::vslot1, 224 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDXEngine;
typedef char CEngine;
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_009c64d8 GLOBAL_AT(int, 0x009c64d8)
#define s_Should_water_reflections_be_rend_00650540 ((char*)0x00650540)
#define s_Alter_the_gamma_ramp_bias__0_nor_00650578 ((char*)0x00650578)
#define s_cg_texturereflections_006504dc ((char*)0x006504dc)
#define s_Should_render_to_texture_be_used_006504f4 ((char*)0x006504f4)
#define s_cg_renderreflections_00650528 ((char*)0x00650528)
#define s_SetGammaBias_00650568 ((char*)0x00650568)
typedef undefined4 (BEA_THISCALL* CEngine__vslot1_t)(uint32_t);
static const bea_guard<CEngine__vslot1_t> CEngine__vslot1 = {(CEngine__vslot1_t)0x004499d0};
typedef undefined4 (BEA_THISCALL* FUN_0042af80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042af80_t> FUN_0042af80 = {(FUN_0042af80_t)0x0042af80};
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef uint32_t (BEA_THISCALL* FUN_00550430_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550430_t> FUN_00550430 = {(FUN_00550430_t)0x00550430};

static undefined4 BEA_THISCALL ap_0053d5f0(CDXEngine * this_)
{
  int iVar1;
  
  iVar1 = CEngine__vslot1(bea_arg((CEngine *)this_));
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this_ + 0x4f0) = 0;
  *(undefined4 *)(this_ + 0x4c0) = 0;
  *(undefined4 *)(this_ + 0x4b4) = 8;
  *(undefined4 *)(this_ + 0x42c) = 0;
  *(undefined4 *)(this_ + 0x4c4) = 0;
  *(undefined4 *)(this_ + 0x4c8) = 1000;
  *(undefined4 *)(this_ + 0x4cc) = 0;
  *(undefined4 *)(this_ + 0x4d0) = 0xffffffff;
  *(undefined4 *)(this_ + 0xafc) = 1;
  bea_vcall<uint32_t>(DAT_00888a50, 0x58, DAT_00888a50,0,this_ + 0x4f4);
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_SetGammaBias_00650568), bea_arg(s_Alter_the_gamma_ramp_bias__0_nor_00650578), bea_arg(((void*)0x0053d480)), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_renderreflections_00650528), bea_arg(s_Should_water_reflections_be_rend_00650540), bea_arg(3), bea_arg(this_ + 0xaf4), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_texturereflections_006504dc), bea_arg(s_Should_render_to_texture_be_used_006504f4), bea_arg(3), bea_arg(this_ + 0xaf5), bea_arg(0), bea_arg(0));
  FUN_00550430(bea_arg(&DAT_009c64d8), bea_arg(800), bea_arg(300), bea_arg(0x5a));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053d5f0, ap_0053d5f0));
