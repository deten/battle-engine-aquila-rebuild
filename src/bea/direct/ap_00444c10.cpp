// auto-ported from 00444c10_FUN_00444c10.c (FUN_00444c10, 744 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00672768 GLOBAL_AT(int, 0x00672768)
#define DAT_00628974 GLOBAL_AT(int, 0x00628974)
#define DAT_0062896c GLOBAL_AT(int, 0x0062896c)
#define DAT_00628968 GLOBAL_AT(int, 0x00628968)
#define DAT_00628964 GLOBAL_AT(int, 0x00628964)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Woops____s__Looks_like_you_forgo_006288fc ((char*)0x006288fc)
#define s_WARNING___s__found_second_start_c_00628934 ((char*)0x00628934)
#define s_Warning____s__Child_of_CORE1_was_006288bc ((char*)0x006288bc)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_00442700_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00442700_t> FUN_00442700 = {(FUN_00442700_t)0x00442700};
typedef undefined4 * (BEA_THISCALL* FUN_004449c0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004449c0_t> FUN_004449c0 = {(FUN_004449c0_t)0x004449c0};
typedef uint32_t (BEA_THISCALL* FUN_00444c10_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00444c10_t> FUN_00444c10 = {(FUN_00444c10_t)0x00444c10};
typedef char * (BEA_THISCALL* FUN_004aa6b0_t)(uint32_t);
static const bea_guard<FUN_004aa6b0_t> FUN_004aa6b0 = {(FUN_004aa6b0_t)0x004aa6b0};
typedef void * (BEA_THISCALL* FUN_004b0cd0_t)(uint32_t);
static const bea_guard<FUN_004b0cd0_t> FUN_004b0cd0 = {(FUN_004b0cd0_t)0x004b0cd0};
typedef int (BEA_CDECL* _strncmp_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncmp_t> _strncmp = {(_strncmp_t)0x0055e560};

static void BEA_THISCALL ap_00444c10(void * this_, void *param_1, int *param_2)
{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  
  pvVar1 = param_1;
  DAT_00672768 = DAT_00672768 + 1;
  iVar2 = FUN_004b0cd0(bea_arg(param_1));
  iVar3 = FUN_004b0cd0(bea_arg(param_1));
  piVar5 = param_2;
  if (((iVar3 != 0) && (iVar3 = FUN_004b0cd0(bea_arg(param_1)), *(int *)(iVar3 + 0x8c) == 1)) &&
     (*(int *)((int)param_1 + 0xa4) == 0)) {
    iVar2 = *(int *)(iVar2 + 0xfc);
    param_1 = *(void **)(iVar2 + 0x10);
    if (bea_fcast<float>(param_1) < *(float *)(iVar2 + 0x14)) {
      param_1 = *(void **)(iVar2 + 0x14);
    }
    if (bea_fcast<float>(param_1) < *(float *)(iVar2 + 0x18)) {
      param_1 = *(void **)(iVar2 + 0x18);
    }
    if (param_2 == (int *)0x0) {
      pcVar7 = (char *)((int)pvVar1 + 0xdc);
      iVar2 = _strncmp(bea_arg(pcVar7), bea_arg(&DAT_00628974), bea_arg(4));
      if ((iVar2 == 0) || (iVar2 = _strncmp(bea_arg(pcVar7), bea_arg(&DAT_0062896c), bea_arg(4)), iVar2 == 0)) {
        uVar4 = 0;
      }
      else if (*(int *)((int)pvVar1 + 0xa0) < 1) {
        iVar2 = _strncmp(bea_arg(pcVar7), bea_arg(&DAT_00628968), bea_arg(2));
        if ((iVar2 == 0) || (iVar2 = _strncmp(bea_arg(pcVar7), bea_arg(&DAT_00628964), bea_arg(2)), iVar2 == 0)) {
          uVar4 = 3;
        }
        else {
          uVar4 = 2;
        }
      }
      else {
        uVar4 = 1;
      }
      piVar5 = (int *)FUN_004449c0(bea_arg(this_), bea_arg(uVar4), bea_arg(pvVar1), bea_arg(0), bea_arg(param_1));
      iVar2 = bea_vcall<uint32_t>(piVar5, 0x14);
      if (iVar2 != 0) {
        if (*(int *)((int)this_ + 0x20) < 2) {
          return;
        }
        pcVar6 = (char *)FUN_004aa6b0(bea_arg(*(void **)((int)pvVar1 + 0x128)));
        FUN_00441740(&DAT_0066f580,s_Woops____s__Looks_like_you_forgo_006288fc,pcVar6,pcVar7);
        return;
      }
      if (1 < *(int *)((int)this_ + 0x20)) {
        pcVar6 = (char *)FUN_004aa6b0(bea_arg(*(void **)((int)pvVar1 + 0x128)));
        FUN_00441740(&DAT_0066f580,s_WARNING___s__found_second_start_c_00628934,pcVar6,pcVar7);
        return;
      }
      *(int **)((int)this_ + 0xc) = piVar5;
    }
    else {
      pcVar7 = (char *)((int)pvVar1 + 0xdc);
      *(float *)((int)this_ + 0x1c) = bea_fcast<float>(param_1) + *(float *)((int)this_ + 0x1c);
      iVar2 = _strncmp(bea_arg(pcVar7), bea_arg(&DAT_00628974), bea_arg(4));
      if ((iVar2 == 0) || (iVar2 = _strncmp(bea_arg(pcVar7), bea_arg(&DAT_0062896c), bea_arg(4)), iVar2 == 0)) {
        uVar4 = 0;
      }
      else {
        if (*(int *)((int)pvVar1 + 0xa0) < 1) {
          iVar2 = _strncmp(bea_arg(pcVar7), bea_arg(&DAT_00628968), bea_arg(2));
          if ((iVar2 == 0) || (iVar2 = _strncmp(bea_arg(pcVar7), bea_arg(&DAT_00628964), bea_arg(2)), iVar2 == 0)) {
            uVar4 = 3;
          }
          else {
            uVar4 = 2;
          }
        }
        else {
          uVar4 = 1;
        }
        iVar2 = bea_vcall<uint32_t>(param_2, 0x14);
        if ((iVar2 == 0) && (param_2[0x10] == 1)) {
          pcVar6 = (char *)FUN_004aa6b0(bea_arg(*(void **)((int)pvVar1 + 0x128)));
          FUN_00441740(&DAT_0066f580,s_Warning____s__Child_of_CORE1_was_006288bc,pcVar6,pcVar7);
        }
      }
      piVar5 = (int *)FUN_004449c0(bea_arg(this_), bea_arg(uVar4), bea_arg(pvVar1), bea_arg(param_2), bea_arg(param_1));
      FUN_00442700(bea_arg(param_2), bea_arg(piVar5));
    }
    *(int **)(*(int *)((int)this_ + 4) + *(int *)((int)pvVar1 + 0x88) * 4) = piVar5;
    if (0 < *(int *)((int)pvVar1 + 0xa0)) {
      for (iVar2 = *(int *)((int)pvVar1 + 0x9c); BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = *(int *)(iVar2 + 0x9c)) {
        *(int **)(*(int *)((int)this_ + 4) + *(int *)(iVar2 + 0x88) * 4) = piVar5;
      }
    }
  }
  iVar2 = 0;
  if (0 < *(int *)((int)pvVar1 + 0x90)) {
    do {
      FUN_00444c10(bea_arg(this_), bea_arg((void *)*(undefined4 *)(*(int *)((int)pvVar1 + 0x94) + iVar2 * 4)), bea_arg(piVar5));
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)pvVar1 + 0x90))));
  }
  DAT_00672768 = DAT_00672768 + -1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00444c10, ap_00444c10));
