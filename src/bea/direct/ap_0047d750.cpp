// auto-ported from 0047d750_vslot3.c (CGroundVehicleGuide::vslot3, 2622 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xa4: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @hand-fixed 2026-10-28 compile: rewritten from the asm (Ghidra lost the slot reuse: the fistp qword scratch at E+0x10, ints and floats sharing E+0x18/E+0x2c, a float switch on the direction ints, (float) value casts on bit copies, a 0.6 double that is 0.6f widened, and V[0x158]/W built from the wrong slots): frame slots by esp offset; FUN_004026b0 returns in ST0 (f80 -> float10); grid test (x>>1 row/bit, y>>1 column) as 0x47d93f; four-direction search 0x47dd2a-0x47ded3 with the jump table at 0x47e190; heading wrap 0x47dee0-0x47df4f and the steering vector (z*m2+y*m1)+x*m0 at 0x47e0f6; x87 branches keep the unordered cases
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundVehicleGuide;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef float10 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);   // length in ST0 (fst at 0x47d855)
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef uint32_t (BEA_THISCALL* FUN_004bc2e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bc2e0_t> FUN_004bc2e0 = {(FUN_004bc2e0_t)0x004bc2e0};
typedef undefined4 (BEA_THISCALL* FUN_004fde10_t)(uint32_t);
static const bea_guard<FUN_004fde10_t> FUN_004fde10 = {(FUN_004fde10_t)0x004fde10};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

// the guide's walk grid test, as the asm computes it (0x47d93f-0x47d97b and its 5 copies):
// x>>1 picks the row byte block ((x>>1)>>3)<<8 and the bit (x>>1)%8 (signed), y>>1 the column
static inline bool bea_grid_0047d750(int iM, int ix, int iy)
{
  int iX = ix >> 1;
  int iRow = (int)((uint)(iX >> 3) << 8);
  uint uBit = (uint)iX & 0x80000007;
  if ((int)uBit < 0) {
    uBit = ((uBit - 1) | 0xfffffff8) + 1;
  }
  return (*(byte *)(iRow + iM + (iy >> 1)) & (byte)(1u << (uBit & 0x1f))) != 0;
}

static inline int bea_iabs_0047d750(int d)
{
  // cdq; xor eax,edx; sub eax,edx
  uint s = (uint)(d >> 31);
  return (int)(((uint)d ^ s) - s);
}

static void BEA_THISCALL ap_0047d750(CGroundVehicleGuide * this_)
{
  // the original frame: E = esp after the four register pushes; slot E+o lives at bea_frame_[o - 0x10]
  alignas(16) uint8_t bea_frame_[0xa4] = {};   // the original stack frame (emulate_frame)
#define FS(o) (*reinterpret_cast<float *>(bea_frame_ + (o) - 0x10))
#define IS(o) (*reinterpret_cast<int *>(bea_frame_ + (o) - 0x10))
#define QS(o) (*reinterpret_cast<longlong *>(bea_frame_ + (o) - 0x10))
  int iV;
  int iM;
  int iN;
  int i;
  int ix;
  int iy;
  int iMode;
  int iSave;
  float fD2;
  float10 fR;
  float10 fS;
  float10 fC;
  float10 fCand;
  float10 fP;
  float10 fH;
  float10 fY;

  iV = *(int *)(this_ + 0x18);
  if ((*(byte *)(iV + 0x2c) & 4) != 0) {
    bea_vcall<uint32_t>(iV, 0x100);
    return;
  }
  FUN_00401ec0(bea_arg(&FS(0x54)), bea_arg(*(float *)(this_ + 8) - *(float *)(iV + 0x1c)),
               bea_arg(*(float *)(this_ + 0xc) - *(float *)(iV + 0x20)),
               bea_arg(*(float *)(this_ + 0x10) - *(float *)(iV + 0x24)));
  fD2 = FS(0x54) * FS(0x54) + FS(0x58) * FS(0x58);
  IS(0x40) = 0;
  IS(0x44) = 0;
  IS(0x48) = 0;
  iV = *(int *)(this_ + 0x18);
  *(int *)(iV + 0x14c) = IS(0x40);
  *(int *)(iV + 0x150) = IS(0x44);
  *(int *)(iV + 0x154) = IS(0x48);
  *(int *)(iV + 0x158) = IS(0x4c);   // E+0x4c is not written before (0x47d7ef)
  FS(0x10) = fD2;                     // fst [esp+0x10]
  if (!(fD2 >= 0.5f)) {               // fcomp 0.5; test ah,1: below or unordered (0x47d7e9)
    return;
  }
  if (*(int *)(this_ + 0x1c) == 0) {
    return;
  }
  if (FUN_004fde10(bea_arg(*(void **)(this_ + 0x18))) != 0) {
    return;
  }
  fR = fpatan((float10)FS(0x54), (float10)FS(0x58));
  iV = *(int *)(this_ + 0x18);
  IS(0x50) = *(int *)(iV + 0x114);
  FS(0x18) = (float)-fR;
  if (*(int *)(*(int *)(iV + 0x13c) + 0x20) == 2) {
    fR = FUN_004026b0(bea_arg(&FS(0x54)));
    FS(0x2c) = (float)fR;
    if (!(fR > (float10)0.0f)) {      // test ah,0x41: <= 0 or unordered (0x47d861)
      fR = (float10)0.0f;
    }
    else {
      fR = _CIasin((float10)FS(0x5c) / (float10)FS(0x2c));
    }
    *(float *)(*(int *)(this_ + 0x18) + 0x124) = (float)fR;
  }
  if (*(int *)(this_ + 0x1c) != 1) goto LAB_0047dee0;
  iV = *(int *)(this_ + 0x18);
  if (*(int *)(*(int *)(iV + 0x13c) + 0x20) == 2) goto LAB_0047dee0;
  if (FS(0x10) > 1.0f) {              // fcomp 1.0; test ah,0x41 (0x47d8a4)
    iM = *(int *)(this_ + 0x20);
    if (iM != 0) {
      IS(0x74) = *(int *)(iV + 0x1c);
      IS(0x78) = *(int *)(iV + 0x20);
      IS(0x7c) = *(int *)(iV + 0x24);
      IS(0x80) = *(int *)(iV + 0x28);
      if (*(int *)(this_ + 0x2c) != 0) {
        IS(0x30) = *(int *)(this_ + 8);
        IS(0x34) = *(int *)(this_ + 0xc);
        IS(0x38) = *(int *)(this_ + 0x10);
        IS(0x3c) = *(int *)(this_ + 0x14);
        QS(0x10) = (longlong)ROUND(FS(0x30));
        if (bea_iabs_0047d750(*(int *)(this_ + 0x24) - (int)QS(0x10)) > 1) goto LAB_0047d980;
        QS(0x10) = (longlong)ROUND(FS(0x34));
        if (bea_iabs_0047d750(*(int *)(this_ + 0x28) - (int)QS(0x10)) > 1) goto LAB_0047d980;
        QS(0x10) = (longlong)ROUND(FS(0x74));
        ix = (int)QS(0x10);
        QS(0x10) = (longlong)ROUND(FS(0x78));
        iy = (int)QS(0x10);
        if (bea_grid_0047d750(iM, ix, iy)) goto LAB_0047d9cb;
      }
LAB_0047d980:
      // the two vectors go by value: V's position at the lower address, the target above it
      FUN_004bc2e0(bea_arg(iM), bea_arg(*(undefined4 *)(iV + 0x1c)), bea_arg(*(undefined4 *)(iV + 0x20)),
                   bea_arg(*(undefined4 *)(iV + 0x24)), bea_arg(*(undefined4 *)(iV + 0x28)),
                   bea_arg(*(undefined4 *)(this_ + 8)), bea_arg(*(undefined4 *)(this_ + 0xc)),
                   bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(*(undefined4 *)(this_ + 0x14)), bea_arg(1),
                   bea_arg(this_ + 0x24));
    }
  }
LAB_0047d9cb:
  if (*(int *)(this_ + 0x2c) == 0) goto LAB_0047dee0;
  iV = *(int *)(this_ + 0x18);
  QS(0x10) = (longlong)ROUND(*(float *)(iV + 0x1c));
  IS(0x18) = (int)QS(0x10);
  iN = *(int *)(this_ + 0x30);
  QS(0x10) = (longlong)ROUND(*(float *)(iV + 0x20));
  IS(0x2c) = (int)QS(0x10);
  if (0 < iN) {
    IS(0x18) = (uint)*(byte *)(*(int *)(this_ + 0x34) + -1 + iN) * 2 + 1;
    IS(0x2c) = (uint)*(byte *)(*(int *)(this_ + 0x3c) + -1 + iN) * 2 + 1;
  }
  // fild both waypoint ints; fstp the y as a float (0x47da20-0x47da47)
  FS(0x34) = (float)IS(0x2c);
  FS(0x1c) = (float)((float10)IS(0x18) - (float10)*(float *)(iV + 0x1c));
  FS(0x20) = FS(0x34) - *(float *)(iV + 0x20);
  FS(0x24) = -*(float *)(iV + 0x24);
  fD2 = FS(0x1c) * FS(0x1c) + FS(0x20) * FS(0x20);
  IS(0x58) = IS(0x20);
  IS(0x54) = IS(0x1c);
  IS(0x5c) = IS(0x24);
  IS(0x60) = IS(0x28);
  if (!(fD2 >= 0.5f)) {               // test ah,1; je 0x47db75 only when >= 0.5 (0x47da81)
    iSave = IS(0x28);
    for (;;) {
      iN = *(int *)(this_ + 0x30) + -1;
      *(int *)(this_ + 0x30) = iN;
      if (iN < 1) {
        // 0x47db31: head straight for the target
        iV = *(int *)(this_ + 0x18);
        FS(0x40) = *(float *)(this_ + 8) - *(float *)(iV + 0x1c);
        FS(0x44) = *(float *)(this_ + 0xc) - *(float *)(iV + 0x20);
        FS(0x48) = *(float *)(this_ + 0x10) - *(float *)(iV + 0x24);
        IS(0x54) = IS(0x40);
        IS(0x58) = IS(0x44);
        IS(0x5c) = IS(0x48);
        IS(0x60) = IS(0x4c);
        break;
      }
      IS(0x18) = (uint)*(byte *)(*(int *)(this_ + 0x34) + -1 + iN) * 2 + 1;
      IS(0x2c) = (uint)*(byte *)(*(int *)(this_ + 0x3c) + -1 + iN) * 2 + 1;
      iV = *(int *)(this_ + 0x18);
      FS(0x34) = (float)IS(0x2c);
      FS(0x1c) = (float)((float10)IS(0x18) - (float10)*(float *)(iV + 0x1c));
      FS(0x20) = FS(0x34) - *(float *)(iV + 0x20);
      FS(0x24) = -*(float *)(iV + 0x24);
      fD2 = FS(0x1c) * FS(0x1c) + FS(0x20) * FS(0x20);
      IS(0x54) = IS(0x1c);
      IS(0x58) = IS(0x20);
      IS(0x5c) = IS(0x24);
      IS(0x60) = iSave;
      if (fD2 >= 0.5f) break;
    }
  }
  // 0x47db75
  fR = fpatan((float10)FS(0x54), (float10)FS(0x58));
  iV = *(int *)(this_ + 0x18);
  iM = *(int *)(this_ + 0x20);
  IS(0x40) = *(int *)(iV + 0x1c);
  IS(0x44) = *(int *)(iV + 0x20);
  IS(0x48) = *(int *)(iV + 0x24);
  IS(0x4c) = *(int *)(iV + 0x28);
  FS(0x18) = (float)-fR;
  QS(0x10) = (longlong)ROUND(FS(0x40));
  ix = (int)QS(0x10);
  QS(0x10) = (longlong)ROUND(FS(0x44));
  iy = (int)QS(0x10);
  if (!bea_grid_0047d750(iM, ix, iy)) goto LAB_0047dee0;
  fS = fsin(-(float10)FS(0x18));
  fC = fcos((float10)FS(0x18));
  FS(0x34) = (float)fC;
  fP = fS + (float10)FS(0x40);
  FS(0x34) = FS(0x34) + FS(0x44);
  QS(0x10) = (longlong)ROUND(fP);
  ix = (int)QS(0x10);
  QS(0x10) = (longlong)ROUND(FS(0x34));
  iy = (int)QS(0x10);
  if (bea_grid_0047d750(iM, ix, iy)) goto LAB_0047dee0;
  fS = fsin((float10)FS(0x18));
  fC = fcos((float10)FS(0x18));
  FS(0x2c) = (float)fC;
  if (!(ABS(fS) >= ABS(fC))) {        // fcompp |s| vs |c|; test ah,1 (0x47dc6b)
    if (FS(0x2c) > 0.0f) {
      IS(0x1c) = 1;
      IS(0x28) = 3;
    }
    else {
      IS(0x1c) = 3;
      IS(0x28) = 1;
    }
    if (fS > (float10)0.0f) {
      IS(0x20) = 2;
      IS(0x24) = 4;
    }
    else {
      IS(0x20) = 4;
      IS(0x24) = 2;
    }
  }
  else {
    if (fS > (float10)0.0f) {
      IS(0x1c) = 2;
      IS(0x28) = 4;
    }
    else {
      IS(0x1c) = 4;
      IS(0x28) = 2;
    }
    if (FS(0x2c) > 0.0f) {
      IS(0x20) = 1;
      IS(0x24) = 3;
    }
    else {
      IS(0x20) = 3;
      IS(0x24) = 1;
    }
  }
  // 0x47dd2a: try the four directions in order; fld [esp+0x10] is only kept by an unknown direction
  fCand = (float10)FS(0x10);
  for (i = 0; i < 4; i = i + 1) {
    switch (IS(0x1c + i * 4)) {
    case 1:
      IS(0x94) = 0;
      IS(0x98) = 0x3f800000;
      IS(0x9c) = 0;
      IS(0x64) = IS(0x94);
      IS(0x68) = IS(0x98);
      IS(0x6c) = IS(0x9c);
      IS(0x70) = IS(0xa0);
      fCand = (float10)GLOBAL_AT(float, 0x005d856c);   // 0.0
      break;
    case 2:
      IS(0x74) = (int)0xbf800000;
      IS(0x78) = 0;
      IS(0x7c) = 0;
      IS(0x64) = IS(0x74);
      IS(0x68) = IS(0x78);
      IS(0x6c) = IS(0x7c);
      IS(0x70) = IS(0x80);
      fCand = (float10)GLOBAL_AT(float, 0x005d85e4);   // pi/2
      break;
    case 3:
      IS(0x84) = 0;
      IS(0x88) = (int)0xbf800000;
      IS(0x8c) = 0;
      IS(0x64) = IS(0x84);
      IS(0x68) = IS(0x88);
      IS(0x6c) = IS(0x8c);
      IS(0x70) = IS(0x90);
      fCand = (float10)GLOBAL_AT(float, 0x005d85e8);   // pi
      break;
    case 4:
      IS(0x30) = 0x3f800000;
      IS(0x34) = 0;
      IS(0x38) = 0;
      IS(0x64) = IS(0x30);
      IS(0x68) = IS(0x34);
      IS(0x6c) = IS(0x38);
      IS(0x70) = IS(0x3c);
      fCand = (float10)GLOBAL_AT(float, 0x005d85c8);   // -pi/2
      break;
    default:
      break;
    }
    // 0x47de6f
    fP = (float10)FS(0x64) + (float10)FS(0x40);
    FS(0xa8) = FS(0x68) + FS(0x44);
    QS(0x10) = (longlong)ROUND(fP);
    ix = (int)QS(0x10);
    QS(0x10) = (longlong)ROUND(FS(0xa8));
    iy = (int)QS(0x10);
    if (bea_grid_0047d750(iM, ix, iy)) {
      FS(0x18) = (float)fCand;   // fst [esp+0x18]
      i = 4;
    }
  }
LAB_0047dee0:
  iV = *(int *)(this_ + 0x18);
  *(int *)(iV + 0x120) = IS(0x18);
  fY = (float10)FS(0x50);
  fH = (float10)FS(0x18);
  if (!(fH >= (float10)GLOBAL_AT(float, 0x005d85c8)) && (fY > (float10)GLOBAL_AT(float, 0x005d85e4))) {
    fY = fY - (float10)GLOBAL_AT(float, 0x005d85e0);   // 0x47df15
  }
  else if ((fH > (float10)GLOBAL_AT(float, 0x005d85e4)) && !(fY >= (float10)GLOBAL_AT(float, 0x005d85c8))) {
    fY = fY + (float10)GLOBAL_AT(float, 0x005d85e0);   // 0x47df45
  }
  // fabs(h - y); fcomp qword 0.6f-as-double; test ah,0x41; je return (0x47df4f-0x47df64)
  if (ABS(fH - fY) > (float10)GLOBAL_AT(double, 0x005dbdb8)) {
    return;
  }
  iV = *(int *)(this_ + 0x18);
  if (*(int *)(*(int *)(iV + 0x13c) + 0x20) != 2) {
    IS(0x40) = *(int *)(iV + 0x1c);
    IS(0x44) = *(int *)(iV + 0x20);
    IS(0x48) = *(int *)(iV + 0x24);
    IS(0x4c) = *(int *)(iV + 0x28);
    iM = *(int *)(this_ + 0x20);
    QS(0x10) = (longlong)ROUND(FS(0x40));
    ix = (int)QS(0x10);
    QS(0x10) = (longlong)ROUND(FS(0x44));
    iy = (int)QS(0x10);
    if (bea_grid_0047d750(iM, ix, iy)) {
      fS = fsin(-(float10)FS(0x50));
      fC = fcos((float10)FS(0x50));
      FS(0xa8) = (float)fC;
      fP = fS + (float10)FS(0x40);
      FS(0xa8) = FS(0xa8) + FS(0x44);
      QS(0x10) = (longlong)ROUND(fP);
      ix = (int)QS(0x10);
      QS(0x10) = (longlong)ROUND(FS(0xa8));
      iy = (int)QS(0x10);
      if (!bea_grid_0047d750(iM, ix, iy)) {
        return;
      }
    }
  }
  // 0x47e04c
  iMode = *(int *)(this_ + 0x1c);
  if (iMode == 3) {
    return;
  }
  IS(0x30) = 0;
  fR = bea_vcall<float10>(iV, 0x1bc);
  fR = fR * (float10)GLOBAL_AT(float, 0x005d8584);   // 0.05
  IS(0x38) = 0;
  IS(0x1c) = IS(0x30);
  IS(0x24) = IS(0x38);
  IS(0x28) = IS(0x3c);
  if (iMode == 1) {
    fR = fR * (float10)GLOBAL_AT(float, 0x005d85bc);   // 4.0
  }
  else {
    fR = fR * (float10)GLOBAL_AT(float, 0x005d9290);   // -4.0
  }
  FS(0x34) = (float)fR;
  IS(0x20) = IS(0x34);
  iV = *(int *)(this_ + 0x18);
  // (z*m2 + y*m1) + x*m0 for each row (0x47e0f6-0x47e175)
  FS(0x30) = (FS(0x24) * *(float *)(iV + 0x44) + FS(0x20) * *(float *)(iV + 0x40)) + FS(0x1c) * *(float *)(iV + 0x3c);
  FS(0x34) = (FS(0x24) * *(float *)(iV + 0x54) + FS(0x20) * *(float *)(iV + 0x50)) + FS(0x1c) * *(float *)(iV + 0x4c);
  FS(0x38) = (FS(0x24) * *(float *)(iV + 0x64) + FS(0x20) * *(float *)(iV + 0x60)) + FS(0x1c) * *(float *)(iV + 0x5c);
  *(int *)(iV + 0x14c) = IS(0x30);
  *(int *)(iV + 0x150) = IS(0x34);
  *(int *)(iV + 0x154) = IS(0x38);
  *(int *)(iV + 0x158) = IS(0x3c);
#undef FS
#undef IS
#undef QS
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047d750, ap_0047d750));
