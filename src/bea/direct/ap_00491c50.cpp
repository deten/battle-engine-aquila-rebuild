// auto-ported from 00491c50_FUN_00491c50.c (FUN_00491c50, 127 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__Object_too_big_for_map_w_0062dba8 ((char*)0x0062dba8)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static int BEA_THISCALL ap_00491c50(void * this_, float param_1)
{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)((int)this_ + 0xa4);
  iVar2 = 4;
  bVar1 = (byte)*puVar3;
  while (BEA_LOOP_GUARD((((float)(1 << (bVar1 & 0x1f)) < param_1 * 2.01f && (-1 < iVar2))))) {
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + -1;
    if (iVar2 < 0) {
      FUN_00441740(&DAT_0066f580,s_WARNING__Object_too_big_for_map_w_0062dba8);
      return 0;
    }
    bVar1 = (byte)*puVar3;
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00491c50, ap_00491c50));
