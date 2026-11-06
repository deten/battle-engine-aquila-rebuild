// auto-ported from 00528540_FUN_00528540.c (FUN_00528540, 111 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0089bec8 GLOBAL_AT(undefined4*, 0x0089bec8)
#define DAT_0089bed4 GLOBAL_AT(int, 0x0089bed4)
#define DAT_0089beac GLOBAL_AT(char, 0x0089beac)
#define DAT_0089beb8 GLOBAL_AT(int, 0x0089beb8)
typedef char * (BEA_CDECL* FUN_0055f807_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055f807_t> FUN_0055f807 = {(FUN_0055f807_t)0x0055f807};
typedef int (BEA_CDECL* FUN_0055f8a1_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055f8a1_t> FUN_0055f8a1 = {(FUN_0055f8a1_t)0x0055f8a1};

static void BEA_CDECL ap_00528540(undefined4 param_1)
{
  int iVar1;
  undefined4 local_4 = 0;
  
  if (DAT_0089bec8 != (int *)0x0) {
    bea_vcall<uint32_t>(DAT_0089bec8, 0x24, DAT_0089bec8);
    iVar1 = FUN_0055f8a1(bea_arg(local_4), bea_arg(&DAT_0089bed4));
    if (iVar1 == 0) {
      return;
    }
    FUN_0055f807(bea_arg(&DAT_0089bed4), bea_arg(local_4), bea_arg(0xff));
    DAT_0089beac = 0;
    SetEvent(DAT_0089beb8);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528540, ap_00528540));
