// auto-ported from 004cf220_vslot16.c (CSoundDeviceSelect::vslot16, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef undefined4 (BEA_CDECL* FUN_00516980_t)(void);
static const bea_guard<FUN_00516980_t> FUN_00516980 = {(FUN_00516980_t)0x00516980};

static int BEA_CDECL ap_004cf220(void)
{
  int iVar1;
  
  iVar1 = FUN_00516980();
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf220, ap_004cf220));
