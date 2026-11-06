// auto-ported from 004ef050_FUN_004ef050.c (FUN_004ef050, 26 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax other (port returns void but the original leaves a value in EAX; review before promoting)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)


static void BEA_THISCALL ap_004ef050(void * this_)
{
  if ((*(int *)((int)this_ + 0x250) == 0) || (*(int *)((int)this_ + 0x250) == 1)) {
    *(undefined4 *)((int)this_ + 0x250) = 3;
  }
  return;
}

static void* ap_004ef050_orig = nullptr;
static uint32_t BEA_THISCALL sh_004ef050(uint32_t a0)
{
    typedef uint32_t (BEA_THISCALL* Fn)(uint32_t a0);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<uint32_t (BEA_THISCALL*)(uint32_t a0)>(ap_004ef050_orig)(a0);
    static char* copybuf_ = nullptr;
    char* copy = bea_shadow::guarded_buffer(copybuf_);
    const size_t kCopy = 0x350;   // largest this-relative displacement + slack
    const void* self = bea_shadow::bits<const void*>(a0);
    size_t n = bea_shadow::readable_span(self, kCopy);
    memcpy(copy, self, n);
    g_bea_shadow_current = 0x004ef050;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    ap_004ef050((void *)copy);
    uint32_t r_orig = reinterpret_cast<Fn>(ap_004ef050_orig)(a0);
    bool mm = false; char detail[96] = "";
    { int d = bea_shadow::first_diff(copy, self, n);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "this differs at +0x%x", d); } }
    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }
    g_bea_shadow_current = 0;
    bea_shadow_record(0x004ef050, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x004ef050, sh_004ef050, ap_004ef050_orig));
