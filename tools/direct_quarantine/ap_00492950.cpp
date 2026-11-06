// auto-ported from 00492950_FUN_00492950.c (FUN_00492950, 342 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_007042d0 GLOBAL_AT(undefined4, 0x007042d0)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
typedef uint32_t (BEA_CDECL* FUN_0044a690_t)(void);
static const bea_guard<FUN_0044a690_t> FUN_0044a690 = {(FUN_0044a690_t)0x0044a690};
typedef uint32_t (BEA_THISCALL* FUN_00492860_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00492860_t> FUN_00492860 = {(FUN_00492860_t)0x00492860};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};

static void BEA_THISCALL ap_00492950(void * this_)
{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  short sVar6;
  undefined4 *puVar7;
  int iVar8;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x5c);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x54);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x38);
  undefined4 uVar9;
  int &local_20 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x20);
  int &local_18 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x18);
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x14);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x4);
  uVar9 = 0x492965;
  FUN_0044a690();
  puVar5 = &DAT_007042d0;
  puVar7 = (undefined4 *)&local_60;
  for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(local_4), bea_arg(local_60), bea_arg(local_5c), bea_arg(local_58), bea_arg(local_54), bea_arg(local_50), bea_arg(local_4c), bea_arg(local_48), bea_arg(local_44), bea_arg(local_40), bea_arg(local_3c), bea_arg(local_38), bea_arg(uVar9));
  local_18 = 0x40;
  local_14 = 0x40;
  iVar2 = 4;
  local_20 = 0;
  do {
    iVar4 = 0;
    if (local_14 != 0) {
      do {
        iVar8 = 0;
        if (local_18 != 0) {
          do {
            if (((local_20 < 5) && (-1 < local_20)) && (sVar6 = (short)iVar8, -1 < sVar6)) {
              iVar1 = 0x40 >> ((byte)local_20 & 0x1f);
              if (((sVar6 < iVar1) && (sVar3 = (short)iVar4, -1 < sVar3)) && (sVar3 < iVar1)) {
                for (puVar5 = *(undefined4 **)
                               (*(int *)(*(int *)((int)this_ + 0x90) + iVar2 * 4) + 4 +
                               (iVar1 * sVar3 + (int)sVar6) * 8); BEA_LOOP_GUARD((puVar5 != (undefined4 *)0x0));
                    puVar5 = (undefined4 *)*puVar5) {
                  iVar1 = FUN_00492c90(bea_arg(puVar5));
                  if ((*(uint *)(iVar1 + 0x34) & 0x2000000) != 1) {
                    if (puVar5 != (undefined4 *)0x0) {
                      FUN_00492860(bea_arg(this_), bea_arg(CONCAT22(sVar3,sVar6)), bea_arg(iVar2));
                    }
                    break;
                  }
                }
              }
            }
            iVar8 = iVar8 + 1;
          } while (BEA_LOOP_GUARD((iVar8 < local_18)));
        }
        iVar4 = iVar4 + 1;
      } while (BEA_LOOP_GUARD((iVar4 < local_14)));
    }
    local_18 = local_18 >> 1;
    local_14 = local_14 >> 1;
    iVar2 = iVar2 + -1;
    local_20 = local_20 + 1;
    if (4 < local_20) {
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00492950, ap_00492950));
