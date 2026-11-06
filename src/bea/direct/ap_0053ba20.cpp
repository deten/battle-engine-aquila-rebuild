// auto-ported from 0053ba20_vslot4.c (CClouds::vslot4, 61 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CClouds;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00500460_t)(uint32_t);
static const bea_guard<FUN_00500460_t> FUN_00500460 = {(FUN_00500460_t)0x00500460};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0053ba20(CClouds * this_)
{
  void *this_00;
  
  if (*(int *)(this_ + 0xc) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)(this_ + 0xc) + 8)));
    *(undefined4 *)(this_ + 0xc) = 0;
  }
  this_00 = *(void **)(this_ + 8);
  if (this_00 != (void *)0x0) {
    FUN_00500460(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    *(undefined4 *)(this_ + 8) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053ba20, ap_0053ba20));
