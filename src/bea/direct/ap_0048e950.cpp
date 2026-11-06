// auto-ported from 0048e950_FUN_0048e950.c (FUN_0048e950, 295 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_006fabf0 GLOBAL_AT(int, 0x006fabf0)
#define DAT_006fabf4 GLOBAL_AT(undefined4*, 0x006fabf4)
#define DAT_006fabcc GLOBAL_AT(int, 0x006fabcc)
#define DAT_0067a7d8 GLOBAL_AT(int, 0x0067a7d8)

static uint32_t BEA_THISCALL ap_0048e950(void * this_, int *param_1)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_18 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x18);
  int &iStack_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  int &local_10 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x10);
  int &local_c = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0xc);
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x4);
  if (DAT_006fabf0 != 0) {
    bVar5 = (byte)DAT_006fabf0;
    local_10 = *param_1 >> (bVar5 & 0x1f);
    local_8 = param_1[2] >> (bVar5 & 0x1f);
    local_c = param_1[1] >> (bVar5 & 0x1f);
    local_4 = param_1[3] >> (bVar5 & 0x1f);
    piVar2 = DAT_006fabf4;
    if (DAT_006fabcc != 0) {
      piVar2 = *(int **)((int)this_ + 8);
    }
    iVar3 = bea_vcall<uint32_t>(piVar2, 0x4c, piVar2,0,&local_18,&local_10,0);
    if (-1 < iVar3) {
      iVar3 = param_1[1];
      iVar1 = *param_1;
      iVar7 = 0;
      if (local_4 != local_c && -1 < local_4 - local_c) {
        do {
          iVar4 = 0;
          if (local_8 != local_10 && -1 < local_8 - local_10) {
            do {
              iVar8 = iVar4 << ((byte)DAT_006fabf0 & 0x1f);
              iVar6 = (local_18 >> 1) * iVar7 + iVar4;
              iVar4 = iVar4 + 1;
              *(undefined2 *)(iStack_14 + iVar6 * 2) =
                   *(undefined2 *)
                    (((uint8_t *)&DAT_0067a7d8) +
                    ((iVar7 << ((byte)DAT_006fabf0 & 0x1f)) * 0x200 + iVar8) * 2 +
                    (iVar3 * 0x200 + iVar1) * 2);
            } while (BEA_LOOP_GUARD((iVar4 < local_8 - local_10)));
          }
          iVar7 = iVar7 + 1;
        } while (BEA_LOOP_GUARD((iVar7 < local_4 - local_c)));
      }
    }
  }
  if (DAT_006fabcc == 0) {
    return bea_vcall<uint32_t>(DAT_006fabf4, 0x50, DAT_006fabf4,0);
  }
  return bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x50, *(int **)((int)this_ + 8),0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e950, ap_0048e950));
