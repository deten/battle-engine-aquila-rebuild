// hand-ported from 004804c0_vslot62.c (CHiveBoss::vslot62, 463 bytes)
// @hand-fixed 2026-10-29 written from the disassembly: param_2's slot 0x34 takes no argument (Ghidra's unaff_EDI; nothing pushed before `call [edx/eax+0x34]`, e.g. 004804de) and returns the value in ST0, stored with fstp dword; slot 0x50 of param_1 takes the key string (one push, callee pops) and returns its answer in AL (test al, al); EAX at each ret reproduced: the +0x208 pointer on the first branch (004804e1), slot 0x34's own EAX on the other value branches (captured with the call in one asm block), FUN_004f45e0's EAX on the fall-through (stdcall(param_1, param_2), ECX not read: 004f45e0, ret 8)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_STDCALL* FUN_004f45e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f45e0_t> FUN_004f45e0 = {(FUN_004f45e0_t)0x004f45e0};

#define F32(p, k) (*reinterpret_cast<float *>((uint8_t *)(p) + (k)))
#define PTR(p, k) (*reinterpret_cast<uint8_t **>((uint8_t *)(p) + (k)))

// thiscall `call [vtbl+0x34]` with no stack argument: the float result in ST0
// and whatever the callee left in EAX
static inline float10 vslot34(void *obj, uint32_t *eax_out)
{
  float10 r;
  uint32_t a;
  void *fn = (*reinterpret_cast<void *const *const *>(obj))[0x34 / 4];
  void *c = obj;
  __asm__ volatile("call *%[f]"
                   : "=t"(r), "=a"(a), "+c"(c), [f] "+d"(fn)
                   :
                   : "memory", "cc", "st(1)", "st(2)", "st(3)", "st(4)", "st(5)", "st(6)", "st(7)");
  *eax_out = a;
  return r;
}

static inline bool key_is(void *p1, uint32_t name)
{
  return (uint8_t)bea_vcall<uint32_t>(p1, 0x50, name) != 0;              // test al, al
}

static uint32_t BEA_THISCALL ap_004804c0(uint8_t *this_, void *param_1, void *param_2)
{
  uint32_t a;
  float10 v;
  if (key_is(param_1, 0x0062cddc)) {                                     // hb_maxvelx
    v = vslot34(param_2, &a);
    uint8_t *m = PTR(this_, 0x208);
    F32(m, 0x20) = (float)v;
    return (uint32_t)(uintptr_t)m;                                       // mov eax, [edi+0x208]
  }
  if (key_is(param_1, 0x0062cdd0)) {                                     // hb_maxvely
    v = vslot34(param_2, &a);
    F32(PTR(this_, 0x208), 0x24) = (float)v;
    return a;
  }
  if (key_is(param_1, 0x0062cdc4)) {                                     // hb_maxvelz
    v = vslot34(param_2, &a);
    F32(PTR(this_, 0x208), 0x28) = (float)v;
    return a;
  }
  static const struct { uint32_t name; uint32_t off; } keys[] = {
    {0x0062cdb4, 0x29c},    // hb_rotate_speed
    {0x0062cd94, 0x288},    // hb_core_top_inner_rotate_speed
    {0x0062cd74, 0x284},    // hb_core_top_outer_rotate_speed
    {0x0062cd54, 0x290},    // hb_core_mid_inner_rotate_speed
    {0x0062cd34, 0x28c},    // hb_core_mid_outer_rotate_speed
    {0x0062cd14, 0x298},    // hb_core_bot_inner_rotate_speed
    {0x0062ccf4, 0x294},    // hb_core_bot_outer_rotate_speed
    {0x0062cce4, 0x2a0},    // hb_safe_dist
    {0x0062ccc8, 0x268},    // hb_min_height_above_ground
  };
  for (unsigned i = 0; i < sizeof(keys) / sizeof(keys[0]); ++i) {
    if (key_is(param_1, keys[i].name)) {
      v = vslot34(param_2, &a);
      F32(this_, keys[i].off) = (float)v;
      return a;
    }
  }
  return FUN_004f45e0((uint32_t)(uintptr_t)param_1, (uint32_t)(uintptr_t)param_2);   // CComplexThing::vslot62
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004804c0, ap_004804c0));
