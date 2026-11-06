// auto-ported from 004f5c90_FUN_004f5c90.c (FUN_004f5c90, 49 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x190: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s__s__d_00633a28 ((char*)0x00633a28)
typedef char * (BEA_CDECL* FUN_004f52b0_t)(uint32_t);
static const bea_guard<FUN_004f52b0_t> FUN_004f52b0 = {(FUN_004f52b0_t)0x004f52b0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_STDCALL ap_004f5c90(undefined4 param_1, int param_2)
{
  char *v0;
  alignas(16) uint8_t bea_frame_[0x190] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_190)[400] = *reinterpret_cast<undefined1 (*)[400]>(bea_frame_ + 0x190 - 0x190);
  v0 = (char *)FUN_004f52b0(bea_arg(param_1));
  return FUN_0055de9b(local_190,s__s__d_00633a28,v0,param_2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f5c90, ap_004f5c90));
