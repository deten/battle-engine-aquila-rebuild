// auto-ported from 0053b9f0_vslot3.c (CClouds::vslot3, 35 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax other (port returns void but the original leaves a value in EAX; review before promoting)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)

typedef char CClouds;

static void BEA_THISCALL ap_0053b9f0(CClouds * this_)
{
  CClouds *pCVar1;
  int iVar2;
  
  *(undefined4 *)(this_ + 0x10) = 0x3f000000;
  pCVar1 = this_ + 0x18;
  iVar2 = 0x32;
  do {
    *(undefined4 *)(pCVar1 + -4) = 0xbf800000;
    *(undefined4 *)pCVar1 = 0xbf800000;
    *(undefined4 *)(pCVar1 + 4) = 0xbf800000;
    pCVar1 = pCVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  return;
}

static void* ap_0053b9f0_orig = nullptr;
static uint32_t BEA_THISCALL sh_0053b9f0(uint32_t a0)
{
    typedef uint32_t (BEA_THISCALL* Fn)(uint32_t a0);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<uint32_t (BEA_THISCALL*)(uint32_t a0)>(ap_0053b9f0_orig)(a0);
    static char* copybuf_ = nullptr;
    char* copy = bea_shadow::guarded_buffer(copybuf_);
    const size_t kCopy = 0x200;   // largest this-relative displacement + slack
    const void* self = bea_shadow::bits<const void*>(a0);
    size_t n = bea_shadow::readable_span(self, kCopy);
    memcpy(copy, self, n);
    g_bea_shadow_current = 0x0053b9f0;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    ap_0053b9f0((CClouds *)copy);
    uint32_t r_orig = reinterpret_cast<Fn>(ap_0053b9f0_orig)(a0);
    bool mm = false; char detail[96] = "";
    { int d = bea_shadow::first_diff(copy, self, n);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "this differs at +0x%x", d); } }
    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }
    g_bea_shadow_current = 0;
    bea_shadow_record(0x0053b9f0, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x0053b9f0, sh_0053b9f0, ap_0053b9f0_orig));
