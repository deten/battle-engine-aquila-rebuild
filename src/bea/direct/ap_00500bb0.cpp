// auto-ported from 00500bb0_FUN_00500bb0.c (FUN_00500bb0, 145 bytes) by tools/autoport.py
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

static int BEA_THISCALL ap_00500bb0(void * this_, int *param_1, int param_2)
{
  int iVar1;
  char *v0;
  int iVar2;
  
  iVar2 = param_2 * *(int *)((int)this_ + 0x54);
  iVar1 = *(int *)((int)this_ + 0x1c) + iVar2;
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
  *param_1 = *(int *)((int)this_ + 0x38) + *(int *)((int)this_ + 0x1c);
  iVar1 = *(int *)((int)this_ + 0x1c);
  *(int *)((int)this_ + 0x1c) = iVar1 + iVar2;
  return iVar1 / *(int *)((int)this_ + 0x54);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500bb0, ap_00500bb0));
