// auto-ported from 004e3f90_FUN_004e3f90.c (FUN_004e3f90, 1067 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: rewritten from the asm on the full 0x3d4 frame (S+Y -> bea_frame_+Y-0x10; Ghidra's 0x3d0 frame missed [esp+0x10]). Zero tests count NaN as zero (test ah,0x40 at 0x4e3fd8 ..0x4e4052); fistp qword of this[0x14]/this[0x18] into [esp+0x14] with the >>1 cell coords (0x4e40a6-0x4e40c9); length grouped (C^2+B^2)+A^2 as the asm (0x4e41d1-0x4e41e3) and asin skipped for len<=0 or NaN (test ah,0x41 at 0x4e41f7); garbled _fStack_3d0 CONCATs replaced by the float store at 0x4e4390-0x4e43a2
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3d4: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553fc GLOBAL_AT(int, 0x008553fc)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef void * (BEA_THISCALL* CInitThing__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CInitThing__vslot0_t> CInitThing__vslot0 = {(CInitThing__vslot0_t)0x0040e1b0};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef int (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef int (BEA_THISCALL* FUN_004e44d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e44d0_t> FUN_004e44d0 = {(FUN_004e44d0_t)0x004e44d0};
typedef uint32_t (BEA_THISCALL* FUN_004fc3a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fc3a0_t> FUN_004fc3a0 = {(FUN_004fc3a0_t)0x004fc3a0};
typedef int (BEA_THISCALL* FUN_004fd380_t)(uint32_t);
static const bea_guard<FUN_004fd380_t> FUN_004fd380 = {(FUN_004fd380_t)0x004fd380};
typedef int (BEA_CDECL* FUN_0050df80_t)(uint32_t);
static const bea_guard<FUN_0050df80_t> FUN_0050df80 = {(FUN_0050df80_t)0x0050df80};
typedef int (BEA_CDECL* FUN_00511440_t)(uint32_t);
static const bea_guard<FUN_00511440_t> FUN_00511440 = {(FUN_00511440_t)0x00511440};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static inline bool ap_004e3f90_zero(float f) { return f == 0.0f || bea_isnan(f); }   // fcomp 0; test ah,0x40

static void BEA_THISCALL ap_004e3f90(void * this_)
{
  alignas(16) uint8_t bea_frame_[0x3d4] = {};   // the original stack frame (emulate_frame): [esp+Y] -> bea_frame_+Y-0x10
#define AP_S(type, y) (*reinterpret_cast<type *>(bea_frame_ + (y) - 0x10))
  const uintptr_t self = (uintptr_t)this_;
  uint8_t *pObj = bea_frame_ + 0x24 - 0x10;      // [esp+0x24]: the CInitThing-style record handed to vslot 0x24
  float *a3 = (float *)(self + 0x14);
  uint32_t *a4 = (uint32_t *)(self + 0x24);
  int iVar4;

  if (*(int *)(self + 0x3ec) == 0) {
    return;
  }
  bea_vcall<uint32_t>(*(int **)(self + 0x3d4), 0x160, *(uint32_t *)(self + 0x3e8), *(uint32_t *)(self + 0x3e4), a3, a4);
  if (ap_004e3f90_zero(a3[0]) && ap_004e3f90_zero(a3[1]) && ap_004e3f90_zero(a3[2])) {
    *(uint32_t *)(self + 0x3e4) = 1;
    bea_vcall<uint32_t>(*(int **)(self + 0x3d4), 0x160, *(uint32_t *)(self + 0x3e8), 1, a3, a4);
    if (ap_004e3f90_zero(a3[0]) && ap_004e3f90_zero(a3[1]) && ap_004e3f90_zero(a3[2])) {
      uintptr_t o = *(uintptr_t *)(self + 0x3d4);
      __builtin_memcpy(a3, (const void *)(o + 0x1c), 0x10);
      __builtin_memcpy(a4, (const void *)(o + 0x3c), 0x30);
    }
  }
  iVar4 = bea_vcall<uint32_t>(*(int **)(self + 0x3d4), 0x10c);
  if (iVar4 == 0) {
    uint8_t *bits = (uint8_t *)(uintptr_t)FUN_004fd380(bea_arg(*(uint32_t *)(self + 0x3d4)));
    AP_S(long long, 0x14) = __builtin_llrintl((float10)a3[0]);
    int cx = AP_S(int, 0x14) >> 1;
    AP_S(int, 0x10) = cx;
    AP_S(long long, 0x14) = __builtin_llrintl((float10)a3[1]);
    int cy = AP_S(int, 0x14) >> 1;
    AP_S(int, 0x14) = cy + 1;
    for (int y = cy - 1; y < cy + 1; y++) {
      if ((y < 0) || (y >= 0x100)) continue;
      for (int x = cx - 1; x < cx + 1; x++) {
        if ((x < 0) || (x >= 0x100)) continue;
        if ((bits[((x >> 3) << 8) + y] & (uint8_t)(1 << (x & 7))) == 0) {
          iVar4 = FUN_00511440(*(uint32_t *)(*(int *)(self + 0x3d0) + 4));
          if (iVar4 != 0) goto LAB_004e4382;
          goto LAB_004e4149;
        }
      }
    }
  }
LAB_004e4149:
  iVar4 = FUN_004e44d0(bea_arg(this_), bea_arg(a3));
  if (iVar4 != 0) {
    int o2 = FUN_0050df80(*(uint32_t *)(self + 0x3dc));
    if (o2 != 0) {
      *(int *)(self + 0x3e4) = *(int *)(self + 0x3e4) + 1;
      FUN_0048dcf0(bea_arg(pObj));
      AP_S(uint32_t, 0x24) = 0x005dc1c0;                // vtable
      AP_S(uint32_t, 0x3e0) = 0;
      CInitThing__vslot0(bea_arg(pObj), bea_arg(self + 0x10));
      float10 fA = (float10)AP_S(float, 0x3c);
      float10 fB = (float10)AP_S(float, 0x4c);
      float10 fC = (float10)AP_S(float, 0x5c);
      AP_S(float, 0x1c) = (float)fC;
      float10 fT = fpatan(fA, fB);
      AP_S(uint32_t, 0x3e0) = *(uint32_t *)(self + 0x3cc);
      AP_S(float, 0x68) = (float)-fT;
      AP_S(float, 0x10) = (float)fC;
      float10 fLen = SQRT(((float10)AP_S(float, 0x10) * fC + fB * fB) + fA * fA);
      AP_S(float, 0x10) = (float)fLen;
      float10 fAs;
      if (fLen > (float10)0.0f) {
        fAs = _CIasin((float10)AP_S(float, 0x1c) / (float10)AP_S(float, 0x10));
      }
      else {
        fAs = (float10)0.0f;
      }
      int idx = *(int *)(self + 0x3dc);
      AP_S(float, 0x6c) = (float)fAs;
      AP_S(uint32_t, 0xb8) = 0x3fc00000;
      int n = 0;
      int it = FUN_00406d20(bea_arg(DAT_008553fc));
      while (BEA_LOOP_GUARD(it != 0)) {
        if (n == idx) break;
        n = n + 1;
        int *link = *(int **)(*(int *)(DAT_008553fc + 8) + 4);
        *(int **)(DAT_008553fc + 8) = link;
        it = (link == 0) ? 0 : *link;
      }
      AP_S(int, 0x3e0) = it;
      AP_S(uint32_t, 0x3d8) = *(uint32_t *)(self + 0x3d4);
      switch (*(int *)(self + 0x3e8)) {
      case 10: AP_S(uint32_t, 0x3dc) = 0xf; break;
      case 0xb: AP_S(uint32_t, 0x3dc) = 0x10; break;
      case 0xc: AP_S(uint32_t, 0x3dc) = 0x11; break;
      case 0xd: AP_S(uint32_t, 0x3dc) = 0x12; break;
      case 0xe: AP_S(uint32_t, 0x3dc) = 0x13; break;
      default: break;
      }
      if (*(int *)(self + 0x3c0) != 0) {
        const char *s = (const char *)(self + 0x2bc);
        __builtin_memcpy(&AP_S(char, 0xd0), s, __builtin_strlen(s) + 1);   // repne scasb / rep movs
      }
      bea_vcall<uint32_t>(o2, 0x24, pObj);
      FUN_004fc3a0(bea_arg(o2), *(uint32_t *)(*(int *)(self + 0x3d0) + 0x1c));
      if (*(int **)(self + 8) != (int *)0x0) {
        bea_vcall<uint32_t>(*(int **)(self + 8), 0x10c, &AP_S(float, 0x14), o2, 0, 0);
      }
      iVar4 = *(int *)(self + 0xc) + 1;
      *(int *)(self + 0xc) = iVar4;
      if (*(int *)(*(int *)(self + 0x3d0) + 0x10) <= iVar4) {
        int t8 = *(int *)(self + 8);
        if (t8 != 0) {
          *(uint32_t *)(t8 + 0x80) = 0;
        }
        FUN_00401000(bea_arg(self + 8), bea_arg(0));
        float fV = DAT_00672fd0 + *(float *)(*(int *)(self + 0x3d0) + 0x20);
        *(uint32_t *)(self + 0x3ec) = 0;
        *(float *)(self + 0x3e0) = fV;
        return;
      }
    }
  }
LAB_004e4382:
  AP_S(float, 0x14) = DAT_00672fd0 + *(float *)(*(int *)(self + 0x3d0) + 0x18);
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&AP_S(float, 0x14)), bea_arg(0), bea_arg(0), bea_arg(0));
#undef AP_S
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e3f90, ap_004e3f90));
