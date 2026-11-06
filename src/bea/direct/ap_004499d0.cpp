// auto-ported from 004499d0_vslot1.c (CEngine::vslot1, 866 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 0x55b0e0 is the constructor of the block just allocated: thiscall with ECX = 0x5490e0's result (mov ecx, eax at 00449b7d), which Ghidra dropped; all other call sites checked against the pushes (00449a00-00449d0f)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CEngine;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_009c74f8 GLOBAL_AT(int, 0x009c74f8)
#define DAT_009c7550 GLOBAL_AT(int, 0x009c7550)
#define DAT_009cc148 GLOBAL_AT(int, 0x009cc148)
#define s_The_red_factor_for_the_hit_effec_00628c68 ((char*)0x00628c68)
#define s_The_blue_factor_for_the_hit_effe_00628be8 ((char*)0x00628be8)
#define s_The_green_factor_for_the_hit_eff_00628c28 ((char*)0x00628c28)
#define s_cg_renderlandscape_00628b9c ((char*)0x00628b9c)
#define s_cg_hiteffectfactorr_00628c54 ((char*)0x00628c54)
#define s_C__dev_ONSLAUGHT2_engine_cpp_00628b40 ((char*)0x00628b40)
#define s_cg_hiteffectfactorg_00628c14 ((char*)0x00628c14)
#define s_Should_the_landscape_be_rendered_00628bb0 ((char*)0x00628bb0)
#define s_cg_drawpolybuckets_00628b60 ((char*)0x00628b60)
#define s_Should_polybucket_volumes_be_ren_00628b74 ((char*)0x00628b74)
#define s_cg_hiteffectfactorb_00628bd4 ((char*)0x00628bd4)
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef void * (BEA_THISCALL* FUN_004741b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004741b0_t> FUN_004741b0 = {(FUN_004741b0_t)0x004741b0};
typedef uint32_t (BEA_THISCALL* FUN_00490220_t)(uint32_t);
static const bea_guard<FUN_00490220_t> FUN_00490220 = {(FUN_00490220_t)0x00490220};
typedef undefined4 (BEA_THISCALL* FUN_00490280_t)(uint32_t);
static const bea_guard<FUN_00490280_t> FUN_00490280 = {(FUN_00490280_t)0x00490280};
typedef uint32_t (BEA_THISCALL* FUN_00544040_t)(uint32_t);
static const bea_guard<FUN_00544040_t> FUN_00544040 = {(FUN_00544040_t)0x00544040};
typedef void * (BEA_THISCALL* FUN_00544a00_t)(uint32_t);
static const bea_guard<FUN_00544a00_t> FUN_00544a00 = {(FUN_00544a00_t)0x00544a00};
typedef undefined4 (BEA_THISCALL* FUN_00544af0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00544af0_t> FUN_00544af0 = {(FUN_00544af0_t)0x00544af0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00551c90_t)(uint32_t);
static const bea_guard<FUN_00551c90_t> FUN_00551c90 = {(FUN_00551c90_t)0x00551c90};
typedef uint32_t (BEA_THISCALL* FUN_005520f0_t)(uint32_t);
static const bea_guard<FUN_005520f0_t> FUN_005520f0 = {(FUN_005520f0_t)0x005520f0};
typedef uint32_t (BEA_THISCALL* FUN_0055a390_t)(uint32_t);
static const bea_guard<FUN_0055a390_t> FUN_0055a390 = {(FUN_0055a390_t)0x0055a390};
typedef void * (BEA_THISCALL* FUN_0055b0e0_t)(uint32_t);
static const bea_guard<FUN_0055b0e0_t> FUN_0055b0e0 = {(FUN_0055b0e0_t)0x0055b0e0};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static undefined4 BEA_THISCALL ap_004499d0(CEngine * this_)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)(this_ + 0x10) = 0;
  *(undefined4 *)(this_ + 4) = 0;
  *(undefined4 *)(this_ + 8) = 0;
  *(undefined4 *)(this_ + 0x48c) = 200;
  *(undefined4 *)(this_ + 0x490) = 0x96;
  *(undefined4 *)(this_ + 0x494) = 0x96;
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_hiteffectfactorr_00628c54), bea_arg(s_The_red_factor_for_the_hit_effec_00628c68), bea_arg(0), bea_arg(this_ + 0x48c), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_hiteffectfactorg_00628c14), bea_arg(s_The_green_factor_for_the_hit_eff_00628c28), bea_arg(0), bea_arg(this_ + 0x490), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_hiteffectfactorb_00628bd4), bea_arg(s_The_blue_factor_for_the_hit_effe_00628be8), bea_arg(0), bea_arg(this_ + 0x494), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_renderlandscape_00628b9c), bea_arg(s_Should_the_landscape_be_rendered_00628bb0), bea_arg(3), bea_arg(this_ + 0x4a8), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_drawpolybuckets_00628b60), bea_arg(s_Should_polybucket_volumes_be_ren_00628b74), bea_arg(3), bea_arg(this_ + 0x4bc), bea_arg(0), bea_arg(0));
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x38), bea_arg(0x36), bea_arg(s_C__dev_ONSLAUGHT2_engine_cpp_00628b40), bea_arg(0x87));
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004741b0(bea_arg(pvVar1), bea_arg(0x20));
  }
  *(undefined4 *)(this_ + 0x470) = uVar2;
  puVar3 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x218), bea_arg(0x30), bea_arg(s_C__dev_ONSLAUGHT2_engine_cpp_00628b40), bea_arg(0x8b));
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 7;
    FUN_0055dc20(bea_arg(puVar4), bea_arg(0x4c), bea_arg(7), bea_arg(((void*)0x00491160)), bea_arg(((void*)0x00491180)));
  }
  *(undefined4 **)(this_ + 0x49c) = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  iVar5 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3abc), bea_arg(0x33), bea_arg(s_C__dev_ONSLAUGHT2_engine_cpp_00628b40), bea_arg(0x8f));
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)FUN_0055b0e0(bea_arg(iVar5));   // mov ecx, eax (00449b7d)
  }
  *(int *)(this_ + 0x14) = iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x40), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_engine_cpp_00628b40), bea_arg(0x93));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_00544a00(bea_arg(pvVar1));
  }
  *(void **)(this_ + 0x10) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  iVar5 = FUN_00544af0(bea_arg(pvVar1), bea_arg(*(undefined4 *)(this_ + 0x49c)));
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(this_ + 0x498) = 0;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xa14), bea_arg(0x31), bea_arg(s_C__dev_ONSLAUGHT2_engine_cpp_00628b40), bea_arg(0xa5));
  if (pvVar1 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00544040(bea_arg(pvVar1));
  }
  *(int *)(this_ + 0x498) = iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(this_ + 0x18) = 0;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x47c), bea_arg(0x34), bea_arg(s_C__dev_ONSLAUGHT2_engine_cpp_00628b40), bea_arg(0xab));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_00490220(bea_arg(pvVar1));
  }
  *(void **)(this_ + 0x18) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  iVar5 = FUN_00490280(bea_arg(pvVar1));
  if (iVar5 == 0) {
    return 0;
  }
  FUN_00551c90(bea_arg(&DAT_009c74f8));
  FUN_005520f0(bea_arg(&DAT_009c7550));
  FUN_0055a390(bea_arg(&DAT_009cc148));
  *(undefined4 *)(this_ + 0x4ac) = 0;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004499d0, ap_004499d0));
