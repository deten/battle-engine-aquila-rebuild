// auto-ported from 0050d720_FUN_0050d720.c (FUN_0050d720, 64 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax other (port returns void but the original leaves a value in EAX; review before promoting)
// Hand-fixed 2026-10-27: integer tags stored in float slots were compared with
// denormal double literals (never equal in double); compared by bits now.
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static void BEA_THISCALL ap_0050d720(void * this_, float param_1, float param_2, float param_3)
{
  float *pfVar1;
  int iVar2;
  
  pfVar1 = (float *)((int)this_ + 0x23c);
  iVar2 = 4;
  do {
    if (pfVar1[-8] == param_1) {
      if (bea_piece32(pfVar1[-0xc]) == 3u) {
        *pfVar1 = DAT_00672fd0 + param_2;
      }
      else {
        *pfVar1 = param_2;
        pfVar1[4] = param_3;
      }
    }
    pfVar1 = pfVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  return;
}

static void* ap_0050d720_orig = nullptr;
static uint32_t BEA_THISCALL sh_0050d720(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    typedef uint32_t (BEA_THISCALL* Fn)(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<uint32_t (BEA_THISCALL*)(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)>(ap_0050d720_orig)(a0, a1, a2, a3);
    static char* copybuf_ = nullptr;
    char* copy = bea_shadow::guarded_buffer(copybuf_);
    const size_t kCopy = 0x33c;   // largest this-relative displacement + slack
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
    const void* r3 = bea_shadow::bits<const void*>(a3);
    char* w3 = copy + 0x80000 + 0xc000; size_t n3 = 0; uint32_t p3 = a3;
    if (self && bea_shadow::redirect(a3, self, n, copy) != a3) p3 = bea_shadow::redirect(a3, self, n, copy);
    else if ((uintptr_t)r3 >= 0x10000 && (n3 = bea_shadow::readable_span(r3, 0x4000)) > 0) { memcpy(w3, r3, n3); p3 = (uint32_t)(uintptr_t)w3; }
    g_bea_shadow_current = 0x0050d720;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    ap_0050d720((void *)copy, bea_shadow::bits<float>(p1), bea_shadow::bits<float>(p2), bea_shadow::bits<float>(p3));
    uint32_t r_orig = reinterpret_cast<Fn>(ap_0050d720_orig)(a0, a1, a2, a3);
    bool mm = false; char detail[96] = "";
    { int d = bea_shadow::first_diff(copy, self, n);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "this differs at +0x%x", d); } }
    if (n1) { int d = bea_shadow::first_diff(w1, r1, n1);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg1 differs at +0x%x", d); } }
    if (n2) { int d = bea_shadow::first_diff(w2, r2, n2);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg2 differs at +0x%x", d); } }
    if (n3) { int d = bea_shadow::first_diff(w3, r3, n3);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg3 differs at +0x%x", d); } }
    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }
    g_bea_shadow_current = 0;
    bea_shadow_record(0x0050d720, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x0050d720, sh_0050d720, ap_0050d720_orig));
