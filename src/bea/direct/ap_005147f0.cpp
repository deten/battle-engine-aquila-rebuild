// auto-ported from 005147f0_vslot4.c (CPCController::vslot4, 31 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax ok
// @hand-fixed 2026-10-23: the table is indexed in the original's element size (tools/check_table_index.py;
// 0x515970's int-typed key table read another key's state: the first recorded playthrough)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)

#define DAT_00888f94 GLOBAL_AT(char, 0x00888f94)

static uint32_t BEA_STDCALL ap_005147f0(int param_1, int param_2)
{
  return *(char *)(((uint32_t *)&DAT_00888f94)[param_1] + 0x30 + param_2) != '\0';
}

static void* ap_005147f0_orig = nullptr;
static uint32_t BEA_STDCALL sh_005147f0(uint32_t a0, uint32_t a1)
{
    typedef uint32_t (BEA_STDCALL* Fn)(uint32_t a0, uint32_t a1);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<uint32_t (BEA_STDCALL*)(uint32_t a0, uint32_t a1)>(ap_005147f0_orig)(a0, a1);
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
    g_bea_shadow_current = 0x005147f0;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    uint32_t r_port = ap_005147f0(bea_shadow::bits<int>(p0), bea_shadow::bits<int>(p1));
    uint32_t r_orig = reinterpret_cast<Fn>(ap_005147f0_orig)(a0, a1);
    uint32_t rp = (uint32_t)r_port;
    rp = bea_shadow::translate_ret(rp, w0, n0, r0);
    rp = bea_shadow::translate_ret(rp, w1, n1, r1);
    bool mm = rp != (uint32_t)r_orig; char detail[96] = "";
    if (mm) snprintf(detail, sizeof detail, "ret port=%08x orig=%08x", (unsigned)rp, (unsigned)(uint32_t)r_orig);
    if (n0) { int d = bea_shadow::first_diff(w0, r0, n0);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg0 differs at +0x%x", d); } }
    if (n1) { int d = bea_shadow::first_diff(w1, r1, n1);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg1 differs at +0x%x", d); } }
    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }
    g_bea_shadow_current = 0;
    bea_shadow_record(0x005147f0, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x005147f0, sh_005147f0, ap_005147f0_orig));
