// auto-ported from 00480e10_FUN_00480e10.c (FUN_00480e10, 188 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__Unexpected_collision_ch_0062cdec ((char*)0x0062cdec)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_00480e10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00480e10_t> FUN_00480e10 = {(FUN_00480e10_t)0x00480e10};
typedef uint32_t (BEA_THISCALL* FUN_00480ed0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00480ed0_t> FUN_00480ed0 = {(FUN_00480ed0_t)0x00480ed0};
typedef uint32_t (BEA_THISCALL* FUN_00491d80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00491d80_t> FUN_00491d80 = {(FUN_00491d80_t)0x00491d80};
typedef undefined4 (BEA_THISCALL* FUN_00491d90_t)(uint32_t);
static const bea_guard<FUN_00491d90_t> FUN_00491d90 = {(FUN_00491d90_t)0x00491d90};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};
typedef undefined4 (BEA_THISCALL* FUN_004f3d10_t)(uint32_t);
static const bea_guard<FUN_004f3d10_t> FUN_004f3d10 = {(FUN_004f3d10_t)0x004f3d10};

static void BEA_THISCALL ap_00480e10(void * this_, int *param_1)
{
  undefined4 *puVar1;
  void *pvVar2;
  int *a1;
  int iVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00480e10(bea_arg(this_), bea_arg((int *)*puVar1));
    FUN_00480e10(bea_arg(this_), bea_arg((int *)puVar1[1]));
    FUN_00480e10(bea_arg(this_), bea_arg((int *)puVar1[2]));
    FUN_00480e10(bea_arg(this_), bea_arg((int *)puVar1[3]));
  }
  pvVar2 = (void *)FUN_00491d80(bea_arg(&DAT_00704200), bea_arg(param_1));
  while (BEA_LOOP_GUARD((pvVar2 != (void *)0x0))) {
    pvVar2 = (void *)FUN_00492c90(bea_arg(pvVar2));
    a1 = (int *)FUN_004f3d10(bea_arg(pvVar2));
    if ((((a1 != (int *)0x0) && (a1 != *(int **)((int)this_ + 8))) &&
        (iVar3 = bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x20, a1), iVar3 != 0)) &&
       (iVar3 = bea_vcall<uint32_t>(a1, 0x20, *(undefined4 *)((int)this_ + 8)), iVar3 != 0)) {
      if (*(int *)((int)this_ + 0x10) == 1) {
        FUN_00441740(&DAT_0066f580,s_WARNING__Unexpected_collision_ch_0062cdec);
      }
      else {
        FUN_00480ed0(bea_arg(this_), bea_arg(a1));
        *(undefined4 *)((int)this_ + 0x10) = 0;
      }
    }
    pvVar2 = (void *)FUN_00491d90(bea_arg(&DAT_00704200));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00480e10, ap_00480e10));
