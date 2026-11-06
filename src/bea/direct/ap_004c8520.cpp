// auto-ported from 004c8520_vslot11.c (CPDTrail::vslot11, 1972 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile+asm: loop body checked against the asm: mask from the fistp low dword (0x4c8659-0x4c867f, no CONCAT44); distance and cross-product sums z,y,x with the edges kept in ST (0x4c85b2, 0x4c88e6); width = +0x6c only if greater (0x4c85cf test 0x41); the 0.1 / 0 / equality compares on the x87 flags as the asm tests them (0x4c85f9, 0x4c890e, 0x4c89ac C3 incl. unordered); 1/sqrt, nz and the width blend kept in x87 precision (0x4c891b-0x4c89a0); point +0x24 tested as an int (0x4c86ad); 0x4c8060 returns EAX stored as raw bits (0x4c8a51), not converted to float; vertices advanced 6 floats at a time
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPDTrail;
#define DAT_0089c9a4 GLOBAL_AT(int, 0x0089c9a4)
#define DAT_0089ce4c GLOBAL_AT(int, 0x0089ce4c)
#define _DAT_00630e0c GLOBAL_AT(float, 0x00630e0c)
#define DAT_0082b38c GLOBAL_AT(float, 0x0082b38c)
#define DAT_0082b394 GLOBAL_AT(int, 0x0082b394)
#define DAT_0082b388 GLOBAL_AT(float, 0x0082b388)
#define DAT_0082b390 GLOBAL_AT(float, 0x0082b390)
#define s__Blue_Trail_Large_00630e0f ((char*)0x00630e0f)
typedef int (BEA_THISCALL* FUN_004c8060_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c8060_t> FUN_004c8060 = {(FUN_004c8060_t)0x004c8060};
typedef uint32_t (BEA_CDECL* FUN_0054ff20_t)(void);
static const bea_guard<FUN_0054ff20_t> FUN_0054ff20 = {(FUN_0054ff20_t)0x0054ff20};
typedef uint32_t (BEA_THISCALL* FUN_00550180_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550180_t> FUN_00550180 = {(FUN_00550180_t)0x00550180};
typedef uint32_t (BEA_THISCALL* FUN_00550200_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550200_t> FUN_00550200 = {(FUN_00550200_t)0x00550200};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_004c8520(CPDTrail * this_, int param_1)
{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  float * &pfStack_10c = *reinterpret_cast<float * *>(bea_frame_ + 0x110 - 0x10c);
  float &fStack_108 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x108);
  float &fStack_104 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x104);
  float &fStack_100 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x100);
  undefined4 &uStack_fc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0xfc);
  uint &uStack_f8 = *reinterpret_cast<uint *>(bea_frame_ + 0x110 - 0xf8);
  float &fStack_f4 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xf4);
  float &fStack_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xf0);
  float &fStack_ec = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xec);
  undefined4 &uStack_e8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0xe8);
  int &iStack_e4 = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0xe4);
  float &fStack_e0 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xe0);
  float &fStack_dc = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xdc);
  float &fStack_d8 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xd8);
  float &fStack_d4 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xd4);
  float &fStack_d0 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xd0);
  float &fStack_cc = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xcc);
  float &fStack_c8 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xc8);
  float &fStack_c4 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xc4);
  float &fStack_c0 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xc0);
  float &fStack_bc = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xbc);
  float &fStack_b8 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xb8);
  undefined4 &uStack_b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0xb4);
  float &fStack_b0 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xb0);
  float &fStack_ac = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xac);
  float &fStack_a8 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xa8);
  undefined4 &uStack_a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0xa4);
  int &iStack_a0 = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0xa0);
  int &iStack_9c = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x9c);
  int &iStack_98 = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x98);
  int &iStack_94 = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x94);
  int &iStack_90 = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x90);
  float &fStack_8c = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x8c);
  uint &uStack_88 = *reinterpret_cast<uint *>(bea_frame_ + 0x110 - 0x88);
  undefined4 &uStack_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x78);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x68);
  undefined4 &uStack_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x64);
  undefined4 &uStack_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x60);
  undefined4 &uStack_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x5c);
  undefined4 &uStack_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x58);
  undefined4 &uStack_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x54);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x48);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x38);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x28);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x18);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0x8);
  float10 fDx, fDy, fDz, fR, fW, fInv, fNz, fT, fS;
  float fA, fB;
  int iRet;
  if ((*(int *)(this_ + 0x5c) != 0) && (*(int *)(param_1 + 0x88) != 0)) {
    bea_vcall<uint32_t>((&DAT_0089c9a4)[DAT_0089ce4c], 0x0, &local_80);
    iStack_94 = *(int *)(param_1 + 0x88);
    iVar5 = iStack_94 + *(short *)(param_1 + 0x7c) * 0x28;
    fStack_e0 = *(float *)(iVar5);
    fStack_dc = *(float *)(iVar5 + 4);
    fStack_d8 = *(float *)(iVar5 + 8);
    fStack_d4 = *(float *)(iVar5 + 0xc);
    // 0x4c8566: distances kept in ST, summed z, y, x
    fDx = (float10)local_80 - (float10)fStack_e0;
    fDy = (float10)fStack_7c - (float10)fStack_dc;
    fDz = (float10)fStack_78 - (float10)fStack_d8;
    fR = fDz * fDz + fDy * fDy + fDx * fDx;
    // 0x4c85cc: fcomp; test ah,0x41 -> the 0x70 width unless 0x6c is greater
    fA = *(float *)(this_ + 0x6c);
    fB = *(float *)(this_ + 0x70);
    if (fA > fB) {
      fW = (float10)fA;
    }
    else {
      fW = (float10)fB;
    }
    fR = ((fW * fW) / fR) * (float10)_DAT_00630e0c * (float10)102400.0f;
    *(float *)(param_1 + 0x78) = (float)fR;
    if (fR >= (float10)0.1f) {     // 0x4c85f9 fcom on the unrounded value; C0 (less or unordered) exits
      uStack_f8 = (uint)(int)*(short *)(param_1 + 0x7e);
      fStack_f0 = DAT_0082b38c;
      uStack_e8 = DAT_0082b394;
      fStack_f4 = DAT_0082b388;
      iStack_e4 = 0;
      fStack_ec = DAT_0082b390;
      *(uint32_t *)&fStack_8c = 0;
      iStack_9c = 0;
      iVar3 = (int)(longlong)ROUND((float10)1.0f / fR);
      if (5 < iVar3) {
        iVar3 = 5;
      }
      iStack_a0 = 0;
      uStack_88 = (1 << ((byte)iVar3 & 0x1f)) + -1;
      iVar5 = *(int *)(param_1 + 0x80);
      iStack_90 = iVar5 + -1;
      if (0 < iStack_90) {
        do {
          iVar3 = iStack_a0;
          pfVar1 = (float *)(iStack_94 + uStack_f8 * 0x28);
          if (*(int *)(pfVar1 + 9) == 0) {
            fStack_f4 = DAT_0082b388;
            iStack_e4 = 0;
            fStack_f0 = DAT_0082b38c;
            fStack_ec = DAT_0082b390;
            uStack_e8 = DAT_0082b394;
          }
          else {
            if ((iStack_e4 != 0) && (iStack_a0 != iVar5 + -2)) {
              iVar5 = iStack_90;
              if (uStack_f8 != 0) {
                iVar5 = uStack_f8 - 1;
              }
              if ((*(int *)(iStack_94 + 0x24 + iVar5 * 0x28) != 0) && ((uStack_88 & uStack_f8) != 0)
                 ) goto LAB_004c8c67;
            }
            fStack_d0 = *pfVar1;
            fStack_cc = pfVar1[1];
            fStack_c8 = pfVar1[2];
            fStack_c4 = pfVar1[3];
            if (((*(int *)(this_ + 0x90) != 0) || ((iStack_a0 == 0 || (*(int *)(this_ + 0x68) < 4))))
               && (pfVar2 = *(float **)(param_1 + 0x58), pfVar2 != (float *)0x0)) {
              fT = (float10)pfVar2[0x20] - (float10)*pfVar2;          // kept in ST (0x4c8757)
              fStack_1c = pfVar2[0x21] - pfVar2[1];
              fStack_18 = pfVar2[0x22] - pfVar2[2];
              fStack_d0 = (float)(fT + (float10)fStack_d0);
              fStack_cc = fStack_cc + fStack_1c;
              fStack_c8 = fStack_c8 + fStack_18;
            }
            if (iStack_e4 == 0) {
              fStack_108 = DAT_0082b388;
              uStack_fc = DAT_0082b394;
              fStack_ec = DAT_0082b390;
              fStack_f0 = DAT_0082b38c;
            }
            else {
              // 0x4c87d1: edges kept in ST
              fDx = (float10)fStack_e0 - (float10)*pfVar1;
              fDy = (float10)fStack_dc - (float10)pfVar1[1];
              fDz = (float10)fStack_d8 - (float10)pfVar1[2];
              if (*(int *)(this_ + 0xbc) == 0) {
                fStack_70 = *pfVar1 - local_80;
                fStack_c0 = fStack_70;
                fStack_6c = pfVar1[1] - fStack_7c;
                uStack_b4 = uStack_64;
                fStack_bc = fStack_6c;
                fStack_68 = pfVar1[2] - fStack_78;
                fStack_b8 = fStack_68;
              }
              else {
                uStack_60 = 0;
                uStack_5c = 0;
                uStack_58 = 0xbf800000;
                fStack_c0 = 0.0f;
                fStack_bc = 0.0f;
                fStack_b8 = -1.0f;
                uStack_b4 = uStack_54;
              }
              fStack_b0 = (float)((float10)fStack_b8 * fDy - (float10)fStack_bc * fDz);
              fStack_108 = fStack_b0;
              fStack_ac = (float)(fDz * (float10)fStack_c0 - (float10)fStack_b8 * fDx);
              fStack_104 = fStack_ac;
              fStack_a8 = (float)((float10)fStack_bc * fDx - fDy * (float10)fStack_c0);
              fStack_100 = fStack_a8;
              uStack_fc = uStack_a4;
              // 0x4c88e6: z, y, x
              fR = (float10)fStack_a8 * (float10)fStack_a8 + (float10)fStack_ac * (float10)fStack_ac +
                   (float10)fStack_b0 * (float10)fStack_b0;
              if (fR > (float10)0.0f) {     // test ah,0x41: not taken when <= 0 or unordered
                fInv = (float10)1.0f / SQRT(fR);
                fStack_108 = (float)((float10)fStack_b0 * fInv);
                fStack_104 = (float)((float10)fStack_104 * fInv);
                fNz = fInv * (float10)fStack_100;          // kept in ST
              }
              else {
                fNz = (float10)fStack_100;
              }
              fW = (float10)pfVar1[8];
              if (*(int *)(this_ + 0x8c) == 0) {
                fT = (float10)iStack_a0 / (float10)iStack_90;
              }
              else {
                fT = (float10)1.0f - (float10)*(float *)(param_1 + 0x60) / (float10)*(int *)(this_ + 0x84);
              }
              fS = (((float10)1.0f - fT) * (float10)*(float *)(this_ + 0x70) + fT * (float10)*(float *)(this_ + 0x6c)) * fW;
              fStack_108 = (float)((float10)fStack_108 * fS);
              fStack_104 = (float)((float10)fStack_104 * fS);
              fStack_100 = (float)(fNz * fS);
              // 0x4c89a8: fcomp; test ah,0x40 -- C3 is also set when unordered
              if ((((*(int *)(this_ + 0x88) == 0) &&
                    !(fStack_f4 < DAT_0082b388 || fStack_f4 > DAT_0082b388)) &&
                   !(fStack_f0 < DAT_0082b38c || fStack_f0 > DAT_0082b38c)) &&
                  !(fStack_ec < DAT_0082b390 || fStack_ec > DAT_0082b390)) {
                uStack_e8 = uStack_a4;
                fStack_f4 = fStack_108;
                fStack_f0 = fStack_104;
                fStack_ec = fStack_100;
              }
              FUN_00550200(bea_arg(*(void **)(this_ + 0x5c)), bea_arg(4), bea_arg(&pfStack_10c), bea_arg(&iStack_98));
              // 0x4c8a21: the colour comes back in EAX and is stored as raw bits
              iRet = FUN_004c8060(bea_arg(this_), bea_arg(iStack_9c), bea_arg(fStack_8c), bea_arg(param_1));
              fStack_4c = fStack_dc + fStack_f0;
              fStack_48 = fStack_d8 + fStack_ec;
              *(int *)(pfStack_10c + 3) = iRet;
              pfStack_10c[1] = fStack_4c;
              *pfStack_10c = fStack_f4 + fStack_e0;
              fStack_3c = fStack_dc - fStack_f0;
              pfStack_10c[2] = fStack_48;
              pfStack_10c[4] = *(float *)(this_ + 0xc0);
              fStack_38 = fStack_d8 - fStack_ec;
              pfStack_10c[5] = *(float *)(this_ + 0xc4);
              pfStack_10c = pfStack_10c + 6;
              *(int *)(pfStack_10c + 3) = iRet;
              pfStack_10c[1] = fStack_3c;
              *pfStack_10c = fStack_e0 - fStack_f4;
              pfStack_10c[2] = fStack_38;
              pfStack_10c[4] = *(float *)(this_ + 0xc0);
              pfStack_10c[5] = *(float *)(this_ + 0xcc);
              pfStack_10c = pfStack_10c + 6;
              iRet = FUN_004c8060(bea_arg(this_), bea_arg(iVar3), bea_arg(pfVar1[8]), bea_arg(param_1));
              *(int *)(pfStack_10c + 3) = iRet;
              fStack_2c = fStack_cc + fStack_104;
              fStack_28 = fStack_c8 + fStack_100;
              pfStack_10c[1] = fStack_2c;
              *pfStack_10c = fStack_108 + fStack_d0;
              fStack_c = fStack_cc - fStack_104;
              pfStack_10c[2] = fStack_28;
              pfStack_10c[4] = *(float *)(this_ + 200);
              fStack_8 = fStack_c8 - fStack_100;
              pfStack_10c[5] = *(float *)(this_ + 0xc4);
              pfStack_10c = pfStack_10c + 6;
              *(int *)(pfStack_10c + 3) = iRet;
              pfStack_10c[1] = fStack_c;
              *pfStack_10c = fStack_d0 - fStack_108;
              pfStack_10c[2] = fStack_8;
              pfStack_10c[4] = *(float *)(this_ + 200);
              pfStack_10c[5] = *(float *)(this_ + 0xcc);
              pfStack_10c = pfStack_10c + 6;
              FUN_00550180(bea_arg(*(void **)(this_ + 0x5c)), bea_arg(iStack_98 + 1), bea_arg(iStack_98), bea_arg(iStack_98 + 2));
              FUN_00550180(bea_arg(*(void **)(this_ + 0x5c)), bea_arg(iStack_98 + 1), bea_arg(iStack_98 + 2), bea_arg(iStack_98 + 3));
              fStack_ec = fStack_100;
              fStack_f0 = fStack_104;
            }
            fStack_e0 = fStack_d0;
            fStack_8c = pfVar1[8];
            fStack_dc = fStack_cc;
            fStack_d8 = fStack_c8;
            uStack_e8 = uStack_fc;
            fStack_d4 = fStack_c4;
            fStack_f4 = fStack_108;
            iStack_e4 = 1;
            iStack_9c = iVar3;
          }
LAB_004c8c67:
          uStack_f8 = uStack_f8 - 1;
          if ((int)uStack_f8 < 0) {
            uStack_f8 = *(int *)(param_1 + 0x80) - 1;
          }
          iVar5 = *(int *)(param_1 + 0x80);
          iStack_a0 = iVar3 + 1;
          iStack_90 = iVar5 + -1;
        } while (BEA_LOOP_GUARD((iStack_a0 < iStack_90)));
      }
      if ((this_[9] == (CPDTrail)0x54) &&
         (iVar5 = FUN_00568390(bea_arg(this_ + 4), bea_arg(s__Blue_Trail_Large_00630e0f + 1)), iVar5 == 0)) {
        FUN_0054ff20();
        return;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c8520, ap_004c8520));
