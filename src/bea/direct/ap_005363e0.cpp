// auto-ported from 005363e0_FUN_005363e0.c (FUN_005363e0, 478 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_008a9d3c GLOBAL_AT(int, 0x008a9d3c)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
#define s_Warning__sorry_no_player__d_retu_0064fc6c ((char*)0x0064fc6c)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa6c ((char*)0x0064fa6c)
#define s_Fatal_error__Player__d_has_no_ba_0064fc3c ((char*)0x0064fc3c)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_005363e0(void * this_, undefined4 *param_1, undefined4 param_2, undefined4 *param_3)
{
  undefined3 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  iVar2 = bea_vcall<uint32_t>(*param_1, 0x30);
  iVar2 = iVar2 + -1;
  if (iVar2 < 0) {
    iVar2 = bea_vcall<uint32_t>(*param_1, 0x30);
    FUN_00441740(&DAT_0066f580,s_Warning__sorry_no_player__d_retu_0064fc6c,iVar2);
    iVar2 = 1;
  }
  if ((&DAT_008a9d3c)[iVar2] == 0) {
    iVar2 = bea_vcall<uint32_t>(*param_1, 0x30);
    FUN_00441740(&DAT_0066f580,s_Fatal_error__Player__d_has_no_ba_0064fc3c,iVar2);
    puVar3 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x5fd));
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar2 = *(int *)((int)this_ + 0x10);
      *puVar3 = ((void*)0x005e4b4c);
      *(uint32_t*)((char*)&uStack_4) = (*(uint32_t*)((char*)&uStack_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
      uVar1 = ((*(uint32_t*)((char*)&uStack_4) >> 8) & 0xffffffu);
      (*(uint8_t*)((char*)&uStack_4 + 0)) = 2;
      *(uint32_t*)((char*)&uStack_4) = (*(uint32_t*)((char*)&uStack_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
      puVar3[1] = iVar2;
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 4) == 0) {
          pvVar4 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa6c), bea_arg(0x18));
          (*(uint8_t*)((char*)&uStack_4 + 0)) = 3;
          if (pvVar4 == (void *)0x0) {
            pvVar4 = (void *)0x0;
          }
          else {
            FUN_004e5840(bea_arg(pvVar4));
          }
          *(void **)(iVar2 + 4) = pvVar4;
          uVar1 = ((*(uint32_t*)((char*)&uStack_4) >> 8) & 0xffffffu);
        }
        *(uint32_t*)((char*)&uStack_4) = (*(uint32_t*)((char*)&uStack_4) & ~(0xffffffu << 8)) | (((uint32_t)(uVar1) & 0xffffffu) << 8);
        (*(uint8_t*)((char*)&uStack_4 + 0)) = 2;
        FUN_004e5a80(bea_arg(*(void **)(iVar2 + 4)), bea_arg(puVar3 + 1));
      }
      *puVar3 = ((void*)0x005e4df8);
    }
    iVar2 = 0;
    uStack_4 = 0xffffffff;
    *param_3 = puVar3;
  }
  else {
    iVar2 = *(int *)((&DAT_008a9d3c)[iVar2] + 0x1c);
  }
  puVar3 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x5ff));
  if (puVar3 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
    *param_3 = 0;
  }
  else {
    *puVar3 = ((void*)0x005e4b4c);
    *(uint32_t*)((char*)&uStack_4) = (*(uint32_t*)((char*)&uStack_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
    uVar1 = ((*(uint32_t*)((char*)&uStack_4) >> 8) & 0xffffffu);
    (*(uint8_t*)((char*)&uStack_4 + 0)) = 6;
    *(uint32_t*)((char*)&uStack_4) = (*(uint32_t*)((char*)&uStack_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
    puVar3[1] = iVar2;
    puVar5 = puVar3;
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) == 0) {
        pvVar4 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa6c), bea_arg(0x18));
        (*(uint8_t*)((char*)&uStack_4 + 0)) = 7;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          FUN_004e5840(bea_arg(pvVar4));
        }
        *(void **)(iVar2 + 4) = pvVar4;
        uVar1 = ((*(uint32_t*)((char*)&uStack_4) >> 8) & 0xffffffu);
      }
      *(uint32_t*)((char*)&uStack_4) = (*(uint32_t*)((char*)&uStack_4) & ~(0xffffffu << 8)) | (((uint32_t)(uVar1) & 0xffffffu) << 8);
      (*(uint8_t*)((char*)&uStack_4 + 0)) = 6;
      puVar5 = (undefined4 *)FUN_004e5a80(bea_arg(*(void **)(iVar2 + 4)), bea_arg(puVar3 + 1));
    }
    *puVar3 = ((void*)0x005e4df8);
    *param_3 = puVar3;
  }
  return (undefined4 *)(puVar5);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005363e0, ap_005363e0));
