// auto-ported from 00422db0_FUN_00422db0.c (FUN_00422db0, 236 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
typedef uint32_t (BEA_THISCALL* FUN_00422930_t)(uint32_t);
static const bea_guard<FUN_00422930_t> FUN_00422930 = {(FUN_00422930_t)0x00422930};
typedef int (BEA_THISCALL* FUN_00491ea0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00491ea0_t> FUN_00491ea0 = {(FUN_00491ea0_t)0x00491ea0};
typedef int (BEA_THISCALL* FUN_00492020_t)(uint32_t);
static const bea_guard<FUN_00492020_t> FUN_00492020 = {(FUN_00492020_t)0x00492020};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};

static void BEA_THISCALL ap_00422db0(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  void *this_00;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)((int)this_ + 8);
  this_00 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*(undefined4 *)(iVar4 + 0x1c)), bea_arg(*(undefined4 *)(iVar4 + 0x20)), bea_arg(*(undefined4 *)(iVar4 + 0x24)), bea_arg(*(undefined4 *)(iVar4 + 0x28)), bea_arg(0x41a00000));
  if (this_00 == (void *)0x0) {
    return;
  }
  do {
    iVar4 = FUN_00492c90(bea_arg(this_00));
    if ((*(byte *)(iVar4 + 0x34) & 4) != 0) {
      iVar5 = FUN_00492c90(bea_arg(this_00));
      iVar4 = *(int *)((int)this_ + 8);
      fVar1 = *(float *)(iVar5 + 0x1c) - *(float *)(iVar4 + 0x1c);
      fVar2 = *(float *)(iVar5 + 0x20) - *(float *)(iVar4 + 0x20);
      fVar3 = *(float *)(iVar5 + 0x24) - *(float *)(iVar4 + 0x24);
      if (((SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) <= 20.0f) &&
          (iVar4 = FUN_00492c90(bea_arg(this_00)), *(int *)(iVar4 + 0xe8) == *(int *)((int)this_ + 8))) &&
         (iVar4 = FUN_00492c90(bea_arg(this_00)), 0.0f < *(float *)(*(int *)(iVar4 + 0xf0) + 0x1c))) {
        FUN_00422930(bea_arg(*(void **)((int)this_ + 8)));
        return;
      }
    }
    this_00 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
    if (this_00 == (void *)0x0) {
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422db0, ap_00422db0));
