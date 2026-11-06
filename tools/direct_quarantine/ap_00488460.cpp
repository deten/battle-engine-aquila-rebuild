// auto-ported from 00488460_vslot1.c (CIBuffer::vslot1, 129 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CIBuffer;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_THISCALL* FUN_005137d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_005137d0_t const FUN_005137d0 = (FUN_005137d0_t)0x005137d0;

static int BEA_THISCALL ap_00488460(CIBuffer * this_)
{
  CIBuffer *pCVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  CIBuffer *local_4;
  
  if (*(int *)(this_ + 0x18) == 1) {
    pCVar1 = this_ + 8;
    local_4 = this_;
    iVar2 = FUN_005137d0(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(*(undefined4 *)(this_ + 0x14)), bea_arg(1), bea_arg(pCVar1));
    if (iVar2 < 0) {
      return -0x7fffbffb;
    }
    if (*(int *)(this_ + 0x1c) != 0) {
      puVar6 = (undefined4 *)0x0;
      iVar2 = bea_vcall<uint32_t>(*(int **)pCVar1, 0x2c, *(int **)pCVar1,0,0,&local_4,0x800);
      if (iVar2 < 0) {
        return iVar2;
      }
      uVar4 = *(uint *)(this_ + 0xc);
      puVar5 = *(undefined4 **)(this_ + 0x1c);
      for (uVar3 = uVar4 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      iVar2 = bea_vcall<uint32_t>(*(int **)pCVar1, 0x30, *(int **)pCVar1);
      return iVar2;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488460, ap_00488460));
