// auto-ported from 004dd0c0_FUN_004dd0c0.c (FUN_004dd0c0, 151 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083cd60 GLOBAL_AT(int, 0x0083cd60)
#define DAT_0083cd5c GLOBAL_AT(int, 0x0083cd5c)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_004dd0c0(void)
{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_0083cd60;
  if (DAT_0083cd5c == 0) {
    DAT_0083cd60 = 0;
    DAT_0083cd5c = uVar3;
    return;
  }
  do {
    iVar2 = DAT_0083cd5c;
    iVar4 = 0;
    if (0 < *(int *)(DAT_0083cd5c + 0x28)) {
      do {
        pvVar1 = *(void **)(*(int *)(iVar2 + 0x30) + iVar4 * 4);
        if (pvVar1 != (void *)0x0) {
          FUN_004cb0b0(bea_arg(pvVar1), bea_arg(0));
          pvVar1 = *(void **)(*(int *)(iVar2 + 0x30) + iVar4 * 4);
          if (pvVar1 != (void *)0x0) {
            FUN_004cb050(bea_arg(pvVar1));
            FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
          }
          *(undefined4 *)(*(int *)(iVar2 + 0x30) + iVar4 * 4) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (BEA_LOOP_GUARD((iVar4 < *(int *)(iVar2 + 0x28))));
    }
    DAT_0083cd5c = *(int *)(iVar2 + 0x48);
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    uVar3 = DAT_0083cd60;
  } while (BEA_LOOP_GUARD((DAT_0083cd5c != 0)));
  DAT_0083cd60 = 0;
  DAT_0083cd5c = uVar3;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd0c0, ap_004dd0c0));
