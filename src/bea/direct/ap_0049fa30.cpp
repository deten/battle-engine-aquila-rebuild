// auto-ported from 0049fa30_vslot118.c (CMech::vslot118, 103 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMech;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Mech_cpp_0062e0e0 ((char*)0x0062e0e0)
typedef void * (BEA_THISCALL* FUN_004a02e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a02e0_t> FUN_004a02e0 = {(FUN_004a02e0_t)0x004a02e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0049fa30(CMech * this_, undefined4 param_1)
{
  void *this_00;
  undefined4 uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(100), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Mech_cpp_0062e0e0), bea_arg(0x48));
  if (this_00 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a02e0(bea_arg(this_00), bea_arg(this_), bea_arg(param_1));
  }
  *(undefined4 *)(this_ + 0x13c) = uVar1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049fa30, ap_0049fa30));
