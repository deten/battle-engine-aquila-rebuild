// auto-ported from 004b7ab0_FUN_004b7ab0.c (FUN_004b7ab0, 166 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_ERROR__no_portraits_for___s__00630860 ((char*)0x00630860)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef undefined1 * (BEA_CDECL* FUN_004f7d30_t)(void *, ...);
static const bea_guard<FUN_004f7d30_t> FUN_004f7d30 = {(FUN_004f7d30_t)0x004f7d30};
typedef short * (BEA_CDECL* FUN_0055f2a7_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055f2a7_t> FUN_0055f2a7 = {(FUN_0055f2a7_t)0x0055f2a7};
typedef int (BEA_CDECL* FUN_0055f2e8_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055f2e8_t> FUN_0055f2e8 = {(FUN_0055f2e8_t)0x0055f2e8};

static int BEA_THISCALL ap_004b7ab0(void * this_, undefined4 param_1)
{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char *v0;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = false;
  iVar5 = 2;
  iVar6 = 0;
  puVar4 = (undefined4 *)((int)this_ + 0x16c);
  do {
    uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(*puVar4));
    iVar3 = FUN_0055f2e8(bea_arg(param_1), bea_arg(uVar2));
    if (iVar3 == 0) {
LAB_004b7b0f:
      bVar1 = true;
      iVar5 = iVar6;
    }
    else if ((!bVar1) && ((undefined1 *)*puVar4 == ((void*)0x00534dfa))) {
      uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xa336c2c));
      iVar3 = FUN_0055f2a7(bea_arg(param_1), bea_arg(uVar2));
      if (iVar3 != 0) goto LAB_004b7b0f;
    }
    iVar6 = iVar6 + 1;
    puVar4 = puVar4 + 1;
    if (0xc < iVar6) {
      if (!bVar1) {
        v0 = (char *)FUN_004f7d30(param_1);
        FUN_00441740(&DAT_0066f580,s_ERROR__no_portraits_for___s__00630860,v0);
      }
      iVar6 = 2;
      if (iVar5 != 3) {
        iVar6 = iVar5;
      }
      return iVar6;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b7ab0, ap_004b7ab0));
