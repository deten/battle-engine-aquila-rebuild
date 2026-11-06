// auto-ported from 00460490_vslot1.c (CFEPE3LevelSelect::vslot1, 83 bytes) by tools/autoport.py
// @autoport-mode shadow
// @autoport-eax other (port returns void but the original leaves a value in EAX; review before promoting)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include "bea/shadow.h"
#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)

typedef char CFEPE3LevelSelect;
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)

static void BEA_THISCALL ap_00460490(CFEPE3LevelSelect * this_)
{
  int iVar1;
  CFEPE3LevelSelect *pCVar2;
  CFEPE3LevelSelect *pCVar3;
  int iVar4;
  
  *(undefined4 *)(this_ + 0x3468) = 0;
  *(undefined4 *)(this_ + 0x346c) = 0;
  iVar4 = 0;
  pCVar3 = this_ + 0xcc;
  do {
    iVar1 = 0;
    pCVar2 = pCVar3;
    do {
      if (*(int *)pCVar2 == DAT_0089d94c) {
        *(int *)(this_ + 0x3468) = iVar4;
        *(int *)(this_ + 0x346c) = iVar1;
        return;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = pCVar2 + 4;
    } while (BEA_LOOP_GUARD((iVar1 < 6)));
    iVar4 = iVar4 + 1;
    pCVar3 = pCVar3 + 0x18;
  } while (BEA_LOOP_GUARD((iVar4 < 0x32)));
  return;
}

static void* ap_00460490_orig = nullptr;
static uint32_t BEA_THISCALL sh_00460490(uint32_t a0)
{
    typedef uint32_t (BEA_THISCALL* Fn)(uint32_t a0);
    static unsigned calls_ = 0;
    if (++calls_ > 256 && (calls_ & 31) != 0) return reinterpret_cast<uint32_t (BEA_THISCALL*)(uint32_t a0)>(ap_00460490_orig)(a0);
    static char* copybuf_ = nullptr;
    char* copy = bea_shadow::guarded_buffer(copybuf_);
    const size_t kCopy = 0x356c;   // largest this-relative displacement + slack
    const void* self = bea_shadow::bits<const void*>(a0);
    size_t n = bea_shadow::readable_span(self, kCopy);
    memcpy(copy, self, n);
    g_bea_shadow_current = 0x00460490;
    g_bea_shadow_budget = bea_shadow::kLoopBudget;
    ap_00460490((CFEPE3LevelSelect *)copy);
    uint32_t r_orig = reinterpret_cast<Fn>(ap_00460490_orig)(a0);
    bool mm = false; char detail[96] = "";
    { int d = bea_shadow::first_diff(copy, self, n);
      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "this differs at +0x%x", d); } }
    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }
    g_bea_shadow_current = 0;
    bea_shadow_record(0x00460490, mm, detail);
    return r_orig;
}

// @autoport-registration
BEA_HOOKS(BEA_SHADOW_HOOK(0x00460490, sh_00460490, ap_00460490_orig));
