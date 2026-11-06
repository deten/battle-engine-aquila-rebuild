// auto-ported from 004ae860_FUN_004ae860.c (FUN_004ae860, 485 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_004ae860(void * this_, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this_ + 0xb0) = param_3;
  *(undefined4 *)((int)this_ + 0xac) = param_2;
  *(int *)((int)this_ + 0xa8) = param_1;
  *(undefined4 *)((int)this_ + 0xb8) = param_4;
  *(undefined4 *)((int)this_ + 0xb4) = param_5;
  iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1 * 0x60), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x208));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  *(int *)((int)this_ + 0x134) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xb4) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x216));
  *(int *)((int)this_ + 0x84) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)((int)this_ + 0xb4)) {
    do {
      iVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xac) << 4), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x220));
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      *(int *)(*(int *)((int)this_ + 0x84) + iVar1 * 4) = iVar2;
      if (*(int *)(*(int *)((int)this_ + 0x84) + iVar1 * 4) == 0) {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0xb4))));
  }
  iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xb0) * 0xc), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x228));
  *(int *)((int)this_ + 0x80) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  CRenderThing__vslot3(&DAT_009c3df0);
  CRenderThing__vslot3(&DAT_009c3df0);
  CRenderThing__vslot3(&DAT_009c3df0);
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ae860, ap_004ae860));
