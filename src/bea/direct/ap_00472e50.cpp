// auto-ported from 00472e50_FUN_00472e50.c (FUN_00472e50, 181 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0089ce84 GLOBAL_AT(int, 0x0089ce84)
#define s_meshtex_default_tga_00625498 ((char*)0x00625498)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};

static void BEA_THISCALL ap_00472e50(void * this_, undefined4 param_1, undefined4 param_2, float param_3, float param_4, undefined4 param_5)
{
  int iVar1;
  
  iVar1 = *(int *)((int)this_ + 8);
  if (iVar1 == 0) {
    if ((DAT_0089ce84 == 0) &&
       (DAT_0089ce84 = FUN_004f27f0(s_meshtex_default_tga_00625498,0,0,0xffffffff,1,1),
       DAT_0089ce84 == 0)) {
      return;
    }
    param_5 = 0xff000000;
    iVar1 = DAT_0089ce84;
  }
  FUN_00555be0(bea_arg(param_1), bea_arg(param_2), bea_arg(0x3a83126f), bea_arg(iVar1), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(param_5), bea_arg(param_3 / (float)*(int *)(iVar1 + 0xac)), bea_arg(param_4 / (float)(int)*(short *)(iVar1 + 0xb0)), bea_arg(0), bea_arg(1.0f / param_3 + 1.0f), bea_arg(0), bea_arg(1.0f / param_4 + 1.0f));
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00472e50.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
