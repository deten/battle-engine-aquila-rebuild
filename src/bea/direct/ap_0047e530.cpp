// auto-ported from 0047e530_vslot9.c (CHazard::vslot9, 421 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CHazard;
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_0067a3f0 GLOBAL_AT(int, 0x0067a3f0)
#define DAT_0067a3f4 GLOBAL_AT(int, 0x0067a3f4)
#define DAT_0067a3f8 GLOBAL_AT(int, 0x0067a3f8)
#define DAT_0067a3fc GLOBAL_AT(int, 0x0067a3fc)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef uint32_t (BEA_STDCALL* FUN_0050b010_t)(uint32_t);
static const bea_guard<FUN_0050b010_t> FUN_0050b010 = {(FUN_0050b010_t)0x0050b010};

static void BEA_THISCALL ap_0047e530(CHazard * this_, int param_1)
{
  int iVar1;
  int iVar2;
  CHazard *pCVar3;
  undefined4 *puVar4;
  
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x24;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(this_ + 0x7c) = *(undefined4 *)(param_1 + 0x3bc);
  CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
  if (**(int **)(this_ + 0x7c) != 0) {
    FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(**(int **)(this_ + 0x7c)), bea_arg(this_ + 0x80), bea_arg(DAT_0067a3f0), bea_arg(DAT_0067a3f4), bea_arg(DAT_0067a3f8), bea_arg(DAT_0067a3fc), bea_arg(0), bea_arg(0));
    puVar4 = *(undefined4 **)(this_ + 0x84);
    pCVar3 = this_ + 0x1c;
    if (puVar4 != (undefined4 *)0x0) {
      if (puVar4[0x12] == 0x461c4000) {
        puVar4[0x20] = *(undefined4 *)pCVar3;
        puVar4[0x21] = *(undefined4 *)(this_ + 0x20);
        puVar4[0x22] = *(undefined4 *)(this_ + 0x24);
        puVar4[0x23] = *(undefined4 *)(this_ + 0x28);
        puVar4[0x10] = *(undefined4 *)pCVar3;
        puVar4[0x11] = *(undefined4 *)(this_ + 0x20);
        puVar4[0x12] = *(undefined4 *)(this_ + 0x24);
        puVar4[0x13] = *(undefined4 *)(this_ + 0x28);
        *puVar4 = *(undefined4 *)pCVar3;
        puVar4[1] = *(undefined4 *)(this_ + 0x20);
        puVar4[2] = *(undefined4 *)(this_ + 0x24);
        puVar4[3] = *(undefined4 *)(this_ + 0x28);
        iVar1 = puVar4[0x2b];
      }
      else {
        puVar4[0x10] = *puVar4;
        puVar4[0x11] = puVar4[1];
        puVar4[0x12] = puVar4[2];
        puVar4[0x13] = puVar4[3];
        *puVar4 = *(undefined4 *)pCVar3;
        puVar4[1] = *(undefined4 *)(this_ + 0x20);
        puVar4[2] = *(undefined4 *)(this_ + 0x24);
        puVar4[3] = *(undefined4 *)(this_ + 0x28);
        iVar1 = puVar4[0x2b];
      }
      if (iVar1 != -0x40800000) {
        puVar4[0x2b] = DAT_00672fd0;
      }
    }
    iVar1 = *(int *)(this_ + 0x84);
    if (iVar1 != 0) {
      pCVar3 = this_ + 0x3c;
      puVar4 = (undefined4 *)(iVar1 + 0x10);
      for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
        *puVar4 = *(undefined4 *)pCVar3;
        pCVar3 = pCVar3 + 4;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(iVar1 + 0xa0) = 1;
    }
  }
  FUN_0050b010(bea_arg(this_));
  if (*(int *)(*(int *)(this_ + 0x7c) + 4) != 0) {
    FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(int *)(*(int *)(this_ + 0x7c) + 4)), bea_arg(this_), bea_arg(0x3f333333), bea_arg(2), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(1), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047e530, ap_0047e530));
