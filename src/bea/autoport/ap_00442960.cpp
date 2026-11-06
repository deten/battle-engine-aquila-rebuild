// auto-ported from 00442960_vslot3.c (CDestroyableSegment::vslot3, 55 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax other (port returns void but the original leaves a value in EAX; review before promoting)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)

typedef char CDestroyableSegment;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)

static void BEA_THISCALL ap_00442960(CDestroyableSegment * this_, float param_1, undefined4 param_2)
{
  float fVar1;
  undefined4 uVar2;
  
  if (*(int *)(this_ + 0x1c) != 0) {
    fVar1 = *(float *)(this_ + 0xc);
    *(float *)(this_ + 0xc) = fVar1 - param_1;
    uVar2 = DAT_00672fd0;
    *(float *)(this_ + 0x18) = param_1;
    *(undefined4 *)(this_ + 0x14) = uVar2;
    if (fVar1 - param_1 < 0.0f) {
      *(undefined4 *)(this_ + 0xc) = 0;
    }
  }
  return;
}

static void* ap_00442960_orig = nullptr;
static uint32_t BEA_THISCALL sh_00442960(uint32_t a0, uint32_t a1, uint32_t a2)
{
    typedef uint32_t (BEA_THISCALL* Fn)(uint32_t a0, uint32_t a1, uint32_t a2);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<uint32_t (BEA_THISCALL*)(uint32_t a0, uint32_t a1, uint32_t a2)>(ap_00442960_orig)(a0, a1, a2);
    static char* copybuf_ = nullptr;
    char* copy = bea_shadow::guarded_buffer(copybuf_);
    const size_t kCopy = 0x200;   // largest this-relative displacement + slack
    const void* self = bea_shadow::bits<const void*>(a0);
    size_t n = bea_shadow::readable_span(self, kCopy);
    memcpy(copy, self, n);
    const void* r1 = bea_shadow::bits<const void*>(a1);
    char* w1 = copy + 0x80000 + 0x4000; size_t n1 = 0; uint32_t p1 = a1;
    if (self && bea_shadow::redirect(a1, self, n, copy) != a1) p1 = bea_shadow::redirect(a1, self, n, copy);
    else if ((uintptr_t)r1 >= 0x10000 && (n1 = bea_shadow::readable_span(r1, 0x4000)) > 0) { memcpy(w1, r1, n1); p1 = (uint32_t)(uintptr_t)w1; }
    const void* r2 = bea_shadow::bits<const void*>(a2);
    char* w2 = copy + 0x80000 + 0x8000; size_t n2 = 0; uint32_t p2 = a2;
    if (self && bea_shadow::redirect(a2, self, n, copy) != a2) p2 = bea_shadow::redirect(a2, self, n, copy);
    else if ((uintptr_t)r2 >= 0x10000 && (n2 = bea_shadow::readable_span(r2, 0x4000)) > 0) { memcpy(w2, r2, n2); p2 = (uint32_t)(uintptr_t)w2; }
    g_bea_shadow_current = 0x00442960;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    ap_00442960((CDestroyableSegment *)copy, bea_shadow::bits<float>(p1), bea_shadow::bits<undefined4>(p2));
    uint32_t r_orig = reinterpret_cast<Fn>(ap_00442960_orig)(a0, a1, a2);
    bool mm = false; char detail[96] = "";
    { int d = bea_shadow::first_diff(copy, self, n);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "this differs at +0x%x", d); } }
    if (n1) { int d = bea_shadow::first_diff(w1, r1, n1);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg1 differs at +0x%x", d); } }
    if (n2) { int d = bea_shadow::first_diff(w2, r2, n2);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg2 differs at +0x%x", d); } }
    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }
    g_bea_shadow_current = 0;
    bea_shadow_record(0x00442960, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x00442960, sh_00442960, ap_00442960_orig));
