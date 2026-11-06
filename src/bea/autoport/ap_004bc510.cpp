// auto-ported from 004bc510_FUN_004bc510.c (FUN_004bc510, 448 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)


static undefined4 BEA_THISCALL ap_004bc510(void * this_, uint param_1, int param_2, uint param_3, float param_4)
{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_c;
  
  iVar2 = param_2;
  uVar4 = param_1;
  if ((((((int)param_1 < 0) || (0xff < (int)param_1)) || (param_2 < 0)) ||
      ((0xff < param_2 || ((int)param_3 < 0)))) ||
     ((0xff < (int)param_3 || (((int)param_4 < 0 || (0xff < (int)param_4)))))) {
    return 1;
  }
  if ((int)param_3 < (int)param_1) {
    param_1 = param_3;
    param_3 = uVar4;
  }
  iVar6 = (int)param_4;
  if ((int)param_4 < param_2) {
    param_2 = (int)param_4;
    iVar6 = iVar2;
  }
  iVar2 = param_3 - param_1;
  iVar3 = iVar6 - param_2;
  if ((iVar2 != 0) || (iVar3 != 0)) {
    param_4 = 0.0;
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = -iVar2;
    }
    iVar7 = iVar3;
    if (iVar3 < 0) {
      iVar7 = -iVar3;
    }
    if (iVar7 < iVar5) {
      fVar1 = (float)param_2;
      if (iVar2 != 0) {
        param_4 = (float)iVar3 / (float)iVar2;
      }
      for (; BEA_LOOP_GUARD(((int)param_1 < (int)(param_3 + 1))); param_1 = param_1 + 1) {
        local_c = (uint)(longlong)ROUND(fVar1);
        uVar4 = param_1 & 0x80000007;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
        }
        if ((*(byte *)(((int)param_1 >> 3) * 0x100 + local_c + (int)this_) &
            (byte)(1 << ((byte)uVar4 & 0x1f))) == 0) {
          return 1;
        }
        if ((param_1 == param_3) && (local_c == iVar6)) {
          return 0;
        }
        fVar1 = fVar1 + param_4;
      }
    }
    else {
      fVar1 = (float)(int)param_1;
      if (iVar3 != 0) {
        param_4 = (float)iVar2 / (float)iVar3;
      }
      if (param_2 < iVar6 + 1) {
        while (BEA_LOOP_GUARD(((local_c = (uint)(longlong)ROUND(fVar1), local_c != param_3 || (param_2 != iVar6))))) {
          uVar4 = local_c & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          if ((*(byte *)(((int)local_c >> 3) * 0x100 + param_2 + (int)this_) &
              (byte)(1 << ((byte)uVar4 & 0x1f))) == 0) {
            return 1;
          }
          fVar1 = fVar1 + param_4;
          param_2 = param_2 + 1;
          if (iVar6 + 1 <= param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

static void* ap_004bc510_orig = nullptr;
static undefined4 BEA_THISCALL sh_004bc510(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    typedef undefined4 (BEA_THISCALL* Fn)(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<undefined4 (BEA_THISCALL*)(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)>(ap_004bc510_orig)(a0, a1, a2, a3, a4);
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
    g_bea_shadow_current = 0x004bc510;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    undefined4 r_port = ap_004bc510((void *)copy, bea_shadow::bits<uint>(p1), bea_shadow::bits<int>(p2), bea_shadow::bits<uint>(p3), bea_shadow::bits<float>(p4));
    undefined4 r_orig = reinterpret_cast<Fn>(ap_004bc510_orig)(a0, a1, a2, a3, a4);
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
    bea_shadow_record(0x004bc510, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x004bc510, sh_004bc510, ap_004bc510_orig));
