// auto-ported from 0042e6e0_FUN_0042e6e0.c (FUN_0042e6e0, 103 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (10 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_FATAL_ERROR__Controller_stack_em_00625610 ((char*)0x00625610)
#define s_FATAL_ERROR__stack_empty_to_call_00625654 ((char*)0x00625654)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0042e6e0(void * this_)
{
  undefined4 *puVar1;
  void *this_00;
  int *piVar2;
  
  puVar1 = *(undefined4 **)((int)this_ + 4);
  *(undefined4 **)((int)this_ + 0xc) = puVar1;
  if ((puVar1 == (undefined4 *)0x0) || (this_00 = (void *)*puVar1, this_00 == (void *)0x0)) {
    FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Controller_stack_em_00625610);
  }
  else {
    FUN_004e5bd0(bea_arg((int *)((int)this_ + 4)), bea_arg(this_00));
    FUN_0044b1d0(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    piVar2 = *(int **)((int)this_ + 4);
    *(int **)((int)this_ + 0xc) = piVar2;
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
      FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__stack_empty_to_call_00625654);
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042e6e0, ap_0042e6e0));
