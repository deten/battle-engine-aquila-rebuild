// auto-ported from 00488780_vslot11.c (CImageLoader::vslot11, 51 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CImageLoader;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_imageloader_cp_0062d3cc ((char*)0x0062d3cc)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_00488780(CImageLoader * this_, undefined4 param_1)
{
  int iVar1;
  
  bea_vcall<uint32_t>(this_, 0x24);
  iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_imageloader_cp_0062d3cc), bea_arg(0x2b));
  *(int *)(this_ + 0x10) = iVar1;
  return iVar1 != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488780, ap_00488780));
