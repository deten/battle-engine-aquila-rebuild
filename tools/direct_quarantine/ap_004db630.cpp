// auto-ported from 004db630_FUN_004db630.c (FUN_004db630, 541 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_0083cc88 GLOBAL_AT(int, 0x0083cc88)
#define DAT_0083cc8c GLOBAL_AT(int, 0x0083cc8c)
#define DAT_0083cc90 GLOBAL_AT(int, 0x0083cc90)
#define DAT_0083cc94 GLOBAL_AT(int, 0x0083cc94)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};

static void BEA_THISCALL ap_004db630(void * this_)
{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((*(int *)((int)this_ + 300) == 0) && (*(int *)(*(int *)((int)this_ + 0xf0) + 0x6c) != 0)) {
    *(undefined4 *)((int)this_ + 300) = 1;
    *(float *)((int)this_ + 0x24) = DAT_006fbdfc - 0.05f;
    fVar2 = SQRT(*(float *)((int)this_ + 0x84) * *(float *)((int)this_ + 0x84) +
                 *(float *)((int)this_ + 0x80) * *(float *)((int)this_ + 0x80) +
                 *(float *)((int)this_ + 0x7c) * *(float *)((int)this_ + 0x7c));
    if (fVar2 != 0.0f) {
      fVar2 = 1.0f / fVar2;
      *(float *)((int)this_ + 0x7c) = fVar2 * *(float *)((int)this_ + 0x7c);
      *(float *)((int)this_ + 0x80) = fVar2 * *(float *)((int)this_ + 0x80);
      *(float *)((int)this_ + 0x84) = fVar2 * *(float *)((int)this_ + 0x84);
    }
    *(undefined4 *)((int)this_ + 0x84) = 0;
    fVar2 = *(float *)(*(int *)((int)this_ + 0xf0) + 0x2c) * 0.05f;
    *(float *)((int)this_ + 0x7c) = fVar2 * *(float *)((int)this_ + 0x7c);
    *(float *)((int)this_ + 0x80) = fVar2 * *(float *)((int)this_ + 0x80);
    *(float *)((int)this_ + 0x84) = fVar2 * *(float *)((int)this_ + 0x84);
    FUN_004cb0b0(bea_arg((void *)((int)this_ + 0xe0)), bea_arg(0));
    if (*(int *)(*(int *)((int)this_ + 0xf0) + 4) != 0) {
      *(undefined4 *)((int)this_ + 0xe4) = 0;
      FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0xf0) + 4)), bea_arg((void *)((int)this_ + 0xe0)), bea_arg(DAT_0083cc88), bea_arg(DAT_0083cc8c), bea_arg(DAT_0083cc90), bea_arg(DAT_0083cc94), bea_arg(0), bea_arg(0));
      puVar5 = *(undefined4 **)((int)this_ + 0xe4);
      puVar4 = (undefined4 *)((int)this_ + 0x1c);
      if (puVar5 != (undefined4 *)0x0) {
        if (puVar5[0x12] == 0x461c4000) {
          puVar5[0x20] = *puVar4;
          puVar5[0x21] = *(undefined4 *)((int)this_ + 0x20);
          puVar5[0x22] = *(undefined4 *)((int)this_ + 0x24);
          puVar5[0x23] = *(undefined4 *)((int)this_ + 0x28);
          puVar5[0x10] = *puVar4;
          puVar5[0x11] = *(undefined4 *)((int)this_ + 0x20);
          puVar5[0x12] = *(undefined4 *)((int)this_ + 0x24);
          puVar5[0x13] = *(undefined4 *)((int)this_ + 0x28);
          *puVar5 = *puVar4;
          puVar5[1] = *(undefined4 *)((int)this_ + 0x20);
          puVar5[2] = *(undefined4 *)((int)this_ + 0x24);
          puVar5[3] = *(undefined4 *)((int)this_ + 0x28);
          iVar1 = puVar5[0x2b];
        }
        else {
          puVar5[0x10] = *puVar5;
          puVar5[0x11] = puVar5[1];
          puVar5[0x12] = puVar5[2];
          puVar5[0x13] = puVar5[3];
          *puVar5 = *puVar4;
          puVar5[1] = *(undefined4 *)((int)this_ + 0x20);
          puVar5[2] = *(undefined4 *)((int)this_ + 0x24);
          puVar5[3] = *(undefined4 *)((int)this_ + 0x28);
          iVar1 = puVar5[0x2b];
        }
        if (iVar1 != -0x40800000) {
          puVar5[0x2b] = DAT_00672fd0;
        }
      }
      iVar1 = *(int *)((int)this_ + 0xe4);
      if (iVar1 != 0) {
        puVar4 = (undefined4 *)((int)this_ + 0x3c);
        puVar5 = (undefined4 *)(iVar1 + 0x10);
        for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)(iVar1 + 0xa0) = 1;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004db630, ap_004db630));
