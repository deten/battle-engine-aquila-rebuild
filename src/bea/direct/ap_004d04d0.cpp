// auto-ported from 004d04d0_FUN_004d04d0.c (FUN_004d04d0, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0082b490 GLOBAL_AT(int, 0x0082b490)
#define s_FrontEnd_v2_FE_Blank_tga_00629f68 ((char*)0x00629f68)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static void BEA_CDECL ap_004d04d0(void)
{
  if (DAT_0082b490 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_0082b490 + 8)));
    DAT_0082b490 = 0;
  }
  DAT_0082b490 = FUN_004f27f0(s_FrontEnd_v2_FE_Blank_tga_00629f68,4,0,1,0,1);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d04d0, ap_004d04d0));
