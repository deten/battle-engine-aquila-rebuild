// auto-ported from 004d5e30_FUN_004d5e30.c (FUN_004d5e30, 885 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xb0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0089ce84 GLOBAL_AT(int, 0x0089ce84)
#define DAT_0082b69c GLOBAL_AT(int, 0x0082b69c)
#define s_meshtex_default_tga_00625498 ((char*)0x00625498)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_THISCALL* FUN_00500540_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500540_t> FUN_00500540 = {(FUN_00500540_t)0x00500540};
typedef uint32_t (BEA_THISCALL* FUN_00500590_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500590_t> FUN_00500590 = {(FUN_00500590_t)0x00500590};
typedef int (BEA_THISCALL* FUN_00500a10_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500a10_t> FUN_00500a10 = {(FUN_00500a10_t)0x00500a10};
typedef uint32_t (BEA_THISCALL* FUN_00500ac0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500ac0_t> FUN_00500ac0 = {(FUN_00500ac0_t)0x00500ac0};
typedef uint32_t (BEA_THISCALL* FUN_00500e70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500e70_t> FUN_00500e70 = {(FUN_00500e70_t)0x00500e70};
typedef int * (BEA_CDECL* FUN_00501280_t)(int, int, ...);
static const bea_guard<FUN_00501280_t> FUN_00501280 = {(FUN_00501280_t)0x00501280};
typedef uint32_t (BEA_THISCALL* FUN_00501310_t)(uint32_t);
static const bea_guard<FUN_00501310_t> FUN_00501310 = {(FUN_00501310_t)0x00501310};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};

static uint32_t BEA_THISCALL ap_004d5e30(void * this_)
{
  short *psVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  short sVar7;
  void *this_00;
  alignas(16) uint8_t bea_frame_[0xb0] = {};   // the original stack frame (emulate_frame)
  int &local_ac = *reinterpret_cast<int *>(bea_frame_ + 0xb0 - 0xac);
  short &local_a8 = *reinterpret_cast<short *>(bea_frame_ + 0xb0 - 0xa8);
  short &local_a6 = *reinterpret_cast<short *>(bea_frame_ + 0xb0 - 0xa6);
  short &local_a4 = *reinterpret_cast<short *>(bea_frame_ + 0xb0 - 0xa4);
  short &local_a2 = *reinterpret_cast<short *>(bea_frame_ + 0xb0 - 0xa2);
  short &local_a0 = *reinterpret_cast<short *>(bea_frame_ + 0xb0 - 0xa0);
  short &local_9e = *reinterpret_cast<short *>(bea_frame_ + 0xb0 - 0x9e);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x9c);
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x98);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x94);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x84);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x74);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x68);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x64);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x54);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x48);
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x40);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x1c);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x4);
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  if (DAT_0089ce84 == 0) {
    DAT_0089ce84 = FUN_004f27f0(s_meshtex_default_tga_00625498,0,0,0xffffffff,1,1);
  }
  this_00 = (void *)FUN_00501280(DAT_0089ce84,0);
  FUN_00500540(bea_arg(this_00), bea_arg(0x152), bea_arg(0x208), bea_arg(0x24), bea_arg(4), bea_arg(0));
  FUN_00500590(bea_arg(this_00), bea_arg(0x65), bea_arg(0x208), bea_arg(2), bea_arg(0));
  local_ac = 0;
  if (0 < *(int *)((int)this_ + 0x68) * *(int *)((int)this_ + 0x6c)) {
    do {
      piVar5 = *(int **)(*(int *)((int)this_ + 0x60) + local_ac * 4);
      if (piVar5 != (int *)0x0) {
        if (piVar5[2] < 1) {
          sVar7 = -1;
        }
        else {
          DAT_0082b69c = 0;
          sVar7 = *(short *)*piVar5;
        }
        while (BEA_LOOP_GUARD((-1 < sVar7))) {
          psVar1 = (short *)(*(int *)((int)this_ + 100) + sVar7 * 0xc);
          iVar6 = **(int **)((int)this_ + 0x98);
          iVar2 = iVar6 + *psVar1 * 6;
          local_6c = (float)(int)*(short *)(iVar6 + *psVar1 * 6) * *(float *)((int)this_ + 0x50) *
                     3.051851e-05f + *(float *)((int)this_ + 0x40);
          local_78 = (float)(int)*(short *)(iVar2 + 2) * *(float *)((int)this_ + 0x50) * 3.051851e-05f
                     + *(float *)((int)this_ + 0x44);
          iVar3 = iVar6 + psVar1[1] * 6;
          psVar4 = (short *)(iVar6 + psVar1[2] * 6);
          local_74 = (float)(int)*(short *)(iVar2 + 4) * *(float *)((int)this_ + 0x50) * 3.051851e-05f
                     + *(float *)((int)this_ + 0x48);
          local_9c = (float)(int)*(short *)(iVar6 + psVar1[1] * 6) * *(float *)((int)this_ + 0x50) *
                     3.051851e-05f + *(float *)((int)this_ + 0x40);
          local_98 = (float)(int)*(short *)(iVar3 + 2) * *(float *)((int)this_ + 0x50) * 3.051851e-05f
                     + *(float *)((int)this_ + 0x44);
          local_94 = (float)(int)*(short *)(iVar3 + 4) * *(float *)((int)this_ + 0x50) * 3.051851e-05f
                     + *(float *)((int)this_ + 0x48);
          local_8c = (float)(int)*psVar4 * *(float *)((int)this_ + 0x50) * 3.051851e-05f +
                     *(float *)((int)this_ + 0x40);
          local_88 = (float)(int)psVar4[1] * *(float *)((int)this_ + 0x50) * 3.051851e-05f +
                     *(float *)((int)this_ + 0x44);
          local_50 = 0;
          local_4c = 0;
          local_54 = 0xffffffff;
          local_2c = 0x3f800000;
          local_28 = 0;
          local_30 = 0xffffffff;
          local_8 = 0x3f800000;
          local_84 = (float)(int)psVar4[2] * *(float *)((int)this_ + 0x50) * 3.051851e-05f +
                     *(float *)((int)this_ + 0x48);
          local_4 = 0x3f800000;
          local_c = 0xffffffff;
          local_68 = local_78;
          local_64 = local_74;
          local_48 = local_9c;
          local_44 = local_98;
          local_40 = local_94;
          local_24 = local_8c;
          local_20 = local_88;
          local_1c = local_84;
          local_a8 = FUN_00500a10(bea_arg(this_00), bea_arg(&local_6c), bea_arg(3));
          local_a6 = local_a8 + 1;
          local_a4 = local_a8 + 2;
          local_a2 = local_a4;
          local_a0 = local_a6;
          local_9e = local_a8;
          FUN_00500ac0(bea_arg(this_00), bea_arg(&local_a8), bea_arg(6));
          DAT_0082b69c = DAT_0082b69c + 1;
          if (DAT_0082b69c < piVar5[2]) {
            sVar7 = *(short *)(*piVar5 + DAT_0082b69c * 2);
          }
          else {
            sVar7 = -1;
          }
        }
      }
      local_ac = local_ac + 1;
    } while (BEA_LOOP_GUARD((local_ac < *(int *)((int)this_ + 0x68) * *(int *)((int)this_ + 0x6c))));
  }
  FUN_00500e70(bea_arg(this_00), bea_arg(1));
  if (this_00 != (void *)0x0) {
    FUN_00501310(bea_arg(this_00));
  }
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  return FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d5e30, ap_004d5e30));
