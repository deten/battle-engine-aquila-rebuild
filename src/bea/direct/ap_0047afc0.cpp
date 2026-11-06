// auto-ported from 0047afc0_vslot3.c (CGillMHeadAI::vslot3, 197 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGillMHeadAI;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
typedef uint32_t (BEA_THISCALL* FUN_004fb650_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb650_t> FUN_004fb650 = {(FUN_004fb650_t)0x004fb650};
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb840_t> FUN_004fb840 = {(FUN_004fb840_t)0x004fb840};

static float10 BEA_THISCALL ap_0047afc0(CGillMHeadAI * this_)
{
  void *this_00;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x14);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0xc);
  local_14 = 0.5;
  bea_vcall<uint32_t>(this_, 0x10);
  if ((*(int *)(this_ + 0xc) != 0) && (*(float *)((int)*(void **)(this_ + 8) + 0x24) < DAT_006fbdfc))
  {
    FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)(this_ + 0xc)));
    bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x158);
    bea_vcall<uint32_t>(*(int **)(this_ + 0xc), 0x168, this_ + 0x34);
    this_00 = *(void **)(this_ + 8);
    fStack_c = *(float *)((int)this_00 + 0x60) * 100.0f + *(float *)((int)this_00 + 0x24);
    fStack_10 = *(float *)((int)this_00 + 0x50) * 100.0f + *(float *)((int)this_00 + 0x20);
    local_14 = *(float *)((int)this_00 + 0x40) * 100.0f + *(float *)((int)this_00 + 0x1c);
    FUN_004fb650(bea_arg(this_00), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(&local_14));
    bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x128);
    return (float10)0.0f;
  }
  return (float10)local_14;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047afc0, ap_0047afc0));
