// auto-ported from 004a52d0_FUN_004a52d0.c (FUN_004a52d0, 278 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00704adc GLOBAL_AT(int, 0x00704adc)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00704ad8 GLOBAL_AT(int, 0x00704ad8)
#define s_Mesh___s__leaked___refcount__d_0062f938 ((char*)0x0062f938)
#define s_____________________0062f958 ((char*)0x0062f958)
#define s_No_mesh_resource_leaks__0062f904 ((char*)0x0062f904)
#define s_____________________0062f988 ((char*)0x0062f988)
#define s_____________________0062f920 ((char*)0x0062f920)
#define s_Mesh_resource_leaks_0062f970 ((char*)0x0062f970)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_004a50b0_t)(uint32_t);
static const bea_guard<FUN_004a50b0_t> FUN_004a50b0 = {(FUN_004a50b0_t)0x004a50b0};
typedef uint32_t (BEA_THISCALL* FUN_004adf90_t)(uint32_t);
static const bea_guard<FUN_004adf90_t> FUN_004adf90 = {(FUN_004adf90_t)0x004adf90};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_CDECL ap_004a52d0(void)
{
  void *pvVar1;
  bool bVar2;
  void *pvVar3;
  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  pvVar3 = DAT_00704adc;
  if (DAT_00704adc != (void *)0x0) {
    FUN_004adf90(bea_arg(DAT_00704adc));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar3));
    DAT_00704adc = (void *)0x0;
  }
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
  if (DAT_00704ad8 == (void *)0x0) {
    CRenderThing__vslot3(s_____________________0062f988);
    CRenderThing__vslot3(s_No_mesh_resource_leaks__0062f904);
    return CRenderThing__vslot3(s_____________________0062f958);
  }
  CRenderThing__vslot3(s_____________________0062f988);
  CRenderThing__vslot3(s_Mesh_resource_leaks_0062f970);
  CRenderThing__vslot3(s_____________________0062f958);
  do {
    FUN_0055de9b(local_100,s_Mesh___s__leaked___refcount__d_0062f938,(char *)((int)pvVar3 + 0x24),
                 *(int *)((int)pvVar3 + 0x170));
    CRenderThing__vslot3(local_100);
    pvVar3 = *(void **)((int)pvVar3 + 0x158);
  } while (BEA_LOOP_GUARD((pvVar3 != (void *)0x0)));
  return CRenderThing__vslot3(s_____________________0062f920);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a52d0, ap_004a52d0));
