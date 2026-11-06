// auto-ported from 0053e220_FUN_0053e220.c (FUN_0053e220, 175 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0083d248 GLOBAL_AT(int, 0x0083d248)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
typedef uint32_t (BEA_THISCALL* FUN_0044a640_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a640_t> FUN_0044a640 = {(FUN_0044a640_t)0x0044a640};
typedef uint32_t (BEA_THISCALL* FUN_004eb1e0_t)(uint32_t);
static const bea_guard<FUN_004eb1e0_t> FUN_004eb1e0 = {(FUN_004eb1e0_t)0x004eb1e0};
typedef uint32_t (BEA_STDCALL* FUN_00515ab0_t)(uint32_t);
static const bea_guard<FUN_00515ab0_t> FUN_00515ab0 = {(FUN_00515ab0_t)0x00515ab0};

static undefined4 BEA_THISCALL ap_0053e220(void * this_, undefined4 *param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_004eb1e0(bea_arg(&DAT_0083d248));
  FUN_0044a640(bea_arg(this_), bea_arg(0));
  bea_vcall<uint32_t>(DAT_00888a50, 0xa4, DAT_00888a50);
  *(undefined4 *)((int)this_ + 0x4ac) = 0;
  puVar2 = param_1;
  puVar3 = (undefined4 *)((int)this_ + 0x438);
  for (iVar1 = 6; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00515ab0(bea_arg(param_1));
  puVar2 = (undefined4 *)((int)this_ + 0x474);
  for (iVar1 = 6; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  bea_vcall<uint32_t>(DAT_00888a50, 0xac, DAT_00888a50,0,0,(DAT_0089d680 != '\0') + 2,"RA",0x3f800000,0)
  ;
  bea_vcall<uint32_t>(DAT_00888a50, 0xa8, DAT_00888a50);
  *(int *)((int)this_ + 0xaf8) = *(int *)((int)this_ + 0xaf8) + 1;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053e220, ap_0053e220));
