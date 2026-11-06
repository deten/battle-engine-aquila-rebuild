// auto-ported from 00479cb0_vslot119.c (CGillM::vslot119, 96 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGillM;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_GillM_cpp_0062c9e8 ((char*)0x0062c9e8)
typedef void * (BEA_THISCALL* FUN_004f1ec0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f1ec0_t> FUN_004f1ec0 = {(FUN_004f1ec0_t)0x004f1ec0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00479cb0(CGillM * this_)
{
  void *this_00;
  undefined4 uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_GillM_cpp_0062c9e8), bea_arg(0x3e));
  if (this_00 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004f1ec0(bea_arg(this_00), bea_arg(this_));
  }
  *(undefined4 *)(this_ + 0x208) = uVar1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00479cb0, ap_00479cb0));
