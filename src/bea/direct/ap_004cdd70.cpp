// auto-ported from 004cdd70_FUN_004cdd70.c (FUN_004cdd70, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef undefined4 (BEA_THISCALL* FUN_0042e4b0_t)(uint32_t);
static const bea_guard<FUN_0042e4b0_t> FUN_0042e4b0 = {(FUN_0042e4b0_t)0x0042e4b0};
typedef uint32_t (BEA_THISCALL* FUN_0042e6e0_t)(uint32_t);
static const bea_guard<FUN_0042e6e0_t> FUN_0042e6e0 = {(FUN_0042e6e0_t)0x0042e6e0};
typedef undefined4 (BEA_THISCALL* FUN_004705d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004705d0_t> FUN_004705d0 = {(FUN_004705d0_t)0x004705d0};

static void BEA_THISCALL ap_004cdd70(void * this_)
{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar3));
    if (iVar1 != 0) {
      pvVar2 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar3));
      pvVar2 = (void *)FUN_0042e4b0(bea_arg(pvVar2));
      if (pvVar2 == this_) {
        pvVar2 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar3));
        FUN_0042e6e0(bea_arg(pvVar2));
      }
    }
    iVar3 = iVar3 + 1;
  } while (BEA_LOOP_GUARD((iVar3 < 2)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cdd70, ap_004cdd70));
