// auto-ported from 004237d0_FUN_004237d0.c (FUN_004237d0, 104 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_chunker_cpp_00624464 ((char*)0x00624464)
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_004237d0(void * this_)
{
  void *this_00;
  undefined4 uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x134), bea_arg(0x11), bea_arg(s_C__dev_ONSLAUGHT2_chunker_cpp_00624464), bea_arg(0x62));
  if (this_00 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00547d70(bea_arg(this_00));
  }
  *(undefined4 *)((int)this_ + 4) = uVar1;
  *(undefined4 *)((int)this_ + 0xc) = 1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004237d0, ap_004237d0));
