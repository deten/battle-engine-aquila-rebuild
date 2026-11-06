// auto-ported from 0051f600_vslot2.c (CFEPOptions::vslot2, 102 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPOptions;
#define DAT_0089bc30 GLOBAL_AT(int, 0x0089bc30)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef undefined4 (BEA_CDECL* FUN_00466990_t)(void);
static const bea_guard<FUN_00466990_t> FUN_00466990 = {(FUN_00466990_t)0x00466990};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_0051f500_t)(uint32_t);
static const bea_guard<FUN_0051f500_t> FUN_0051f500 = {(FUN_0051f500_t)0x0051f500};

static void BEA_THISCALL ap_0051f600(CFEPOptions * this_, int param_1)
{
  int iVar1;
  
  do {
    switch(*(undefined4 *)(this_ + 4)) {
    case 0:
    case 2:
    case 3:
    case 5:
      goto switchD_0051f60b_caseD_0;
    default:
switchD_0051f60b_caseD_1:
      if ((param_1 == 0) && (*(int *)(DAT_0089bc30 + 0x10) == 0)) {
        if (*(int *)(DAT_0089bc30 + 0xc) == 1) {
          FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0x12), bea_arg(0x1e));
          return;
        }
        FUN_0051f500(bea_arg(1));
      }
      return;
    case 4:
      iVar1 = FUN_00466990();
      if (1 < iVar1) goto switchD_0051f60b_caseD_1;
switchD_0051f60b_caseD_0:
      *(int *)(this_ + 4) = *(int *)(this_ + 4) + 1;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051f600, ap_0051f600));
