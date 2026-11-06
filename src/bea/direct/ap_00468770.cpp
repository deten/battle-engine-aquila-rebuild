// auto-ported from 00468770_FUN_00468770.c (FUN_00468770, 97 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00662b2c GLOBAL_AT(char, 0x00662b2c)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define s_Front_End_Back_00629e48 ((char*)0x00629e48)
#define s_Front_End_Select_00629e34 ((char*)0x00629e34)
#define s_Front_End_Move_00629e24 ((char*)0x00629e24)
typedef undefined4 (BEA_THISCALL* FUN_004e1910_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1910_t> FUN_004e1910 = {(FUN_004e1910_t)0x004e1910};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};

static uint32_t BEA_CDECL ap_00468770(int param_1)
{
  char *pcVar1;
  undefined4 uVar2;
  if (param_1 == 0) {
    pcVar1 = s_Front_End_Move_00629e24;
  }
  else if (param_1 == 1) {
    pcVar1 = s_Front_End_Select_00629e34;
  }
  else if (param_1 == 2) {
    pcVar1 = s_Front_End_Back_00629e48;
  }
  else {
    pcVar1 = &DAT_00662b2c;
  }
  uVar2 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(pcVar1), bea_arg(0));
  return FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(uVar2), bea_arg(0), bea_arg(0x3f800000), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00468770, ap_00468770));
