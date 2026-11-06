// auto-ported from 005385e0_vslot0.c (IScript::vslot0, 197 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char IScript;
#define DAT_0089c5e0 GLOBAL_AT(int, 0x0089c5e0)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_0089c7f4 GLOBAL_AT(int, 0x0089c7f4)
#define DAT_0089c7f0 GLOBAL_AT(int, 0x0089c7f0)
#define DAT_0089c528 GLOBAL_AT(int, 0x0089c528)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00538470_t)(uint32_t);
static const bea_guard<FUN_00538470_t> FUN_00538470 = {(FUN_00538470_t)0x00538470};
typedef void * (BEA_THISCALL* FUN_00539910_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539910_t> FUN_00539910 = {(FUN_00539910_t)0x00539910};
typedef uint32_t (BEA_THISCALL* FUN_00539980_t)(uint32_t);
static const bea_guard<FUN_00539980_t> FUN_00539980 = {(FUN_00539980_t)0x00539980};
typedef uint32_t (BEA_THISCALL* FUN_00539990_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00539990_t> FUN_00539990 = {(FUN_00539990_t)0x00539990};
typedef uint32_t (BEA_THISCALL* FUN_00539ae0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539ae0_t> FUN_00539ae0 = {(FUN_00539ae0_t)0x00539ae0};

static void BEA_THISCALL ap_005385e0(IScript * this_, int param_1)
{
  short sVar1;
  int *piVar2;
  
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 == 2000) {
    FUN_00538470(bea_arg(this_));
  }
  else if (sVar1 == 0x7d1) {
    piVar2 = *(int **)(param_1 + 0xc);
    if (piVar2 != (int *)0x0) {
      FUN_00539910(bea_arg(&DAT_0089c5e0), bea_arg(piVar2));
      FUN_004e5bd0(bea_arg(this_ + 0x28), bea_arg(piVar2));
      if (piVar2 != (int *)0x0) {
        bea_vcall<uint32_t>(piVar2, 0x4, 1);
      }
      if (DAT_008a9ac0 == 4) {
        FUN_00539980(bea_arg(&DAT_0089c5e0));
        return;
      }
      FUN_00539ae0(bea_arg(&DAT_0089c5e0), bea_arg(DAT_0089c7f4));
      return;
    }
  }
  else if ((sVar1 == 0x7d2) && (DAT_0089c7f0 == 0)) {
    if (DAT_008a9ac0 == 4) {
      FUN_00539980(bea_arg(&DAT_0089c5e0));
      return;
    }
    FUN_00539990(bea_arg(&DAT_0089c5e0), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(2), bea_arg(&DAT_0089c528), bea_arg(0));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005385e0, ap_005385e0));
