// auto-ported from 0048de30_FUN_0048de30.c (FUN_0048de30, 82 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062d804 GLOBAL_AT(int, 0x0062d804)
#define DAT_0062d800 GLOBAL_AT(int, 0x0062d800)
#define DAT_0062d7f0 GLOBAL_AT(int, 0x0062d7f0)
#define DAT_0062d7e8 GLOBAL_AT(undefined, 0x0062d7e8)
#define s_right_0062d7f8 ((char*)0x0062d7f8)
#define s_cubes_cube__2d__s_tga_0062d7d0 ((char*)0x0062d7d0)
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_CDECL ap_0048de30(undefined4 param_1, uint param_2, int param_3)
{
  char *local_14 [4];
  undefined *local_4;
  local_14[0] = (char*)&DAT_0062d804;
  local_14[1] = (char*)&DAT_0062d800;
  local_14[2] = s_right_0062d7f8;
  local_14[3] = (char*)&DAT_0062d7f0;
  local_4 = &DAT_0062d7e8;
  return FUN_0055de9b(param_1,s_cubes_cube__2d__s_tga_0062d7d0,param_2 & 0xff,local_14[param_3]);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048de30, ap_0048de30));
