// auto-ported from 004d7c90_vslot66.c (CRocket::vslot66, 405 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CRocket;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define s_Engine_00622cec ((char*)0x00622cec)
typedef uint32_t (BEA_THISCALL* CActor__vslot66_t)(uint32_t);
static const bea_guard<CActor__vslot66_t> CActor__vslot66 = {(CActor__vslot66_t)0x004015e0};

static uint32_t BEA_THISCALL ap_004d7c90(CRocket * this_)
{
  int iVar1;
  int iVar2;
  int iVar3;
  CRocket *pCVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &uStack_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  undefined4 &uStack_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x3c);
  undefined4 &uStack_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  undefined4 (&auStack_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x40 - 0x30);
  if (*(int *)(this_ + 0xe4) != 0) {
    fVar7 = (float10)bea_vcall<float10>(this_, 0x3c);
    if ((float10)*(float *)(this_ + 0x84) <= fVar7 * (float10)0.05f - (float10)0.001f) {
      *(float *)(this_ + 0x84) = *(float *)(this_ + 0x84) - 0.001f;
    }
    iVar2 = 0;
    pCVar4 = this_ + 0xf0;
    do {
      iVar2 = iVar2 + 1;
      bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_Engine_00622cec,iVar2,&uStack_40,auStack_30,0,0);
      puVar5 = *(undefined4 **)pCVar4;
      if (puVar5 != (undefined4 *)0x0) {
        if (puVar5[0x12] == 0x461c4000) {
          puVar5[0x20] = uStack_40;
          puVar5[0x21] = uStack_3c;
          puVar5[0x22] = uStack_38;
          puVar5[0x23] = uStack_34;
          puVar5[0x10] = uStack_40;
          puVar5[0x11] = uStack_3c;
          puVar5[0x12] = uStack_38;
          puVar5[0x13] = uStack_34;
          *puVar5 = uStack_40;
          puVar5[1] = uStack_3c;
          puVar5[2] = uStack_38;
          puVar5[3] = uStack_34;
          if (puVar5[0x2b] != -0x40800000) {
            puVar5[0x2b] = DAT_00672fd0;
          }
        }
        else {
          puVar5[0x10] = *puVar5;
          puVar5[0x11] = puVar5[1];
          puVar5[0x12] = puVar5[2];
          puVar5[0x13] = puVar5[3];
          *puVar5 = uStack_40;
          puVar5[1] = uStack_3c;
          puVar5[2] = uStack_38;
          puVar5[3] = uStack_34;
          if (puVar5[0x2b] != -0x40800000) {
            puVar5[0x2b] = DAT_00672fd0;
          }
        }
      }
      iVar1 = *(int *)pCVar4;
      if (iVar1 != 0) {
        puVar5 = auStack_30;
        puVar6 = (undefined4 *)(iVar1 + 0x10);
        for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined4 *)(iVar1 + 0xa0) = 1;
      }
      pCVar4 = pCVar4 + 8;
    } while (BEA_LOOP_GUARD((iVar2 < 4)));
  }
  return CActor__vslot66(bea_arg((CActor *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d7c90, ap_004d7c90));
