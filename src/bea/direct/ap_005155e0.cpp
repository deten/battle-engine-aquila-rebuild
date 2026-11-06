// auto-ported from 005155e0_FUN_005155e0.c (FUN_005155e0, 457 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Warning___loading_font_manually_0063e188 ((char*)0x0063e188)
#define s_C__dev_ONSLAUGHT2_PCPlatform_cpp_0063e03c ((char*)0x0063e03c)
#define s_Warning___loading_title_font_man_0063e0e4 ((char*)0x0063e0e4)
#define s_TitleFont_tga_0063e0d4 ((char*)0x0063e0d4)
#define s_Warning___loading_debug_font_man_0063e150 ((char*)0x0063e150)
#define s_font22_512_tga_0063e178 ((char*)0x0063e178)
#define s_Terminal_0063e144 ((char*)0x0063e144)
#define s_Warning___loading_small_font_man_0063e11c ((char*)0x0063e11c)
#define s_Font13PS_tga_0063e10c ((char*)0x0063e10c)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef char* (BEA_CDECL* FUN_004f7c70_t)(uint32_t);
static const bea_guard<FUN_004f7c70_t> FUN_004f7c70 = {(FUN_004f7c70_t)0x004f7c70};
typedef void * (BEA_THISCALL* FUN_0053f730_t)(uint32_t);
static const bea_guard<FUN_0053f730_t> FUN_0053f730 = {(FUN_0053f730_t)0x0053f730};
typedef uint32_t (BEA_THISCALL* FUN_0053f7d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053f7d0_t> FUN_0053f7d0 = {(FUN_0053f7d0_t)0x0053f7d0};
typedef uint32_t (BEA_THISCALL* FUN_0053f830_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053f830_t> FUN_0053f830 = {(FUN_0053f830_t)0x0053f830};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_005155e0(void * this_)
{
  void *pvVar1;
  undefined4 *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(int *)((int)this_ + 0x18) == 0) {
    CRenderThing__vslot3(s_Warning___loading_font_manually_0063e188);
    pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1180), bea_arg(0x53), bea_arg(s_C__dev_ONSLAUGHT2_PCPlatform_cpp_0063e03c), bea_arg(0x4f));
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_0053f730(bea_arg(pvVar1));
    }
    *(void **)((int)this_ + 0x18) = pvVar1;
    FUN_0053f830(bea_arg(pvVar1), bea_arg(s_font22_512_tga_0063e178), bea_arg(0x20));
    *(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x168) = 1;
  }
  if (*(int *)((int)this_ + 0x1c) == 0) {
    CRenderThing__vslot3(s_Warning___loading_debug_font_man_0063e150);
    this_00 = (undefined4 *)
              FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1180), bea_arg(0x53), bea_arg(s_C__dev_ONSLAUGHT2_PCPlatform_cpp_0063e03c), bea_arg(0x58));
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      FUN_0053f730(bea_arg(this_00));
      *this_00 = ((void*)0x005e4980);
    }
    uVar4 = 0;
    uVar3 = 7;
    *(undefined4 **)((int)this_ + 0x1c) = this_00;
    uVar2 = FUN_004f7c70(bea_arg(s_Terminal_0063e144));
    FUN_0053f7d0(bea_arg(*(void **)((int)this_ + 0x1c)), bea_arg(uVar2), bea_arg(uVar3), bea_arg(uVar4));
  }
  if (*(int *)((int)this_ + 0x20) == 0) {
    CRenderThing__vslot3(s_Warning___loading_small_font_man_0063e11c);
    pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1180), bea_arg(0x53), bea_arg(s_C__dev_ONSLAUGHT2_PCPlatform_cpp_0063e03c), bea_arg(0x5f));
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_0053f730(bea_arg(pvVar1));
    }
    *(void **)((int)this_ + 0x20) = pvVar1;
    FUN_0053f830(bea_arg(pvVar1), bea_arg(s_Font13PS_tga_0063e10c), bea_arg(0x10));
  }
  if (*(int *)((int)this_ + 0x24) == 0) {
    CRenderThing__vslot3(s_Warning___loading_title_font_man_0063e0e4);
    pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1180), bea_arg(0x53), bea_arg(s_C__dev_ONSLAUGHT2_PCPlatform_cpp_0063e03c), bea_arg(0x67));
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_0053f730(bea_arg(pvVar1));
    }
    *(void **)((int)this_ + 0x24) = pvVar1;
    FUN_0053f830(bea_arg(pvVar1), bea_arg(s_TitleFont_tga_0063e0d4), bea_arg(0x20));
  }
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005155e0, ap_005155e0));
