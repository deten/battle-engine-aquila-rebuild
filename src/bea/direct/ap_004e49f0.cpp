// auto-ported from 004e49f0_FUN_004e49f0.c (FUN_004e49f0, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
typedef int (BEA_THISCALL* FUN_00491ea0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00491ea0_t> FUN_00491ea0 = {(FUN_00491ea0_t)0x00491ea0};
typedef int (BEA_THISCALL* FUN_00492020_t)(uint32_t);
static const bea_guard<FUN_00492020_t> FUN_00492020 = {(FUN_00492020_t)0x00492020};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};

static undefined4 BEA_THISCALL ap_004e49f0(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  void *this_00;
  int iVar4;
  
  if (*(int *)((int)this_ + 0x448) != 0) {
    this_00 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*(float *)((int)this_ + 0x1c)), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(*(undefined4 *)((int)this_ + 0x24)), bea_arg(*(undefined4 *)((int)this_ + 0x28)), bea_arg(0x3f800000));
    while(BEA_LOOP_GUARD(( true ))) {
      if (this_00 == (void *)0x0) {
        return 1;
      }
      iVar4 = FUN_00492c90(bea_arg(this_00));
      if ((((iVar4 != 0) && ((*(uint *)(iVar4 + 0x34) & 0x10) != 0)) &&
          ((*(uint *)(iVar4 + 0x34) & 0x84000) == 0)) &&
         (fVar1 = *(float *)(iVar4 + 0x1c) - *(float *)((int)this_ + 0x1c),
         fVar2 = *(float *)(iVar4 + 0x20) - *(float *)((int)this_ + 0x20),
         fVar3 = *(float *)(iVar4 + 0x24) - *(float *)((int)this_ + 0x24),
         fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2 < 16.0f)) break;
      this_00 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e49f0, ap_004e49f0));
