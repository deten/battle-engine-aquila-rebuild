// auto-ported from 0048dec0_FUN_0048dec0.c (FUN_0048dec0, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00662dd4 GLOBAL_AT(int, 0x00662dd4)
#define DAT_0067a7d0 GLOBAL_AT(int, 0x0067a7d0)
#define s_mixers_detail__2d_tga_0062d80c ((char*)0x0062d80c)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_CDECL ap_0048dec0(int param_1)
{
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)

  undefined1 (&local_18)[24] = *reinterpret_cast<undefined1 (*)[24]>(bea_frame_ + 0x20 - 0x18);
  FUN_0055de9b(local_18,s_mixers_detail__2d_tga_0062d80c,param_1);
  if (DAT_00662dd4 != 0) {
    DAT_0067a7d0 = FUN_004f27f0(local_18,5,0,0xffffffff,1,1);
    return;
  }
  DAT_0067a7d0 = FUN_004f27f0(local_18,0,0,0xffffffff,1,1);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048dec0, ap_0048dec0));
