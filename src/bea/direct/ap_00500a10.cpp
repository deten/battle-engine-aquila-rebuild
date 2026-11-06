// auto-ported from 00500a10_FUN_00500a10.c (FUN_00500a10, 163 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define s_EnsureLockV_failed_for__s_00633d40 ((char*)0x00633d40)
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_005002e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005002e0_t> FUN_005002e0 = {(FUN_005002e0_t)0x005002e0};
typedef uint32_t (BEA_THISCALL* FUN_005005e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005005e0_t> FUN_005005e0 = {(FUN_005005e0_t)0x005005e0};
typedef const char * (BEA_STDCALL* FUN_005be628_t)(uint32_t);
static const bea_guard<FUN_005be628_t> FUN_005be628 = {(FUN_005be628_t)0x005be628};

static int BEA_THISCALL ap_00500a10(void * this_, undefined4 *param_1, int param_2)
{
  int iVar1;
  char *v0;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_2 * *(int *)((int)this_ + 0x54);
  iVar1 = *(int *)((int)this_ + 0x1c) + uVar3;
  if (*(int *)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x14) < iVar1) {
    FUN_005005e0(bea_arg(this_), bea_arg(iVar1));
  }
  if (*(char *)((int)this_ + 0x10) == '\0') {
    iVar1 = FUN_005002e0(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40)), bea_arg((int)this_ + 0x38));
    if (iVar1 < 0) {
      v0 = (char *)FUN_005be628(bea_arg(iVar1));
      FUN_00441740(&DAT_0066eb90,s_EnsureLockV_failed_for__s_00633d40,v0);
      FUN_0042d080(bea_arg(0), bea_arg(0xd2), bea_arg(0x3e9));
    }
    *(undefined1 *)((int)this_ + 0x10) = 1;
  }
  puVar4 = (undefined4 *)(*(int *)((int)this_ + 0x38) + *(int *)((int)this_ + 0x1c));
  for (uVar2 = uVar3 >> 2; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = uVar3 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  iVar1 = *(int *)((int)this_ + 0x1c);
  *(uint *)((int)this_ + 0x1c) = iVar1 + uVar3;
  return iVar1 / *(int *)((int)this_ + 0x54);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500a10, ap_00500a10));
