// auto-ported from 004e8f80_FUN_004e8f80.c (FUN_004e8f80, 615 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008550a0 GLOBAL_AT(undefined4*, 0x008550a0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00409760_t)(uint32_t);
static const bea_guard<FUN_00409760_t> FUN_00409760 = {(FUN_00409760_t)0x00409760};
typedef undefined4 (BEA_THISCALL* FUN_00409780_t)(uint32_t);
static const bea_guard<FUN_00409780_t> FUN_00409780 = {(FUN_00409780_t)0x00409780};
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e6f70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e6f70_t> FUN_004e6f70 = {(FUN_004e6f70_t)0x004e6f70};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004e8f80(void * this_, int param_1)
{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_10)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x10 - 0x10);
  int * &local_c = *reinterpret_cast<int * *>(bea_frame_ + 0x10 - 0xc);
  if (((((*(int *)((int)this_ + 0xc4) == 0) && (0.0f < *(float *)((int)this_ + 0x10c))) &&
       (*(int *)((int)this_ + 0x84) == 0)) &&
      ((*(int *)((int)this_ + 0x114) != 0 && (*(int *)((int)this_ + 0x80) == 0)))) &&
     ((*(byte *)((int)this_ + 0x2c) & 1) == 0)) {
    local_c = (int *)((int)this_ + 0xa4);
    piVar4 = (int *)FUN_00409760(bea_arg(local_10));
    while (BEA_LOOP_GUARD((piVar4 != (int *)0x0))) {
      if (((int *)*piVar4 != (int *)0x0) &&
         (iVar5 = bea_vcall<uint32_t>(*piVar4, 0x10c), iVar5 == 0)) {
        return;
      }
      piVar4 = (int *)FUN_00409780(bea_arg(local_10));
    }
    if ((*(int *)((int)this_ + 0xb4) < *(int *)((int)this_ + 0xb8)) || (param_1 != 0)) {
      puVar1 = DAT_008550a0;
      if (DAT_008550a0 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)*DAT_008550a0;
      }
      while (BEA_LOOP_GUARD((piVar4 != (int *)0x0))) {
        if ((((((piVar4[0x1f] == *(int *)((int)this_ + 0x7c)) &&
               (iVar5 = bea_vcall<uint32_t>(piVar4, 0x14c), iVar5 == 0)) &&
              (fVar2 = *(float *)((int)this_ + 0x1c) - bea_fcast<float>(piVar4[7]),
              fVar3 = *(float *)((int)this_ + 0x20) - bea_fcast<float>(piVar4[8]),
              SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 40.0f)) &&
             (((piVar4 != this_ && (piVar4[0x28] == *(int *)((int)this_ + 0xa0))) &&
              ((piVar4[0x27] == *(int *)((int)this_ + 0x9c) &&
               ((0.0f < bea_fcast<float>(piVar4[0x43]) && (piVar4[0x21] == 0)))))))) && (piVar4[0x45] != 0)) &&
           ((piVar4[0x20] == 0 && ((*(byte *)(piVar4 + 0xb) & 1) == 0)))) {
          local_c = piVar4 + 0x29;
          piVar6 = (int *)FUN_00409760(bea_arg(local_10));
          while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
            if (((int *)*piVar6 != (int *)0x0) &&
               (iVar5 = bea_vcall<uint32_t>(*piVar6, 0x10c), iVar5 == 0)) goto LAB_004e915a;
            piVar6 = (int *)FUN_00409780(bea_arg(local_10));
          }
          if ((piVar4[0x2c] + *(int *)((int)this_ + 0xb4) <= *(int *)((int)this_ + 0xb8)) ||
             (param_1 != 0)) {
            while(BEA_LOOP_GUARD(( true ))) {
              puVar1 = *(undefined4 **)((int)this_ + 0xa4);
              *(undefined4 **)((int)this_ + 0xac) = puVar1;
              if (puVar1 == (undefined4 *)0x0) {
                return;
              }
              piVar6 = (int *)*puVar1;
              if (piVar6 == (int *)0x0) break;
              iVar5 = *piVar6;
              if (iVar5 == 0) {
                FUN_004e5bd0(bea_arg((void *)((int)this_ + 0xa4)), bea_arg(piVar6));
                FUN_0044b1d0(bea_arg(piVar6));
                FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar6));
                piVar4[0x2f] = 0;
              }
              else {
                FUN_004e6f70(bea_arg(this_), bea_arg(iVar5));
                bea_vcall<uint32_t>(piVar4, 0x10c, local_10,iVar5,0,0);
                piVar4[0x2f] = 0;
              }
            }
            return;
          }
        }
LAB_004e915a:
        puVar1 = (undefined4 *)puVar1[1];
        if (puVar1 == (undefined4 *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)*puVar1;
        }
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e8f80, ap_004e8f80));
