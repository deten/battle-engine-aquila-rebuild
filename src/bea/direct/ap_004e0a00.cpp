// auto-ported from 004e0a00_FUN_004e0a00.c (FUN_004e0a00, 142 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit extraout_ECX: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00662dd4 GLOBAL_AT(int, 0x00662dd4)
#define DAT_0066307c GLOBAL_AT(int, 0x0066307c)
typedef int (BEA_THISCALL* FUN_004e0890_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0890_t> FUN_004e0890 = {(FUN_004e0890_t)0x004e0890};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static int BEA_THISCALL ap_004e0a00(void * this_, char *param_1, undefined4 param_2, undefined4 param_3)
{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX = 0;
  char *pcVar6;
  
  if (*(char *)((int)this_ + 4) != '\0') {
    uVar4 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    iVar5 = ~uVar4 - 1;
    if (iVar5 != 0) {
      for (iVar2 = *(int *)this_; BEA_LOOP_GUARD((iVar3 = 0, iVar2 != 0)); iVar2 = *(int *)(iVar2 + 0x74)) {
        iVar3 = FUN_00568390(bea_arg(param_1), bea_arg(iVar2 + 8));
        iVar5 = extraout_ECX;
        if (iVar3 == 0) {
          iVar3 = iVar2;
          if ((char)param_3 == '\0') {
            return iVar2;
          }
          break;
        }
      }
      if ((DAT_00662dd4 != 0) || (DAT_0066307c == 0)) {
        iVar5 = FUN_004e0890(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(0), bea_arg(CONCAT31((int3)((uint)iVar5 >> 8),iVar3 != 0)));
        return iVar5;
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e0a00, ap_004e0a00));
