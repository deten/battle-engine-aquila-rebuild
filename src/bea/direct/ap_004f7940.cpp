// auto-ported from 004f7940_FUN_004f7940.c (FUN_004f7940, 141 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit uStack_2: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004f7660_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f7660_t> FUN_004f7660 = {(FUN_004f7660_t)0x004f7660};

static void BEA_THISCALL ap_004f7940(void * this_)
{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_c;
  undefined2 uStack_6;
  undefined2 uStack_2 = 0;
  
  local_c = 10;
  *(undefined4 *)((int)this_ + 0x14) = 1;
  do {
    if (*(int *)((int)this_ + 0x14) == 0) {
      return;
    }
    iVar3 = *(int *)((int)this_ + 0xc);
    puVar4 = *(undefined4 **)((int)this_ + 4);
    *(undefined4 *)((int)this_ + 0x14) = 0;
    for (; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
      uVar2 = *puVar4;
      uStack_6 = (undefined2)((uint)uVar2 >> 0x10);
      uVar1 = *(undefined2 *)(puVar4 + 1);
      FUN_004f7660(bea_arg(this_), bea_arg(uVar2), bea_arg(CONCAT22(uVar1,uStack_6)));
      FUN_004f7660(bea_arg(this_), bea_arg(CONCAT22(uVar1,uStack_6)), bea_arg(CONCAT22(uStack_2,uVar1)));
      FUN_004f7660(bea_arg(this_), bea_arg(CONCAT22(uStack_2,uVar1)), bea_arg(uVar2));
      puVar4 = (undefined4 *)((int)puVar4 + 6);
    }
    local_c = local_c + -1;
  } while (BEA_LOOP_GUARD((local_c != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7940, ap_004f7940));
