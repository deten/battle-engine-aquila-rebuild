// hand-ported from 00448580_vslot9.c (CDropshipAI::vslot9, 571 bytes)
// @hand-fixed 2026-10-29 written from the asm: thiscall with ONE stack argument (ret 4 at 004487b8; Ghidra's in_stack_00000008 is that param_1, pushed last-first as 0x44b370's 6th argument at 0044877a). Case 4's slot 0xc on this takes no argument and returns ST0, which the original pops (00448723-00448726; Ghidra's unaff_EDI). In case 1 the `push 0` before 0x447bb0 (0044868b) is the 5th argument of slot 0xf4 (0x447bb0 takes one, ret 4), as in case 0 (00448612); slot 0xf4's vtable is read before 0x447bb0 (00448685). The clamp keeps l = min-style `l > max` (test ah,0x41 at 004485df); case 5 fires on "below or unordered" (test ah,1 at 0044874e). The time is ((r%65536 as int) * (1/65536) + 1) + clock, stored into the same stack slot whose address 0x44b370 gets (00448785/004487a9)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef int (BEA_THISCALL* FUN_004fb500_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb500_t> FUN_004fb500 = {(FUN_004fb500_t)0x004fb500};
typedef int (BEA_THISCALL* thiscall0_t)(uint32_t);
static const bea_guard<thiscall0_t> FUN_00447b60 = {(thiscall0_t)0x00447b60};
static const bea_guard<thiscall0_t> FUN_004480c0 = {(thiscall0_t)0x004480c0};
static const bea_guard<thiscall0_t> FUN_00448110 = {(thiscall0_t)0x00448110};
static const bea_guard<thiscall0_t> FUN_004fd7e0 = {(thiscall0_t)0x004fd7e0};
static const bea_guard<thiscall0_t> FUN_004fd7a0 = {(thiscall0_t)0x004fd7a0};
static const bea_guard<thiscall0_t> FUN_00448120 = {(thiscall0_t)0x00448120};
static const bea_guard<thiscall0_t> Random__Next = {(thiscall0_t)0x004de8d0};
typedef uint32_t * (BEA_THISCALL* FUN_00447bb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00447bb0_t> FUN_00447bb0 = {(FUN_00447bb0_t)0x00447bb0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

typedef uint32_t (BEA_THISCALL* vslotf4_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

#define U32(p, k) (*reinterpret_cast<uint32_t *>((uint8_t *)(p) + (k)))

static void BEA_THISCALL ap_00448580(uint8_t *this_, uint32_t param_1)
{
  if (U32(this_, 0x20) == 0) {
    return;
  }
  uint8_t *unit = *(uint8_t **)(this_ + 8);
  if ((unit[0x2c] & 4) != 0) {
    return;
  }
  uint32_t self = (uint32_t)(uintptr_t)this_;
  uint32_t u = (uint32_t)(uintptr_t)unit;
  volatile float lim;                                                           // [esp+0xc]
  uint32_t pos[4];                                                              // [esp+0x10]
  uint32_t out[4];                                                              // [esp+0x20]
  pos[0] = U32(unit, 0x1c);
  pos[1] = U32(unit, 0x20);
  pos[2] = U32(unit, 0x24);
  pos[3] = U32(unit, 0x28);
  lim = (float)FUN_0047eb80(0x006fadc8u, (uint32_t)(uintptr_t)pos);              // 004485c8
  {
    float10 mx = (float10)GLOBAL_AT(float, 0x006fbdfc);
    if ((float10)lim > mx) {                                                    // fcomp st(1); test ah, 0x41
      lim = (float)mx;
    }
  }
  switch (U32(unit, 0x27c)) {
  case 0:
    bea_vcall<uint32_t>(self, 0x10);                                            // 00448606
    if (U32(this_, 0xc) == 0) {
      bea_vcall<uint32_t>(u, 0x190);                                            // 00448660
    } else {
      uint8_t *t = *(uint8_t **)(this_ + 0xc);
      bea_vcall<uint32_t>(u, 0xf4, U32(t, 0x1c), U32(t, 0x20), U32(t, 0x24), U32(t, 0x28), (uint32_t)0);
      if (FUN_004fb500(u, U32(this_, 0xc), 1u) != 0) {                          // 00448642
        U32(unit, 0x27c) = 1;
      }
    }
    break;
  case 1:
    if (FUN_00447b60(u) != 0) {                                                 // 0044866d
      bea_vcall<uint32_t>(u, 0x1d8);
    } else {
      void **vtbl = *(void ***)unit;                                            // mov ebx, [esi]
      uint32_t *v = FUN_00447bb0(u, (uint32_t)(uintptr_t)out);                  // 00448690
      unsigned short expect = bea_x87_expect();
      ((vslotf4_t)vtbl[0xf4 / 4])(u, v[0], v[1], v[2], v[3], 0);                // 004486b2
      bea_x87_rebalance(expect);
    }
    break;
  case 3:
    if (FUN_004480c0(u) == 0) {                                                 // 004486bf
      bea_vcall<uint32_t>(u, 0x1e0);
    } else if (bea_vcall<int>(u, 0x10c) != 0) {
      FUN_00448110(u);
    }
    break;
  case 4:
    if (FUN_004fd7e0(u) == 0) {                                                 // 004486f1
      if (U32(unit, 0x294) != 0) {
        bea_vcall<uint32_t>(U32(this_, 8), 0x148);                              // 00448704
        break;
      }
      bea_vcall<uint32_t>(self, 0x10);                                          // 00448715
      if (U32(this_, 0xc) != 0) {
        (void)bea_vcall<float10>(self, 0xc);                                    // 00448723; fstp st(0)
        break;
      }
    }
    if (FUN_004fd7a0(u) == 0) {                                                 // 0044872c
      FUN_00448120(u);
    }
    break;
  case 5: {
    float z;
    memcpy(&z, &pos[2], 4);
    float10 d = (float10)z - (float10)lim;                                      // 0044873e
    if (!(d >= (float10)-35.0f)) {                        // fcomp -35.0; test ah, 1
      U32(unit, 0x27c) = 0;
    }
    break;
  }
  default:
    break;
  }
  uint32_t r = (uint32_t)Random__Next(GLOBAL_AT(uint32_t, 0x008a9d9c));          // 00448763
  r &= 0x8000ffffu;
  if ((int)r < 0) {
    r = ((r - 1) | 0xffff0000u) + 1;
  }
  volatile int ri = (int)r;                                                     // [esp+0xc]
  float10 t = (float10)ri * (float10)1.52587890625e-05f;
  t = t + (float10)1.0f;
  t = t + (float10)GLOBAL_AT(float, 0x00672fd0);
  lim = (float)t;                                                               // 004487a9, same slot
  FUN_0044b370(0x00672fc8u, 3000u, self, (uint32_t)(uintptr_t)&lim, 0u, 0u, param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00448580, ap_00448580));
