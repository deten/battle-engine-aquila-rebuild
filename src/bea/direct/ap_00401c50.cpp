// auto-ported from 00401c50_vslot1_t8.c (CActor::vslot1_t8, 618 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 written from the disassembly: one stack argument (the 48-byte result, ret 4; EAX = it), two float results of the actor's slot 0x60 (ECX = this-8, 00401c62/00401c86) Ghidra lost, blend = DAT_8a9e44*(1/r) + ((1/r)*t)*20 (00401c89-00401ca3), clamp with `test ah, 1` (NaN -> 0); the helper calls use the original's stack layout (bea_frame_ at the original offsets, 401ec0 leaves the 4th lane of each 16-byte vector unwritten and 401f10 copies it, so lanes keep the frame's bytes) and the arguments as pushed (401ee0 takes 2: the early push at 00401e61 is the last 401f10 argument)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef void * (BEA_THISCALL* FUN_00401ec0_t)(void *, float, float, float);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef void * (BEA_THISCALL* FUN_00401f10_t)(void *, void *, void *, void *);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef void * (BEA_THISCALL* FUN_00401ee0_t)(void *, void *, void *);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};

static void * BEA_THISCALL ap_00401c50(uint8_t *this_, uint32_t *out)
{
  // F = ESP after `sub esp, 0x124; push esi; push edi`; locals at F+8 .. F+0x12c
  alignas(16) uint8_t bea_frame_[0x130] = {};
#define F_(k) (bea_frame_ + (k))
#define FF_(k) (*reinterpret_cast<float *>(bea_frame_ + (k)))
  uint8_t *base = this_ - 8;                                           // esi (00401c5d)
  float10 r1 = bea_vcall<float10>(base, 0x60);
  float10 v;
  if (r1 > (float10)1.0f) {                                            // test ah, 0x41; jne (00401c6d)
    FF_(0x8) = (float)((float10)GLOBAL_AT(float, 0x00672fd0) - (float10)*(float *)(base + 0xd8));
    float10 r2 = bea_vcall<float10>(base, 0x60);
    float10 inv = (float10)1.0f / r2;                                  // fdivr 1.0 (00401c89)
    float10 a = (float10)GLOBAL_AT(float, 0x008a9e44) * inv;
    float10 b = (inv * (float10)FF_(0x8)) * (float10)20.0f;
    v = a + b;                                                         // faddp (00401ca3)
    if (!(v >= (float10)0.0f)) {                                       // test ah, 1 (00401cad)
      v = (float10)0.0f;
    } else if (v > (float10)1.0f) {
      v = (float10)1.0f;
    }
  } else {
    v = (float10)GLOBAL_AT(float, 0x008a9e44);
  }
  FF_(0x8) = (float)v;                                                 // fstp [esp+8] (00401cd9)
  float sc = FF_(0x8);
  float *t = reinterpret_cast<float *>(this_);
  FUN_00401ec0(F_(0x5c), (float)((float10)t[0x54 / 4] - (float10)t[0xb4 / 4]),
               (float)((float10)t[0x58 / 4] - (float10)t[0xb8 / 4]),
               (float)((float10)t[0x5c / 4] - (float10)t[0xbc / 4]));
  FUN_00401ec0(F_(0xcc), (float)((float10)t[0x44 / 4] - (float10)t[0xa4 / 4]),
               (float)((float10)t[0x48 / 4] - (float10)t[0xa8 / 4]),
               (float)((float10)t[0x4c / 4] - (float10)t[0xac / 4]));
  FUN_00401ec0(F_(0x6c), (float)((float10)t[0x34 / 4] - (float10)t[0x94 / 4]),
               (float)((float10)t[0x38 / 4] - (float10)t[0x98 / 4]),
               (float)((float10)t[0x3c / 4] - (float10)t[0x9c / 4]));
  FUN_00401f10(F_(0xc), F_(0x6c), F_(0xcc), F_(0x5c));                 // 00401d73
  FUN_00401ec0(F_(0x8c), (float)((float10)FF_(0x2c) * (float10)sc), (float)((float10)FF_(0x30) * (float10)sc),
               (float)((float10)FF_(0x34) * (float10)sc));
  FUN_00401ec0(F_(0x7c), (float)((float10)FF_(0x1c) * (float10)sc), (float)((float10)FF_(0x20) * (float10)sc),
               (float)((float10)FF_(0x24) * (float10)sc));
  FUN_00401ec0(F_(0x3c), (float)((float10)FF_(0xc) * (float10)sc), (float)((float10)FF_(0x10) * (float10)sc),
               (float)((float10)FF_(0x14) * (float10)sc));
  FUN_00401f10(F_(0x9c), F_(0x3c), F_(0x7c), F_(0x8c));                // 00401e1e
  FUN_00401ec0(F_(0x4c), (float)((float10)FF_(0xbc) + (float10)t[0xb4 / 4]),
               (float)((float10)FF_(0xc0) + (float10)t[0xb8 / 4]),
               (float)((float10)FF_(0xc4) + (float10)t[0xbc / 4]));
  void *r1p = FUN_00401ee0(this_ + 0xa4, F_(0xdc), F_(0xac));          // 00401e6e
  void *r2p = FUN_00401ee0(this_ + 0x94, F_(0xec), F_(0x9c));          // 00401e86
  FUN_00401f10(F_(0xfc), r2p, r1p, F_(0x4c));                          // 00401e93
  __builtin_memcpy(out, F_(0xfc), 0x30);                               // rep movsd (00401ead)
#undef F_
#undef FF_
  return out;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00401c50, ap_00401c50));
