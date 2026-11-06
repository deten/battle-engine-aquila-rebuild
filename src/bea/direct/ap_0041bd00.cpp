// auto-ported from 0041bd00_FUN_0041bd00.c (FUN_0041bd00, 227 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00672e1c GLOBAL_AT(int, 0x00672e1c)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00672e18 GLOBAL_AT(int, 0x00672e18)
#define DAT_00672e44 GLOBAL_AT(int, 0x00672e44)
#define DAT_00624184 GLOBAL_AT(int, 0x00624184)
#define DAT_00672e20 GLOBAL_AT(float, 0x00672e20)
#define s_FATAL_ERROR__Can_t_update_career_006241f0 ((char*)0x006241f0)
#define s_WARNING__Could_not_find_career_n_006241b4 ((char*)0x006241b4)
#define s_Updating_career__world__d_comple_00624238 ((char*)0x00624238)
typedef uint32_t (BEA_THISCALL* FUN_0041bdf0_t)(uint32_t);
static const bea_guard<FUN_0041bdf0_t> FUN_0041bdf0 = {(FUN_0041bdf0_t)0x0041bdf0};
typedef int (BEA_THISCALL* FUN_0041c180_t)(uint32_t);
static const bea_guard<FUN_0041c180_t> FUN_0041c180 = {(FUN_0041c180_t)0x0041c180};
typedef uint32_t (BEA_THISCALL* FUN_0041c470_t)(uint32_t);
static const bea_guard<FUN_0041c470_t> FUN_0041c470 = {(FUN_0041c470_t)0x0041c470};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static void BEA_THISCALL ap_0041bd00(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (DAT_00672e1c != 5) {
LAB_0041bdd9:
    FUN_0041c470(bea_arg(this_));
    return;
  }
  FUN_00441740(&DAT_0066f580,s_Updating_career__world__d_comple_00624238,DAT_00672e18);
  puVar1 = (undefined4 *)((int)this_ + 0x2408);
  iVar2 = (int)&DAT_00672e44 - (int)puVar1;
  iVar4 = 0x20;
  do {
    *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar4 = iVar4 + -1;
  } while (BEA_LOOP_GUARD((iVar4 != 0)));
  FUN_0041c180(bea_arg(this_));
  iVar2 = 0;
  if (0 < DAT_00624184) {
    piVar3 = (int *)((int)this_ + 0x14);
    do {
      if (*piVar3 == DAT_00672e18) {
        iVar2 = iVar2 * 0x40 + 4 + (int)this_;
        if (iVar2 == 0) goto LAB_0041bd95;
        if (*(float *)(iVar2 + 0x3c) < DAT_00672e20) {
          *(float *)(iVar2 + 0x3c) = DAT_00672e20;
        }
        *(undefined4 *)(iVar2 + 4) = 1;
        *(undefined4 *)((int)this_ + 0x2488) = 1;
        FUN_0041bdf0(bea_arg(this_));
        goto LAB_0041bdd9;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x10;
    } while (BEA_LOOP_GUARD((iVar2 < DAT_00624184)));
  }
  FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,DAT_00672e18);
LAB_0041bd95:
  FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Can_t_update_career_006241f0,DAT_00672e18);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041bd00, ap_0041bd00));
