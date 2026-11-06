// auto-ported from 004caf60_FUN_004caf60.c (FUN_004caf60, 212 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0082b3e4 GLOBAL_AT(int, 0x0082b3e4)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_004caf60(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_0082b3e4 != 0) {
    while(BEA_LOOP_GUARD(( true ))) {
      iVar2 = DAT_0082b3e4;
      if (*(short *)(DAT_0082b3e4 + 0xb4) == 1) {
        *(undefined2 *)(DAT_0082b3e4 + 0xb4) = 2;
      }
      else if (*(short *)(DAT_0082b3e4 + 0xb4) == 2) {
        *(undefined2 *)(DAT_0082b3e4 + 0xb4) = 3;
      }
      if (*(int *)(iVar2 + 0xa4) != 0) break;
      DAT_0082b3e4 = *(int *)(iVar2 + 0xb0);
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
      if (DAT_0082b3e4 == 0) {
        return;
      }
    }
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0xb0);
      while (BEA_LOOP_GUARD((iVar1 != 0))) {
        if (*(short *)(iVar1 + 0xb4) == 1) {
          *(undefined2 *)(iVar1 + 0xb4) = 2;
        }
        else if (*(short *)(iVar1 + 0xb4) == 2) {
          *(undefined2 *)(iVar1 + 0xb4) = 3;
        }
        iVar3 = *(int *)(iVar2 + 0xb0);
        if (*(int *)(iVar3 + 0xa4) == 0) {
          *(undefined4 *)(iVar2 + 0xb0) = *(undefined4 *)(iVar3 + 0xb0);
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar3));
          iVar3 = iVar2;
        }
        iVar2 = iVar3;
        iVar1 = *(int *)(iVar3 + 0xb0);
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004caf60, ap_004caf60));
