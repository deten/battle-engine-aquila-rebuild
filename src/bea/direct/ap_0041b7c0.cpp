// auto-ported from 0041b7c0_FUN_0041b7c0.c (FUN_0041b7c0, 296 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00624184 GLOBAL_AT(int, 0x00624184)
#define DAT_00623e2c GLOBAL_AT(undefined4, 0x00623e2c)
#define DAT_00662b20 GLOBAL_AT(int, 0x00662b20)
#define DAT_00662b24 GLOBAL_AT(int, 0x00662b24)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__Too_many_nodes_to_b_00624188 ((char*)0x00624188)
typedef uint32_t (BEA_THISCALL* FUN_0041c470_t)(uint32_t);
static const bea_guard<FUN_0041c470_t> FUN_0041c470 = {(FUN_0041c470_t)0x0041c470};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static uint32_t BEA_THISCALL ap_0041b7c0(void * this_)
{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_8;
  if (DAT_00624184 < 0x65) {
    iVar4 = 0;
    local_8 = 0;
    if (0 < DAT_00624184) {
      puVar3 = &DAT_00623e2c;
      puVar5 = (undefined4 *)((int)this_ + 0x1910);
      piVar2 = (int *)((int)this_ + 0x10);
      do {
        piVar2[1] = 0;
        piVar2[-2] = 0;
        piVar2[0xb] = 0;
        piVar2[-1] = -1;
        *piVar2 = -1;
        piVar6 = piVar2 + 2;
        for (iVar1 = 9; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
          *piVar6 = -1;
          piVar6 = piVar6 + 1;
        }
        piVar2[0xc] = -0x40800000;
        piVar2[1] = puVar3[-1];
        puVar5[-2] = *puVar3;
        *puVar5 = puVar3[1];
        puVar5[-3] = 0;
        puVar5[-1] = 0;
        piVar2[-1] = iVar4;
        *piVar2 = iVar4 + 1;
        iVar4 = iVar4 + 2;
        puVar5 = puVar5 + 4;
        local_8 = local_8 + 1;
        puVar3 = puVar3 + 5;
        piVar2 = piVar2 + 0x10;
      } while (BEA_LOOP_GUARD((local_8 < DAT_00624184)));
    }
    puVar5 = (undefined4 *)((int)this_ + 0x1f44);
    for (iVar4 = 300; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)((int)this_ + 0x23f4) = 0;
    *(undefined4 *)((int)this_ + 0x23f8) = 0;
    *(undefined4 *)((int)this_ + 0x23fc) = 0;
    *(undefined4 *)((int)this_ + 0x2400) = 0;
    *(undefined4 *)((int)this_ + 0x2404) = 0;
    puVar5 = (undefined4 *)((int)this_ + 0x2408);
    for (iVar4 = 0x20; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    DAT_00662b20 = 0;
    DAT_00662b24 = 0;
    *(undefined4 *)((int)this_ + 0x2488) = 0;
    *(undefined4 *)((int)this_ + 0x2494) = 0;
    *(undefined4 *)((int)this_ + 0x2498) = 0;
    *(undefined4 *)this_ = 0;
    return FUN_0041c470(bea_arg(this_));
  }
  return FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Too_many_nodes_to_b_00624188);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041b7c0, ap_0041b7c0));
