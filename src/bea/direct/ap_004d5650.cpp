// auto-ported from 004d5650_FUN_004d5650.c (FUN_004d5650, 360 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_0082b694 GLOBAL_AT(int, 0x0082b694)
#define DAT_0082b698 GLOBAL_AT(int, 0x0082b698)
#define DAT_0082b690 GLOBAL_AT(int, 0x0082b690)
#define _DAT_0082b688 GLOBAL_AT(float, 0x0082b688)
#define _DAT_006316b4 GLOBAL_AT(float, 0x006316b4)
#define _DAT_0082b68c GLOBAL_AT(float, 0x0082b68c)
#define _DAT_006316b8 GLOBAL_AT(float, 0x006316b8)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__search_in_invalid_poly_b_0063171c ((char*)0x0063171c)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_STDCALL* FUN_004d3b10_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d3b10_t> FUN_004d3b10 = {(FUN_004d3b10_t)0x004d3b10};

static undefined4 BEA_THISCALL ap_004d5650(void * this_)
{
  int iVar1;
  int iVar2;
  int local_8;
  
  while(BEA_LOOP_GUARD(( true ))) {
    if (DAT_0082b694 == 0) {
      DAT_0082b698 = DAT_0082b698 + 1;
      if (DAT_0082b690 <= DAT_0082b698) {
        return 0;
      }
      _DAT_0082b688 = _DAT_006316b4 + _DAT_0082b688;
      _DAT_0082b68c = _DAT_006316b8 + _DAT_0082b68c;
    }
    local_8 = (int)(longlong)ROUND(_DAT_0082b688);
    DAT_0082b694 = 0;
    iVar2 = local_8;
    if (_DAT_0082b688 - (float)local_8 < 0.0f) {
      iVar2 = local_8 + -1;
    }
    local_8 = (int)(longlong)ROUND(_DAT_0082b68c);
    if (_DAT_0082b68c - (float)local_8 < 0.0f) {
      local_8 = local_8 + -1;
    }
    if ((iVar2 != *(int *)((int)this_ + 0xb0)) && (local_8 != *(int *)((int)this_ + 0xb4))) break;
    *(int *)((int)this_ + 0xb0) = iVar2;
    *(int *)((int)this_ + 0xb4) = local_8;
    if ((((-1 < iVar2) && (iVar2 < *(int *)((int)this_ + 0x68))) && (-1 < local_8)) &&
       (local_8 < *(int *)((int)this_ + 0x6c))) {
      return 1;
    }
    FUN_00441740(&DAT_0066f580,s_WARNING__search_in_invalid_poly_b_0063171c);
  }
  iVar1 = FUN_004d3b10(bea_arg((float)iVar2), bea_arg((float)*(int *)((int)this_ + 0xb4)), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(this_), bea_arg((int)this_ + 0x10));
  if (iVar1 != 0) {
    *(int *)((int)this_ + 0xb0) = iVar2;
    DAT_0082b694 = 1;
    return 1;
  }
  *(int *)((int)this_ + 0xb4) = local_8;
  DAT_0082b694 = 1;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d5650, ap_004d5650));
