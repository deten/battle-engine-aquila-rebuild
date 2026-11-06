// auto-ported from 0042d810_FUN_0042d810.c (FUN_0042d810, 136 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_0066e94e GLOBAL_AT(char, 0x0066e94e)
#define DAT_0066e94c GLOBAL_AT(char, 0x0066e94c)
#define DAT_006630d0 GLOBAL_AT(int, 0x006630d0)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define _DAT_0066e948 GLOBAL_AT(float, 0x0066e948)
#define s_Inactivity_timeout_hit__last__f__0062555c ((char*)0x0062555c)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static undefined4 BEA_CDECL ap_0042d810(void)
{
  float10 fVar1;
  
  if ((((DAT_0083d448 != 0) || (DAT_0066e94e != '\0')) && (DAT_0066e94c == '\0')) &&
     (0 < DAT_006630d0)) {
    fVar1 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    if ((float10)DAT_006630d0 < (fVar1 - (float10)_DAT_0066e948) * (float10)1000.0f) {
      FUN_005159e0(bea_arg(&DAT_0088a0a8));
      CRenderThing__vslot3(s_Inactivity_timeout_hit__last__f__0062555c);
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042d810, ap_0042d810));
