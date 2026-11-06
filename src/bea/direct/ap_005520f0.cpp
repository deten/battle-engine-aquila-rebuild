// auto-ported from 005520f0_FUN_005520f0.c (FUN_005520f0, 565 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00662f10 GLOBAL_AT(int, 0x00662f10)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_cg_Shadows_00652338 ((char*)0x00652338)
#define s_Shadow_texture_creation_failed_f_006523e8 ((char*)0x006523e8)
#define s_cg_ShowShadowExtents_00652360 ((char*)0x00652360)
#define s_Enables_or_disables_shadows_00652344 ((char*)0x00652344)
#define s_The_distance_at_which_blob_shado_006522d8 ((char*)0x006522d8)
#define s_cg_BlobShadows_00652304 ((char*)0x00652304)
#define s_Enables_or_disables_blob_shadows_00652314 ((char*)0x00652314)
#define s_C__dev_ONSLAUGHT2_DXShadows_cpp_00652410 ((char*)0x00652410)
#define s_cg_ShowShadowMap_006523a4 ((char*)0x006523a4)
#define s_cg_BlobShadowFadeDist_006522c0 ((char*)0x006522c0)
#define s_Enables_the_display_of_the_shado_00652378 ((char*)0x00652378)
#define s_Enables_the_display_of_the_shado_006523b8 ((char*)0x006523b8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef void * (BEA_THISCALL* FUN_004f79d0_t)(uint32_t);
static const bea_guard<FUN_004f79d0_t> FUN_004f79d0 = {(FUN_004f79d0_t)0x004f79d0};
typedef uint32_t (BEA_THISCALL* FUN_004f7ab0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f7ab0_t> FUN_004f7ab0 = {(FUN_004f7ab0_t)0x004f7ab0};
typedef uint32_t (BEA_STDCALL* FUN_00512ca0_t)(uint32_t);
static const bea_guard<FUN_00512ca0_t> FUN_00512ca0 = {(FUN_00512ca0_t)0x00512ca0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef const char * (BEA_STDCALL* FUN_005be628_t)(uint32_t);
static const bea_guard<FUN_005be628_t> FUN_005be628 = {(FUN_005be628_t)0x005be628};

static uint32_t BEA_THISCALL ap_005520f0(void * this_)
{
  int iVar1;
  void *pvVar2;
  int iVar3;
  char *v0;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_00512ca0(bea_arg(this_));
  if (DAT_00662f10 == 0) {
    *(undefined4 *)((int)this_ + 0x5bc) = 0x10;
  }
  else {
    *(undefined4 *)((int)this_ + 0x5bc) = 0x20;
  }
  iVar1 = 0;
  if (0 < *(int *)((int)this_ + 0x5bc)) {
    puVar4 = (undefined4 *)((int)this_ + 0x5c0);
    do {
      *puVar4 = 0x40;
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0x5bc))));
  }
  iVar1 = 0;
  if (0 < *(int *)((int)this_ + 0x5bc)) {
    puVar4 = (undefined4 *)((int)this_ + 0x5c0);
    do {
      pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_DXShadows_cpp_00652410), bea_arg(0x69));
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)FUN_004f79d0(bea_arg(pvVar2));
      }
      puVar4[0x20] = pvVar2;
      iVar3 = FUN_004f7ab0(bea_arg(pvVar2), bea_arg(*puVar4), bea_arg(0), bea_arg(1));
      if (iVar3 < 0) {
        v0 = (char *)FUN_005be628(bea_arg(iVar3));
        FUN_00441740(&DAT_0066eb90,s_Shadow_texture_creation_failed_f_006523e8,v0);
        if (-1 < iVar1) {
          piVar5 = (int *)((int)this_ + iVar1 * 4 + 0x640);
          iVar1 = iVar1 + 1;
          do {
            if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
              bea_vcall<uint32_t>(*piVar5, 0x0, 1);
              *piVar5 = 0;
            }
            piVar5 = piVar5 + -1;
            iVar1 = iVar1 + -1;
          } while (BEA_LOOP_GUARD((iVar1 != 0)));
        }
        break;
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0x5bc))));
  }
  if (DAT_0089d680 == '\0') {
    if (*(char *)((int)this_ + 0x704) == '\x01') {
      iVar1 = 0;
      if (0 < *(int *)((int)this_ + 0x5bc)) {
        puVar4 = (undefined4 *)((int)this_ + 0x10);
        do {
          FUN_00401000(bea_arg(puVar4 + -1), bea_arg(0));
          *puVar4 = 0x46800000;
          iVar1 = iVar1 + 1;
          puVar4 = puVar4 + 2;
        } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0x5bc))));
      }
    }
    else {
      *(undefined4 *)((int)this_ + *(int *)((int)this_ + 0x5bc) * 8 + 8) = 0xbf800000;
    }
  }
  *(undefined1 *)((int)this_ + 0x5b0) = 0;
  *(undefined1 *)((int)this_ + 0x705) = 0;
  *(undefined4 *)((int)this_ + 8) = 0x41f00000;
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_ShowShadowMap_006523a4), bea_arg(s_Enables_the_display_of_the_shado_006523b8), bea_arg(3), bea_arg((undefined1 *)((int)this_ + 0x5b0)), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_ShowShadowExtents_00652360), bea_arg(s_Enables_the_display_of_the_shado_00652378), bea_arg(3), bea_arg((undefined1 *)((int)this_ + 0x705)), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_Shadows_00652338), bea_arg(s_Enables_or_disables_shadows_00652344), bea_arg(3), bea_arg((int)this_ + 0x704), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_BlobShadows_00652304), bea_arg(s_Enables_or_disables_blob_shadows_00652314), bea_arg(3), bea_arg((int)this_ + 0x706), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_BlobShadowFadeDist_006522c0), bea_arg(s_The_distance_at_which_blob_shado_006522d8), bea_arg(4), bea_arg((undefined4 *)((int)this_ + 8)), bea_arg(0), bea_arg(0));
  return bea_vcall<uint32_t>(this_, 0x8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005520f0, ap_005520f0));
