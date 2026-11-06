// auto-ported from 0044dfb0_vslot9.c (CFenrir::vslot9, 101 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCarrier;
typedef char CFenrir;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define s_Fenrir_Inside_Burning_00628e4c ((char*)0x00628e4c)
#define s_Fenrir_Engines_00628e3c ((char*)0x00628e3c)
typedef uint32_t (BEA_THISCALL* CCarrier__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CCarrier__vslot9_t> CCarrier__vslot9 = {(CCarrier__vslot9_t)0x00421a80};
typedef undefined4 (BEA_THISCALL* FUN_004e1910_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1910_t> FUN_004e1910 = {(FUN_004e1910_t)0x004e1910};

static uint32_t BEA_THISCALL ap_0044dfb0(CFenrir * this_, undefined4 param_1)
{
  undefined4 uVar1;
  
  *(undefined4 *)(this_ + 0x27c) = 0x40000000;
  *(undefined4 *)(this_ + 0x280) = 0;
  CCarrier__vslot9(bea_arg((CCarrier *)this_), bea_arg(param_1));
  *(undefined4 *)(this_ + 0x284) = *(undefined4 *)(*(int *)(this_ + 0x164) + 0xb4);
  uVar1 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(s_Fenrir_Inside_Burning_00628e4c), bea_arg(0));
  *(undefined4 *)(this_ + 0x288) = uVar1;
  uVar1 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(s_Fenrir_Engines_00628e3c), bea_arg(0));
  *(undefined4 *)(this_ + 0x28c) = uVar1;
  return *(uint32_t*)((char*)this_ + 0x28c);
  return *(uint32_t*)((char*)this_ + 0x28c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044dfb0, ap_0044dfb0));
