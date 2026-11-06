// auto-ported from 004f2b40_FUN_004f2b40.c (FUN_004f2b40, 242 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d9b8 GLOBAL_AT(int, 0x0083d9b8)
#define DAT_0083d9b0 GLOBAL_AT(int, 0x0083d9b0)
#define DAT_0083d9b4 GLOBAL_AT(int, 0x0083d9b4)
#define s_Texture___s__leaked___refcount___00632fcc ((char*)0x00632fcc)
#define s_CTexture__FreeLevelResources___c_00633108 ((char*)0x00633108)
#define s__________________________________00633090 ((char*)0x00633090)
#define s__________________________________00633068 ((char*)0x00633068)
#define s_No_end_of_level_texture_resource_00633040 ((char*)0x00633040)
#define s_Texture_end_of_level_resource_le_006330b8 ((char*)0x006330b8)
#define s__________________________________006330e0 ((char*)0x006330e0)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_00556f50_t)(uint32_t);
static const bea_guard<FUN_00556f50_t> FUN_00556f50 = {(FUN_00556f50_t)0x00556f50};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_CDECL ap_004f2b40(void)
{
  void *pvVar1;
  void *this_local;
  void *pvVar2;
  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  DAT_0083d9b8 = 0;
  CRenderThing__vslot3(s_CTexture__FreeLevelResources___c_00633108);
  pvVar1 = DAT_0083d9b0;
  pvVar2 = DAT_0083d9b0;
  if (DAT_0083d9b4 != 0) {
    *(int *)(DAT_0083d9b4 + 0xa4) = *(int *)(DAT_0083d9b4 + 0xa4) + -1;
    DAT_0083d9b4 = 0;
    pvVar1 = DAT_0083d9b0;
    pvVar2 = DAT_0083d9b0;
  }
  while (BEA_LOOP_GUARD((this_local = pvVar1, DAT_0083d9b0 = pvVar2, this_local != (void *)0x0))) {
    pvVar1 = *(void **)((int)this_local + 0xa0);
    if (*(int *)((int)this_local + 0xa4) == 0) {
      FUN_00556f50(bea_arg(this_local));
      pvVar2 = DAT_0083d9b0;
    }
  }
  if (pvVar2 != (void *)0x0) {
    CRenderThing__vslot3(s__________________________________006330e0);
    CRenderThing__vslot3(s_Texture_end_of_level_resource_le_006330b8);
    CRenderThing__vslot3(s__________________________________00633090);
    do {
      FUN_0055de9b(local_100,s_Texture___s__leaked___refcount___00632fcc,(char *)((int)pvVar2 + 8),
                   *(int *)((int)pvVar2 + 0xa4));
      CRenderThing__vslot3(local_100);
      pvVar2 = *(void **)((int)pvVar2 + 0xa0);
    } while (BEA_LOOP_GUARD((pvVar2 != (void *)0x0)));
    return CRenderThing__vslot3(s__________________________________00633068);
  }
  return CRenderThing__vslot3(s_No_end_of_level_texture_resource_00633040);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2b40, ap_004f2b40));
