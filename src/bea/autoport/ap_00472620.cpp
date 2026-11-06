// auto-ported from 00472620_FUN_00472620.c (FUN_00472620, 40 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax other (port returns void but the original leaves a value in EAX; review before promoting)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)


static void BEA_THISCALL ap_00472620(void * this_, int param_1, undefined4 param_2)
{
  if (param_1 == 1) {
    *(undefined4 *)((int)this_ + 0x290) = param_2;
    return;
  }
  if (param_1 == 2) {
    *(undefined4 *)((int)this_ + 0x294) = param_2;
  }
  return;
}

static void* ap_00472620_orig = nullptr;
static uint32_t BEA_THISCALL sh_00472620(uint32_t a0, uint32_t a1, uint32_t a2)
{
    typedef uint32_t (BEA_THISCALL* Fn)(uint32_t a0, uint32_t a1, uint32_t a2);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<uint32_t (BEA_THISCALL*)(uint32_t a0, uint32_t a1, uint32_t a2)>(ap_00472620_orig)(a0, a1, a2);
    static char* copybuf_ = nullptr;
    char* copy = bea_shadow::guarded_buffer(copybuf_);
    const size_t kCopy = 0x394;   // largest this-relative displacement + slack
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
    g_bea_shadow_current = 0x00472620;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    ap_00472620((void *)copy, bea_shadow::bits<int>(p1), bea_shadow::bits<undefined4>(p2));
    uint32_t r_orig = reinterpret_cast<Fn>(ap_00472620_orig)(a0, a1, a2);
    bool mm = false; char detail[96] = "";
    { int d = bea_shadow::first_diff(copy, self, n);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "this differs at +0x%x", d); } }
    if (n1) { int d = bea_shadow::first_diff(w1, r1, n1);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg1 differs at +0x%x", d); } }
    if (n2) { int d = bea_shadow::first_diff(w2, r2, n2);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg2 differs at +0x%x", d); } }
    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }
    g_bea_shadow_current = 0;
    bea_shadow_record(0x00472620, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x00472620, sh_00472620, ap_00472620_orig));
