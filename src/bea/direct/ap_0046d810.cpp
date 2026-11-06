// auto-ported from 0046d810_FUN_0046d810.c (FUN_0046d810, 117 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x130: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00629038 GLOBAL_AT(int, 0x00629038)
#define s_cutscenes__02d_small_0062c098 ((char*)0x0062c098)
#define s_cutscenes__02d_0062c0c4 ((char*)0x0062c0c4)
#define s_data_video__s_vid_0062c0b0 ((char*)0x0062c0b0)
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};

static uint32_t BEA_CDECL ap_0046d810(char *param_1, int param_2)
{
  int iVar1;
  alignas(16) uint8_t bea_frame_[0x130] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_12c)[300] = *reinterpret_cast<undefined1 (*)[300]>(bea_frame_ + 0x130 - 0x12c);
  FUN_0055de9b(param_1,s_cutscenes__02d_0062c0c4,param_2);
  FUN_0055de9b(local_12c,s_data_video__s_vid_0062c0b0,param_1);
  iVar1 = FUN_0055e490(bea_arg(local_12c), bea_arg(&DAT_00629038));
  if (iVar1 != 0) {
    return FUN_0055e4a3(bea_arg(iVar1));
  }
  return FUN_0055de9b(param_1,s_cutscenes__02d_small_0062c098,param_2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046d810, ap_0046d810));
