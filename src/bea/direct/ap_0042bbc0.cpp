// auto-ported from 0042bbc0_FUN_0042bbc0.c (FUN_0042bbc0, 292 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (7 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define _DAT_00663490 GLOBAL_AT(float, 0x00663490)
#define s____done__00625304 ((char*)0x00625304)
#define s_loadingscreen_tga_00625338 ((char*)0x00625338)
#define s_Loading_took__f_seconds_006252e8 ((char*)0x006252e8)
#define s_Deleting_loading_screen_resource_00625310 ((char*)0x00625310)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_CDECL* FUN_0042d7d0_t)(uint32_t);
static const bea_guard<FUN_0042d7d0_t> FUN_0042d7d0 = {(FUN_0042d7d0_t)0x0042d7d0};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_0042bbc0(void * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  char cVar1;
  int iVar2;
  float10 fVar3;

  alignas(16) uint8_t bea_frame_[0xd0] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_c8)[200] = *reinterpret_cast<undefined1 (*)[200]>(bea_frame_ + 0xd0 - 0xc8);
  cVar1 = (char)param_1;
  if (*(char *)((int)this_ + 0xb3c4) != cVar1) {
    FUN_0042d7d0(bea_arg(param_1));
    if (cVar1 != '\0') {
      fVar3 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      _DAT_00663490 = (float)fVar3;
      if ((param_2 != 0) && (*(int *)this_ == 0)) {
        iVar2 = FUN_004f27f0(s_loadingscreen_tga_00625338,0,0,1,1,1);
        *(int *)this_ = iVar2;
        *(byte *)(iVar2 + 0x155) = *(byte *)(iVar2 + 0x155) | 1;
      }
      *(undefined4 *)((int)this_ + 0xb3e0) = 0;
      *(undefined4 *)((int)this_ + 0xb3dc) = 0;
      *(undefined4 *)((int)this_ + 0xb3d8) = 0;
      *(char *)((int)this_ + 0xb3c4) = cVar1;
      return;
    }
    CRenderThing__vslot3(s_Deleting_loading_screen_resource_00625310);
    if (*(int *)this_ != 0) {
      FUN_004f27e0(bea_arg((void *)(*(int *)this_ + 8)));
      *(undefined4 *)this_ = 0;
    }
    CRenderThing__vslot3(s____done__00625304);
    fVar3 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    FUN_0055de9b(local_c8,s_Loading_took__f_seconds_006252e8,
                 (double)(fVar3 - (float10)_DAT_00663490));
    CRenderThing__vslot3(local_c8);
    *(undefined1 *)((int)this_ + 0xb3c4) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042bbc0, ap_0042bbc0));
