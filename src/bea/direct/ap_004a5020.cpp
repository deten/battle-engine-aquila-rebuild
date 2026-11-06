// auto-ported from 004a5020_FUN_004a5020.c (FUN_004a5020, 139 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00704ad8 GLOBAL_AT(int, 0x00704ad8)
#define s_C__dev_ONSLAUGHT2_mesh_cpp_0062f8e8 ((char*)0x0062f8e8)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_004a5020(void * this_)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this_ + 0x15c) = 0;
  *(undefined4 *)((int)this_ + 0x160) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 0x164) = 0x3f000000;
  *(undefined4 *)((int)this_ + 0x16c) = 0xfffffffe;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x170) = 0;
  *(undefined4 *)((int)this_ + 0x154) = 0xffffffff;
  puVar3 = (undefined4 *)((int)this_ + 0x24);
  for (iVar2 = 0x4b; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x28), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_mesh_cpp_0062f8e8), bea_arg(0x3d));
  *(undefined4 *)((int)this_ + 0x150) = uVar1;
  *(void **)((int)this_ + 0x158) = DAT_00704ad8;
  DAT_00704ad8 = this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a5020, ap_004a5020));
