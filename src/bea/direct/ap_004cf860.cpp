// auto-ported from 004cf860_vslot15.c (CEnable32Bit::vslot15, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009cc0d8 GLOBAL_AT(int, 0x009cc0d8)
#define DAT_009cc0e4 GLOBAL_AT(int, 0x009cc0e4)
#define DAT_009cc0f4 GLOBAL_AT(int, 0x009cc0f4)
typedef bool (BEA_THISCALL* FUN_00528af0_t)(uint32_t);
static const bea_guard<FUN_00528af0_t> FUN_00528af0 = {(FUN_00528af0_t)0x00528af0};

static undefined4 BEA_CDECL ap_004cf860(void)
{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00528af0(bea_arg(&DAT_009cc0d8));
  uVar2 = DAT_009cc0e4;
  if (cVar1 == '\0') {
    uVar2 = DAT_009cc0f4;
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf860, ap_004cf860));
