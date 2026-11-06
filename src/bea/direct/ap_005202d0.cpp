// auto-ported from 005202d0_vslot2.c (CFEPVirtualKeyboard::vslot2, 149 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a1f8c GLOBAL_AT(int, 0x008a1f8c)
#define DAT_00889008 GLOBAL_AT(int, 0x00889008)
#define DAT_0051feb0 GLOBAL_AT(int, 0x0051feb0)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_008a9694 GLOBAL_AT(int, 0x008a9694)
typedef undefined1 (BEA_CDECL* CMovieCamera__vslot7_t)(void);
static const bea_guard<CMovieCamera__vslot7_t> CMovieCamera__vslot7 = {(CMovieCamera__vslot7_t)0x0041a200};
typedef uint32_t (BEA_CDECL* FUN_00464b30_t)(uint32_t);
static const bea_guard<FUN_00464b30_t> FUN_00464b30 = {(FUN_00464b30_t)0x00464b30};
typedef uint32_t (BEA_THISCALL* FUN_005135f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005135f0_t> FUN_005135f0 = {(FUN_005135f0_t)0x005135f0};
typedef undefined4 (BEA_STDCALL* FUN_00514960_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514960_t> FUN_00514960 = {(FUN_00514960_t)0x00514960};
typedef uint32_t (BEA_THISCALL* FUN_0051ad30_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0051ad30_t> FUN_0051ad30 = {(FUN_0051ad30_t)0x0051ad30};

static void BEA_STDCALL ap_005202d0(int param_1)
{
  int iVar1;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_4)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x10 - 0x4);
  iVar1 = param_1;
  if (param_1 != 3) {
    FUN_0051ad30(bea_arg(&DAT_008a1f8c), bea_arg(param_1));
  }
  if (iVar1 == 0) {
    if (DAT_00889008 != &DAT_0051feb0) {
      FUN_005135f0(bea_arg(&DAT_00855bb0), bea_arg(&DAT_0051feb0));
    }
    if (DAT_00677614 == 0) {
      CMovieCamera__vslot7();
      FUN_00514960(bea_arg(DAT_008a9694), bea_arg(&param_1), bea_arg(local_4), bea_arg(0), bea_arg(0));
      if (param_1 == 0) {
        FUN_00464b30(bea_arg(0x3c));
        return;
      }
    }
  }
  else if (DAT_00889008 == &DAT_0051feb0) {
    FUN_005135f0(bea_arg(&DAT_00855bb0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005202d0, ap_005202d0));
