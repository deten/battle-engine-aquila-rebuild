// auto-ported from 0047fb00_FUN_0047fb00.c (FUN_0047fb00, 79 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_ERROR__Added_too_many_messages_t_0062cc38 ((char*)0x0062cc38)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static undefined4 BEA_THISCALL ap_0047fb00(void * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = 0;
  piVar4 = this_;
  do {
    piVar4 = piVar4 + 3;
    if (*piVar4 == 0) {
      iVar1 = iVar2 * 3 + 3;
      *(undefined4 *)((int)this_ + iVar2 * 0xc + 4) = param_1;
      *(undefined4 *)((int)this_ + iVar2 * 0xc + 8) = DAT_00672fd0;
      *(undefined4 *)((int)this_ + iVar1 * 4) = 1;
      return iVar1;
    }
    iVar2 = iVar2 + 1;
  } while (BEA_LOOP_GUARD((iVar2 < 2)));
  uVar3 = FUN_00441740(&DAT_0066f580,s_ERROR__Added_too_many_messages_t_0062cc38);
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047fb00, ap_0047fb00));
