// auto-ported from 004cb210_FUN_004cb210.c (FUN_004cb210, 237 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0082b3f0 GLOBAL_AT(int, 0x0082b3f0)
#define DAT_0082b3e4 GLOBAL_AT(int, 0x0082b3e4)
#define DAT_0082b404 GLOBAL_AT(int, 0x0082b404)
#define DAT_0082b3e8 GLOBAL_AT(int, 0x0082b3e8)
typedef uint32_t (BEA_CDECL* FUN_004caf60_t)(void);
static const bea_guard<FUN_004caf60_t> FUN_004caf60 = {(FUN_004caf60_t)0x004caf60};
typedef uint32_t (BEA_STDCALL* FUN_004cbca0_t)(uint32_t);
static const bea_guard<FUN_004cbca0_t> FUN_004cbca0 = {(FUN_004cbca0_t)0x004cbca0};
typedef undefined4 (BEA_THISCALL* FUN_004cbe30_t)(uint32_t);
static const bea_guard<FUN_004cbe30_t> FUN_004cbe30 = {(FUN_004cbe30_t)0x004cbe30};

static undefined4 BEA_THISCALL ap_004cb210(void * this_, float param_1, undefined4 param_2)
{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  
  *(int *)((int)this_ + 4) = *(int *)((int)this_ + 4) + 1;
  DAT_0082b3f0 = 0;
  if (param_1 <= 1.0f) {
    if (param_1 < 0.0f) {
      param_1 = 0.0f;
    }
  }
  else {
    param_1 = 1.0f;
  }
  *(undefined4 *)((int)this_ + 0x14) = param_2;
  *(float *)((int)this_ + 0x18) = param_1 + *(float *)((int)this_ + 0x18);
  *(float *)((int)this_ + 0x10) = param_1;
  for (iVar1 = DAT_0082b3e4; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0xb0)) {
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    *(undefined4 *)(iVar1 + 0xa8) = 0;
  }
  FUN_004cbca0(bea_arg(*(undefined4 *)this_));
  piVar4 = DAT_0082b404;
  piVar2 = DAT_0082b404;
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    piVar2[0x11] = piVar2[0x10];
    piVar2[0x16] = piVar2[0x14];
    piVar2 = (int *)piVar2[0x10];
  }
  while (BEA_LOOP_GUARD((piVar4 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar4, 0x58);
    piVar2 = (int *)piVar4[0x11];
    piVar4[0x16] = 0;
    piVar4[0x11] = 0;
    piVar4 = piVar2;
  }
  uVar5 = FUN_004cbe30(bea_arg(this_));
  for (puVar3 = DAT_0082b3e8; BEA_LOOP_GUARD((puVar3 != (undefined4 *)0x0)); puVar3 = (undefined4 *)*puVar3) {
    if ((puVar3[1] != 0) && (*(int *)(puVar3[1] + 0xa4) == 0)) {
      puVar3[1] = 0;
    }
  }
  FUN_004caf60();
  return uVar5;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cb210, ap_004cb210));
