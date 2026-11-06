// auto-ported from 00440f80_FUN_00440f80.c (FUN_00440f80, 125 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)


static void BEA_THISCALL ap_00440f80(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *(ushort *)((int)this_ + (short)param_1 * 2 + 0x13884);
  while (BEA_LOOP_GUARD((uVar2 != 0))) {
    puVar1 = (ushort *)((int)this_ + (uint)uVar2 * 8 + 4);
    if ((*(char *)((int)this_ + (uint)uVar2 * 8 + 8) == (char)param_2) &&
       (*(char *)((int)puVar1 + 5) == (char)param_3)) {
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      if ((uVar2 & 0x8000) == 0) {
        *(ushort *)((int)this_ + (uint)uVar2 * 8 + 6) = uVar3;
      }
      else {
        *(ushort *)((int)this_ + (uVar2 & 0xffff7fff) * 2 + 0x13884) = uVar3;
      }
      *(ushort *)((int)this_ + (uint)uVar3 * 8 + 4) = uVar2;
    }
    uVar2 = puVar1[1];
  }
  return;
}

static void* ap_00440f80_orig = nullptr;
static void BEA_THISCALL sh_00440f80(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    typedef void (BEA_THISCALL* Fn)(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<void (BEA_THISCALL*)(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)>(ap_00440f80_orig)(a0, a1, a2, a3);
    static char* copybuf_ = nullptr;
    char* copy = bea_shadow::guarded_buffer(copybuf_);
    const size_t kCopy = 0x13984;   // largest this-relative displacement + slack
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
    g_bea_shadow_current = 0x00440f80;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    ap_00440f80((void *)copy, bea_shadow::bits<undefined4>(p1), bea_shadow::bits<undefined4>(p2), bea_shadow::bits<undefined4>(p3));
    reinterpret_cast<Fn>(ap_00440f80_orig)(a0, a1, a2, a3);
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
    bea_shadow_record(0x00440f80, mm, detail);
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x00440f80, sh_00440f80, ap_00440f80_orig));
