// auto-ported from 00551cc0_FUN_00551cc0.c (FUN_00551cc0, 123 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define s_screenfx_zoomlines_tga_00652218 ((char*)0x00652218)
#define s_screenfx_reticle_tga_00652200 ((char*)0x00652200)
typedef uint32_t (BEA_THISCALL* FUN_00500540_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500540_t> FUN_00500540 = {(FUN_00500540_t)0x00500540};
typedef uint32_t (BEA_THISCALL* FUN_00500590_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500590_t> FUN_00500590 = {(FUN_00500590_t)0x00500590};
typedef uint32_t (BEA_CDECL* FUN_00501320_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00501320_t> FUN_00501320 = {(FUN_00501320_t)0x00501320};

static uint32_t BEA_THISCALL ap_00551cc0(void * this_)
{
  void *pvVar1;
  pvVar1 = (void *)FUN_00501320(bea_arg(s_screenfx_zoomlines_tga_00652218), bea_arg(1));
  *(void **)this_ = pvVar1;
  FUN_00500540(bea_arg(pvVar1), bea_arg(0x144), bea_arg(0x208), bea_arg(0x1c), bea_arg(4), bea_arg(0));
  FUN_00500590(bea_arg(*(void **)this_), bea_arg(0x65), bea_arg(0x208), bea_arg(2), bea_arg(0));
  pvVar1 = (void *)FUN_00501320(bea_arg(s_screenfx_reticle_tga_00652200), bea_arg(1));
  *(void **)((int)this_ + 4) = pvVar1;
  FUN_00500540(bea_arg(pvVar1), bea_arg(0x144), bea_arg(0x208), bea_arg(0x1c), bea_arg(4), bea_arg(0));
  return FUN_00500590(bea_arg(*(void **)((int)this_ + 4)), bea_arg(0x65), bea_arg(0x208), bea_arg(2), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00551cc0, ap_00551cc0));
