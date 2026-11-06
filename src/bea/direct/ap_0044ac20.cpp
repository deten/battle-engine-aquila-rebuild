// auto-ported from 0044ac20_vslot66.c (CEscapePod::vslot66, 388 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CEscapePod;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define s_Engine_00622cec ((char*)0x00622cec)
typedef uint32_t (BEA_THISCALL* CActor__vslot66_t)(uint32_t);
static const bea_guard<CActor__vslot66_t> CActor__vslot66 = {(CActor__vslot66_t)0x004015e0};

static uint32_t BEA_THISCALL ap_0044ac20(CEscapePod * this_)
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x40 - 0x30);
  local_3c = *(float *)(this_ + 0x50) * 0.001f;
  local_38 = *(float *)(this_ + 0x60) * 0.001f;
  *(float *)(this_ + 0x7c) = *(float *)(this_ + 0x40) * 0.001f + *(float *)(this_ + 0x7c);
  *(float *)(this_ + 0x80) = local_3c + *(float *)(this_ + 0x80);
  *(float *)(this_ + 0x84) = local_38 + *(float *)(this_ + 0x84);
  bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_Engine_00622cec,1,&local_40,local_30,0,0);
  puVar3 = *(undefined4 **)(this_ + 0xe4);
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[0x12] == 0x461c4000) {
      puVar3[0x20] = local_40;
      puVar3[0x21] = bea_piece32(local_3c);
      puVar3[0x22] = bea_piece32(local_38);
      puVar3[0x23] = uStack_34;
      puVar3[0x10] = local_40;
      puVar3[0x11] = bea_piece32(local_3c);
      puVar3[0x12] = bea_piece32(local_38);
      puVar3[0x13] = uStack_34;
      *puVar3 = local_40;
      puVar3[1] = bea_piece32(local_3c);
      puVar3[2] = bea_piece32(local_38);
      puVar3[3] = uStack_34;
      if (puVar3[0x2b] != -0x40800000) {
        puVar3[0x2b] = DAT_00672fd0;
      }
    }
    else {
      puVar3[0x10] = *puVar3;
      puVar3[0x11] = puVar3[1];
      puVar3[0x12] = puVar3[2];
      puVar3[0x13] = puVar3[3];
      *puVar3 = local_40;
      puVar3[1] = bea_piece32(local_3c);
      puVar3[2] = bea_piece32(local_38);
      puVar3[3] = uStack_34;
      if (puVar3[0x2b] != -0x40800000) {
        puVar3[0x2b] = DAT_00672fd0;
      }
    }
  }
  iVar1 = *(int *)(this_ + 0xe4);
  if (iVar1 != 0) {
    puVar3 = local_30;
    puVar4 = (undefined4 *)(iVar1 + 0x10);
    for (iVar2 = 0xc; ((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(iVar1 + 0xa0) = 1;
  }
  return CActor__vslot66(bea_arg((CActor *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044ac20, ap_0044ac20));
