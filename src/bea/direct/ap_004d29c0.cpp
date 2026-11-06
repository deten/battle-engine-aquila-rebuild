// auto-ported from 004d29c0_FUN_004d29c0.c (FUN_004d29c0, 133 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define s_C__dev_ONSLAUGHT2_Player_cpp_00631690 ((char*)0x00631690)
typedef void * (BEA_THISCALL* FUN_00418ef0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00418ef0_t> FUN_00418ef0 = {(FUN_00418ef0_t)0x00418ef0};
typedef uint32_t (BEA_THISCALL* FUN_004705e0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004705e0_t> FUN_004705e0 = {(FUN_004705e0_t)0x004705e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004d29c0(void * this_)
{
  void *this_00;
  undefined4 uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(int *)((int)this_ + 0x1c) != 0) {
    *(undefined4 *)((int)this_ + 0x24) = 2;
    this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Player_cpp_00631690), bea_arg(0x43));
    if (this_00 == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00418ef0(bea_arg(this_00), bea_arg(*(undefined4 *)((int)this_ + 0x1c)));
    }
    FUN_004705e0(bea_arg(&DAT_008a9a98), bea_arg(*(int *)((int)this_ + 0x2c) + -1), bea_arg(uVar1), bea_arg(1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d29c0, ap_004d29c0));
