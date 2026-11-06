// auto-ported from 00444030_FUN_00444030.c (FUN_00444030, 296 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING____s___building_part_not_00628614 ((char*)0x00628614)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef float10 (BEA_THISCALL* FUN_00442890_t)(uint32_t);
static const bea_guard<FUN_00442890_t> FUN_00442890 = {(FUN_00442890_t)0x00442890};
typedef undefined4 (BEA_THISCALL* FUN_004433f0_t)(uint32_t);
static const bea_guard<FUN_004433f0_t> FUN_004433f0 = {(FUN_004433f0_t)0x004433f0};
typedef char * (BEA_THISCALL* FUN_004aa6b0_t)(uint32_t);
static const bea_guard<FUN_004aa6b0_t> FUN_004aa6b0 = {(FUN_004aa6b0_t)0x004aa6b0};

static void BEA_THISCALL ap_00444030(void * this_, int param_1, undefined4 param_2, undefined4 param_3)
{
  float fVar1;
  bool bVar2;
  int iVar3;
  void *this_00;
  char *v0;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (param_1 != -1) {
    piVar4 = *(int **)(*(int *)((int)this_ + 4) + param_1 * 4);
    if (piVar4 == (int *)0x0) {
      piVar4 = *(int **)(*(int *)((int)this_ + 0x10) + 0x30);
      if (piVar4 == (int *)0x0) {
        return;
      }
      this_00 = (void *)bea_vcall<uint32_t>(piVar4, 0x24);
      if (this_00 == (void *)0x0) {
        return;
      }
      v0 = (char *)FUN_004aa6b0(bea_arg(this_00));
      FUN_00441740(&DAT_0066f580,s_WARNING____s___building_part_not_00628614,v0,param_1);
    }
    else {
      bea_vcall<uint32_t>(piVar4, 0xc, param_2,param_3);
      iVar3 = FUN_004433f0(bea_arg(*(void **)((int)this_ + 0xc)));
      if ((iVar3 == 1) ||
         (fVar1 = *(float *)((int)this_ + 0x18),
         fVar5 = bea_fcast<float10>(FUN_00442890(bea_arg(*(void **)((int)this_ + 0xc)))), fVar5 < bea_fcast<float10>((fVar1 * 0.3)))
         ) {
        bea_vcall<uint32_t>(*(int **)((int)this_ + 0x10), 0xc8);
      }
    }
  }
  if (*(int *)((int)this_ + 0x2c) == 1) {
    return;
  }
  iVar3 = *(int *)((int)this_ + 8);
  bVar2 = true;
  if (iVar3 < 1) {
LAB_004440fb:
    fVar5 = bea_fcast<float10>(1.0f);
  }
  else {
    piVar4 = *(int **)((int)this_ + 4);
    do {
      if ((*piVar4 != 0) && (*(int *)(*piVar4 + 0x1c) == 1)) {
        bVar2 = false;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
    if (bVar2) goto LAB_004440fb;
    fVar5 = bea_fcast<float10>(FUN_00442890(bea_arg(*(void **)((int)this_ + 0xc))));
  }
  iVar3 = *(int *)((int)this_ + 8);
  bVar2 = true;
  if (0 < iVar3) {
    piVar4 = *(int **)((int)this_ + 4);
    do {
      if ((*piVar4 != 0) && (*(int *)(*piVar4 + 0x1c) == 1)) {
        bVar2 = false;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
    if (!bVar2) {
      fVar6 = bea_fcast<float10>(*(float *)((int)this_ + 0x18));
      goto LAB_0044413b;
    }
  }
  fVar6 = bea_fcast<float10>(1.0f);
LAB_0044413b:
  if (fVar5 < fVar6 * bea_fcast<float10>(0.5f)) {
    *(undefined4 *)((int)this_ + 0x2c) = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00444030, ap_00444030));
