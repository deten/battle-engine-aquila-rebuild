// auto-ported from 004ae2b0_FUN_004ae2b0.c (FUN_004ae2b0, 383 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662dd4 GLOBAL_AT(int, 0x00662dd4)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Ignoring_mesh___s__for_poly_buck_0062fe90 ((char*)0x0062fe90)
#define s_tempbuilding3_msh_0062fec0 ((char*)0x0062fec0)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
#define s_boss_fenrir_msh_0062fed4 ((char*)0x0062fed4)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef char * (BEA_THISCALL* FUN_004aa6b0_t)(uint32_t);
static const bea_guard<FUN_004aa6b0_t> FUN_004aa6b0 = {(FUN_004aa6b0_t)0x004aa6b0};
typedef uint32_t (BEA_THISCALL* FUN_004ae640_t)(uint32_t);
static const bea_guard<FUN_004ae640_t> FUN_004ae640 = {(FUN_004ae640_t)0x004ae640};
typedef uint32_t (BEA_THISCALL* FUN_004b31f0_t)(uint32_t);
static const bea_guard<FUN_004b31f0_t> FUN_004b31f0 = {(FUN_004b31f0_t)0x004b31f0};
typedef void * (BEA_THISCALL* FUN_004b3b70_t)(uint32_t);
static const bea_guard<FUN_004b3b70_t> FUN_004b3b70 = {(FUN_004b3b70_t)0x004b3b70};
typedef uint32_t (BEA_THISCALL* FUN_004d39d0_t)(uint32_t);
static const bea_guard<FUN_004d39d0_t> FUN_004d39d0 = {(FUN_004d39d0_t)0x004d39d0};
typedef uint32_t (BEA_THISCALL* FUN_004d3a00_t)(uint32_t);
static const bea_guard<FUN_004d3a00_t> FUN_004d3a00 = {(FUN_004d3a00_t)0x004d3a00};
typedef undefined4 (BEA_THISCALL* FUN_004d40d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d40d0_t> FUN_004d40d0 = {(FUN_004d40d0_t)0x004d40d0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_004ae2b0(void * this_)
{
  void *this_00;
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(int *)((int)this_ + 0x100) != 0) {
    return;
  }
  if ((*(int *)((int)this_ + 0x8c) != 1) && (*(int *)((int)this_ + 0x8c) != 3)) {
    return;
  }
  pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xb8), bea_arg(0x46), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xe9));
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004d39d0(bea_arg(pvVar2));
  }
  *(int *)((int)this_ + 0x100) = iVar3;
  if (iVar3 == 0) {
    return;
  }
  pvVar2 = (void *)FUN_004b3b70(bea_arg(this_));
  pcVar5 = s_boss_fenrir_msh_0062fed4;
  uVar4 = FUN_004aa6b0(bea_arg(*(void **)((int)this_ + 0x128)));
  iVar3 = FUN_00568390(bea_arg(uVar4), bea_arg(pcVar5));
  if (iVar3 != 0) {
    pcVar5 = s_tempbuilding3_msh_0062fec0;
    uVar4 = FUN_004aa6b0(bea_arg(*(void **)((int)this_ + 0x128)));
    iVar3 = FUN_00568390(bea_arg(uVar4), bea_arg(pcVar5));
    if (iVar3 != 0) {
      if (DAT_00662dd4 != 0) {
        FUN_004b31f0(bea_arg(pvVar2));
      }
      goto LAB_004ae3ab;
    }
  }
  pcVar5 = (char *)FUN_004aa6b0(bea_arg(*(void **)((int)this_ + 0x128)));
  FUN_00441740(&DAT_0066f580,s_Ignoring_mesh___s__for_poly_buck_0062fe90,pcVar5);
LAB_004ae3ab:
  cVar1 = FUN_004d40d0(bea_arg(*(void **)((int)this_ + 0x100)), bea_arg(pvVar2));
  if ((cVar1 == '\0') && (this_00 = *(void **)((int)this_ + 0x100), this_00 != (void *)0x0)) {
    FUN_004d3a00(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    *(undefined4 *)((int)this_ + 0x100) = 0;
  }
  iVar3 = 0;
  if (0 < *(int *)((int)pvVar2 + 0x90)) {
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)((int)pvVar2 + 0x94) + -4 + iVar3 * 4) = 0;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)pvVar2 + 0x90))));
  }
  if (pvVar2 != (void *)0x0) {
    FUN_004ae640(bea_arg(pvVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar2));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ae2b0, ap_004ae2b0));
