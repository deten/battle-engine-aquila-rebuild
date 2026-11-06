// auto-ported from 00460590_vslot2.c (CFEPLevelSelect::vslot2, 273 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CFEPLevelSelect;
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_006798f8 GLOBAL_AT(int, 0x006798f8)
typedef uint32_t (BEA_CDECL* FUN_0045d730_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0045d730_t> FUN_0045d730 = {(FUN_0045d730_t)0x0045d730};

static uint32_t BEA_THISCALL ap_00460590(CFEPLevelSelect * this_, int param_1)
{
  float fVar1;
  CFEPLevelSelect *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  iVar4 = *(int *)(this_ + 0x346c);
  if (iVar4 < *(int *)(this_ + *(int *)(this_ + 0x3468) * 4 + 4)) {
    if (iVar4 < 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = *(int *)(this_ + *(int *)(this_ + 0x3468) * 4 + 4) + -1;
  }
  iVar5 = 0;
  pCVar2 = this_ + 0x57c;
  do {
    iVar3 = 0;
    do {
      if (((param_1 == 0) && (iVar5 == *(int *)(this_ + 0x3468))) && (iVar3 == iVar4)) {
        fVar1 = *(float *)pCVar2 + 0.1f;
      }
      else {
        fVar1 = *(float *)pCVar2 - 0.1f;
      }
      *(float *)pCVar2 = fVar1;
      if (*(float *)pCVar2 < 0.0f) {
        *(float *)pCVar2 = 0.0f;
      }
      if (1.0f < *(float *)pCVar2) {
        *(float *)pCVar2 = 1.0f;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 4;
    } while (BEA_LOOP_GUARD((iVar3 < 6)));
    iVar5 = iVar5 + 1;
  } while (BEA_LOOP_GUARD((iVar5 < 0x32)));
  if ((param_1 == 0) && (DAT_00662df4 != 0)) {
    if (DAT_006798f8 == 0) {
      *(undefined4 *)(this_ + 0x346c) = 0;
      *(undefined4 *)(this_ + 0x3468) = 1;
      bea_vcall<uint32_t>(this_, 0xc, 0x2c,0x3f800000);
    }
    else if (DAT_006798f8 == 1) {
      *(undefined4 *)(this_ + 0x346c) = 0;
      *(undefined4 *)(this_ + 0x3468) = 0x10;
      bea_vcall<uint32_t>(this_, 0xc, 0x2c,0x3f800000);
    }
    DAT_006798f8 = DAT_006798f8 + 1;
  }
  return FUN_0045d730(bea_arg(param_1), bea_arg(this_ + 0x3460), bea_arg(0x44898000));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00460590, ap_00460590));
