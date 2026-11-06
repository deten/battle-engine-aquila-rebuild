// auto-ported from 0044c720_FUN_0044c720.c (FUN_0044c720, 91 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)


static undefined4 BEA_THISCALL ap_0044c720(void * this_, float param_1, float param_2, undefined4 param_3, undefined4 param_4)
{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = (int)(longlong)ROUND(param_1);
  param_1 = (float)(longlong)ROUND(param_2);
  iVar2 = (int)(local_8 + (local_8 >> 0x1f & 7U)) >> 3;
  iVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3;
  if ((((-1 < iVar2) && (-1 < iVar1)) && (iVar2 < 0x40)) && (iVar1 < 0x40)) {
    return *(undefined4 *)((int)this_ + (iVar2 * 0x40 + iVar1) * 4 + 8);
  }
  return 0;
}

static void* ap_0044c720_orig = nullptr;
static undefined4 BEA_THISCALL sh_0044c720(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    typedef undefined4 (BEA_THISCALL* Fn)(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<undefined4 (BEA_THISCALL*)(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)>(ap_0044c720_orig)(a0, a1, a2, a3, a4);
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
    const void* r3 = bea_shadow::bits<const void*>(a3);
    char* w3 = copy + 0x80000 + 0xc000; size_t n3 = 0; uint32_t p3 = a3;
    if (self && bea_shadow::redirect(a3, self, n, copy) != a3) p3 = bea_shadow::redirect(a3, self, n, copy);
    else if ((uintptr_t)r3 >= 0x10000 && (n3 = bea_shadow::readable_span(r3, 0x4000)) > 0) { memcpy(w3, r3, n3); p3 = (uint32_t)(uintptr_t)w3; }
    const void* r4 = bea_shadow::bits<const void*>(a4);
    char* w4 = copy + 0x80000 + 0x10000; size_t n4 = 0; uint32_t p4 = a4;
    if (self && bea_shadow::redirect(a4, self, n, copy) != a4) p4 = bea_shadow::redirect(a4, self, n, copy);
    else if ((uintptr_t)r4 >= 0x10000 && (n4 = bea_shadow::readable_span(r4, 0x4000)) > 0) { memcpy(w4, r4, n4); p4 = (uint32_t)(uintptr_t)w4; }
    g_bea_shadow_current = 0x0044c720;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    undefined4 r_port = ap_0044c720((void *)copy, bea_shadow::bits<float>(p1), bea_shadow::bits<float>(p2), bea_shadow::bits<undefined4>(p3), bea_shadow::bits<undefined4>(p4));
    undefined4 r_orig = reinterpret_cast<Fn>(ap_0044c720_orig)(a0, a1, a2, a3, a4);
    uint32_t rp = (uint32_t)r_port;
    rp = bea_shadow::translate_ret(rp, copy, n, self);
    rp = bea_shadow::translate_ret(rp, w1, n1, r1);
    rp = bea_shadow::translate_ret(rp, w2, n2, r2);
    rp = bea_shadow::translate_ret(rp, w3, n3, r3);
    rp = bea_shadow::translate_ret(rp, w4, n4, r4);
    bool mm = rp != (uint32_t)r_orig; char detail[96] = "";
    if (mm) snprintf(detail, sizeof detail, "ret port=%08x orig=%08x", (unsigned)rp, (unsigned)(uint32_t)r_orig);
    { int d = bea_shadow::first_diff(copy, self, n);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "this differs at +0x%x", d); } }
    if (n1) { int d = bea_shadow::first_diff(w1, r1, n1);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg1 differs at +0x%x", d); } }
    if (n2) { int d = bea_shadow::first_diff(w2, r2, n2);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg2 differs at +0x%x", d); } }
    if (n3) { int d = bea_shadow::first_diff(w3, r3, n3);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg3 differs at +0x%x", d); } }
    if (n4) { int d = bea_shadow::first_diff(w4, r4, n4);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg4 differs at +0x%x", d); } }
    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }
    g_bea_shadow_current = 0;
    bea_shadow_record(0x0044c720, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x0044c720, sh_0044c720, ap_0044c720_orig));
