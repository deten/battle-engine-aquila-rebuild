// auto-ported from 0040eeb0_vslot59.c (CBattleEngine::vslot59, 110 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
#define DAT_006235a0 GLOBAL_AT(int, 0x006235a0)
#define s_walktofly_006234b0 ((char*)0x006234b0)
#define s_flytowalk_006234bc ((char*)0x006234bc)
#define PTR_DAT_0062359c GLOBAL_AT(void*, 0x0062359c)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef uint32_t (BEA_THISCALL* FUN_004f4560_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f4560_t> FUN_004f4560 = {(FUN_004f4560_t)0x004f4560};

static undefined4 BEA_THISCALL ap_0040eeb0(CBattleEngine * this_)
{
  int iVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  
  iVar1 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar1 != -1) {
    pcVar4 = s_flytowalk_006234bc;
    pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    iVar3 = FUN_004aa630(bea_arg(pvVar2), bea_arg(pcVar4));
    if (iVar1 == iVar3) {
      FUN_004f4560(bea_arg(this_), bea_arg(&DAT_006235a0), bea_arg(1), bea_arg(1));
      return 0;
    }
    pcVar4 = s_walktofly_006234b0;
    pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    iVar3 = FUN_004aa630(bea_arg(pvVar2), bea_arg(pcVar4));
    if (iVar1 == iVar3) {
      FUN_004f4560(bea_arg(this_), bea_arg(&PTR_DAT_0062359c), bea_arg(1), bea_arg(1));
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040eeb0, ap_0040eeb0));
