// auto-ported from 004a52b0_FUN_004a52b0.c (FUN_004a52b0, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00704ad8 GLOBAL_AT(int, 0x00704ad8)
typedef uint32_t (BEA_CDECL* FUN_004a52d0_t)(void);
static const bea_guard<FUN_004a52d0_t> FUN_004a52d0 = {(FUN_004a52d0_t)0x004a52d0};

static void BEA_CDECL ap_004a52b0(void)
{
  int iVar1;
  
  for (iVar1 = DAT_00704ad8; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0x158)) {
    *(undefined4 *)(iVar1 + 0x170) = 0;
  }
  FUN_004a52d0();
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a52b0, ap_004a52b0));
