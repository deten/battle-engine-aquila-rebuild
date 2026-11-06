// auto-ported from 0046f7e0_vslot3.c (CGame::vslot3, 705 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: switch on param_2 as an unsigned int (0x46f7e7 cmp 0xe / ja, jump table 0x46faa4; 0xd and >0xe go to the error print), case labels as integers
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CGame;
#define DAT_008a1374 GLOBAL_AT(int, 0x008a1374)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_0089c9b0 GLOBAL_AT(int, 0x0089c9b0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_00662dd0 GLOBAL_AT(int, 0x00662dd0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_ERROR__Unknown_command_sent_to_o_0062c1ac ((char*)0x0062c1ac)
#define s_Completing_all_Objectives_0062c1dc ((char*)0x0062c1dc)
typedef undefined4 (BEA_THISCALL* FUN_0042ba90_t)(uint32_t);
static const bea_guard<FUN_0042ba90_t> FUN_0042ba90 = {(FUN_0042ba90_t)0x0042ba90};
typedef undefined4 (BEA_THISCALL* FUN_0042bac0_t)(uint32_t);
static const bea_guard<FUN_0042bac0_t> FUN_0042bac0 = {(FUN_0042bac0_t)0x0042bac0};
typedef undefined4 (BEA_THISCALL* FUN_0042bb30_t)(uint32_t);
static const bea_guard<FUN_0042bb30_t> FUN_0042bb30 = {(FUN_0042bb30_t)0x0042bb30};
typedef uint32_t (BEA_THISCALL* FUN_0042e6e0_t)(uint32_t);
static const bea_guard<FUN_0042e6e0_t> FUN_0042e6e0 = {(FUN_0042e6e0_t)0x0042e6e0};
typedef uint32_t (BEA_THISCALL* FUN_0042e750_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042e750_t> FUN_0042e750 = {(FUN_0042e750_t)0x0042e750};
typedef uint32_t (BEA_CDECL* FUN_0043fcd0_t)(void);
static const bea_guard<FUN_0043fcd0_t> FUN_0043fcd0 = {(FUN_0043fcd0_t)0x0043fcd0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef bool (BEA_THISCALL* FUN_00465490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00465490_t> FUN_00465490 = {(FUN_00465490_t)0x00465490};
typedef uint32_t (BEA_THISCALL* FUN_0046f430_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046f430_t> FUN_0046f430 = {(FUN_0046f430_t)0x0046f430};
typedef uint32_t (BEA_THISCALL* FUN_0046fb00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046fb00_t> FUN_0046fb00 = {(FUN_0046fb00_t)0x0046fb00};
typedef uint32_t (BEA_THISCALL* FUN_0046fb80_t)(uint32_t);
static const bea_guard<FUN_0046fb80_t> FUN_0046fb80 = {(FUN_0046fb80_t)0x0046fb80};
typedef uint32_t (BEA_THISCALL* FUN_0046fc40_t)(uint32_t);
static const bea_guard<FUN_0046fc40_t> FUN_0046fc40 = {(FUN_0046fc40_t)0x0046fc40};
typedef uint32_t (BEA_THISCALL* FUN_0046fd40_t)(uint32_t);
static const bea_guard<FUN_0046fd40_t> FUN_0046fd40 = {(FUN_0046fd40_t)0x0046fd40};
typedef uint32_t (BEA_THISCALL* FUN_0046fe20_t)(uint32_t);
static const bea_guard<FUN_0046fe20_t> FUN_0046fe20 = {(FUN_0046fe20_t)0x0046fe20};
typedef uint32_t (BEA_THISCALL* FUN_00470430_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00470430_t> FUN_00470430 = {(FUN_00470430_t)0x00470430};
typedef uint32_t (BEA_THISCALL* FUN_004705e0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004705e0_t> FUN_004705e0 = {(FUN_004705e0_t)0x004705e0};
typedef uint32_t (BEA_THISCALL* FUN_004d3020_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d3020_t> FUN_004d3020 = {(FUN_004d3020_t)0x004d3020};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_00546b10_t)(uint32_t);
static const bea_guard<FUN_00546b10_t> FUN_00546b10 = {(FUN_00546b10_t)0x00546b10};

static CGame * BEA_THISCALL ap_0046f7e0(CGame * this_, undefined4 param_1, CGame *param_2, undefined4 param_3)
{
  void *this_00;
  CGame *pCVar1;
  int iVar2;
  CGame *pCVar3;
  int iVar4;
  int iVar5;
  
  switch((uint32_t)(uintptr_t)param_2) {
  case 0x0:
    pCVar3 = this_ + 0x2a4;
    iVar5 = 4;
    do {
      this_00 = *(void **)pCVar3;
      if (this_00 != (void *)0x0) {
        param_2 = (CGame *)FUN_004d3020(bea_arg(this_00), bea_arg((uint)(*(int *)((int)this_00 + 0x20) == 0)));
      }
      pCVar3 = pCVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (BEA_LOOP_GUARD((iVar5 != 0)));
    return (CGame *)(param_2);
  case 0x1:
    iVar5 = FUN_00465490(bea_arg(&DAT_008a1374), bea_arg(4));
    param_2 = (CGame *)0x0;
    if (iVar5 != 0) {
      iVar5 = 0;
      pCVar3 = this_ + 0x9d0;
      do {
        pCVar1 = (CGame *)0x0;
        if (*(int *)(pCVar3 + -0x72c) != 0) {
          if (*(int *)pCVar3 == 0) {
            pCVar1 = (CGame *)FUN_00470430(bea_arg(this_), bea_arg(iVar5));
          }
          else {
            if (1 < DAT_008a9ac0) {
              *(int *)pCVar3 = 0;
              FUN_004705e0(bea_arg(this_), bea_arg(iVar5), bea_arg(*(int *)(pCVar3 + -0x6fc)), bea_arg(1));
              FUN_0042e6e0(bea_arg(*(void **)(pCVar3 + -0x71c)));
              if (*(int *)(pCVar3 + 0x10) == 1) {
                *(undefined4 *)(this_ + 0x2c) = 1;
              }
              else {
                *(undefined4 *)(this_ + 0x2c) = 0;
              }
            }
            pCVar1 = (CGame *)FUN_00546b10(bea_arg(DAT_0089c9b0));
          }
        }
        iVar5 = iVar5 + 1;
        pCVar3 = pCVar3 + 4;
      } while (BEA_LOOP_GUARD((iVar5 < 4)));
      return (CGame *)(pCVar1);
    }
    break;
  case 0x2:
    *(undefined4 *)(this_ + 0x9cc) = 1;
    return (CGame *)(param_2);
  case 0x3:
    pCVar3 = (CGame *)FUN_0046fe20(bea_arg(this_));
    return (CGame *)(pCVar3);
  case 0x4:
    pCVar3 = (CGame *)FUN_0046fd40(bea_arg(this_));
    return (CGame *)(pCVar3);
  case 0x5:
    pCVar3 = (CGame *)FUN_0046fb80(bea_arg(this_));
    return (CGame *)(pCVar3);
  case 0x6:
    pCVar3 = (CGame *)FUN_0046fc40(bea_arg(this_));
    return (CGame *)(pCVar3);
  case 0x7:
    pCVar3 = (CGame *)FUN_0043fcd0();
    return (CGame *)(pCVar3);
  case 0x8:
    pCVar3 = (CGame *)FUN_0042ba90(bea_arg(&DAT_00663498));
    return (CGame *)(pCVar3);
  case 0x9:
    pCVar3 = (CGame *)FUN_0042bac0(bea_arg(&DAT_00663498));
    return (CGame *)(pCVar3);
  case 0xa:
    pCVar3 = (CGame *)FUN_0042bb30(bea_arg(&DAT_00663498));
    return (CGame *)(pCVar3);
  case 0xb:
    if (DAT_00662dd0 == 1) {
      iVar5 = *(int *)(this_ + 0xf8) - *(int *)(this_ + 0xfc);
      if (0 < iVar5) {
        iVar2 = FUN_004de8d0(bea_arg(*(void **)(this_ + 0x304)));
        param_2 = (CGame *)(iVar2 / iVar5);
        *(int *)(this_ + 0xf4) = *(int *)(this_ + 0xfc) + iVar2 % iVar5;
      }
      if (*(int *)(this_ + 0x28) < 4) {
        iVar5 = 0;
        pCVar3 = this_ + 0x2b4;
        do {
          if (*(void **)pCVar3 != (void *)0x0) {
            FUN_0042e750(bea_arg(*(void **)pCVar3), bea_arg(0), bea_arg(iVar5));
          }
          iVar5 = iVar5 + 1;
          pCVar3 = pCVar3 + 4;
        } while (BEA_LOOP_GUARD((iVar5 < 4)));
        *(undefined4 *)(this_ + 0x28) = 5;
        if ((*(int *)(this_ + 0x30) != 0x2e5) && (*(int *)(this_ + 0x30) != 0x2e6)) {
          *(undefined4 *)(this_ + 0x48) = 0x40a00000;
          pCVar3 = (CGame *)FUN_0046fb00(bea_arg(this_), bea_arg(0), bea_arg(0));
          return (CGame *)(pCVar3);
        }
        *(undefined4 *)(this_ + 0x48) = 0;
        pCVar3 = (CGame *)FUN_0046fb00(bea_arg(this_), bea_arg(0), bea_arg(0));
        return (CGame *)(pCVar3);
      }
    }
    break;
  case 0xc:
    if ((DAT_00662dd0 == 1) && (2 < *(int *)(this_ + 0x28))) {
      iVar5 = *(int *)(this_ + 0xf8);
      iVar2 = *(int *)(this_ + 0xfc);
      if (0 < iVar5 - iVar2) {
        iVar4 = FUN_004de8d0(bea_arg(*(void **)(this_ + 0x304)));
        *(int *)(this_ + 0xf4) = *(int *)(this_ + 0xfc) + iVar4 % (iVar5 - iVar2);
      }
      pCVar3 = (CGame *)FUN_0046f430(bea_arg(this_), bea_arg(0), bea_arg(0));
      return (CGame *)(pCVar3);
    }
    break;
  default:
    param_2 = (CGame *)FUN_00441740(&DAT_0066f580,s_ERROR__Unknown_command_sent_to_o_0062c1ac);
    break;
  case 0xe:
    FUN_00441740(&DAT_0066f580,s_Completing_all_Objectives_0062c1dc);
    pCVar3 = this_ + 0x4c;
    iVar5 = 10;
    do {
      *(undefined4 *)pCVar3 = 1;
      *(undefined4 *)(pCVar3 + 4) = 10;
      pCVar3 = pCVar3 + 8;
      iVar5 = iVar5 + -1;
    } while (BEA_LOOP_GUARD((iVar5 != 0)));
    pCVar3 = this_ + 0x9c;
    iVar5 = 10;
    do {
      *(undefined4 *)pCVar3 = 1;
      *(undefined4 *)(pCVar3 + 4) = 10;
      pCVar3 = pCVar3 + 8;
      iVar5 = iVar5 + -1;
    } while (BEA_LOOP_GUARD((iVar5 != 0)));
    return (CGame *)(pCVar3);
  }
  return (CGame *)(param_2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046f7e0, ap_0046f7e0));
