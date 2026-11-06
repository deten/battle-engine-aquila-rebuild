// auto-ported from 004443f0_FUN_004443f0.c (FUN_004443f0, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_00442890_t)(uint32_t);
static const bea_guard<FUN_00442890_t> FUN_00442890 = {(FUN_00442890_t)0x00442890};
typedef uint32_t (BEA_THISCALL* FUN_00442a80_t)(uint32_t);
static const bea_guard<FUN_00442a80_t> FUN_00442a80 = {(FUN_00442a80_t)0x00442a80};
typedef uint32_t (BEA_THISCALL* FUN_00442ac0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00442ac0_t> FUN_00442ac0 = {(FUN_00442ac0_t)0x00442ac0};
typedef undefined4 (BEA_THISCALL* FUN_004433f0_t)(uint32_t);
static const bea_guard<FUN_004433f0_t> FUN_004433f0 = {(FUN_004433f0_t)0x004433f0};

static void BEA_THISCALL ap_004443f0(void * this_)
{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_004433f0(bea_arg(*(void **)((int)this_ + 0xc)));
  if (iVar2 != 1) {
    fVar1 = *(float *)((int)this_ + 0x18);
    fVar3 = (float10)FUN_00442890(bea_arg(*(void **)((int)this_ + 0xc)));
    if ((float10)(fVar1 * 0.3) <= fVar3) {
      FUN_00442a80(bea_arg(*(void **)((int)this_ + 0xc)));
      FUN_00442ac0(bea_arg(*(void **)((int)this_ + 0xc)), bea_arg(0x47c35000));
      *(undefined4 *)((int)this_ + 0x2c) = 1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004443f0, ap_004443f0));
