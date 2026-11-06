// auto-ported from 00544f10_FUN_00544f10.c (FUN_00544f10, 149 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0083d3d0 GLOBAL_AT(int, 0x0083d3d0)
typedef uint32_t (BEA_CDECL* FUN_0048e7b0_t)(void);
static const bea_guard<FUN_0048e7b0_t> FUN_0048e7b0 = {(FUN_0048e7b0_t)0x0048e7b0};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_STDCALL* FUN_00512cc0_t)(uint32_t);
static const bea_guard<FUN_00512cc0_t> FUN_00512cc0 = {(FUN_00512cc0_t)0x00512cc0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_THISCALL* FUN_005569e0_t)(uint32_t);
static const bea_guard<FUN_005569e0_t> FUN_005569e0 = {(FUN_005569e0_t)0x005569e0};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static void BEA_THISCALL ap_00544f10(void * this_)
{
  int iVar1;
  
  bea_vcall<uint32_t>(this_, 0x10);
  FUN_00512cc0(bea_arg(this_));
  FUN_0048e7b0();
  iVar1 = *(int *)((int)this_ + 0x24);
  if (iVar1 != 0) {
    FUN_0055db0a(bea_arg(iVar1), bea_arg(0x34), bea_arg(*(undefined4 *)(iVar1 + -4)), bea_arg(((void*)0x00544770)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1 + -4));
    *(undefined4 *)((int)this_ + 0x24) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x28) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x28), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x28) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x2c) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x2c), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x2c) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x30) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x30), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x30) = 0;
  }
  FUN_005569e0(bea_arg(&DAT_0083d3d0));
  if (*(int *)((int)this_ + 0x38) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x38) + 8)));
    *(undefined4 *)((int)this_ + 0x38) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00544f10, ap_00544f10));
