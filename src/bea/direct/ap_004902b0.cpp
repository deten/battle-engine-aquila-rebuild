// auto-ported from 004902b0_FUN_004902b0.c (FUN_004902b0, 239 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089c9ac GLOBAL_AT(int, 0x0089c9ac)
#define DAT_0089c9a4 GLOBAL_AT(undefined4, 0x0089c9a4)
// @autoport-arity: call arity differs from the asm (3 pushes: asm 1 call(s), port 0)

static void BEA_THISCALL ap_004902b0(void * this_, float *param_1, undefined4 param_2, float param_3, float param_4)
{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x14);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x20 - 0x10);
  if ((*(int *)((int)this_ + 0x1c0) < 0x10) && (local_14 = 100.0f, 0 < DAT_0089c9ac)) {
    puVar4 = &DAT_0089c9a4;
    iVar3 = DAT_0089c9ac;
    do {
      pfVar2 = (float *)bea_vcall<uint32_t>(*puVar4, 0x0, local_10);
      fVar1 = (*pfVar2 - *param_1) * (*pfVar2 - *param_1) +
              (pfVar2[2] - param_1[2]) * (pfVar2[2] - param_1[2]) +
              (pfVar2[1] - param_1[1]) * (pfVar2[1] - param_1[1]);
      if (fVar1 < local_14) {
        local_14 = fVar1;
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
    if (local_14 < 100.0f) {
      iVar3 = *(int *)((int)this_ + 0x1c0);
      *(int *)((int)this_ + 0x1c0) = iVar3 + 1;
      pfVar2 = (float *)((int)this_ + iVar3 * 0x1c);
      pfVar2[3] = *param_1;
      pfVar2[4] = param_1[1];
      pfVar2[5] = param_1[2];
      pfVar2[6] = param_1[3];
      pfVar2[1] = param_3;
      pfVar2[2] = 1.0f / local_14;
      *pfVar2 = param_4 * 15.0f;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004902b0, ap_004902b0));
