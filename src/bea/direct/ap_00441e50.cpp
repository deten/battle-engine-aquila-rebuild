// auto-ported from 00441e50_FUN_00441e50.c (FUN_00441e50, 67 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0066ffb0 GLOBAL_AT(int, 0x0066ffb0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00441e50(void * this_)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)this_;
  do {
    do {
      puVar2 = puVar1;
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      puVar1 = (undefined4 *)*puVar2;
    } while (BEA_LOOP_GUARD((puVar2 == (undefined4 *)0x0)));
    puVar3 = puVar1;
    puVar4 = DAT_0066ffb0;
    if (DAT_0066ffb0 != puVar2) {
      do {
        puVar3 = puVar4;
        if (puVar3 == (undefined4 *)0x0) break;
        puVar4 = (undefined4 *)*puVar3;
      } while (BEA_LOOP_GUARD(((undefined4 *)*puVar3 != puVar2)));
      *puVar3 = puVar1;
      puVar3 = DAT_0066ffb0;
    }
    DAT_0066ffb0 = puVar3;
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar2));
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00441e50, ap_00441e50));
