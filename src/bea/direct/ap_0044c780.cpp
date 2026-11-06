// auto-ported from 0044c780_FUN_0044c780.c (FUN_0044c780, 130 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static undefined4 BEA_THISCALL ap_0044c780(void * this_, float param_1, float param_2, float param_3, undefined4 param_4)
{
  int iVar1;
  int iVar2;
  float10 fVar3;
  int local_8;
  
  fVar3 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&param_1));
  if ((float10)-5.0f < (float10)param_3 - fVar3) {
    local_8 = (int)(longlong)ROUND(param_1);
    iVar1 = local_8 + (local_8 >> 0x1f & 7U);
    local_8 = (int)(longlong)ROUND(param_2);
    iVar1 = iVar1 >> 3;
    iVar2 = (int)(local_8 + (local_8 >> 0x1f & 7U)) >> 3;
    if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < 0x40)) && (iVar2 < 0x40)) {
      return *(undefined4 *)((int)this_ + (iVar1 * 0x40 + iVar2) * 4 + 0x4008);
    }
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044c780, ap_0044c780));
