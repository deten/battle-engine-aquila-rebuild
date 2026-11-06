// auto-ported from 004febe0_vslot6.c (CUnitAI::vslot6, 123 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CUnitAI;
#define DAT_0066ffc8 GLOBAL_AT(int, 0x0066ffc8)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define s__s_CANT_start_fighting_cos_it_al_00633c80 ((char*)0x00633c80)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_CDECL* FUN_00472240_t)(int, undefined4, ...);
static const bea_guard<FUN_00472240_t> FUN_00472240 = {(FUN_00472240_t)0x00472240};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_THISCALL ap_004febe0(CUnitAI * this_)
{
  char *v0;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_64)[100] = *reinterpret_cast<undefined1 (*)[100]>(bea_frame_ + 0x70 - 0x64);
  if (*(int *)(this_ + 0x20) == 1) {
    v0 = (char *)bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x1c);
    FUN_0055de9b(auStack_64,s__s_CANT_start_fighting_cos_it_al_00633c80,v0);
    FUN_00472240(&DAT_0066ffc8,auStack_64);
    FUN_00441740(&DAT_0066f580,auStack_64);
    return 0;
  }
  *(undefined4 *)(this_ + 0x20) = 1;
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&DAT_00672fd0), bea_arg(0), bea_arg(0), bea_arg(0));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004febe0, ap_004febe0));
