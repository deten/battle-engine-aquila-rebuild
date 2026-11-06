// auto-ported from 004adff0_FUN_004adff0.c (FUN_004adff0, 141 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004adff0(void * this_, int param_1)
{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this_ + 8) != 0) {
    if (*(int *)((int)this_ + 0xc) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xc)));
      *(undefined4 *)((int)this_ + 0xc) = 0;
    }
    *(undefined4 *)((int)this_ + 0x10) = 0;
    *(undefined4 *)((int)this_ + 0x14) = 0;
    *(undefined4 *)((int)this_ + 0x18) = 0;
    *(undefined4 *)((int)this_ + 0x1c) = 0;
  }
  *(int *)((int)this_ + 8) = param_1;
  if (param_1 == 0) {
    *(undefined4 *)((int)this_ + 0xc) = 0;
    *(undefined4 *)((int)this_ + 0x10) = 0;
    *(undefined4 *)((int)this_ + 0x14) = 0;
    *(undefined4 *)((int)this_ + 0x18) = 0;
    *(undefined4 *)((int)this_ + 0x1c) = 0;
    return;
  }
  iVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1 * 0x14), bea_arg(0x24), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x6b));
  iVar1 = *(int *)((int)this_ + 8);
  *(int *)((int)this_ + 0xc) = iVar2;
  *(int *)((int)this_ + 0x10) = iVar2 + iVar1 * 4;
  *(int *)((int)this_ + 0x14) = iVar2 + iVar1 * 8;
  *(int *)((int)this_ + 0x18) = iVar2 + iVar1 * 0xc;
  *(int *)((int)this_ + 0x1c) = iVar1 * 0x10 + iVar2;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004adff0, ap_004adff0));
