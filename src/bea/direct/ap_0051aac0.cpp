// auto-ported from 0051aac0_vslot1.c (CFEPDirectory::vslot1, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPDirectory;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0051aac0(CFEPDirectory * this_)
{
  int iVar1;
  
  iVar1 = 0x1000;
  do {
    this_ = this_ + 4;
    if (*(int *)this_ != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)this_));
      *(int *)this_ = 0;
    }
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051aac0, ap_0051aac0));
