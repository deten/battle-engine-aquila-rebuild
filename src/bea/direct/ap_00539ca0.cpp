// auto-ported from 00539ca0_vslot0.c (CXBOXAsyncCache::vslot0, 279 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CXBOXAsyncCache;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00629038 GLOBAL_AT(int, 0x00629038)
#define DAT_0089c808 GLOBAL_AT(char, 0x0089c808)
#define s_Warning___unable_to_load_sample_0065027c ((char*)0x0065027c)
#define s___file_not_found__00650268 ((char*)0x00650268)
#define s_C__dev_ONSLAUGHT2_XBOXAsyncCache_006502a0 ((char*)0x006502a0)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_CDECL* FUN_00547d40_t)(uint32_t);
static const bea_guard<FUN_00547d40_t> FUN_00547d40 = {(FUN_00547d40_t)0x00547d40};
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};

static void BEA_THISCALL ap_00539ca0(CXBOXAsyncCache * this_)
{
  CXBOXAsyncCache *pCVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(void **)(this_ + 0x1c) != (void *)0x0) {
    FUN_00548c00(bea_arg(*(void **)(this_ + 0x1c)));
    *(undefined4 *)(this_ + 0x1c) = 0;
  }
  pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x134), bea_arg(0x11), bea_arg(s_C__dev_ONSLAUGHT2_XBOXAsyncCache_006502a0), bea_arg(0x1d));
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00547d70(bea_arg(pvVar2));
  }
  *(undefined4 *)(this_ + 0x1c) = uVar3;
  FUN_00547d40(bea_arg(*(undefined4 *)(this_ + 0x124)));
  pCVar1 = this_ + 0x20;
  iVar4 = FUN_00547ec0(bea_arg(*(void **)(this_ + 0x1c)), bea_arg(pCVar1), bea_arg(0x11), bea_arg(1), bea_arg(0));
  FUN_00547d40(bea_arg(0));
  if (iVar4 == 0) {
    iVar4 = FUN_0055e490(bea_arg(pCVar1), bea_arg(&DAT_00629038));
    if (iVar4 != 0) {
      DAT_0089c808 = 1;
      FUN_0055e4a3(bea_arg(iVar4));
    }
    CRenderThing__vslot3(s_Warning___unable_to_load_sample_0065027c);
    CRenderThing__vslot3(pCVar1);
    CRenderThing__vslot3(s___file_not_found__00650268);
    pvVar2 = *(void **)(this_ + 0x1c);
    if (pvVar2 != (void *)0x0) {
      FUN_00547d90(bea_arg(pvVar2));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar2));
    }
    *(undefined4 *)(this_ + 0x1c) = 0;
  }
  *pCVar1 = (CXBOXAsyncCache)0x0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539ca0, ap_00539ca0));
