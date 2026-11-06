// auto-ported from 00461d60_vslot2.c (CFEPLoadGame::vslot2, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPLoadGame;
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
typedef undefined1 (BEA_CDECL* CMovieCamera__vslot7_t)(void);
static const bea_guard<CMovieCamera__vslot7_t> CMovieCamera__vslot7 = {(CMovieCamera__vslot7_t)0x0041a200};
typedef uint32_t (BEA_THISCALL* FUN_00461e20_t)(uint32_t);
static const bea_guard<FUN_00461e20_t> FUN_00461e20 = {(FUN_00461e20_t)0x00461e20};

static void BEA_THISCALL ap_00461d60(CFEPLoadGame * this_, int param_1)
{
  if (param_1 != 3) {
    CMovieCamera__vslot7();
  }
  if ((param_1 == 0) && (DAT_00677614 == 0)) {
    FUN_00461e20(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00461d60, ap_00461d60));
