// auto-ported from 00448140_vslot117.c (CDropship::vslot117, 18 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CDropship;
typedef undefined4 (BEA_THISCALL* CAirUnit__vslot117_t)(CAirUnit *);
static const bea_guard<CAirUnit__vslot117_t> CAirUnit__vslot117 = {(CAirUnit__vslot117_t)0x00403a50};

static undefined4 BEA_THISCALL ap_00448140(CDropship * this_)
{
  undefined4 uVar1;
  
  if (*(int *)(this_ + 0x27c) == 0) {
    uVar1 = CAirUnit__vslot117((CAirUnit *)this_);
    return uVar1;
  }
  return 0;
}

// @autoport-registration (verified: 2958 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00448140, ap_00448140));
