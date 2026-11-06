// auto-ported from 00418090_vslot115.c (CBuilding::vslot115, 110 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBuilding;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define s_opening_00623ba4 ((char*)0x00623ba4)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static undefined4 BEA_THISCALL ap_00418090(CBuilding * this_)
{
  void *this_00;
  int iVar1;
  char *pcVar2;
  
  if (*(int *)(this_ + 0x254) == 2) {
    return 1;
  }
  if (*(int *)(this_ + 0x254) == 3) {
    pcVar2 = s_opening_00623ba4;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    iVar1 = FUN_004aa630(bea_arg(this_00), bea_arg(pcVar2));
    if (iVar1 == -1) {
      *(undefined4 *)(this_ + 0x254) = 2;
    }
    else {
      *(undefined4 *)(this_ + 0x254) = 0;
      bea_vcall<uint32_t>(this_, 0xf0, iVar1,1,0);
    }
    *(float *)(this_ + 0x25c) = DAT_00672fd0 + 8.0f;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418090, ap_00418090));
