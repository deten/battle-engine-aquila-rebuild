// auto-ported from 0050fa40_FUN_0050fa40.c (FUN_0050fa40, 590 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c51f0 GLOBAL_AT(int, 0x009c51f0)
#define DAT_00855400 GLOBAL_AT(undefined4*, 0x00855400)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798 ((char*)0x0063d798)
#define s_Gill_M_Head_0063d9b4 ((char*)0x0063d9b4)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef void * (BEA_THISCALL* FUN_004f7e90_t)(uint32_t);
static const bea_guard<FUN_004f7e90_t> FUN_004f7e90 = {(FUN_004f7e90_t)0x004f7e90};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00551fd0_t)(uint32_t);
static const bea_guard<FUN_00551fd0_t> FUN_00551fd0 = {(FUN_00551fd0_t)0x00551fd0};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 * BEA_CDECL ap_0050fa40(int param_1)
{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  if ((0x27ff < DAT_009c51f0) && (-1 < param_1)) {
    iVar3 = 0;
    piVar1 = (int *)*DAT_00855400;
    DAT_00855400[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    while (BEA_LOOP_GUARD((iVar4 != 0))) {
      if (iVar3 == param_1) goto LAB_0050fab9;
      iVar3 = iVar3 + 1;
      piVar1 = *(int **)(DAT_00855400[2] + 4);
      DAT_00855400[2] = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
    }
    iVar4 = 0;
LAB_0050fab9:
    iVar3 = FUN_00568390(bea_arg(*(undefined4 *)(iVar4 + 0xb0)), bea_arg(s_Gill_M_Head_0063d9b4));
    if (iVar3 == 0) {
      puVar2 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c0), bea_arg(0x40), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0xf7));
      local_4 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_004f7e90(bea_arg(puVar2));
        (*(uint8_t*)((char*)&local_4 + 0)) = 1;
        puVar2[0x97] = 0;
        FUN_004cb040(bea_arg(puVar2 + 0x96));
        (*(uint8_t*)((char*)&local_4 + 0)) = 2;
        FUN_00551fd0(bea_arg(puVar2 + 0x9b));
        local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),3);
        FUN_004011b0(bea_arg(puVar2 + 0x9f), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
        *puVar2 = ((void*)0x005e41f8);
        puVar2[2] = ((void*)0x005e4180);
        return (undefined4 *)(puVar2);
      }
    }
    else if (*(int *)(iVar4 + 300) == 0) {
      puVar2 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c0), bea_arg(0x40), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0xfb));
      local_4 = 8;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_004f7e90(bea_arg(puVar2));
        local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),9);
        puVar2[0x97] = 0;
        FUN_004cb040(bea_arg(puVar2 + 0x96));
        puVar2[0x9b] = 0;
        *puVar2 = ((void*)0x005e3d40);
        puVar2[2] = ((void*)0x005e3cc8);
        return (undefined4 *)(puVar2);
      }
    }
    else {
      puVar2 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x310), bea_arg(0x40), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0xf9));
      local_4 = 4;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_004f7e90(bea_arg(puVar2));
        (*(uint8_t*)((char*)&local_4 + 0)) = 5;
        puVar2[0x97] = 0;
        FUN_004cb040(bea_arg(puVar2 + 0x96));
        (*(uint8_t*)((char*)&local_4 + 0)) = 6;
        FUN_00551fd0(bea_arg(puVar2 + 0x9b));
        local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),7);
        FUN_004011b0(bea_arg(puVar2 + 0x9f), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
        *puVar2 = ((void*)0x005e3f9c);
        puVar2[2] = ((void*)0x005e3f24);
        return (undefined4 *)(puVar2);
      }
    }
  }
  return (undefined4 *)((undefined4 *)0x0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050fa40, ap_0050fa40));
