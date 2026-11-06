// auto-ported from 00416da0_vslot0.c (CBSpline::vslot0, 144 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBSpline;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static CBSpline * BEA_THISCALL ap_00416da0(CBSpline * this_, uint param_1)
{
  int *this_00;
  int *piVar1;
  void *this_01;
  int iVar2;
  
  *(undefined ***)this_ = ((void*)0x005d8e00);
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(this_ + 8)));
  this_00 = *(int **)(this_ + 4);
  if (this_00 != (int *)0x0) {
    piVar1 = (int *)*this_00;
    this_00[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    while (BEA_LOOP_GUARD((iVar2 != 0))) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
      iVar2 = FUN_00406d30(bea_arg(this_00));
    }
    FUN_004e5c60(bea_arg(this_00));
  }
  this_01 = *(void **)(this_ + 4);
  if (this_01 != (void *)0x0) {
    FUN_004e5c60(bea_arg(this_01));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_01));
  }
  *(undefined4 *)(this_ + 8) = 0;
  *(undefined4 *)(this_ + 4) = 0;
  if ((param_1 & 1) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_));
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00416da0, ap_00416da0));
