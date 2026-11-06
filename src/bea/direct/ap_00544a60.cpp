// auto-ported from 00544a60_FUN_00544a60.c (FUN_00544a60, 141 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_CDECL* FUN_0048dea0_t)(void);
static const bea_guard<FUN_0048dea0_t> FUN_0048dea0 = {(FUN_0048dea0_t)0x0048dea0};
typedef uint32_t (BEA_THISCALL* FUN_00502290_t)(uint32_t);
static const bea_guard<FUN_00502290_t> FUN_00502290 = {(FUN_00502290_t)0x00502290};
typedef uint32_t (BEA_STDCALL* FUN_00512cc0_t)(uint32_t);
static const bea_guard<FUN_00512cc0_t> FUN_00512cc0 = {(FUN_00512cc0_t)0x00512cc0};
typedef uint32_t (BEA_THISCALL* FUN_00512d50_t)(uint32_t);
static const bea_guard<FUN_00512d50_t> FUN_00512d50 = {(FUN_00512d50_t)0x00512d50};
typedef uint32_t (BEA_STDCALL* FUN_00514010_t)(uint32_t);
static const bea_guard<FUN_00514010_t> FUN_00514010 = {(FUN_00514010_t)0x00514010};

static uint32_t BEA_THISCALL ap_00544a60(void * this_)
{
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005e50d0);
  local_4 = 1;
  FUN_00512cc0(bea_arg(this_));
  if (*(void **)((int)this_ + 0x18) != (void *)0x0) {
    FUN_00502290(bea_arg(*(void **)((int)this_ + 0x18)));
    *(undefined4 *)((int)this_ + 0x18) = 0;
  }
  FUN_00514010(bea_arg((int)this_ + 0x1c));
  local_4 = local_4 & 0xffffff00;
  FUN_00512d50(bea_arg(this_));
  local_4 = 0xffffffff;
  return FUN_0048dea0();
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00544a60, ap_00544a60));
