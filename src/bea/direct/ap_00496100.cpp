// auto-ported from 00496100_vslot5.c (CMCDropship::vslot5, 248 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CMCDropship;
#define DAT_0062dd6c GLOBAL_AT(int, 0x0062dd6c)
#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)
#define s_dooropening_00628a98 ((char*)0x00628a98)
#define s_doorclosing_00628a8c ((char*)0x00628a8c)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static CMCDropship * BEA_THISCALL ap_00496100(CMCDropship * this_, int param_1, float *param_2)
{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_0056e170(bea_arg(param_1 + 0xdc), bea_arg(&DAT_0062dd6c), bea_arg(4));
  if (iVar2 != 0) {
    return (CMCDropship *)iVar2;
  }
  if (*(int *)(this_ + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this_ + 8) + -8;
  }
  iVar3 = *(int *)(param_1 + 0x128);
  iVar4 = *(int *)(iVar3 + 0x18);
  if ((*(int *)(iVar2 + 0x27c) == 7) || (*(int *)(iVar2 + 0x27c) == 5)) {
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0x14)) {
      do {
        iVar3 = FUN_00568390(bea_arg(s_doorclosing_00628a8c), bea_arg(iVar4));
        if (iVar3 == 0) goto LAB_004961ac;
        iVar4 = iVar4 + 0x24;
        iVar5 = iVar5 + 1;
      } while (BEA_LOOP_GUARD((iVar5 < *(int *)(*(int *)(param_1 + 0x128) + 0x14))));
    }
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0x14)) {
      do {
        iVar3 = FUN_00568390(bea_arg(s_dooropening_00628a98), bea_arg(iVar4));
        if (iVar3 == 0) goto LAB_004961ac;
        iVar4 = iVar4 + 0x24;
        iVar5 = iVar5 + 1;
      } while (BEA_LOOP_GUARD((iVar5 < *(int *)(*(int *)(param_1 + 0x128) + 0x14))));
    }
  }
LAB_004961da:
  *(undefined4 *)(this_ + 0xc) = *(undefined4 *)(iVar2 + 0x27c);
  *(undefined4 *)(this_ + 0x10) = *(undefined4 *)(iVar2 + 0x2a4);
  return this_;
LAB_004961ac:
  fVar1 = (*(float *)(iVar2 + 0x2a4) - *(float *)(iVar2 + 0x2a8)) * DAT_008a9e44 +
          *(float *)(iVar2 + 0x2a8);
  *param_2 = fVar1;
  fVar1 = fVar1 * (float)*(int *)(iVar4 + 0x1c);
  *param_2 = fVar1;
  *param_2 = (float)*(int *)(iVar4 + 0x14) + fVar1;
  goto LAB_004961da;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00496100, ap_00496100));
