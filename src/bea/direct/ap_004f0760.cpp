// auto-ported from 004f0760_vslot117.c (CTentacle::vslot117, 118 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CTentacle;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Tentacle_cpp_00632ccc ((char*)0x00632ccc)
typedef void * (BEA_THISCALL* FUN_0049cad0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0049cad0_t> FUN_0049cad0 = {(FUN_0049cad0_t)0x0049cad0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004f0760(CTentacle * this_)
{
  void *this_00;
  undefined4 uVar1;
  CTentacle *pCVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xec), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_Tentacle_cpp_00632ccc), bea_arg(0x2f));
  pCVar2 = (CTentacle *)0x0;
  if (this_00 != (void *)0x0) {
    if (this_ != (CTentacle *)0x0) {
      pCVar2 = this_ + 8;
    }
    uVar1 = FUN_0049cad0(bea_arg(this_00), bea_arg(pCVar2));
    *(undefined4 *)(this_ + 0x70) = uVar1;
    return;
  }
  *(undefined4 *)(this_ + 0x70) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f0760, ap_004f0760));
