// auto-ported from 00453f50_FUN_00453f50.c (FUN_00453f50, 291 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 compile: param_3 typed as a cdecl callback of 3 dwords (push/push/push, call [esp+0x18], add esp,0xc at 0x453f6b-0x453f74 and every case), called through bea_guard
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef void (BEA_CDECL* cb_00453f50_t)(undefined4, undefined4, undefined4);


static void BEA_CDECL ap_00453f50(undefined4 param_1, undefined4 param_2, code *param_3_)
{
  const bea_guard<cb_00453f50_t> param_3 = {(cb_00453f50_t)param_3_};
  switch(param_1) {
  case 0x3b:
    param_3(param_2,0x1f,9);
    return;
  case 0x3c:
    param_3(param_2,0x20,9);
    return;
  case 0x3d:
    param_3(param_2,0x1d,9);
    return;
  case 0x3e:
    param_3(param_2,0x1e,9);
    return;
  case 0x40:
    param_3(param_2,0x1a,9);
    return;
  case 0x41:
    param_3(param_2,0x1c,9);
    return;
  case 0x42:
    param_3(param_2,0x19,9);
    return;
  case 0x43:
    param_3(param_2,0x1b,9);
    return;
  case 0x45:
    param_3(param_2,0x10,9);
    return;
  case 0x46:
    param_3(param_2,0x11,9);
    return;
  case 0x48:
    param_3(param_2,0x12,10);
    param_3(param_2,0x13,9);
    return;
  case 0x49:
    param_3(param_2,0x14,10);
    return;
  case 0x4a:
    param_3(param_2,0x21,8);
    return;
  case 0x4b:
    param_3(param_2,0x15,9);
    return;
  case 0x4c:
    param_3(param_2,0x3b,8);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00453f50, ap_00453f50));
