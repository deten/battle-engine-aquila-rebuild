// hand-ported from 004879e0_FUN_004879e0.c (FUN_004879e0, 477 bytes)
// @hand-fixed 2026-10-29 written from the asm: thiscall(param_1, param_2), ret 8, void (the one caller 00487c57 reloads EAX). Callees get their receivers: 0x482590, 0x486e00, 0x483530, 0x484340, 0x4858d0, 0x485d50, 0x486940, 0x484c50 ECX = this; 0x47fb50 ECX = [0x8a9d90] (00487b77); 0x44a0d0 ECX = 0x89c9a0; 0x515940/0x515b00/0x482090/0x513bc0 do not read ECX. Rounding as the asm: w and k*w and k*h go through float slots (00487a65, 00487a80, 00487a8c), X = (w-kw)*0.5 is stored (00487a9e) but Y = (h-kh)*0.5 stays in ST0 (00487aa6); the clamps use the asm predicates (test ah,1 at 00487ab5 = "below or unordered"; test ah,0x41 elsewhere = strictly greater) and the second clamp stores X's bits into +0x24 as the original does (00487add); 0x484c50 gets the float bits 0x42c00000
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* FUN_0044a0d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a0d0_t> FUN_0044a0d0 = {(FUN_0044a0d0_t)0x0044a0d0};
typedef int (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef int (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef uint32_t (BEA_CDECL* FUN_00482090_t)(void);
static const bea_guard<FUN_00482090_t> FUN_00482090 = {(FUN_00482090_t)0x00482090};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* thiscall0_t)(uint32_t);
static const bea_guard<thiscall0_t> FUN_00486e00 = {(thiscall0_t)0x00486e00};
static const bea_guard<thiscall0_t> FUN_00482590 = {(thiscall0_t)0x00482590};
static const bea_guard<thiscall0_t> FUN_0047fb50 = {(thiscall0_t)0x0047fb50};
static const bea_guard<thiscall0_t> FUN_00483530 = {(thiscall0_t)0x00483530};
static const bea_guard<thiscall0_t> FUN_00484340 = {(thiscall0_t)0x00484340};
static const bea_guard<thiscall0_t> FUN_004858d0 = {(thiscall0_t)0x004858d0};
static const bea_guard<thiscall0_t> FUN_00485d50 = {(thiscall0_t)0x00485d50};
static const bea_guard<thiscall0_t> FUN_00486940 = {(thiscall0_t)0x00486940};
typedef uint32_t (BEA_THISCALL* FUN_00484c50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00484c50_t> FUN_00484c50 = {(FUN_00484c50_t)0x00484c50};

#define U32(p, k) (*reinterpret_cast<uint32_t *>((uint8_t *)(p) + (k)))
#define F32(p, k) (*reinterpret_cast<float *>((uint8_t *)(p) + (k)))

static void BEA_THISCALL ap_004879e0(uint8_t *this_, uint8_t *param_1, int param_2)
{
  uint8_t *owner = *(uint8_t **)(param_1 + 0x1c);
  if (owner == 0 || (owner[0x2c] & 4) != 0) {
    return;
  }
  FUN_0044a0d0(0x0089c9a0u, (uint32_t)param_2);                                 // 00487a0a
  uint8_t *rec = (uint8_t *)(uintptr_t)(0x0089c9a0u + (uint32_t)(param_2 * 3 + 0x87) * 8u);
  F32(this_, 0x00) = (float)*(int *)(rec + 0x0);                                // fild / fstp
  F32(this_, 0x04) = (float)*(int *)(rec + 0x4);
  F32(this_, 0x08) = (float)*(int *)(rec + 0x8);
  U32(this_, 0x18) = U32(this_, 0x00);
  U32(this_, 0x20) = U32(this_, 0x08);
  F32(this_, 0x0c) = (float)*(int *)(rec + 0xc);
  U32(this_, 0x1c) = U32(this_, 0x00);
  U32(this_, 0x24) = U32(this_, 0x0c);

  int w = FUN_00515940();                                                       // 00487a53
  volatile float A = (float)w;                                                  // [esp+0x18]
  int h = FUN_00515b00();                                                       // 00487a69
  float10 hh = (float10)h;                                                      // fild, kept in ST
  float10 k = (float10)GLOBAL_AT(float, 0x0062ce74);
  volatile float B = (float)(k * (float10)A);                                   // [esp+0x1c]
  volatile float C = (float)(k * hh);                                           // [esp+0x10]
  volatile float X = (float)(((float10)A - (float10)B) * (float10)0.5f);        // [esp+0x18]
  float10 Y = (hh - (float10)C) * (float10)0.5f;                                // stays in ST0

  if (!((float10)F32(this_, 0x20) >= (float10)X)) {                             // fcomp; test ah, 1
    float10 d = (float10)X - (float10)F32(this_, 0x20);
    F32(this_, 0x20) = X;
    F32(this_, 0x18) = (float)((float10)F32(this_, 0x18) - d);
  }
  if (Y > (float10)F32(this_, 0x24)) {                                          // fcom; test ah, 0x41
    float10 d = Y - (float10)F32(this_, 0x24);
    F32(this_, 0x24) = X;                                                       // X's bits (00487add)
    F32(this_, 0x1c) = (float)((float10)F32(this_, 0x1c) - d);
  }
  {
    float10 p = (float10)X + (float10)B;
    float10 q = (float10)F32(this_, 0x18) + (float10)F32(this_, 0x20);
    if (q > p) {                                                                // fcomp st(1); test ah, 0x41
      F32(this_, 0x18) = (float)(p - (float10)F32(this_, 0x20));
    }
  }
  {
    float10 r = Y + (float10)C;
    float10 s = (float10)F32(this_, 0x24) + (float10)F32(this_, 0x1c);
    if (s > r) {
      F32(this_, 0x1c) = (float)(r - (float10)F32(this_, 0x24));
    }
  }
  U32(this_, 0x50) = (uint32_t)(uintptr_t)owner;
  U32(this_, 0x54) = (uint32_t)(uintptr_t)rec;
  U32(this_, 0x58) = (uint32_t)param_2;
  F32(this_, 0x14) = (float)((float10)F32(this_, 0x0c) + (float10)F32(this_, 0x04));
  F32(this_, 0x10) = (float)((float10)F32(this_, 0x08) + (float10)F32(this_, 0x00));
  F32(this_, 0x2c) = (float)((float10)F32(this_, 0x24) + (float10)F32(this_, 0x1c));
  F32(this_, 0x28) = (float)((float10)F32(this_, 0x18) + (float10)F32(this_, 0x20));

  uint32_t self = (uint32_t)(uintptr_t)this_;
  FUN_00482090();                                                               // 00487b56
  FUN_00513bc0(0xfu, 0u);
  FUN_00486e00(self);
  FUN_00482590(self);
  uint32_t ui = GLOBAL_AT(uint32_t, 0x008a9d90);
  if (ui != 0) {
    FUN_0047fb50(ui);
  }
  FUN_00483530(self);
  FUN_00484340(self);
  FUN_004858d0(self);
  FUN_00485d50(self);
  FUN_00486940(self);
  FUN_00484c50(self, 0x42c00000u);                                              // 96.0f
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004879e0, ap_004879e0));
