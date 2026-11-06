// auto-ported from 00523a70_FUN_00523a70.c (FUN_00523a70, 189 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0089bd98 GLOBAL_AT(int, 0x0089bd98)
#define DAT_0089ce84 GLOBAL_AT(int, 0x0089ce84)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)
#define DAT_00640054 GLOBAL_AT(int, 0x00640054)
#define s_mouse_tga_00640058 ((char*)0x00640058)
#define s_meshtex_default_tga_00625498 ((char*)0x00625498)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};

static uint32_t BEA_CDECL ap_00523a70(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
  if (DAT_0089bd98 == 0) {
    DAT_0089bd98 = FUN_004f27f0(s_mouse_tga_00640058,0,0,0xffffffff,1,1);
    if (DAT_0089bd98 == 0) {
      if (DAT_0089ce84 == 0) {
        DAT_0089ce84 = FUN_004f27f0(s_meshtex_default_tga_00625498,0,0,0xffffffff,1,1);
      }
      DAT_0089bd98 = DAT_0089ce84;
      *(int *)(DAT_0089ce84 + 0xa4) = *(int *)(DAT_0089ce84 + 0xa4) + 1;
    }
  }
  return FUN_00555be0(bea_arg((float)DAT_0089bda8), bea_arg((float)DAT_0089bda4), bea_arg(0x3a83126f), bea_arg(DAT_0089bd98), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(DAT_00640054 << 0x18 | 0xffffff), bea_arg(0x3e800000), bea_arg(0x3e800000), bea_arg(0), bea_arg(0x3f780000), bea_arg(0), bea_arg(0x3f780000));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00523a70, ap_00523a70));
