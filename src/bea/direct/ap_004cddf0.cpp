// auto-ported from 004cddf0_FUN_004cddf0.c (FUN_004cddf0, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef uint32_t (BEA_THISCALL* FUN_0046dc00_t)(uint32_t);
static const bea_guard<FUN_0046dc00_t> FUN_0046dc00 = {(FUN_0046dc00_t)0x0046dc00};
typedef uint32_t (BEA_THISCALL* FUN_004bb8c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bb8c0_t> FUN_004bb8c0 = {(FUN_004bb8c0_t)0x004bb8c0};
typedef uint32_t (BEA_THISCALL* FUN_00517f10_t)(uint32_t);
static const bea_guard<FUN_00517f10_t> FUN_00517f10 = {(FUN_00517f10_t)0x00517f10};

static void BEA_CDECL ap_004cddf0(undefined4 param_1)
{
  FUN_00517f10(bea_arg(&DAT_00896988));
  if ((char)param_1 != '\0') {
    if (DAT_00662dcc != 0) {
      FUN_004bb8c0(bea_arg(&DAT_00889a48), bea_arg(0), bea_arg(0));
    }
    return;
  }
  FUN_0046dc00(bea_arg(&DAT_008a9a98));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cddf0, ap_004cddf0));
