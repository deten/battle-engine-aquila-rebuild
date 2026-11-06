// auto-ported from 004f3600_vslot2.c (CThing::vslot2, 53 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMonitor;
typedef char CThing;
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define DAT_00855170 GLOBAL_AT(int, 0x00855170)
typedef uint32_t (BEA_THISCALL* CMonitor__vslot2_t)(uint32_t);
static const bea_guard<CMonitor__vslot2_t> CMonitor__vslot2 = {(CMonitor__vslot2_t)0x004bacb0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_THISCALL ap_004f3600(CThing * this_)
{
  FUN_004e5bd0(bea_arg(&DAT_00855090), bea_arg(this_));
  if (((byte)this_[0x2c] & 0x40) != 0) {
    FUN_004e5bd0(bea_arg(&DAT_00855170), bea_arg(this_));
  }
  CMonitor__vslot2(bea_arg((CMonitor *)this_));
  if (this_ != (CThing *)0x0) {
    bea_vcall<uint32_t>(this_, 0x4, 1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3600, ap_004f3600));
