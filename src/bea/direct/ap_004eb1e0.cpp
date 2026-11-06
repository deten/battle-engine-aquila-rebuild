// auto-ported from 004eb1e0_FUN_004eb1e0.c (FUN_004eb1e0, 1981 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00854e6c GLOBAL_AT(char, 0x00854e6c)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
#define DAT_00888b04 GLOBAL_AT(int, 0x00888b04)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
typedef uint32_t (BEA_STDCALL* FUN_004eba30_t)(uint32_t);
static const bea_guard<FUN_004eba30_t> FUN_004eba30 = {(FUN_004eba30_t)0x004eba30};
typedef uint32_t (BEA_CDECL* FUN_00513600_t)(void);
static const bea_guard<FUN_00513600_t> FUN_00513600 = {(FUN_00513600_t)0x00513600};
typedef uint32_t (BEA_STDCALL* FUN_00513870_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513870_t> FUN_00513870 = {(FUN_00513870_t)0x00513870};
typedef uint32_t (BEA_STDCALL* FUN_005138b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005138b0_t> FUN_005138b0 = {(FUN_005138b0_t)0x005138b0};
typedef uint32_t (BEA_STDCALL* FUN_00513c20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513c20_t> FUN_00513c20 = {(FUN_00513c20_t)0x00513c20};
typedef undefined4 (BEA_THISCALL* FUN_00513ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513ca0_t> FUN_00513ca0 = {(FUN_00513ca0_t)0x00513ca0};
typedef uint32_t (BEA_STDCALL* FUN_00513dd0_t)(uint32_t);
static const bea_guard<FUN_00513dd0_t> FUN_00513dd0 = {(FUN_00513dd0_t)0x00513dd0};
typedef uint32_t (BEA_STDCALL* FUN_00514030_t)(uint32_t);
static const bea_guard<FUN_00514030_t> FUN_00514030 = {(FUN_00514030_t)0x00514030};
typedef uint32_t (BEA_CDECL* FUN_00551420_t)(uint32_t);
static const bea_guard<FUN_00551420_t> FUN_00551420 = {(FUN_00551420_t)0x00551420};
typedef uint32_t (BEA_CDECL* FUN_00551460_t)(uint32_t);
static const bea_guard<FUN_00551460_t> FUN_00551460 = {(FUN_00551460_t)0x00551460};
typedef uint32_t (BEA_THISCALL* FUN_005514a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005514a0_t> FUN_005514a0 = {(FUN_005514a0_t)0x005514a0};

static uint32_t BEA_THISCALL ap_004eb1e0(void * this_)
{
  float fVar1;
  float local_c;
  FUN_00513600();
  if (DAT_00854e6c != '\0') {
    FUN_00513ca0(bea_arg(&DAT_00855bb0), bea_arg(0));
  }
  FUN_00513c20(bea_arg(0x1b), bea_arg(1));
  FUN_00513c20(bea_arg(0x13), bea_arg(5));
  FUN_00513c20(bea_arg(0x14), bea_arg(6));
  FUN_00513c20(bea_arg(0xf), bea_arg(1));
  FUN_00513dd0(bea_arg(8));
  FUN_00513c20(bea_arg(0x19), bea_arg(7));
  FUN_00513c20(bea_arg(8), bea_arg(3));
  FUN_00513c20(bea_arg(0x16), bea_arg(3));
  FUN_00513c20(bea_arg(0xe), bea_arg(1));
  FUN_00513c20(bea_arg(7), bea_arg(1));
  FUN_00513c20(bea_arg(0x17), bea_arg(4));
  FUN_00513c20(bea_arg(0xa8), bea_arg(0xf));
  FUN_00513c20(bea_arg(0x34), bea_arg(0));
  FUN_00513c20(bea_arg(0x97), bea_arg(0));
  FUN_00513c20(bea_arg(0x1c), bea_arg((uint)(DAT_0089d680 == '\0')));
  FUN_00513c20(bea_arg(0x1d), bea_arg(0));
  FUN_00514030(bea_arg(1));
  FUN_00513c20(bea_arg(0x89), bea_arg(1));
  FUN_00513c20(bea_arg(0x1a), bea_arg(1));
  FUN_00513c20(bea_arg(9), bea_arg(2));
  FUN_00513c20(bea_arg(0x91), bea_arg(1));
  FUN_00513c20(bea_arg(0x92), bea_arg(0));
  FUN_00513c20(bea_arg(0x93), bea_arg(1));
  FUN_00513c20(bea_arg(0x94), bea_arg(0));
  FUN_00513c20(bea_arg(0x8f), bea_arg(0));
  FUN_00513c20(bea_arg(0x8b), bea_arg(0xf0ccface));
  FUN_00513c20(bea_arg(0x22), bea_arg(0xf0ccface));
  FUN_00513c20(bea_arg(0x26), bea_arg(0xf0ccface));
  FUN_00513c20(bea_arg(0x24), bea_arg(0xf0ccface));
  FUN_00513c20(bea_arg(0x25), bea_arg(0xf0ccface));
  FUN_00513c20(bea_arg(0x3c), bea_arg(0xf0ccface));
  FUN_00513c20(bea_arg(0x9c), bea_arg(0));
  FUN_00513c20(bea_arg(0x9d), bea_arg(0));
  if (1.0f < bea_fcast<float>(DAT_00888b04)) {
    fVar1 = bea_fcast<float>(DAT_00888b04);
    if (8.0f <= bea_fcast<float>(DAT_00888b04)) {
      fVar1 = 8.0f;
    }
    if (32.0f <= bea_fcast<float>(DAT_00888b04)) {
      local_c = 32.0f;
    }
    else {
      local_c = bea_fcast<float>(DAT_00888b04);
    }
    FUN_00513c20(bea_arg(0x9a), bea_arg(fVar1));
    FUN_00513c20(bea_arg(0x9b), bea_arg(fVar1));
    FUN_00513c20(bea_arg(0x9e), bea_arg(0));
    FUN_00513c20(bea_arg(0x9f), bea_arg(0));
    FUN_00513c20(bea_arg(0xa0), bea_arg(0x3f800000));
    FUN_00513c20(bea_arg(0xa6), bea_arg(local_c));
  }
  FUN_00513c20(bea_arg(0x37), bea_arg(1));
  FUN_00513c20(bea_arg(0x34), bea_arg(0));
  FUN_00513c20(bea_arg(0x38), bea_arg(1));
  FUN_00513c20(bea_arg(0x39), bea_arg(0));
  FUN_005514a0(bea_arg(&DAT_009c65c0), bea_arg(0));
  FUN_00513c20(bea_arg(0x88), bea_arg(1));
  FUN_004eba30(bea_arg(1));
  FUN_00513c20(bea_arg(0xa7), bea_arg(0));
  FUN_005138b0(bea_arg(0), bea_arg(6), bea_arg(2));
  FUN_005138b0(bea_arg(0), bea_arg(5), bea_arg(2));
  FUN_00551460(bea_arg(0));
  FUN_005138b0(bea_arg(0), bea_arg(10), bea_arg(1));
  FUN_005138b0(bea_arg(0), bea_arg(1), bea_arg(1));
  FUN_005138b0(bea_arg(0), bea_arg(2), bea_arg(1));
  FUN_00513870(bea_arg(0), bea_arg(2), bea_arg(2));
  FUN_00513870(bea_arg(0), bea_arg(3), bea_arg(0));
  FUN_00513870(bea_arg(0), bea_arg(5), bea_arg(2));
  FUN_00513870(bea_arg(0), bea_arg(6), bea_arg(0));
  FUN_00513870(bea_arg(0), bea_arg(1), bea_arg(4));
  FUN_00513870(bea_arg(0), bea_arg(4), bea_arg(4));
  FUN_00513870(bea_arg(0), bea_arg(0xb), bea_arg(0));
  FUN_00513870(bea_arg(0), bea_arg(0x18), bea_arg(0));
  FUN_005138b0(bea_arg(0), bea_arg(8), bea_arg(0));
  FUN_005138b0(bea_arg(0), bea_arg(4), bea_arg(0xffffffff));
  FUN_005138b0(bea_arg(1), bea_arg(6), bea_arg(2));
  FUN_005138b0(bea_arg(1), bea_arg(5), bea_arg(2));
  FUN_00551420(bea_arg(1));
  FUN_005138b0(bea_arg(1), bea_arg(10), bea_arg(1));
  FUN_005138b0(bea_arg(1), bea_arg(1), bea_arg(1));
  FUN_005138b0(bea_arg(1), bea_arg(2), bea_arg(1));
  FUN_00513870(bea_arg(1), bea_arg(2), bea_arg(2));
  FUN_00513870(bea_arg(1), bea_arg(3), bea_arg(1));
  FUN_00513870(bea_arg(1), bea_arg(5), bea_arg(2));
  FUN_00513870(bea_arg(1), bea_arg(6), bea_arg(1));
  FUN_00513870(bea_arg(1), bea_arg(1), bea_arg(1));
  FUN_00513870(bea_arg(1), bea_arg(4), bea_arg(1));
  FUN_00513870(bea_arg(1), bea_arg(0xb), bea_arg(1));
  FUN_00513870(bea_arg(1), bea_arg(0x18), bea_arg(0));
  FUN_005138b0(bea_arg(1), bea_arg(8), bea_arg(0));
  FUN_00513870(bea_arg(1), bea_arg(0x1a), bea_arg(3));
  FUN_005138b0(bea_arg(1), bea_arg(4), bea_arg(0xffffffff));
  FUN_005138b0(bea_arg(2), bea_arg(6), bea_arg(2));
  FUN_005138b0(bea_arg(2), bea_arg(5), bea_arg(2));
  FUN_00551420(bea_arg(2));
  FUN_005138b0(bea_arg(2), bea_arg(10), bea_arg(1));
  FUN_005138b0(bea_arg(2), bea_arg(1), bea_arg(1));
  FUN_005138b0(bea_arg(2), bea_arg(2), bea_arg(1));
  FUN_00513870(bea_arg(2), bea_arg(2), bea_arg(2));
  FUN_00513870(bea_arg(2), bea_arg(3), bea_arg(1));
  FUN_00513870(bea_arg(2), bea_arg(5), bea_arg(2));
  FUN_00513870(bea_arg(2), bea_arg(6), bea_arg(1));
  FUN_00513870(bea_arg(2), bea_arg(1), bea_arg(1));
  FUN_00513870(bea_arg(2), bea_arg(4), bea_arg(1));
  FUN_00513870(bea_arg(2), bea_arg(0xb), bea_arg(2));
  FUN_00513870(bea_arg(2), bea_arg(0x18), bea_arg(0));
  FUN_005138b0(bea_arg(2), bea_arg(8), bea_arg(0));
  FUN_00513870(bea_arg(2), bea_arg(0x1a), bea_arg(3));
  FUN_005138b0(bea_arg(2), bea_arg(4), bea_arg(0xffffffff));
  FUN_005138b0(bea_arg(3), bea_arg(6), bea_arg(2));
  FUN_005138b0(bea_arg(3), bea_arg(5), bea_arg(2));
  FUN_00551420(bea_arg(3));
  FUN_005138b0(bea_arg(3), bea_arg(10), bea_arg(1));
  FUN_005138b0(bea_arg(3), bea_arg(1), bea_arg(1));
  FUN_005138b0(bea_arg(3), bea_arg(2), bea_arg(1));
  FUN_00513870(bea_arg(3), bea_arg(2), bea_arg(2));
  FUN_00513870(bea_arg(3), bea_arg(3), bea_arg(1));
  FUN_00513870(bea_arg(3), bea_arg(5), bea_arg(2));
  FUN_00513870(bea_arg(3), bea_arg(6), bea_arg(1));
  FUN_00513870(bea_arg(3), bea_arg(1), bea_arg(1));
  FUN_00513870(bea_arg(3), bea_arg(4), bea_arg(1));
  FUN_00513870(bea_arg(3), bea_arg(0xb), bea_arg(3));
  FUN_00513870(bea_arg(3), bea_arg(0x18), bea_arg(0));
  FUN_005138b0(bea_arg(3), bea_arg(8), bea_arg(0));
  FUN_00513870(bea_arg(3), bea_arg(0x1a), bea_arg(3));
  return FUN_005138b0(bea_arg(3), bea_arg(4), bea_arg(0xffffffff));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004eb1e0, ap_004eb1e0));
