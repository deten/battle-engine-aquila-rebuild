// auto-ported from 00500120_vslot1.c (CVBuffer::vslot1, 129 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CVBuffer;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef int (BEA_THISCALL* FUN_00513770_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513770_t> FUN_00513770 = {(FUN_00513770_t)0x00513770};

static int BEA_THISCALL ap_00500120(CVBuffer * this_)
{
  CVBuffer *pCVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  CVBuffer *pCVar5;
  CVBuffer *pCVar6;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  CVBuffer * &local_4 = *reinterpret_cast<CVBuffer * *>(bea_frame_ + 0x10 - 0x4);
  if (*(int *)(this_ + 0x20) == 1) {
    pCVar1 = this_ + 8;
    local_4 = this_;
    iVar2 = FUN_00513770(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(*(undefined4 *)(this_ + 0x14)), bea_arg(*(undefined4 *)(this_ + 0x18)), bea_arg(1), bea_arg(pCVar1));
    if (iVar2 < 0) {
      return -0x7fffbffb;
    }
    if (*(int *)(this_ + 0x24) != 0) {
      iVar2 = bea_vcall<uint32_t>(*(int **)pCVar1, 0x2c, *(int **)pCVar1,0,0,&local_4,0x800);
      if (iVar2 < 0) {
        return iVar2;
      }
      uVar4 = *(uint *)(this_ + 0x10);
      pCVar5 = *(CVBuffer **)(this_ + 0x24);
      pCVar6 = local_4;
      for (uVar3 = uVar4 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *(undefined4 *)pCVar6 = *(undefined4 *)pCVar5;
        pCVar5 = pCVar5 + 4;
        pCVar6 = pCVar6 + 4;
      }
      for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *pCVar6 = *pCVar5;
        pCVar5 = pCVar5 + 1;
        pCVar6 = pCVar6 + 1;
      }
      iVar2 = bea_vcall<uint32_t>(*(int **)pCVar1, 0x30, *(int **)pCVar1);
      return iVar2;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500120, ap_00500120));
