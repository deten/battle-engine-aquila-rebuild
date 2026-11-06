// auto-ported from 004dd160_vslot7.c (CRTMesh::vslot7, 126 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CRTMesh;
#define DAT_0083cd48 GLOBAL_AT(int, 0x0083cd48)
#define DAT_0083cd4c GLOBAL_AT(int, 0x0083cd4c)
#define DAT_0083cd50 GLOBAL_AT(int, 0x0083cd50)
#define DAT_0083cd54 GLOBAL_AT(int, 0x0083cd54)
#define DAT_0083cd18 GLOBAL_AT(undefined4, 0x0083cd18)
typedef undefined4 (BEA_THISCALL* FUN_004aa820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004aa820_t> FUN_004aa820 = {(FUN_004aa820_t)0x004aa820};
typedef uint32_t (BEA_CDECL* FUN_004b4de0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b4de0_t> FUN_004b4de0 = {(FUN_004b4de0_t)0x004b4de0};

static void BEA_THISCALL ap_004dd160(CRTMesh * this_, undefined4 param_1, undefined4 param_2, undefined4 *param_3, undefined4 *param_4, undefined4 param_5, undefined4 param_6)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_3 = DAT_0083cd48;
  param_3[1] = DAT_0083cd4c;
  param_3[2] = DAT_0083cd50;
  param_3[3] = DAT_0083cd54;
  puVar2 = &DAT_0083cd18;
  puVar3 = param_4;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (*(void **)(this_ + 0x14) != (void *)0x0) {
    iVar1 = FUN_004aa820(bea_arg(*(void **)(this_ + 0x14)), bea_arg(param_1), bea_arg(param_2));
    if (iVar1 != 0) {
      FUN_004b4de0(bea_arg(this_), bea_arg(*(undefined4 *)(this_ + 8)), bea_arg(iVar1), bea_arg(param_3), bea_arg(param_4), bea_arg(param_5), bea_arg(param_6));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd160, ap_004dd160));
