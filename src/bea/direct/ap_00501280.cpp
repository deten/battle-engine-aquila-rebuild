// auto-ported from 00501280_FUN_00501280.c (FUN_00501280, 139 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00854e00 GLOBAL_AT(int, 0x00854e00)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_vbuftexture_cp_00633d5c ((char*)0x00633d5c)
typedef uint32_t (BEA_THISCALL* FUN_005003f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005003f0_t> FUN_005003f0 = {(FUN_005003f0_t)0x005003f0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static int * BEA_CDECL ap_00501280(int param_1, int param_2)
{
  int iVar1;
  void *this_local;
  int *piVar2;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x140);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
      return *(int **)(param_1 + 0x140);
    }
    piVar2 = DAT_00854e00;
    if (param_1 != 0) {
      for (; BEA_LOOP_GUARD((piVar2 != (int *)0x0)); piVar2 = (int *)piVar2[0x16]) {
        if (*piVar2 == param_1) {
          if (piVar2 != (int *)0x0) {
            piVar2[0x18] = piVar2[0x18] + 1;
            *(int **)(param_1 + 0x140) = piVar2;
            return piVar2;
          }
          break;
        }
      }
    }
  }
  this_local = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x68), bea_arg(0x1f), bea_arg(s_C__dev_ONSLAUGHT2_vbuftexture_cp_00633d5c), bea_arg(0x2ee));
  if (this_local == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_005003f0(bea_arg(this_local), bea_arg(param_1));
  }
  if (param_2 == 0) {
    *(int **)(param_1 + 0x140) = piVar2;
  }
  return piVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00501280, ap_00501280));
