// auto-ported from 00546b40_FUN_00546b40.c (FUN_00546b40, 2147 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd8: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
// @hand-fixed 2026-10-28 compile: rewritten from the asm (Ghidra had float<->int value conversions on bit copies, qword-temp ._0_4_ members, typedef/variable name clashes and double 0.97 factors): frame slots by esp offset (E+0x18 pos, +0x34 index buffer, +0x50 velocity, +0x74/+0x88/+0x98/+0xa8/+0xb8 call buffers); smoothing factor 1-0.03f as fld 1.0; fsub (0x546c23); LOD r = (D+e)*(1/sqrt(d2)) with the int D at full precision (0x546ef0-0x546f05); x87 branches keep the unordered cases; strip-index paths 0x546f1a/0x5472f4/0x547364/0x547267 as the asm
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CTweakSLONG;
typedef char Vec3;
#define DAT_008aa96c GLOBAL_AT(int, 0x008aa96c)
#define DAT_008aa95c GLOBAL_AT(int, 0x008aa95c)
#define DAT_008aa950 GLOBAL_AT(int, 0x008aa950)
#define DAT_008aa468 GLOBAL_AT(int, 0x008aa468)
#define DAT_008aa98c GLOBAL_AT(int, 0x008aa98c)
#define DAT_008aa99c GLOBAL_AT(int, 0x008aa99c)
#define DAT_00650ae8 GLOBAL_AT(int, 0x00650ae8)
#define DAT_009c64d8 GLOBAL_AT(int, 0x009c64d8)
typedef uint32_t (BEA_THISCALL* CTweakSLONG__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakSLONG__vslot0_t> CTweakSLONG__vslot0 = {(CTweakSLONG__vslot0_t)0x00528ad0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef int (BEA_THISCALL* FUN_004883f0_t)(uint32_t);
static const bea_guard<FUN_004883f0_t> FUN_004883f0 = {(FUN_004883f0_t)0x004883f0};
typedef uint32_t (BEA_THISCALL* FUN_004885e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004885e0_t> FUN_004885e0 = {(FUN_004885e0_t)0x004885e0};
typedef uint32_t (BEA_CDECL* FUN_0048e7c0_t)(void);
static const bea_guard<FUN_0048e7c0_t> FUN_0048e7c0 = {(FUN_0048e7c0_t)0x0048e7c0};
typedef uint32_t (BEA_THISCALL* FUN_0048e880_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0048e880_t> FUN_0048e880 = {(FUN_0048e880_t)0x0048e880};
typedef uint32_t (BEA_THISCALL* FUN_0048f2f0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0048f2f0_t> FUN_0048f2f0 = {(FUN_0048f2f0_t)0x0048f2f0};
typedef int (BEA_THISCALL* FUN_00550400_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00550400_t> FUN_00550400 = {(FUN_00550400_t)0x00550400};

static uint32_t BEA_THISCALL ap_00546b40(void * this_, int param_1, int param_2)
{
  // the original frame: E = esp after the four register pushes; slot E+o lives at bea_frame_[o - 0x10]
  alignas(16) uint8_t bea_frame_[0xd8] = {};   // the original stack frame (emulate_frame)
#define BEA_F(o) (bea_frame_ + (o) - 0x10)
  float &fX = *reinterpret_cast<float *>(BEA_F(0x18));          // fStack_d0
  float &fY = *reinterpret_cast<float *>(BEA_F(0x1c));          // fStack_cc
  float &fZ = *reinterpret_cast<float *>(BEA_F(0x20));          // fStack_c8
  int &iIdxBase = *reinterpret_cast<int *>(BEA_F(0x34));        // local_b4: DAT_008aa96c, then the locked index buffer
  float (&fVel)[4] = *reinterpret_cast<float (*)[4]>(BEA_F(0x50));
  float (&fMVec)[4] = *reinterpret_cast<float (*)[4]>(BEA_F(0x74));
  float (&fPos)[4] = *reinterpret_cast<float (*)[4]>(BEA_F(0x98));
  int *piVar2;
  int iVar11;
  int iV;          // ecx / E+0x30: vertex index
  int iNext;       // E+0x40
  int bClosed;     // E+0x10
  int iCol, iRow;
  int iLevel, iSel, iLod, iThr, iD, iQ, iListCnt, iDiff, iOff;
  int iAlloc;      // E+0x60
  uint uId, uKey, uIdx;
  float fDz, fDz2, fD2, fYY, fE, fT, fA, fB;
  float10 fR;
  short *pIdx;
  char *pH;
  uint8_t *pCell;
  uint8_t *pb;
  uint8_t *pv;
  int *pList;
  ushort *puSlot;
  ushort uOld;
  bool bSame;
  float fK, fOneMinusK;
  float *pfVar12;
  int *piVar15;
  uint32_t uR1, uR2;

  iIdxBase = DAT_008aa96c;
  if (iIdxBase < DAT_008aa95c) {
    CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_008aa950), bea_arg((float)iIdxBase));   // fild [esp+0x34]; fstp dword (0x546b63)
  }
  piVar2 = (int *)(*(int *)((int)this_ + 0x24) + param_2 * 0x34);
  bea_vcall<uint32_t>(piVar2[4], 0x0, BEA_F(0x98));
  iVar11 = bea_vcall<uint32_t>(piVar2[4], 0x4, BEA_F(0xb8));
  fMVec[0] = *(float *)(iVar11 + 4);
  fMVec[1] = *(float *)(iVar11 + 0x14);
  fMVec[2] = *(float *)(iVar11 + 0x24);
  fX = -fPos[0];
  fY = -fPos[1];
  fZ = -fPos[2];
  iAlloc = 0;
  fX = fX + 4.0f;
  fY = fY + 4.0f;
  if ((piVar2[5] == 0x4996b438) || ((&DAT_008aa468)[param_2] != 0)) {
    // bit copies of E+0x18..0x24 and E+0x74..0x80 (0x546d17-0x546d54)
    piVar2[5] = *reinterpret_cast<int *>(BEA_F(0x18));
    piVar2[6] = *reinterpret_cast<int *>(BEA_F(0x1c));
    piVar2[7] = *reinterpret_cast<int *>(BEA_F(0x20));
    piVar2[8] = *reinterpret_cast<int *>(BEA_F(0x24));
    piVar2[9] = *reinterpret_cast<int *>(BEA_F(0x74));
    piVar2[10] = *reinterpret_cast<int *>(BEA_F(0x78));
    piVar2[0xb] = *reinterpret_cast<int *>(BEA_F(0x7c));
    piVar2[0xc] = *reinterpret_cast<int *>(BEA_F(0x80));
  }
  else {
    fK = GLOBAL_AT(float, 0x005e50c8);   // 0.03 (.rdata)
    fOneMinusK = 1.0f - fK;               // fld 1.0; fsub (0x546c23)
    FUN_00401ec0(bea_arg(BEA_F(0x50)), bea_arg(fOneMinusK * *(float *)(piVar2 + 5)),
                 bea_arg(fOneMinusK * *(float *)(piVar2 + 6)), bea_arg(fOneMinusK * *(float *)(piVar2 + 7)));
    FUN_00401ec0(bea_arg(BEA_F(0x88)), bea_arg(fK * fX), bea_arg(fK * fY), bea_arg(fZ * fK));
    pfVar12 = (float *)FUN_00401ee0(bea_arg(BEA_F(0x88)), bea_arg(BEA_F(0xa8)), bea_arg(BEA_F(0x50)));
    piVar2[5] = ((int *)pfVar12)[0];
    piVar2[6] = ((int *)pfVar12)[1];
    piVar2[7] = ((int *)pfVar12)[2];
    piVar2[8] = ((int *)pfVar12)[3];
    fOneMinusK = 1.0f - fK;
    uR1 = FUN_0040d150(bea_arg(piVar2 + 9), bea_arg(BEA_F(0xa8)), bea_arg(fOneMinusK));
    uR2 = FUN_0040d150(bea_arg(BEA_F(0x74)), bea_arg(BEA_F(0x18)), bea_arg(GLOBAL_AT(uint32_t, 0x005e50c8)));
    // the first result is pushed before the second call (0x546cd9): this2 + result1 -> E+0x50
    piVar15 = (int *)FUN_00401ee0(bea_arg(uR2), bea_arg(BEA_F(0x50)), bea_arg(uR1));
    piVar2[9] = piVar15[0];
    piVar2[10] = piVar15[1];
    piVar2[0xb] = piVar15[2];
    piVar2[0xc] = piVar15[3];
  }
  *reinterpret_cast<int *>(BEA_F(0x18)) = piVar2[5];
  *reinterpret_cast<int *>(BEA_F(0x1c)) = piVar2[6];
  *reinterpret_cast<int *>(BEA_F(0x20)) = piVar2[7];
  *reinterpret_cast<int *>(BEA_F(0x24)) = piVar2[8];
  *reinterpret_cast<int *>(BEA_F(0x50)) = piVar2[9];
  *reinterpret_cast<int *>(BEA_F(0x54)) = piVar2[10];
  *reinterpret_cast<int *>(BEA_F(0x58)) = piVar2[0xb];
  *reinterpret_cast<int *>(BEA_F(0x5c)) = piVar2[0xc];
  iVar11 = FUN_004885e0(bea_arg(*(void **)((int)this_ + 0x2c)), bea_arg(BEA_F(0x34)));
  if (-1 < iVar11) {
    pIdx = (short *)iIdxBase;
    pIdx[1] = 0;
    pIdx[0] = 0;
    pIdx = pIdx + 2;
    iV = 1;
    if (0 < piVar2[3]) {
      iVar11 = 0;
      iOff = 0;
      do {
        iVar11 = iVar11 + 1;
        *(undefined4 *)(piVar2[2] + 8 + iOff) = 0;
        iOff = iOff + 0xc;
      } while (BEA_LOOP_GUARD((iVar11 < piVar2[3])));
    }
    pCell = (uint8_t *)piVar2[1];
    bClosed = 1;
    iRow = 0;
    do {
      iNext = iV + 0x41;
      fYY = fY * fY;
      pH = (char *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * iRow * 2);
      pb = pCell + -3;
      iCol = 0;
      do {
        uId = (uint)((iRow << 6) + iCol);
        if ((iCol < *(int *)(param_1 + 0x18)) || (*(int *)(param_1 + 0x20) < iCol) ||
            (iRow < *(int *)(param_1 + 0x1c)) || (*(int *)(param_1 + 0x24) < iRow) ||
            (pH[0] < (char)pCell[0]) || ((char)pb[4] < pH[1])) {
          // 0x547364
          if (*(int *)(pb + 0xf) != 0) {
            *(undefined2 *)(*(int *)(pb + 0xf) + 0x3c) = 0xffff;
            *(int *)(pb + 0xf) = 0;
          }
          pb[0x13] = 0x9d;
          if (bClosed == 0) {
            bClosed = 1;
            pIdx[1] = (short)(iV - 1);
            pIdx[0] = (short)(iV - 1);
            pIdx = pIdx + 2;
          }
          goto LAB_00547224;
        }
        iD = DAT_008aa98c;
        fDz = fZ + *(float *)(pb + 7);
        fDz2 = fDz * fDz;                                  // E+0x14
        iThr = (int)((uint)(iD >> 3) * (uint)(iD >> 3));   // E+0x64
        fD2 = (fX * fX + fDz2) + fYY;                      // E+0x4c
        if ((float10)iThr > (float10)fD2) {                // fild; fcomp; test ah,0x41 (0x546ec5)
          fR = (float10)8.0f;
        }
        else {
          if (DAT_008aa99c == 0) {
            fE = *(float *)(pb + 0xb);
          }
          else {
            fE = 0.0f;
          }
          // fsqrt; fdivr 1.0; fild D; fadd e; fmulp (0x546ef0-0x546f05)
          fR = ((float10)iD + (float10)fE) * ((float10)1.0f / SQRT((float10)fD2));
          if (!(fR >= (float10)2.0f)) goto LAB_005472f4;   // fcom 2.0; test ah,1: below or unordered
        }
        // 0x546f1a
        if (bClosed == 0) {
          bClosed = 1;
          pIdx[1] = (short)(iV - 1);
          pIdx[0] = (short)(iV - 1);
          pIdx = pIdx + 2;
        }
        iLod = (int)(longlong)ROUND(fR);   // fistp qword [esp+0x88]
        if (8 < iLod) {
          iLod = 8;
        }
        iLevel = *(int *)(&DAT_00650ae8 + iLod);
        uKey = (uint)param_2 * 0x1000 + uId;
        if (((int)(char)pb[0x13] == iLevel) &&
            ((uint)*(ushort *)(*(int *)(pb + 0xf) + 0x3c) == uKey)) goto LAB_00546fef;
        if (*(int *)(pb + 0xf) != 0) {
          *(undefined2 *)(*(int *)(pb + 0xf) + 0x3c) = 0xffff;
          *(int *)(pb + 0xf) = 0;
          pb[0x13] = 0x9d;
        }
        do {
          pv = (uint8_t *)FUN_00550400(bea_arg((void *)(DAT_009c64d8 + iLevel * 8)), bea_arg(uKey & 0xffff));
          if (pv != (uint8_t *)0x0) {
            *(uint8_t **)(pb + 0xf) = pv;
            pb[0x13] = (uint8_t)iLevel;
            FUN_0048f2f0(bea_arg(pv), bea_arg(iCol * 8), bea_arg(iRow * 8), bea_arg(4 >> (iLevel & 0x1f)), bea_arg(*(undefined4 *)(pb + 0xb)));
            iAlloc = iAlloc + 1;
            goto LAB_00546fef;
          }
          iLevel = iLevel + -1;
        } while (BEA_LOOP_GUARD((-1 < iLevel)));
        goto LAB_005472f4;
LAB_00546fef:
        iQ = DAT_008aa95c;
        if ((iQ < 3) || ((float10)fD2 > (float10)16384.0f)) {   // fcomp; test ah,0x41; je (0x547002)
          iSel = 0;
        }
        else {
          fT = fDz2 - 64.0f;
          if (!(fT >= 0.0f)) {                                  // test ah,1: below or unordered (0x547029)
            fT = 0.0f;
          }
          fA = fX - fVel[0] * 60.0f;
          fB = fY - fVel[1] * 60.0f;
          if ((fB * fB + fA * fA) + fT >= 4096.0f) {
            iSel = 1;
          }
          else {
            iListCnt = piVar2[3];
            if ((iQ <= 3) || (iListCnt <= 3)) {
              iSel = 2;
            }
            else {
              fA = fX - fVel[0] * 28.0f;
              fB = fY - fVel[1] * 28.0f;
              if ((fB * fB + fA * fA) + fT >= 1024.0f) {
                iSel = 2;
              }
              else if ((iQ <= 4) || (iListCnt <= 4)) {
                iSel = 3;
              }
              else {
                fA = fX - fVel[0] * 12.0f;
                fB = fY - fVel[1] * 12.0f;
                if ((fB * fB + fA * fA) + fT >= 256.0f) {
                  iSel = 3;
                }
                else {
                  iSel = 4;
                }
              }
            }
          }
        }
        pList = (int *)(piVar2[2] + iSel * 0xc);
        *(ushort *)(pList[0] + pList[2] * 2) = (ushort)uId;
        pList[2] = pList[2] + 1;
        if (iSel != 0) {
          pv = (uint8_t *)(iSel * 0x50 + -0x50 + *piVar2);
          uIdx = (((uint)*(ushort *)(pv + 0x4a) & uId & 0xffff) >> (*(byte *)(iSel * 0x50 + -0x1c + *piVar2) & 0x1f)) +
                 ((uint)*(ushort *)(pv + 0x48) & uId & 0xffff);
          puSlot = (ushort *)(*(int *)(pv + 0x40) + uIdx * 2);
          uOld = *puSlot;
          if ((ushort)uId != uOld) {
            *puSlot = (ushort)uId;
            bSame = (ushort)(uOld & 0x7fff) == (ushort)uId;
            *reinterpret_cast<uint8_t *>(BEA_F(0x84)) = (uint8_t)bSame;
            FUN_0048e880(bea_arg(pv), bea_arg(uId), bea_arg((uint)bSame));
          }
        }
        pb[0x14] = 6;
        if (iCol != 0) {
          iDiff = (int)(char)pb[0x13] - (int)(char)pb[-1];
          if (-1 < iDiff) {
            pb[0] = pb[0] & 0xfd;
            if (iDiff != 0) {
              pb[0x14] = pb[0x14] | 8;
            }
          }
        }
        if (iRow != 0) {
          iDiff = (int)(char)pb[0x13] - (int)(char)pb[-0x4ed];
          if (-1 < iDiff) {
            pb[-0x4ec] = pb[-0x4ec] & 0xfb;
            if (iDiff != 0) {
              pb[0x14] = pb[0x14] | 1;
            }
          }
        }
        goto LAB_00547224;
LAB_005472f4:
        if (bClosed == 0) {
          pIdx[0] = (short)iV;
          pIdx[1] = (short)iNext;
          pIdx = pIdx + 2;
        }
        else if (bClosed == 1) {
          pIdx[4] = (short)iV;
          pIdx[2] = (short)(iV - 1);
          pIdx[1] = (short)(iV - 1);
          pIdx[0] = (short)(iV - 1);
          pIdx[5] = (short)iNext;
          pIdx[3] = (short)(iNext - 1);
          pIdx = pIdx + 6;
          bClosed = 0;
        }
        pb[0x13] = 0xff;
        if (*(int *)(pb + 0xf) != 0) {
          *(undefined2 *)(*(int *)(pb + 0xf) + 0x3c) = 0xffff;
          *(int *)(pb + 0xf) = 0;
          pb[0x13] = 0x9d;
        }
LAB_00547224:
        fX = fX + 8.0f;
        iV = iV + 1;
        iNext = iNext + 1;
        pCell = pCell + 0x14;
        pb = pb + 0x14;
        pH = pH + 2;
        iCol = iCol + 1;
      } while (BEA_LOOP_GUARD((iCol < 0x40)));
      if (bClosed == 0) {
        bClosed = 1;
        pIdx[1] = (short)(iV - 2);
        pIdx[0] = (short)(iV - 2);
        pIdx = pIdx + 2;
      }
      fY = fY + 8.0f;
      iV = iV + 1;
      iRow = iRow + 1;
      fX = fX - 512.0f;
    } while (BEA_LOOP_GUARD((iRow < 0x40)));
    *(int *)((int)this_ + 0x34) = (int)pIdx - iIdxBase >> 1;
    FUN_004883f0(bea_arg(*(void **)((int)this_ + 0x2c)));
  }
#undef BEA_F
  return FUN_0048e7c0();
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00546b40, ap_00546b40));
