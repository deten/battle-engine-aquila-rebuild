// auto-ported from 004449c0_FUN_004449c0.c (FUN_004449c0, 525 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__unknown_Destroyable_seg_00628890 ((char*)0x00628890)
#define s_C__dev_ONSLAUGHT2_DestructableSe_006287b4 ((char*)0x006287b4)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef void * (BEA_THISCALL* FUN_004425a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004425a0_t> FUN_004425a0 = {(FUN_004425a0_t)0x004425a0};
typedef void * (BEA_THISCALL* FUN_00443480_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00443480_t> FUN_00443480 = {(FUN_00443480_t)0x00443480};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_004449c0(void * this_, undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4)
{
  undefined4 uVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  switch(param_1) {
  case 0:
    *(int *)((int)this_ + 0x20) = *(int *)((int)this_ + 0x20) + 1;
    this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x50), bea_arg(0x55), bea_arg(s_C__dev_ONSLAUGHT2_DestructableSe_006287b4), bea_arg(0x1e3));
    if (this_00 != (void *)0x0) {
      puVar2 = (undefined4 *)
               FUN_00443480(bea_arg(this_00), bea_arg(this_), bea_arg(*(undefined4 *)(param_2 + 0x88)), bea_arg(param_3), bea_arg(param_4), bea_arg(*(undefined4 *)((int)this_ + 0x20)));
      return (undefined4 *)(puVar2);
    }
    break;
  case 1:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x48), bea_arg(0x55), bea_arg(s_C__dev_ONSLAUGHT2_DestructableSe_006287b4), bea_arg(0x1e8))
    ;
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_2 + 0xa0);
      FUN_004425a0(bea_arg(puVar2), bea_arg(this_), bea_arg(*(undefined4 *)(param_2 + 0x88)), bea_arg(param_3), bea_arg(param_4));
      puVar2[0x10] = uVar1;
      puVar2[0x11] = 0;
      *puVar2 = ((void*)0x005db148);
      return (undefined4 *)(puVar2);
    }
    break;
  case 2:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x54), bea_arg(0x55), bea_arg(s_C__dev_ONSLAUGHT2_DestructableSe_006287b4), bea_arg(0x1ed))
    ;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004425a0(bea_arg(puVar2), bea_arg(this_), bea_arg(*(undefined4 *)(param_2 + 0x88)), bea_arg(param_3), bea_arg(param_4));
      puVar2[0x14] = 0;
      *puVar2 = ((void*)0x005db114);
      return (undefined4 *)(puVar2);
    }
    break;
  case 3:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x54), bea_arg(0x55), bea_arg(s_C__dev_ONSLAUGHT2_DestructableSe_006287b4), bea_arg(0x1f2))
    ;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004425a0(bea_arg(puVar2), bea_arg(this_), bea_arg(*(undefined4 *)(param_2 + 0x88)), bea_arg(param_3), bea_arg(param_4));
      puVar2[0x14] = 0;
      *puVar2 = ((void*)0x005db0e0);
      return (undefined4 *)(puVar2);
    }
    break;
  default:
    FUN_00441740(&DAT_0066f580,s_WARNING__unknown_Destroyable_seg_00628890);
  }
  return (undefined4 *)((undefined4 *)0x0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004449c0, ap_004449c0));
