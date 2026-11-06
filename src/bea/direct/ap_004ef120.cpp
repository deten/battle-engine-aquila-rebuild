// auto-ported from 004ef120_FUN_004ef120.c (FUN_004ef120, 299 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};

static void BEA_THISCALL ap_004ef120(void * this_)
{
  int iVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int &local_28 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x28);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x30 - 0x10);
  if (*(int *)((int)this_ + 0x164) != 0) {
    iVar1 = *(int *)(*(int *)((int)this_ + 0x164) + 0xec);
    iVar7 = 0;
    piVar2 = (int *)*DAT_008553f8;
    DAT_008553f8[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (iVar5 != 0) {
      while (BEA_LOOP_GUARD((iVar7 != iVar1))) {
        iVar7 = iVar7 + 1;
        piVar2 = *(int **)(DAT_008553f8[2] + 4);
        DAT_008553f8[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar2;
        }
        if (iVar5 == 0) {
          return;
        }
      }
      if ((iVar5 != 0) && (*(int *)(iVar5 + 4) != 0)) {
        bVar4 = false;
        local_28 = 0;
        do {
          if (99 < local_28) {
            return;
          }
          if (*(int **)((int)this_ + 0x30) == (int *)0x0) {
            puVar6 = (undefined4 *)((int)this_ + 0x1c);
          }
          else {
            puVar6 = (undefined4 *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x20, local_10,0);
          }
          fVar3 = bea_fcast<float>(puVar6[2]);
          if ((DAT_006fbdfc < fVar3) && (fVar3 < DAT_006fbdfc + 1.0f)) {
            FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)(iVar5 + 4)), bea_arg(0), bea_arg(*puVar6), bea_arg(puVar6[1]), bea_arg(fVar3), bea_arg(puVar6[3]), bea_arg(0), bea_arg(0));
            bVar4 = true;
          }
          local_28 = local_28 + 1;
        } while (BEA_LOOP_GUARD((!bVar4)));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ef120, ap_004ef120));
