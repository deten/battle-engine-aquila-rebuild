// auto-ported from 004fbcb0_vslot86.c (CUnit::vslot86, 839 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_00854d80 GLOBAL_AT(int, 0x00854d80)
#define DAT_00854d84 GLOBAL_AT(int, 0x00854d84)
#define DAT_00854d88 GLOBAL_AT(int, 0x00854d88)
#define DAT_00854d8c GLOBAL_AT(int, 0x00854d8c)
#define s_deploying_006239cc ((char*)0x006239cc)
typedef uint32_t (BEA_THISCALL* FUN_004097a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004097a0_t> FUN_004097a0 = {(FUN_004097a0_t)0x004097a0};
typedef uint32_t (BEA_THISCALL* FUN_0044a850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a850_t> FUN_0044a850 = {(FUN_0044a850_t)0x0044a850};
typedef undefined4 * (BEA_THISCALL* FUN_0044a930_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a930_t> FUN_0044a930 = {(FUN_0044a930_t)0x0044a930};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef undefined4 (BEA_THISCALL* FUN_004e43d0_t)(uint32_t);
static const bea_guard<FUN_004e43d0_t> FUN_004e43d0 = {(FUN_004e43d0_t)0x004e43d0};
typedef undefined4 (BEA_THISCALL* FUN_00509f70_t)(uint32_t);
static const bea_guard<FUN_00509f70_t> FUN_00509f70 = {(FUN_00509f70_t)0x00509f70};

static undefined4 BEA_THISCALL ap_004fbcb0(CUnit * this_)
{
  float fVar1;
  void *this_00;
  undefined4 a1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x78);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x74);
  undefined1 (&auStack_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x70);
  undefined4 (&local_60)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x80 - 0x60);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x80 - 0x30);
  if ((*(int *)(*(int *)(this_ + 0x164) + 0x108) == 0) ||
     (iVar6 = *(int *)(this_ + 0x244), iVar6 == 4)) {
    if (*(void **)(this_ + 0x140) == (void *)0x0) {
      if (*(void **)(this_ + 0x144) != (void *)0x0) {
        if ((*(int *)(this_ + 0x168) != 1) && (*(int *)(this_ + 0x1e8) == 0)) {
          iVar6 = FUN_004e43d0(bea_arg(*(void **)(this_ + 0x144)));
          if (iVar6 != 0) {
            fVar1 = *(float *)(*(int *)(*(int *)(this_ + 0x144) + 0x3d0) + 0x34) + DAT_00672fd0;
            *(undefined4 *)(this_ + 0x1e8) = 0;
            *(undefined4 *)(this_ + 0x168) = 1;
            *(float *)(this_ + 0x16c) = fVar1;
          }
        }
        return 1;
      }
    }
    else {
      iVar6 = 1;
      if ((*(int *)(this_ + 0x168) != 1) && (*(int *)(this_ + 0x1e8) == 0)) {
        iVar2 = FUN_00509f70(bea_arg(*(void **)(this_ + 0x140)));
        if (iVar2 != 0) {
          iVar2 = *(int *)(this_ + 0x140);
          if (iVar2 == 0) {
            fVar1 = 0.0f;
          }
          else {
            fVar1 = *(float *)(*(int *)(iVar2 + 0xa0) + 0x88);
          }
          fVar1 = DAT_00672fd0 + fVar1;
          *(undefined4 *)(this_ + 0x168) = 1;
          *(undefined4 *)(this_ + 0x1ec) = 1;
          *(float *)(this_ + 0x16c) = fVar1;
          iVar2 = *(int *)(*(int *)(iVar2 + 0xa0) + 0x10);
          if (iVar2 != 0) {
            FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(iVar2), bea_arg(this_), bea_arg(0x3f333333), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
          }
          if (*(int *)(*(int *)(*(int *)(this_ + 0x140) + 0xa0) + 8) != 0) {
            do {
              bea_vcall<uint32_t>(this_, 0x160, 0x1d,iVar6,&local_80,local_60);
              if (local_80 == 0.0f) {
                if (((fStack_7c == 0.0f) && (fStack_78 == 0.0f)) && (iVar6 == 1)) {
                  pfVar3 = (float *)FUN_0044a850(bea_arg(*(void **)(this_ + 0x140)), bea_arg(auStack_70));
                  local_80 = *pfVar3;
                  fStack_7c = pfVar3[1];
                  fStack_78 = pfVar3[2];
                  fStack_74 = pfVar3[3];
                  puVar4 = (undefined4 *)FUN_0044a930(bea_arg(*(void **)(this_ + 0x140)), bea_arg(auStack_30));
                  puVar7 = local_60;
                  for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
                    *puVar7 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar7 = puVar7 + 1;
                  }
                }
                if (((local_80 != 0.0f) || (fStack_7c != 0.0f)) || (fStack_78 != 0.0f))
                goto LAB_004fbe9b;
              }
              else {
LAB_004fbe9b:
                FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)(*(int *)(*(int *)(this_ + 0x140) + 0xa0) + 8)), bea_arg(*(undefined4 *)(this_ + 0x1ac)), bea_arg(DAT_00854d80), bea_arg(DAT_00854d84), bea_arg(DAT_00854d88), bea_arg(DAT_00854d8c), bea_arg(0), bea_arg(0));
                if (*(void **)(*(int *)(this_ + 0x1ac) + 4) != (void *)0x0) {
                  FUN_004097a0(bea_arg(*(void **)(*(int *)(this_ + 0x1ac) + 4)), bea_arg(&local_80));
                }
                iVar2 = *(int *)(*(int *)(this_ + 0x1ac) + 4);
                if (iVar2 != 0) {
                  puVar4 = local_60;
                  puVar7 = (undefined4 *)(iVar2 + 0x10);
                  for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
                    *puVar7 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar7 = puVar7 + 1;
                  }
                  *(undefined4 *)(iVar2 + 0xa0) = 1;
                }
              }
              iVar6 = iVar6 + 1;
            } while (BEA_LOOP_GUARD((((local_80 != 0.0f) || (fStack_7c != 0.0f)) || (fStack_78 != 0.0f))));
          }
          if (*(float *)(this_ + 0x16c) <= DAT_00672fd0) {
            *(undefined4 *)(this_ + 0x1e8) = 1;
          }
          return 1;
        }
      }
    }
  }
  else if (iVar6 == 0) {
    iVar2 = *(int *)this_;
    *(undefined4 *)(this_ + 0x244) = 3;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_deploying_006239cc,1);
    a1 = FUN_004aa630(bea_arg(this_00), bea_arg(iVar6));
    bea_vcall<uint32_t>(this_, 0xf0, a1);
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fbcb0, ap_004fbcb0));
