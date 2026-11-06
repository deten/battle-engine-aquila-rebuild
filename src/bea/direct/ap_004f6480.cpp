// auto-ported from 004f6480_vslot35.c (CTree::vslot35, 180 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CThing;
typedef char CTree;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_tree_cpp_00633a84 ((char*)0x00633a84)
typedef uint32_t (BEA_THISCALL* CThing__vslot35_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot35_t> CThing__vslot35 = {(CThing__vslot35_t)0x004f39c0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004f6480(CTree * this_, int param_1)
{
  undefined4 *puVar1;
  float10 fVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(int *)(param_1 + 8) != -1) {
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x5c), bea_arg(s_C__dev_ONSLAUGHT2_tree_cpp_00633a84), bea_arg(0x8f));
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      fVar2 = (float10)bea_vcall<float10>(this_, 0x40);
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[5] = 0x3e4ccccd;
      puVar1[6] = 0x3d23d70b;
      *puVar1 = ((void*)0x005d88cc);
      puVar1[7] = bea_piece32((float)(fVar2 * (float10)0.5f));
    }
    *(undefined4 **)(param_1 + 0xc) = puVar1;
    *(undefined4 *)(param_1 + 8) = 0x20;
    *(undefined4 *)(param_1 + 0x18) = 1;
    CThing__vslot35(bea_arg((CThing *)this_), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f6480, ap_004f6480));
