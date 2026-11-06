// auto-ported from 004f3c50_vslot18.c (CThing::vslot18, 33 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall, no stack args (plain ret at 0x4f3c70), void; 0x47eb80 is fastcall (ECX=0x6fadc8, EDX=this+0x1c) and its float10 is stored rounded to this+0x24 (fstp at 0x4f3c63); the original TAIL-JUMPS to 0x40c640 (jmp at 0x4f3c6b) with ECX = [this+0x30] and no stack argument (Ghidra's in_stack_00000004 does not exist; 0x40c640 is a bare `ret`), kept as a plain call/return
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef void (BEA_THISCALL* FUN_0040c640_t)(void *);
static const bea_guard<FUN_0040c640_t> FUN_0040c640 = {(FUN_0040c640_t)0x0040c640};

static void BEA_THISCALL ap_004f3c50(void * this_)
{
  char *s = (char *)this_;
  float10 h = FUN_0047eb80((uint32_t)0x006fadc8, (uint32_t)(uintptr_t)(s + 0x1c));
  void *r = *(void **)(s + 0x30);
  *(float *)(s + 0x24) = (float)h;
  if (r != (void *)0x0) {
    FUN_0040c640(r);                     // tail jump in the original
    return;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3c50, ap_004f3c50));
