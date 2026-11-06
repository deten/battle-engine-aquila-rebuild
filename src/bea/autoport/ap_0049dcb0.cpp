// auto-ported from 0049dcb0_FUN_0049dcb0.c (FUN_0049dcb0, 22 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)


static float10 BEA_CDECL ap_0049dcb0(float param_1, int param_2)
{
  float10 fVar1;
  
  fVar1 = (float10)1.0f;
  if (0 < param_2) {
    do {
      fVar1 = fVar1 * (float10)param_1;
      param_2 = param_2 + -1;
    } while (BEA_LOOP_GUARD((param_2 != 0)));
  }
  return fVar1;
}

static void* ap_0049dcb0_orig = nullptr;
static float10 BEA_CDECL sh_0049dcb0(uint32_t a0, uint32_t a1)
{
    typedef float10 (BEA_CDECL* Fn)(uint32_t a0, uint32_t a1);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<float10 (BEA_CDECL*)(uint32_t a0, uint32_t a1)>(ap_0049dcb0_orig)(a0, a1);
    static char* copybuf_ = nullptr;
    char* copy = bea_shadow::guarded_buffer(copybuf_);
    const void* self = nullptr; size_t n = 0; (void)self; (void)n;
    const void* r0 = bea_shadow::bits<const void*>(a0);
    char* w0 = copy + 0x80000 + 0x0; size_t n0 = 0; uint32_t p0 = a0;
    if (self && bea_shadow::redirect(a0, self, n, copy) != a0) p0 = bea_shadow::redirect(a0, self, n, copy);
    else if ((uintptr_t)r0 >= 0x10000 && (n0 = bea_shadow::readable_span(r0, 0x4000)) > 0) { memcpy(w0, r0, n0); p0 = (uint32_t)(uintptr_t)w0; }
    const void* r1 = bea_shadow::bits<const void*>(a1);
    char* w1 = copy + 0x80000 + 0x4000; size_t n1 = 0; uint32_t p1 = a1;
    if (self && bea_shadow::redirect(a1, self, n, copy) != a1) p1 = bea_shadow::redirect(a1, self, n, copy);
    else if ((uintptr_t)r1 >= 0x10000 && (n1 = bea_shadow::readable_span(r1, 0x4000)) > 0) { memcpy(w1, r1, n1); p1 = (uint32_t)(uintptr_t)w1; }
    g_bea_shadow_current = 0x0049dcb0;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    float10 r_port = ap_0049dcb0(bea_shadow::bits<float>(p0), bea_shadow::bits<int>(p1));
    float10 r_orig = reinterpret_cast<Fn>(ap_0049dcb0_orig)(a0, a1);
    bool mm = !bea_shadow::same_f80(r_port, r_orig); char detail[96] = "";
    if (mm) snprintf(detail, sizeof detail, "ret port=%Lg orig=%Lg", r_port, r_orig);
    if (n0) { int d = bea_shadow::first_diff(w0, r0, n0);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg0 differs at +0x%x", d); } }
    if (n1) { int d = bea_shadow::first_diff(w1, r1, n1);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg1 differs at +0x%x", d); } }
    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }
    g_bea_shadow_current = 0;
    bea_shadow_record(0x0049dcb0, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x0049dcb0, sh_0049dcb0, ap_0049dcb0_orig));
