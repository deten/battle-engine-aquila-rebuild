// auto-ported from 004e1b20_FUN_004e1b20.c (FUN_004e1b20, 2102 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @hand-fixed 2026-10-28 check_fild: this_00 fields +0x1c..+0x4c,+0x6c are floats (fld/fcomp/fadd [esi+N] e.g. 0x4e1e0c, 0x4e1e40, 0x4e1f80; stores fstp [esi+0x2c/0x38/0x20] at 0x4e1c5c/0x4e1e21/0x4e1e46/0x4e22c4) -> bea_fcast<float> loads and float stores instead of (int) conversions; only iVar11/iStack_98 stay int (fidiv 0x4e1e17, fild 0x4e1fe7/0x4e2187)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0xa0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 fingerprint: distance sum grouped as the asm does, (x*x + z*z) + y*y of this_00[0x11..0x13] (fmulp st3 / fmul;faddp st3 / fmul;faddp st3 at 0x4e20b9..0x4e20c7); fild 8>3 itself is benign (GCC copies the (float)iVar11 fild of 0x4e2187 into the six clamp x this_00[5] paths)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char iStack_98;
typedef char iStack_a0;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_0083cfd8 GLOBAL_AT(int, 0x0083cfd8)
#define DAT_0083cfdc GLOBAL_AT(int, 0x0083cfdc)
#define DAT_0083cfe0 GLOBAL_AT(int, 0x0083cfe0)
#define DAT_0083cfe4 GLOBAL_AT(int, 0x0083cfe4)
#define DAT_0083cfa8 GLOBAL_AT(undefined4, 0x0083cfa8)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662b2c GLOBAL_AT(int, 0x00662b2c)
#define s_No_sample__006324f8 ((char*)0x006324f8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef void * (BEA_THISCALL* FUN_004422d0_t)(uint32_t);
static const bea_guard<FUN_004422d0_t> FUN_004422d0 = {(FUN_004422d0_t)0x004422d0};
typedef uint32_t (BEA_THISCALL* FUN_00442380_t)(uint32_t);
static const bea_guard<FUN_00442380_t> FUN_00442380 = {(FUN_00442380_t)0x00442380};
typedef undefined4 (BEA_THISCALL* FUN_0046f2c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046f2c0_t> FUN_0046f2c0 = {(FUN_0046f2c0_t)0x0046f2c0};
typedef uint32_t (BEA_THISCALL* FUN_004e1040_t)(uint32_t);
static const bea_guard<FUN_004e1040_t> FUN_004e1040 = {(FUN_004e1040_t)0x004e1040};
typedef uint32_t (BEA_STDCALL* FUN_004e1360_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e1360_t> FUN_004e1360 = {(FUN_004e1360_t)0x004e1360};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_005179b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005179b0_t> FUN_005179b0 = {(FUN_005179b0_t)0x005179b0};
typedef uint32_t (BEA_THISCALL* FUN_00517a20_t)(uint32_t);
static const bea_guard<FUN_00517a20_t> FUN_00517a20 = {(FUN_00517a20_t)0x00517a20};
typedef uint32_t (BEA_THISCALL* FUN_00517ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00517ae0_t> FUN_00517ae0 = {(FUN_00517ae0_t)0x00517ae0};
typedef uint32_t (BEA_THISCALL* FUN_00517c40_t)(uint32_t);
static const bea_guard<FUN_00517c40_t> FUN_00517c40 = {(FUN_00517c40_t)0x00517c40};
typedef float10 (BEA_STDCALL* FUN_00517c60_t)(uint32_t);
static const bea_guard<FUN_00517c60_t> FUN_00517c60 = {(FUN_00517c60_t)0x00517c60};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef char * (BEA_CDECL* _strncpy_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncpy_t> _strncpy = {(_strncpy_t)0x0055e980};

static void BEA_THISCALL ap_004e1b20(void * this_)
{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *this_00;
  int *piVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float10 fVar15;

  alignas(16) uint8_t bea_frame_[0xa0] = {};   // the original stack frame (emulate_frame)
  int &iStack_a0 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0xa0);
  int &iStack_98 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x98);
  undefined4 &uStack_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x80);
  undefined4 &uStack_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x60);
  int &iStack_50 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x48);
  float (&afStack_44)[14] = *reinterpret_cast<float (*)[14]>(bea_frame_ + 0xa0 - 0x44);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0xa0 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x4);
  piVar7 = (int *)FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(0));
  if (piVar7 == (int *)0x0) {
    *(undefined4 *)((int)this_ + 0x38) = DAT_0083cfd8;
    *(undefined4 *)((int)this_ + 0x3c) = DAT_0083cfdc;
    *(undefined4 *)((int)this_ + 0x40) = DAT_0083cfe0;
    *(undefined4 *)((int)this_ + 0x44) = DAT_0083cfe4;
    puVar8 = &DAT_0083cfa8;
    puVar13 = (undefined4 *)((int)this_ + 0x58);
    for (iVar11 = 0xc; BEA_LOOP_GUARD((iVar11 != 0)); iVar11 = iVar11 + -1) {
      *puVar13 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar13 = puVar13 + 1;
    }
    *(undefined4 *)((int)this_ + 0x48) = DAT_0083cfd8;
    *(undefined4 *)((int)this_ + 0x4c) = DAT_0083cfdc;
    *(undefined4 *)((int)this_ + 0x50) = DAT_0083cfe0;
    *(undefined4 *)((int)this_ + 0x54) = DAT_0083cfe4;
  }
  else {
    puVar8 = (undefined4 *)bea_vcall<uint32_t>(piVar7, 0x0, &local_4c);
    *(undefined4 *)((int)this_ + 0x38) = *puVar8;
    *(undefined4 *)((int)this_ + 0x3c) = puVar8[1];
    *(undefined4 *)((int)this_ + 0x40) = puVar8[2];
    *(undefined4 *)((int)this_ + 0x44) = puVar8[3];
    puVar8 = (undefined4 *)bea_vcall<uint32_t>(piVar7, 0x8, &iStack_50);
    *(undefined4 *)((int)this_ + 0x48) = *puVar8;
    *(undefined4 *)((int)this_ + 0x4c) = puVar8[1];
    *(undefined4 *)((int)this_ + 0x50) = puVar8[2];
    *(undefined4 *)((int)this_ + 0x54) = puVar8[3];
    puVar8 = (undefined4 *)bea_vcall<uint32_t>(piVar7, 0x4, afStack_44);
    puVar13 = (undefined4 *)((int)this_ + 0x58);
    for (iVar11 = 0xc; BEA_LOOP_GUARD((iVar11 != 0)); iVar11 = iVar11 + -1) {
      *puVar13 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar13 = puVar13 + 1;
    }
  }
  FUN_004e1040(bea_arg(this_));
  FUN_00517a20(bea_arg(&DAT_00896988));
  fVar14 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  fVar1 = *(float *)((int)this_ + 0x14);
  fVar15 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)((int)this_ + 0x14) = (float)fVar15;
  piVar7 = *(int **)((int)this_ + 0xc);
  do {
    this_00 = piVar7;
    if (this_00 == (int *)0x0) {
      FUN_00517c40(bea_arg(&DAT_00896988));
      return;
    }
    if (this_00[0x21] == 0) {
      *(float *)(this_00 + 0xb) = (float)((float)(fVar14 - (float10)fVar1) + bea_fcast<float>(this_00[0xb]));
    }
    if (*(int *)((int)this_ + 0x1c) == 0) {
      FUN_004e1360(bea_arg(this_00), bea_arg(0));
    }
    if (*(int *)((int)this_ + 0x18) == 0) {
      pvVar9 = (void *)this_00[0x1c];
      if (pvVar9 != (void *)0x0) {
        FUN_00442380(bea_arg(pvVar9));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar9));
        this_00[0x1c] = 0;
      }
    }
    else {
      if (this_00[0x1c] == 0) {
        pvVar9 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x198), bea_arg(0), bea_arg(&DAT_00662b2c), bea_arg(0));
        if (pvVar9 == (void *)0x0) {
          iVar11 = 0;
        }
        else {
          iVar11 = FUN_004422d0(bea_arg(pvVar9));
        }
        this_00[0x1c] = iVar11;
        *(undefined4 *)(iVar11 + 0x94) = 0xffff0000;
      }
      if (((bea_fcast<float>(this_00[0x11]) == *(float *)((int)this_ + 0x38)) &&
          (bea_fcast<float>(this_00[0x12]) == *(float *)((int)this_ + 0x3c))) &&
         (bea_fcast<float>(this_00[0x13]) == *(float *)((int)this_ + 0x40))) {
        iVar11 = this_00[0x1c];
        puVar8 = (undefined4 *)(iVar11 + 0x84);
        *puVar8 = 0;
        *(undefined4 *)(iVar11 + 0x88) = 0;
        *(undefined4 *)(iVar11 + 0x8c) = 0;
        uVar12 = uStack_60;
      }
      else {
        iVar11 = this_00[0x1c];
        puVar8 = (undefined4 *)(iVar11 + 0x84);
        *puVar8 = 0x3dcccccd;
        *(undefined4 *)(iVar11 + 0x88) = 0x3dcccccd;
        *(undefined4 *)(iVar11 + 0x8c) = 0x3dcccccd;
        uVar12 = uStack_80;
      }
      puVar8[3] = uVar12;
      iVar11 = this_00[0x1c];
      iVar10 = this_00[0x12];
      iVar2 = this_00[0x13];
      iVar3 = this_00[0x14];
      *(int *)(iVar11 + 4) = this_00[0x11];
      *(int *)(iVar11 + 8) = iVar10;
      *(int *)(iVar11 + 0xc) = iVar2;
      *(int *)(iVar11 + 0x10) = iVar3;
      iVar11 = this_00[0x1c];
      if (this_00[3] == 0) {
        _strncpy(bea_arg((char *)(iVar11 + 0x98)), bea_arg(s_No_sample__006324f8), bea_arg(0xff));
        *(undefined1 *)(iVar11 + 0x197) = 0;
      }
      else {
        _strncpy(bea_arg((char *)(iVar11 + 0x98)), bea_arg((char *)(this_00[3] + 8)), bea_arg(0xff));
        *(undefined1 *)(iVar11 + 0x197) = 0;
      }
    }
    if ((bea_fcast<float>(this_00[0xb]) <= 5.0f) || ((char)this_00[2] != '\0')) {
      if (this_00[0x21] == 0) {
        iVar11 = this_00[0x10];
        if (iVar11 < 1) {
          this_00[0xe] = this_00[0xf];
        }
        else {
          this_00[0x10] = iVar11 + -1;
          *(float *)(this_00 + 0xe) = (float)((bea_fcast<float>(this_00[0xf]) - bea_fcast<float>(this_00[0xe])) / (float)iVar11 +
                              bea_fcast<float>(this_00[0xe]));
        }
        if (bea_fcast<float>(this_00[9]) != 0.0f) {
          *(float *)(this_00 + 8) = (float)(bea_fcast<float>(this_00[9]) + bea_fcast<float>(this_00[8]));
          if (bea_fcast<float>(this_00[9]) <= 0.0f) {
            if (bea_fcast<float>(this_00[8]) < bea_fcast<float>(this_00[10])) {
              this_00[9] = 0;
              this_00[8] = this_00[10];
              if (bea_fcast<float>(this_00[10]) == 0.0f) {
                if ((this_00[0x1f] == 1) && ((int *)*this_00 != (int *)0x0)) {
                  bea_vcall<uint32_t>(*this_00, 0x18, this_00);
                }
                if (-1 < this_00[1]) {
                  FUN_005179b0(bea_arg(&DAT_00896988), bea_arg(this_00), bea_arg(0));
                }
                *(undefined1 *)(this_00 + 2) = 0;
                FUN_00401000(bea_arg(this_00), bea_arg(0));
              }
            }
          }
          else if (bea_fcast<float>(this_00[10]) < bea_fcast<float>(this_00[8])) {
            this_00[9] = 0;
            this_00[8] = this_00[10];
          }
          if (bea_fcast<float>(this_00[8]) != 0.0f) {
            if (this_00[4] == 0) {
              iStack_98 = 0x7f;
            }
            else {
              fVar4 = bea_fcast<float>(this_00[0x11]);
              fVar5 = bea_fcast<float>(this_00[0x12]);
              fVar6 = bea_fcast<float>(this_00[0x13]);
              iStack_50 = this_00[0x14];
              FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(0));
              local_4c = -fVar4;
              fStack_48 = -fVar5;
              afStack_44[0] = -fVar6;
              fVar15 = (float10)FUN_004026b0(bea_arg(&local_4c));
              fVar15 = (float10)50.0f - fVar15;
              if (fVar15 <= (float10)50.0f) {
                if (fVar15 < (float10)0.0f) {
                  fVar15 = (float10)0.0f;
                }
              }
              else {
                fVar15 = (float10)50.0f;
              }
              iStack_98 = (int)(longlong)ROUND(fVar15 * (float10)100.0f * (float10)0.02f);
            }
            fVar4 = bea_fcast<float>(this_00[7]) * bea_fcast<float>(this_00[8]);
            if (this_00[5] == 1) {
              iStack_a0 = (int)(longlong)
                               ROUND(*(float *)((int)this_ + 0x24) * *(float *)((int)this_ + 0x20) *
                                     fVar4 * 127.0f);
            }
            else {
              iStack_a0 = (int)(longlong)
                               ROUND(*(float *)((int)this_ + 0x28) * *(float *)((int)this_ + 0x20) *
                                     fVar4 * 127.0f);
            }
            iStack_a0 = iStack_a0 * 200;
            if (10000 < iStack_a0) {
              iStack_a0 = 10000;
            }
            iVar11 = (iStack_a0 + -10000) / 2;
            if (iVar11 < -10000) {
              iVar11 = -10000;
            }
            if (this_00[5] == 1) {
              iStack_a0 = (int)(longlong)
                               ROUND((float)iStack_98 * *(float *)((int)this_ + 0x24) *
                                     *(float *)((int)this_ + 0x20) * fVar4);
            }
            else {
              iStack_a0 = (int)(longlong)
                               ROUND((float)iStack_98 * *(float *)((int)this_ + 0x28) *
                                     *(float *)((int)this_ + 0x20) * fVar4);
            }
            iStack_a0 = iStack_a0 * 200;
            if (10000 < iStack_a0) {
              iStack_a0 = 10000;
            }
            iVar10 = (iStack_a0 + -10000) / 2;
            if (iVar10 < -10000) {
              iVar10 = -10000;
            }
            this_00[0x1a] = iVar10;
            this_00[0x19] = iVar11;
            if (this_00[4] == 0) {
              this_00[0x1a] = iVar11;
            }
          }
        }
        iVar11 = this_00[4];
        if (((iVar11 == 2) || (iVar11 == 3)) || (iVar11 == 1)) {
          piVar7 = (int *)*this_00;
          if ((piVar7 == (int *)0x0) || (this_00[0x20] == 1)) {
            if (iVar11 == 2) {
              if ((this_00[0x1f] == 1) && (piVar7 != (int *)0x0)) {
                bea_vcall<uint32_t>(piVar7, 0x18, this_00);
              }
              if (-1 < this_00[1]) {
                FUN_005179b0(bea_arg(&DAT_00896988), bea_arg(this_00), bea_arg(0));
              }
              *(undefined1 *)(this_00 + 2) = 0;
              goto LAB_004e2212;
            }
          }
          else {
            fVar4 = bea_fcast<float>(this_00[0x11]);
            fVar5 = bea_fcast<float>(this_00[0x12]);
            fVar6 = bea_fcast<float>(this_00[0x13]);
            FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(0));
            fVar4 = 50.0f - SQRT(-fVar4 * -fVar4 + -fVar6 * -fVar6 + -fVar5 * -fVar5);
            if (fVar4 <= 50.0f) {
              if (fVar4 < 0.0f) {
                fVar4 = 0.0f;
              }
            }
            else {
              fVar4 = 50.0f;
            }
            iStack_a0 = (int)(longlong)ROUND(fVar4 * 100.0f * 0.02f);
            iVar11 = iStack_a0;
            fVar4 = bea_fcast<float>(this_00[8]) * bea_fcast<float>(this_00[7]);
            if (this_00[5] == 1) {
              iStack_a0 = (int)(longlong)
                               ROUND(*(float *)((int)this_ + 0x24) * *(float *)((int)this_ + 0x20) *
                                     fVar4 * 127.0f);
            }
            else {
              iStack_a0 = (int)(longlong)
                               ROUND(*(float *)((int)this_ + 0x28) * *(float *)((int)this_ + 0x20) *
                                     fVar4 * 127.0f);
            }
            iStack_a0 = iStack_a0 * 200;
            if (10000 < iStack_a0) {
              iStack_a0 = 10000;
            }
            iVar10 = (iStack_a0 + -10000) / 2;
            if (iVar10 < -10000) {
              iVar10 = -10000;
            }
            if (this_00[5] == 1) {
              iStack_a0 = (int)(longlong)
                               ROUND((float)iVar11 * *(float *)((int)this_ + 0x24) *
                                     *(float *)((int)this_ + 0x20) * fVar4);
            }
            else {
              iStack_a0 = (int)(longlong)
                               ROUND((float)iVar11 * *(float *)((int)this_ + 0x28) *
                                     *(float *)((int)this_ + 0x20) * fVar4);
            }
            iStack_a0 = iStack_a0 * 200;
            if (10000 < iStack_a0) {
              iStack_a0 = 10000;
            }
            iVar11 = (iStack_a0 + -10000) / 2;
            if (iVar11 < -10000) {
              iVar11 = -10000;
            }
            this_00[0x19] = iVar10;
            this_00[0x1a] = iVar11;
          }
        }
      }
    }
    else {
LAB_004e2212:
      FUN_00401000(bea_arg(this_00), bea_arg(0));
    }
    if (((char)this_00[2] != '\0') && (-1 < this_00[1])) {
      FUN_00517ae0(bea_arg(&DAT_00896988), bea_arg(this_00), bea_arg(0));
    }
    if ((char)this_00[6] == '\0') {
      fVar15 = (float10)FUN_00517c60(bea_arg(this_00[3]));
      if (this_00[0x1b] != -0x40800000) {
        fVar15 = (float10)bea_fcast<float>(this_00[0x1b]);
      }
      if ((((this_00[1] < 0) || (this_00[0x1b] != -0x40800000)) && ((char)this_00[6] == '\0')) &&
         (fVar15 < (float10)bea_fcast<float>(this_00[0xb]))) {
        if ((this_00[0x1f] == 1) && ((int *)*this_00 != (int *)0x0)) {
          bea_vcall<uint32_t>(*this_00, 0x18, this_00);
        }
        if (-1 < this_00[1]) {
          FUN_005179b0(bea_arg(&DAT_00896988), bea_arg(this_00), bea_arg(0));
        }
        *(undefined1 *)(this_00 + 2) = 0;
        FUN_00401000(bea_arg(this_00), bea_arg(0));
      }
    }
    else {
      fVar15 = (float10)FUN_00517c60(bea_arg(this_00[3]));
      if (fVar15 < (float10)bea_fcast<float>(this_00[0xb])) {
        do {
          fVar15 = (float10)FUN_00517c60(bea_arg(this_00[3]));
          *(float *)(this_00 + 0xb) = (float)(float)((float10)bea_fcast<float>(this_00[0xb]) - fVar15);
          fVar15 = (float10)FUN_00517c60(bea_arg(this_00[3]));
        } while (BEA_LOOP_GUARD((fVar15 < (float10)bea_fcast<float>(this_00[0xb]))));
      }
    }
    piVar7 = (int *)this_00[0x1d];
    if (((char)this_00[2] == '\0') && (*(int *)((int)this_ + 0x1c) == 0)) {
      if (piVar7 != (int *)0x0) {
        piVar7[0x1e] = this_00[0x1e];
      }
      if (this_00[0x1e] == 0) {
        *(int *)((int)this_ + 0xc) = this_00[0x1d];
      }
      else {
        *(int *)(this_00[0x1e] + 0x74) = this_00[0x1d];
      }
      *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + -1;
      this_00[0x1d] = *(int *)((int)this_ + 0x34);
      this_00[0x1e] = 0;
      if (*(int *)((int)this_ + 0x34) != 0) {
        *(int **)(*(int *)((int)this_ + 0x34) + 0x78) = this_00;
      }
      *(int **)((int)this_ + 0x34) = this_00;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e1b20, ap_004e1b20));
