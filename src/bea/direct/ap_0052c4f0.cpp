// auto-ported from 0052c4f0_FUN_0052c4f0.c (FUN_0052c4f0, 544 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_0088907c GLOBAL_AT(char, 0x0088907c)
typedef uint32_t (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};

static int BEA_STDCALL ap_0052c4f0(int param_1, undefined4 param_2)
{
  if (param_1 < -0x7dfffff7) {
    if (param_1 == -0x7dfffff8) {
      FUN_0042d080(bea_arg(0), bea_arg(0xbd), bea_arg(0xffffffff));
      return -0x7dfffff8;
    }
    if (param_1 < -0x7dfffffb) {
      if (param_1 == -0x7dfffffc) {
        FUN_0042d080(bea_arg(0), bea_arg(0xb9), bea_arg(0xffffffff));
        return -0x7dfffffc;
      }
      if (param_1 == -0x7ff8fff2) {
        FUN_0042d080(bea_arg(0), bea_arg(0xc2), bea_arg(0xffffffff));
        return -0x7ff8fff2;
      }
      if (param_1 == -0x7dffffff) {
        FUN_0042d080(bea_arg(0), bea_arg(0xb7), bea_arg(0xffffffff));
        return -0x7dffffff;
      }
      if (param_1 == -0x7dfffffd) {
        if (DAT_0088907c != '\0') {
          FUN_0042d080(bea_arg(0), bea_arg(0xb8), bea_arg(0xffffffff));
          return -0x7dfffffd;
        }
        FUN_0042d080(bea_arg(0), bea_arg(0xc5), bea_arg(0xffffffff));
        return -0x7dfffffd;
      }
    }
    else {
      if (param_1 == -0x7dfffffb) {
        FUN_0042d080(bea_arg(0), bea_arg(0xba), bea_arg(0xffffffff));
        return -0x7dfffffb;
      }
      if (param_1 == -0x7dfffffa) {
        FUN_0042d080(bea_arg(0), bea_arg(0xbb), bea_arg(0xffffffff));
        return -0x7dfffffa;
      }
      if (param_1 == -0x7dfffff9) {
        FUN_0042d080(bea_arg(0), bea_arg(0xbc), bea_arg(0xffffffff));
        return -0x7dfffff9;
      }
    }
  }
  else if (param_1 < -0x7789fe83) {
    if (param_1 == -0x7789fe84) {
      FUN_0042d080(bea_arg(0), bea_arg(0xc3), bea_arg(0xffffffff));
      return -0x7789fe84;
    }
    switch(param_1) {
    case -0x7dfffff7:
      FUN_0042d080(bea_arg(0), bea_arg(0xbe), bea_arg(0xffffffff));
      return param_1;
    case -0x7dfffff6:
      FUN_0042d080(bea_arg(0), bea_arg(0xc1), bea_arg(0xffffffff));
      return param_1;
    case -0x7dfffff5:
      FUN_0042d080(bea_arg(0), bea_arg(0xbf), bea_arg(0xffffffff));
      return param_1;
    case -0x7dfffff4:
      FUN_0042d080(bea_arg(0), bea_arg(0xc0), bea_arg(0xffffffff));
      return param_1;
    case -0x7dfffff3:
      FUN_0042d080(bea_arg(0), bea_arg(0xb6), bea_arg(0xffffffff));
      return param_1;
    }
  }
  FUN_0042d080(bea_arg(0), bea_arg(0xc4), bea_arg(0xffffffff));
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052c4f0, ap_0052c4f0));
