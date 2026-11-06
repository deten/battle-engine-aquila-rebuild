// auto-ported from 0052c430_FUN_0052c430.c (FUN_0052c430, 189 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0089c04c GLOBAL_AT(undefined4*, 0x0089c04c)
#define s_d3d_refcount__d_0064c3c4 ((char*)0x0064c3c4)
#define s_d3ddev_refcount__d_0064c3d8 ((char*)0x0064c3d8)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_0052c430(void * this_)
{
  int v0;
  int v0_00;
  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  *(undefined4 *)((int)this_ + 0x32e48) = 0;
  *(undefined4 *)((int)this_ + 0x32e4c) = 0;
  if (*(int *)((int)this_ + 0x32ea0) != 0) {
    bea_vcall<uint32_t>(this_, 0x28, 0);
    if (DAT_0089c04c != (int *)0x0) {
      bea_vcall<uint32_t>(DAT_0089c04c, 0x8, DAT_0089c04c);
      DAT_0089c04c = (int *)0x0;
    }
    v0 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x8, *(int **)((int)this_ + 0x32ea0));
    v0_00 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x8, *(int **)((int)this_ + 0x32e9c));
    FUN_0055de9b(auStack_100,s_d3ddev_refcount__d_0064c3d8,v0);
    CRenderThing__vslot3(auStack_100);
    FUN_0055de9b(auStack_100,s_d3d_refcount__d_0064c3c4,v0_00);
    CRenderThing__vslot3(auStack_100);
    *(undefined4 *)((int)this_ + 0x32ea0) = 0;
    *(undefined4 *)((int)this_ + 0x32e9c) = 0;
  }
  return bea_vcall<uint32_t>(this_, 0x1c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052c430, ap_0052c430));
