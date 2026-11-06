// auto-ported from 004cd1b0_vslot4.c (CPDFunction::vslot4, 61 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax other (port returns void but the original leaves a value in EAX; review before promoting)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)

typedef char CPDFunction;

static void BEA_THISCALL ap_004cd1b0(CPDFunction * this_, int param_1)
{
  if (*(int *)(this_ + 0x60) == param_1) {
    *(undefined4 *)(this_ + 0x60) = 0;
  }
  if (*(int *)(this_ + 0x68) == param_1) {
    *(undefined4 *)(this_ + 0x68) = 0;
  }
  if (*(int *)(this_ + 0x70) == param_1) {
    *(undefined4 *)(this_ + 0x70) = 0;
  }
  if (*(int *)(this_ + 0x78) == param_1) {
    *(undefined4 *)(this_ + 0x78) = 0;
  }
  if (*(int *)(this_ + 0x8c) == param_1) {
    *(undefined4 *)(this_ + 0x8c) = 0;
  }
  return;
}

static void* ap_004cd1b0_orig = nullptr;
static uint32_t BEA_THISCALL sh_004cd1b0(uint32_t a0, uint32_t a1)
{
    typedef uint32_t (BEA_THISCALL* Fn)(uint32_t a0, uint32_t a1);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<uint32_t (BEA_THISCALL*)(uint32_t a0, uint32_t a1)>(ap_004cd1b0_orig)(a0, a1);
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
    g_bea_shadow_current = 0x004cd1b0;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    ap_004cd1b0((CPDFunction *)copy, bea_shadow::bits<int>(p1));
    uint32_t r_orig = reinterpret_cast<Fn>(ap_004cd1b0_orig)(a0, a1);
    bool mm = false; char detail[96] = "";
    { int d = bea_shadow::first_diff(copy, self, n);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "this differs at +0x%x", d); } }
    if (n1) { int d = bea_shadow::first_diff(w1, r1, n1);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg1 differs at +0x%x", d); } }
    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }
    g_bea_shadow_current = 0;
    bea_shadow_record(0x004cd1b0, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x004cd1b0, sh_004cd1b0, ap_004cd1b0_orig));
