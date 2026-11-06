// auto-ported from 0054c010_FUN_0054c010.c (FUN_0054c010, 142 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* CDXMeshVB__vslot4_t)(uint32_t);
static const bea_guard<CDXMeshVB__vslot4_t> CDXMeshVB__vslot4 = {(CDXMeshVB__vslot4_t)0x0054d3f0};
typedef uint32_t (BEA_STDCALL* FUN_00512cc0_t)(uint32_t);
static const bea_guard<FUN_00512cc0_t> FUN_00512cc0 = {(FUN_00512cc0_t)0x00512cc0};
typedef uint32_t (BEA_THISCALL* FUN_00512d50_t)(uint32_t);
static const bea_guard<FUN_00512d50_t> FUN_00512d50 = {(FUN_00512d50_t)0x00512d50};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_0054c010(void * this_)
{
  int iVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005e50fc);
  CDXMeshVB__vslot4(bea_arg(this_));
  iVar1 = 0x40;
  do {
    if (*(int *)((int)this_ + 8) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 8)));
      *(undefined4 *)((int)this_ + 8) = 0;
    }
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  FUN_00512cc0(bea_arg(this_));
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x124)));
  return FUN_00512d50(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054c010, ap_0054c010));
