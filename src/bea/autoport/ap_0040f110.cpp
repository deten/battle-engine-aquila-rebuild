// auto-ported from 0040f110_FUN_0040f110.c (FUN_0040f110, 37 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax other (port returns void but the original leaves a value in EAX; review before promoting)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static void BEA_THISCALL ap_0040f110(void * this_)
{
  if (*(float *)((int)this_ + 0x60c) + 4.0f < DAT_00672fd0) {
    *(float *)((int)this_ + 0x60c) = DAT_00672fd0;
  }
  return;
}

static void* ap_0040f110_orig = nullptr;
static uint32_t BEA_THISCALL sh_0040f110(uint32_t a0)
{
    typedef uint32_t (BEA_THISCALL* Fn)(uint32_t a0);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<uint32_t (BEA_THISCALL*)(uint32_t a0)>(ap_0040f110_orig)(a0);
    static char* copybuf_ = nullptr;
    char* copy = bea_shadow::guarded_buffer(copybuf_);
    const size_t kCopy = 0x70c;   // largest this-relative displacement + slack
    const void* self = bea_shadow::bits<const void*>(a0);
    size_t n = bea_shadow::readable_span(self, kCopy);
    memcpy(copy, self, n);
    g_bea_shadow_current = 0x0040f110;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    ap_0040f110((void *)copy);
    uint32_t r_orig = reinterpret_cast<Fn>(ap_0040f110_orig)(a0);
    bool mm = false; char detail[96] = "";
    { int d = bea_shadow::first_diff(copy, self, n);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "this differs at +0x%x", d); } }
    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }
    g_bea_shadow_current = 0;
    bea_shadow_record(0x0040f110, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x0040f110, sh_0040f110, ap_0040f110_orig));
