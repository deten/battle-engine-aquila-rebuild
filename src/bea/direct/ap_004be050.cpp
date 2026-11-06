// auto-ported from 004be050_FUN_004be050.c (FUN_004be050, 287 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static void BEA_THISCALL ap_004be050(void * this_, void *param_1)
{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_c = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0xc);
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x8);
  uint &local_4 = *reinterpret_cast<uint *>(bea_frame_ + 0x10 - 0x4);
  FUN_00548570(bea_arg(param_1), bea_arg(&local_8), bea_arg(4));
  if (local_8 == 1) {
    local_c = 0;
    do {
      iVar4 = local_c >> 1;
      iVar5 = 0;
      do {
        FUN_00548570(bea_arg(param_1), bea_arg(&local_4), bea_arg(1));
        iVar6 = 0;
        do {
          uVar3 = iVar5 + iVar6 >> 1;
          if ((((-1 < (int)uVar3) && ((int)uVar3 < 0x100)) && (-1 < iVar4)) && (iVar4 < 0x100)) {
            iVar1 = iVar5 + iVar6 >> 4;
            if (((local_4 & 0xff) >> ((byte)iVar6 & 0x1f) & 1) == 0) {
              pbVar2 = (byte *)(iVar1 * 0x100 + iVar4 + (int)this_);
              uVar3 = uVar3 & 0x80000007;
              if ((int)uVar3 < 0) {
                uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
              }
              *pbVar2 = *pbVar2 & -('\x01' << ((byte)uVar3 & 0x1f)) - 1U;
            }
            else {
              pbVar2 = (byte *)(iVar1 * 0x100 + iVar4 + (int)this_);
              uVar3 = uVar3 & 0x80000007;
              if ((int)uVar3 < 0) {
                uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
              }
              *pbVar2 = *pbVar2 | '\x01' << ((byte)uVar3 & 0x1f);
            }
          }
          iVar6 = iVar6 + 1;
        } while (BEA_LOOP_GUARD((iVar6 < 8)));
        iVar5 = iVar5 + 8;
      } while (BEA_LOOP_GUARD((iVar5 < 0x200)));
      local_c = local_c + 1;
    } while (BEA_LOOP_GUARD((local_c < 0x200)));
  }
  else if (local_8 == 2) {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + (int)this_;
      iVar6 = 0x20;
      do {
        FUN_00548570(bea_arg(param_1), bea_arg(iVar5), bea_arg(1));
        iVar5 = iVar5 + 0x100;
        iVar6 = iVar6 + -1;
      } while (BEA_LOOP_GUARD((iVar6 != 0)));
      iVar4 = iVar4 + 1;
    } while (BEA_LOOP_GUARD((iVar4 < 0x100)));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004be050, ap_004be050));
