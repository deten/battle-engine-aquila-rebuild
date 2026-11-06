// auto-ported from 00555410_vslot4.c (CSnow::vslot4, 80 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSnow;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00500460_t)(uint32_t);
static const bea_guard<FUN_00500460_t> FUN_00500460 = {(FUN_00500460_t)0x00500460};
typedef uint32_t (BEA_THISCALL* FUN_00502290_t)(uint32_t);
static const bea_guard<FUN_00502290_t> FUN_00502290 = {(FUN_00502290_t)0x00502290};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00555410(CSnow * this_)
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
  if (*(void **)(this_ + 0x10) != (void *)0x0) {
    FUN_00502290(bea_arg(*(void **)(this_ + 0x10)));
    *(undefined4 *)(this_ + 0x10) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00555410, ap_00555410));
