// auto-ported from 004dffc0_vslot0.c (CSample::vslot0, 115 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CSample;
#define DAT_00896994 GLOBAL_AT(int, 0x00896994)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_STDCALL* FUN_004e0f70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e0f70_t> FUN_004e0f70 = {(FUN_004e0f70_t)0x004e0f70};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static CSample * BEA_THISCALL ap_004dffc0(CSample * this_, uint param_1)
{
  int iVar1;
  CSample *pCVar2;
  CSample *pCVar3;
  CSample *pCVar4;
  
  *(undefined ***)this_ = ((void*)0x005dee6c);
  for (iVar1 = DAT_00896994; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0x74)) {
    if (*(CSample **)(iVar1 + 0xc) == this_) {
      FUN_004e0f70(bea_arg(iVar1), bea_arg(1));
    }
  }
  pCVar2 = DAT_00896988;
  pCVar4 = (CSample *)0x0;
  if (DAT_00896988 != (CSample *)0x0) {
    do {
      pCVar3 = pCVar2;
      if (pCVar3 == this_) break;
      pCVar2 = *(CSample **)(pCVar3 + 0x74);
      pCVar4 = pCVar3;
    } while (BEA_LOOP_GUARD((*(CSample **)(pCVar3 + 0x74) != (CSample *)0x0)));
    if (pCVar4 != (CSample *)0x0) {
      *(undefined4 *)(pCVar4 + 0x74) = *(undefined4 *)(this_ + 0x74);
      goto LAB_004e001a;
    }
  }
  DAT_00896988 = *(CSample **)(this_ + 0x74);
LAB_004e001a:
  if ((param_1 & 1) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_));
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dffc0, ap_004dffc0));
