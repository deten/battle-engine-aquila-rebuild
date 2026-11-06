// auto-ported from 00407540_FUN_00407540.c (FUN_00407540, 1018 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 check_fild: the Vec3 results of FUN_00401ec0 are copied with mov (0x407739..0x40777d), so fStack_1c / fStack_58 = bea_fcast<float>(puVar3[1]) instead of (float)
// @hand-fixed 2026-10-28 check_dat_arith: (&DAT_00662ac0) + idx*4 is a byte offset (mov eax,[ecx*4+0x662ac0] at 0x407661) -> ((uint8_t *)&DAT_00662ac0)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char Vec3;
typedef char fStack_48;
typedef char fStack_4c;
typedef char fStack_58;
typedef char fStack_5c;
typedef char fStack_68;
typedef char fStack_6c;
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_006601f8 GLOBAL_AT(int, 0x006601f8)
#define DAT_008a9ac4 GLOBAL_AT(int, 0x008a9ac4)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_00889304 GLOBAL_AT(int, 0x00889304)
#define DAT_00622f0c GLOBAL_AT(int, 0x00622f0c)
#define DAT_006254f4 GLOBAL_AT(float, 0x006254f4)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)
#define DAT_00662ac0 GLOBAL_AT(int, 0x00662ac0)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef int (BEA_THISCALL* FUN_00401fd0_t)(uint32_t);
static const bea_guard<FUN_00401fd0_t> FUN_00401fd0 = {(FUN_00401fd0_t)0x00401fd0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};

static void BEA_THISCALL ap_00407540(void * this_)
{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 fVar6;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x68);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x58);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x48);
  undefined1 (&auStack_40)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x70 - 0x40);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x38);
  undefined4 (&auStack_30)[4] = *reinterpret_cast<undefined4 (*)[4]>(bea_frame_ + 0x70 - 0x30);
  undefined4 &uStack_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x1c);
  undefined4 &uStack_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x18);
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x14);
  undefined4 &uStack_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0xc);
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x4);
  if (DAT_00662df4 == 0) {
    DAT_006601f8 = DAT_006601f8 + 1;
    if ((((((DAT_008a9ac4 == 0) && (DAT_008a9ac0 == 3)) && ((*(byte *)((int)this_ + 0x2c) & 4) == 0))
         && ((*(int *)((int)this_ + 0x580) != 0 && (*(int *)((int)this_ + 0x260) == 2)))) &&
        (((&DAT_00889304)[(*(int *)(*(int *)((int)this_ + 0x574) + 0x2c) + -1) * 3] == 0xe ||
         ((&DAT_00889304)[(*(int *)(*(int *)((int)this_ + 0x574) + 0x2c) + -1) * 3] == 0xd)))) &&
       ((iVar2 = bea_vcall<uint32_t>(this_, 0x10c), iVar2 != 0 ||
        (iVar2 = FUN_00401fd0(bea_arg(this_)), iVar2 != 0)))) {
      if (DAT_006601f8 == DAT_00622f0c + 1) {
        iVar2 = FUN_00515940();
        *(float *)((int)this_ + 0x114) =
             *(float *)((int)this_ + 0x114) -
             DAT_006254f4 * 0.002f * (float)(DAT_0089bda8 - iVar2 / 2);
        iVar2 = FUN_00515b00();
        fVar1 = DAT_006254f4 * 0.002f * (float)(DAT_0089bda4 - iVar2 / 2) * 0.5f;
        if (*(int *)(((uint8_t *)&DAT_00662ac0) + *(int *)(*(int *)((int)this_ + 0x574) + 0x2c) * 4) == 0) {
          *(float *)((int)this_ + 0x118) = *(float *)((int)this_ + 0x118) - fVar1;
        }
        else {
          *(float *)((int)this_ + 0x118) = fVar1 + *(float *)((int)this_ + 0x118);
        }
        fVar5 = (float10)fcos((float10)*(float *)((int)this_ + 0x4c4));
        FUN_004062d0(bea_arg(auStack_30), bea_arg((float)(fVar5 * (float10)*(float *)((int)this_ + 0x4b8) +
                            (float10)*(float *)((int)this_ + 0x114))), bea_arg((float)(fVar5 * (float10)*(float *)((int)this_ + 0x4bc) +
                            (float10)*(float *)((int)this_ + 0x118))), bea_arg((float)(fVar5 * (float10)*(float *)((int)this_ + 0x4c0) +
                            (float10)*(float *)((int)this_ + 0x11c))));
        fVar1 = *(float *)((int)this_ + 0x114);
        fVar5 = (float10)fcos((float10)fVar1);
        puVar3 = auStack_30;
        puVar4 = (undefined4 *)((int)this_ + 0x3c);
        for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar3 = auStack_30;
        puVar4 = (undefined4 *)((int)this_ + 0x9c);
        for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        fStack_50 = (float)fVar5;
        fVar6 = (float10)fsin((float10)fVar1);
        fStack_4c = (float)-fVar6;
        puVar3 = (undefined4 *)(uintptr_t)bea_piece32(FUN_00401ec0(bea_arg(&fStack_60), bea_arg((float)fVar6), bea_arg((float)fVar5), bea_arg(0)));
        uStack_20 = *puVar3;
        fStack_1c = bea_fcast<float>(puVar3[1]);
        uStack_18 = puVar3[2];
        uStack_14 = puVar3[3];
        puVar3 = (undefined4 *)FUN_00401ec0(bea_arg(&fStack_60), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
        uStack_10 = *puVar3;
        fStack_58 = bea_fcast<float>(puVar3[1]);
        uStack_8 = puVar3[2];
        uStack_4 = puVar3[3];
        fStack_60 = fStack_4c;
        fStack_5c = fStack_1c;
        fStack_c = fStack_58;
        iVar2 = bea_vcall<uint32_t>(this_, 0x10c);
        if ((iVar2 == 0) || (iVar2 = FUN_00401fd0(bea_arg(this_)), iVar2 != 0)) {
          fStack_50 = 0.0;
          fStack_6c = 0.0;
          fStack_68 = -1.0;
        }
        else {
          FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&fStack_50), bea_arg((int)this_ + 0x1c));
          fStack_6c = fStack_4c;
          fStack_68 = fStack_48;
        }
        fVar1 = fStack_68 * fStack_5c - fStack_6c * fStack_58;
        fStack_4c = fStack_58 * fStack_50 - fStack_68 * fStack_60;
        fStack_48 = fStack_6c * fStack_60 - fStack_5c * fStack_50;
        FUN_00401ec0(bea_arg(auStack_40), bea_arg(fStack_4c * fStack_68 - fStack_48 * fStack_6c), bea_arg(fStack_48 * fStack_50 - fStack_68 * fVar1), bea_arg(fStack_6c * fVar1 - fStack_4c * fStack_50));
        FUN_00406d50(bea_arg(auStack_40));
        fStack_38 = -fStack_38;
        fVar1 = *(float *)((int)this_ + 0x118) - fStack_38;
        if (fVar1 <= 0.6f) {
          if (fVar1 < -0.9f) {
            *(float *)((int)this_ + 0x118) = fStack_38 - 0.9f;
          }
        }
        else {
          *(float *)((int)this_ + 0x118) = fStack_38 + 0.6f;
        }
      }
      iVar2 = FUN_00515940();
      DAT_0089bda8 = iVar2 / 2;
      iVar2 = FUN_00515b00();
      DAT_00622f0c = DAT_006601f8;
      DAT_0089bda4 = iVar2 / 2;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00407540, ap_00407540));
