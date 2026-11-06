// auto-ported from 004a5430_FUN_004a5430.c (FUN_004a5430, 208 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00704ae0 GLOBAL_AT(int, 0x00704ae0)
#define DAT_00704ad8 GLOBAL_AT(int, 0x00704ad8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Mesh___s__leaked___refcount__d_0062f938 ((char*)0x0062f938)
#define s_________________________________0062f9dc ((char*)0x0062f9dc)
#define s_________________________________0062fa24 ((char*)0x0062fa24)
#define s_Mesh_end_of_level_resource_leaks_0062fa00 ((char*)0x0062fa00)
#define s________________________________0062f9b8 ((char*)0x0062f9b8)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_004a50b0_t)(uint32_t);
static const bea_guard<FUN_004a50b0_t> FUN_004a50b0 = {(FUN_004a50b0_t)0x004a50b0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_CDECL ap_004a5430(void)
{
  void *pvVar1;
  bool bVar2;
  void *pvVar3;
  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  DAT_00704ae0 = 0;
  do {
    bVar2 = true;
    pvVar3 = DAT_00704ad8;
    if (DAT_00704ad8 == (void *)0x0) break;
    do {
      pvVar1 = *(void **)((int)pvVar3 + 0x158);
      if ((*(int *)((int)pvVar3 + 0x170) == 0) && (bVar2 = false, pvVar3 != (void *)0x0)) {
        FUN_004a50b0(bea_arg(pvVar3));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar3));
      }
      pvVar3 = pvVar1;
    } while (BEA_LOOP_GUARD((pvVar1 != (void *)0x0)));
  } while (BEA_LOOP_GUARD((!bVar2)));
  pvVar3 = DAT_00704ad8;
  CRenderThing__vslot3(s_________________________________0062fa24);
  CRenderThing__vslot3(s_Mesh_end_of_level_resource_leaks_0062fa00);
  CRenderThing__vslot3(s_________________________________0062f9dc);
  for (; BEA_LOOP_GUARD((pvVar3 != (void *)0x0)); pvVar3 = *(void **)((int)pvVar3 + 0x158)) {
    FUN_0055de9b(local_100,s_Mesh___s__leaked___refcount__d_0062f938,(char *)((int)pvVar3 + 0x24),
                 *(int *)((int)pvVar3 + 0x170));
    CRenderThing__vslot3(local_100);
  }
  return CRenderThing__vslot3(s________________________________0062f9b8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a5430, ap_004a5430));
