// auto-ported from 00459b00_vslot2.c (CFEPE3LevelSelect::vslot2, 259 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPE3LevelSelect;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};

static void BEA_THISCALL ap_00459b00(CFEPE3LevelSelect * this_, int param_1)
{
  float fVar1;
  CFEPE3LevelSelect *pCVar2;
  int iVar3;
  int iVar4;
  
  if (ABS(*(float *)(this_ + 0x3460) - *(float *)(this_ + 0x3464)) <= 1.0f) {
    if (*(float *)(this_ + 0x3464) <= *(float *)(this_ + 0x3460)) {
      fVar1 = *(float *)(this_ + 0x3464) + 1.0f;
    }
    else {
      fVar1 = *(float *)(this_ + 0x3464) - 1.0f;
    }
  }
  else {
    fVar1 = (*(float *)(this_ + 0x3464) - *(float *)(this_ + 0x3460)) * 0.25f +
            *(float *)(this_ + 0x3460);
  }
  *(float *)(this_ + 0x3460) = fVar1;
  iVar4 = 0;
  pCVar2 = this_ + 0x57c;
  do {
    iVar3 = 0;
    do {
      if (((param_1 == 0) && (iVar4 == *(int *)(this_ + 0x3468))) &&
         (iVar3 == *(int *)(this_ + 0x346c))) {
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
    iVar4 = iVar4 + 1;
  } while (BEA_LOOP_GUARD((iVar4 < 0x32)));
  iVar4 = *(int *)(this_ + 0x347c);
  *(int *)(this_ + 0x347c) = iVar4 + 1;
  if ((param_1 == 0) && (0x2ee < iVar4 + 1)) {
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0xc), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00459b00, ap_00459b00));
