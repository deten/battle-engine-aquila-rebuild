// auto-ported from 004f2a30_FUN_004f2a30.c (FUN_004f2a30, 271 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d9b0 GLOBAL_AT(int, 0x0083d9b0)
#define DAT_0083d9b4 GLOBAL_AT(int, 0x0083d9b4)
#define s_Texture___s__leaked___refcount___00632fcc ((char*)0x00632fcc)
#define s_No_texture_resource_leaks_00632f94 ((char*)0x00632f94)
#define s________________________00632fb0 ((char*)0x00632fb0)
#define s________________________00632ff0 ((char*)0x00632ff0)
#define s_Texture_resource_leaks_0063300c ((char*)0x0063300c)
#define s________________________00633024 ((char*)0x00633024)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_00556f50_t)(uint32_t);
static const bea_guard<FUN_00556f50_t> FUN_00556f50 = {(FUN_00556f50_t)0x00556f50};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_CDECL ap_004f2a30(void)
{
  void *pvVar1;
  void *this_local;
  void *pvVar2;
  char *pcVar3;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
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
  if (pvVar2 == (void *)0x0) {
    pcVar3 = s_No_texture_resource_leaks_00632f94;
  }
  else {
    CRenderThing__vslot3(s________________________00633024);
    CRenderThing__vslot3(s_Texture_resource_leaks_0063300c);
    CRenderThing__vslot3(s________________________00632ff0);
    do {
      FUN_0055de9b(local_100,s_Texture___s__leaked___refcount___00632fcc,(char *)((int)pvVar2 + 8),
                   *(int *)((int)pvVar2 + 0xa4));
      CRenderThing__vslot3(local_100);
      pvVar2 = *(void **)((int)pvVar2 + 0xa0);
    } while (BEA_LOOP_GUARD((pvVar2 != (void *)0x0)));
    pcVar3 = s________________________00632fb0;
  }
  CRenderThing__vslot3(pcVar3);
  for (pvVar1 = DAT_0083d9b0; BEA_LOOP_GUARD((pvVar2 = DAT_0083d9b0, pvVar1 != (void *)0x0));
      pvVar1 = *(void **)((int)pvVar1 + 0xa0)) {
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  while (BEA_LOOP_GUARD((pvVar1 = pvVar2, pvVar1 != (void *)0x0))) {
    pvVar2 = *(void **)((int)pvVar1 + 0xa0);
    if (*(int *)((int)pvVar1 + 0xa4) == 0) {
      FUN_00556f50(bea_arg(pvVar1));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2a30, ap_004f2a30));
