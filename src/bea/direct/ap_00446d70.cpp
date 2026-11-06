// hand-ported from 00446d70_vslot9.c (CDropship::vslot9, 720 bytes)
// @hand-fixed 2026-10-29 written from the disassembly: the three pushes before `call [edx/eax+0x24]` (00446e32-00446e3d, 00446e4d-00446e58) belong to three different calls: the mesh's slot 0x24 takes none (CRTMesh: 0x4de070 `mov eax,[ecx+0x14]; ret`), FUN_004aa630 (ret 4, ECX = that result) takes the name string, and this's slot 0xf0 (0x4f44a0, ret 0xc) takes (index, 1, 1) - stack balance 3+1 pushes = 0+4+12 pops; Ghidra gave the 1s to the wrong calls. Height test is fVar > m ordered (fcomp + test ah,0x41 at 00446e19-00446e21, NaN goes to doorclosed); thruster loop stop test is C3 (equal OR unordered, test ah,0x40 at 00446f83/94/a5); 0.25 product rounded once and the base value bit-copied (00446dc8-00446e0c); returns 0x4cd7a0's EAX (also stored to 0x672830); EH frame (unwind only) dropped
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* FUN_00402ad0_t)(void *, uint32_t);
static const bea_guard<FUN_00402ad0_t> FUN_00402ad0 = {(FUN_00402ad0_t)0x00402ad0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef uint32_t (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00496090_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00496090_t> FUN_00496090 = {(FUN_00496090_t)0x00496090};
typedef uint32_t (BEA_THISCALL* FUN_0047e290_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047e290_t> FUN_0047e290 = {(FUN_0047e290_t)0x0047e290};
typedef uint32_t (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef uint32_t (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};

#define U32(p, k) (*reinterpret_cast<uint32_t *>((uint8_t *)(p) + (k)))
#define F32(p, k) (*reinterpret_cast<float *>((uint8_t *)(p) + (k)))
#define PTR(p, k) (*reinterpret_cast<uint8_t **>((uint8_t *)(p) + (k)))

static uint32_t BEA_THISCALL ap_00446d70(uint8_t *this_, uint8_t *param_1)
{
  U32(this_, 0x290) = 0;
  U32(this_, 0x294) = 0;
  U32(param_1, 0x7c) = 2;
  U32(param_1, 0x70) = U32(param_1, 0x70) | 0xa400140;
  U32(param_1, 0x80) = 2;
  FUN_00402ad0(this_, (uint32_t)(uintptr_t)param_1);                       // CAirUnit::vslot9

  {
    float v = F32(PTR(this_, 0x164), 0xb8);                                 // 00446dc8
    volatile float q = (float)((float10)v * (float10)0.25f);                // fmul [0x5d858c]; fst
    float qq = q;
    U32(this_, 0x12c) = U32(PTR(this_, 0x164), 0xb8);                       // fstp: same bits
    F32(this_, 0x130) = qq;
    F32(this_, 0x134) = qq;
  }

  float10 h = FUN_0047eb80(0x006fadc8u, (uint32_t)(uintptr_t)(this_ + 0x1c));
  uint32_t name;
  if (h > (float10)F32(param_1, 0xc)) {                                     // test ah,0x41; je 00446e42
    U32(this_, 0x27c) = 0;
    name = 0x00628a74;                                                      // "wingflat"
  } else {
    U32(this_, 0x27c) = 6;
    name = 0x00628a80;                                                      // "doorclosed"
  }
  {
    uint32_t anims = bea_vcall<uint32_t>(PTR(this_, 0x30), 0x24);           // no stack arguments
    uint32_t idx = FUN_004aa630(anims, name);
    bea_vcall<uint32_t>(this_, 0xf0, idx, 1u, 1u);                          // ret 0xc
  }

  uint32_t r;
  uint32_t p = FUN_005490e0(0x009c3df0u, 0x14u, 0x1bu, 0x00628a54u, 0x2cu);
  if (p == 0) {
    r = 0;
  } else if (this_ == nullptr) {
    r = FUN_00496090(p, 0u);
  } else {
    r = FUN_00496090(p, (uint32_t)(uintptr_t)(this_ + 8));
  }
  U32(this_, 0x70) = r;

  uint32_t g = FUN_005490e0(0x009c3df0u, 0x20u, 0x17u, 0x00628a54u, 0x2du);
  if (g != 0) {
    FUN_0047e290(g, (uint32_t)(uintptr_t)this_);
    U32(g, 0) = 0x005db228;                                                 // CDropshipGuide::vftable
  } else {
    g = 0;
  }
  U32(this_, 0x208) = g;

  uint32_t ai = FUN_005490e0(0x009c3df0u, 100u, 0x16u, 0x00628a54u, 0x2eu);
  if (ai != 0) {
    FUN_004fe710(ai, (uint32_t)(uintptr_t)this_, (uint32_t)(uintptr_t)param_1);
    U32(ai, 0) = 0x005db1f4;                                                // CDropshipAI::vftable
    U32(ai, 0x60) = 0;
  } else {
    ai = 0;
  }
  U32(this_, 0x13c) = ai;

  if (U32(PTR(this_, 0x164), 0xc) != 0) {
    uint32_t i = 1;
    for (;;) {
      float vec[4];
      uint8_t buf[0x30];
      bea_vcall<uint32_t>(PTR(this_, 0x30), 0x1c, 0x00623080u, i, (float *)vec, (uint8_t *)buf, 1u, 0u);
      // fcomp [0.0]; test ah, 0x40: C3 is set for equal and for unordered
      if (!__builtin_islessgreater(vec[0], 0.0f) && !__builtin_islessgreater(vec[1], 0.0f) &&
          !__builtin_islessgreater(vec[2], 0.0f)) {
        break;
      }
      uint32_t t = FUN_005490e0(0x009c3df0u, 8u, 0x10u, 0x00628a54u, 0x37u);
      if (t != 0) {
        U32(t, 4) = 0;
        FUN_004cb040(t);
      } else {
        t = 0;
      }
      FUN_004e5b20((uint32_t)(uintptr_t)(this_ + 0x1d4), t);
      i = i + 1;
    }
  }
  U32(this_, 0x29c) = 0;
  U32(this_, 0x298) = 0;
  U32(this_, 0x2a0) = 0;
  U32(this_, 0x2a4) = 0;
  U32(this_, 0x2a8) = 0;
  uint32_t e = FUN_004cd7a0(0x0082b400u, 0x00628a3cu);                    // "Thruster Dust Effect"
  GLOBAL_AT(uint32_t, 0x00672830) = e;
  return e;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00446d70, ap_00446d70));
