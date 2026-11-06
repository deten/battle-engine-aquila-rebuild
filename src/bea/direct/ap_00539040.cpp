// auto-ported from 00539040_FUN_00539040.c (FUN_00539040, 338 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__00650040 ((char*)0x00650040)
typedef void * (BEA_THISCALL* FUN_004241a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004241a0_t> FUN_004241a0 = {(FUN_004241a0_t)0x004241a0};
typedef void * (BEA_THISCALL* FUN_00424260_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00424260_t> FUN_00424260 = {(FUN_00424260_t)0x00424260};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef undefined4 * (BEA_THISCALL* FUN_0052fbb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052fbb0_t> FUN_0052fbb0 = {(FUN_0052fbb0_t)0x0052fbb0};
typedef int * (BEA_THISCALL* FUN_005395b0_t)(uint32_t);
static const bea_guard<FUN_005395b0_t> FUN_005395b0 = {(FUN_005395b0_t)0x005395b0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_00539040(void * this_)
{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *this_00;
  int iVar6;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x70), bea_arg(0x76), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__00650040), bea_arg(0x53));
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_004241a0(bea_arg(puVar2 + 1), bea_arg(0x10), bea_arg(1));
    local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
    FUN_004e5840(bea_arg(puVar2 + 0x12));
    *puVar2 = ((void*)0x005e4f54);
    puVar2[0x19] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar4 = puVar2 + 5;
    for (iVar6 = 0xd; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
  }
  iVar6 = 0;
  local_4 = 0xffffffff;
  if (0 < *(int *)((int)this_ + 0xc)) {
    do {
      iVar3 = bea_vcall<uint32_t>(*(int **)(*(int *)((int)this_ + 4) + iVar6 * 4), 0x4);
      FUN_00424260(bea_arg(puVar2 + 1), bea_arg(puVar2[0x19]), bea_arg(iVar3));
      *(undefined4 *)(iVar3 + 8) = puVar2[0x19];
      iVar6 = iVar6 + 1;
      puVar2[0x19] = puVar2[0x19] + 1;
    } while (BEA_LOOP_GUARD((iVar6 < *(int *)((int)this_ + 0xc))));
  }
  puVar4 = puVar2 + 5;
  iVar6 = 0xd;
  do {
    *puVar4 = *(undefined4 *)(((int)this_ - (int)puVar2) + (int)puVar4);
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (BEA_LOOP_GUARD((iVar6 != 0)));
  uVar5 = FUN_005395b0(bea_arg(*(void **)((int)this_ + 0x58)));
  puVar2[0x16] = uVar5;
  piVar1 = *(int **)((int)this_ + 0x48);
  *(int **)((int)this_ + 0x50) = piVar1;
  if (piVar1 == (int *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*piVar1;
  }
  if (this_00 != (void *)0x0) {
    do {
      uVar5 = FUN_0052fbb0(bea_arg(this_00), bea_arg(puVar2));
      FUN_004e5b20(bea_arg(puVar2 + 0x12), bea_arg(uVar5));
      piVar1 = *(int **)(*(int *)((int)this_ + 0x50) + 4);
      *(int **)((int)this_ + 0x50) = piVar1;
      if (piVar1 == (int *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        this_00 = (void *)*piVar1;
      }
    } while (BEA_LOOP_GUARD((this_00 != (void *)0x0)));
  }
  puVar2[0x1b] = *(undefined4 *)((int)this_ + 0x6c);
  puVar2[0x18] = *(undefined4 *)((int)this_ + 0x60);
  puVar2[0x17] = *(undefined4 *)((int)this_ + 0x5c);
  puVar2[0x19] = *(undefined4 *)((int)this_ + 100);
  return (undefined4 *)(puVar2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539040, ap_00539040));
