// auto-ported from 00556a30_FUN_00556a30.c (FUN_00556a30, 328 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009cc030 GLOBAL_AT(char, 0x009cc030)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_009cc1a0 GLOBAL_AT(char, 0x009cc1a0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
typedef uint32_t (BEA_THISCALL* FUN_00500320_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500320_t> FUN_00500320 = {(FUN_00500320_t)0x00500320};
typedef uint32_t (BEA_THISCALL* FUN_00500360_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500360_t> FUN_00500360 = {(FUN_00500360_t)0x00500360};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_THISCALL* FUN_00513e90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513e90_t> FUN_00513e90 = {(FUN_00513e90_t)0x00513e90};
typedef undefined4 (BEA_THISCALL* FUN_00527cc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00527cc0_t> FUN_00527cc0 = {(FUN_00527cc0_t)0x00527cc0};
typedef undefined4 (BEA_THISCALL* FUN_00527d20_t)(uint32_t);
static const bea_guard<FUN_00527d20_t> FUN_00527d20 = {(FUN_00527d20_t)0x00527d20};
typedef uint32_t (BEA_THISCALL* FUN_00527da0_t)(uint32_t);
static const bea_guard<FUN_00527da0_t> FUN_00527da0 = {(FUN_00527da0_t)0x00527da0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_THISCALL* FUN_005514a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005514a0_t> FUN_005514a0 = {(FUN_005514a0_t)0x005514a0};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_00556a30(void * this_, undefined4 param_1)
{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)((int)this_ + 4) != 0) {
    if (((char)param_1 == '\0') || (cVar1 = FUN_00527cc0(bea_arg(&DAT_009cc030), bea_arg(1)), cVar1 != '\0')) {
      FUN_005514a0(bea_arg(&DAT_009c65c0), bea_arg(4));
      if ((char)param_1 == '\0') {
        uVar2 = FUN_00558690(bea_arg(*(void **)((int)this_ + 8)));
        uVar5 = 0;
      }
      else {
        uVar2 = FUN_00558690(bea_arg(*(void **)((int)this_ + 8)));
        uVar5 = 3;
      }
      FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(uVar5), bea_arg(uVar2));
      puVar3 = *(undefined4 **)this_;
      for (iVar4 = *(int *)((int)this_ + 4); BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
        if (DAT_009cc1a0 == '\0') {
          FUN_00500320(bea_arg((void *)*puVar3), bea_arg(0));
          FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(1));
        }
        else {
          FUN_00500360(bea_arg((void *)*puVar3), bea_arg(0));
          FUN_00513e90(bea_arg(&DAT_00855bb0), bea_arg(0x242));
        }
        if (((char)param_1 != '\0') && (cVar1 = FUN_00527d20(bea_arg(&DAT_009cc030)), cVar1 == '\0'))
        goto LAB_00556b66;
        bea_vcall<uint32_t>(DAT_00888a50, 0x144, DAT_00888a50,5,0,puVar3[2] << 1);
        if (DAT_009cc1a0 == '\0') {
          FUN_00500320(bea_arg((void *)puVar3[1]), bea_arg(0));
          FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(1));
        }
        else {
          FUN_00500360(bea_arg((void *)puVar3[1]), bea_arg(0));
        }
        if (((char)param_1 != '\0') && (cVar1 = FUN_00527d20(bea_arg(&DAT_009cc030)), cVar1 == '\0'))
        goto LAB_00556b66;
        bea_vcall<uint32_t>(DAT_00888a50, 0x144, DAT_00888a50,5,0,puVar3[2] << 1);
        puVar3 = puVar3 + 3;
      }
    }
    if ((char)param_1 != '\0') {
      FUN_00527da0(bea_arg(&DAT_009cc030));
    }
LAB_00556b66:
    FUN_005514a0(bea_arg(&DAT_009c65c0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00556a30, ap_00556a30));
