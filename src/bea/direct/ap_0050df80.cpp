// auto-ported from 0050df80_FUN_0050df80.c (FUN_0050df80, 2164 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c51f0 GLOBAL_AT(int, 0x009c51f0)
#define DAT_008553fc GLOBAL_AT(int, 0x008553fc)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798 ((char*)0x0063d798)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef void * (BEA_THISCALL* FUN_004f7e90_t)(uint32_t);
static const bea_guard<FUN_004f7e90_t> FUN_004f7e90 = {(FUN_004f7e90_t)0x004f7e90};
typedef void * (BEA_THISCALL* FUN_0050ed10_t)(uint32_t);
static const bea_guard<FUN_0050ed10_t> FUN_0050ed10 = {(FUN_0050ed10_t)0x0050ed10};
typedef void * (BEA_THISCALL* FUN_0050ed80_t)(uint32_t);
static const bea_guard<FUN_0050ed80_t> FUN_0050ed80 = {(FUN_0050ed80_t)0x0050ed80};
typedef void * (BEA_THISCALL* FUN_0050f0a0_t)(uint32_t);
static const bea_guard<FUN_0050f0a0_t> FUN_0050f0a0 = {(FUN_0050f0a0_t)0x0050f0a0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_CDECL ap_0050df80(int param_1)
{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  if (0x27ff < DAT_009c51f0) {
    iVar4 = 0;
    iVar2 = FUN_00406d20(bea_arg(DAT_008553fc));
    while (BEA_LOOP_GUARD((iVar2 != 0))) {
      if (iVar4 == param_1) {
        if (iVar2 == 0) {
          return (undefined4 *)((undefined4 *)0x0);
        }
        switch(*(undefined4 *)(iVar2 + 0xe0)) {
        case 0:
          goto switchD_0050dffa_caseD_0;
        case 1:
        case 8:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x288), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x57));
          local_4 = 0xc;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050f0a0(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e1930);
          puVar3[2] = ((void*)0x005e18b8);
          return (undefined4 *)(puVar3);
        case 2:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x264), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x4e));
          local_4 = 3;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_004f7e90(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e297c);
          puVar3[2] = ((void*)0x005e2904);
          return (undefined4 *)(puVar3);
        case 3:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x278), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x4f));
          local_4 = 4;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050ed10(bea_arg(puVar3));
          local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),5);
          puVar3[0x9d] = 0;
          FUN_004cb040(bea_arg(puVar3 + 0x9c));
          *puVar3 = ((void*)0x005e272c);
          puVar3[2] = ((void*)0x005e26b4);
          return (undefined4 *)(puVar3);
        case 4:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x268), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x50));
          local_4 = 6;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_004f7e90(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e24dc);
          puVar3[2] = ((void*)0x005e2464);
          return (undefined4 *)(puVar3);
        case 5:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x26c), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x51));
          local_4 = 7;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_004f7e90(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e228c);
          puVar3[2] = ((void*)0x005e2214);
          return (undefined4 *)(puVar3);
        case 6:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x27c), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x52));
          local_4 = 8;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050f0a0(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e2038);
          puVar3[2] = ((void*)0x005e1fc0);
          return (undefined4 *)(puVar3);
        case 7:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x26c), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x53));
          local_4 = 9;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_004f7e90(bea_arg(puVar3));
          *puVar3 = ((void*)0x005d8eb4);
          puVar3[2] = ((void*)0x005d8e3c);
          return (undefined4 *)(puVar3);
        case 9:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x27c), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x4c));
          local_4 = 1;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050ed80(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e2e20);
          puVar3[2] = ((void*)0x005e2da8);
          return (undefined4 *)(puVar3);
        case 10:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x288), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x4d));
          local_4 = 2;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050f0a0(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e2bcc);
          puVar3[2] = ((void*)0x005e2b54);
          return (undefined4 *)(puVar3);
        default:
          return (undefined4 *)((undefined4 *)0x0);
        case 0xc:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2ac), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x55));
          local_4 = 10;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050f0a0(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e1dd8);
          puVar3[2] = ((void*)0x005e1d60);
          return (undefined4 *)(puVar3);
        case 0xd:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x268), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x56));
          local_4 = 0xb;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_004f7e90(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e1b84);
          puVar3[2] = ((void*)0x005e1b0c);
          return (undefined4 *)(puVar3);
        case 0xe:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2a8), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x58));
          local_4 = 0xd;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_004f7e90(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e16e0);
          puVar3[2] = ((void*)0x005e1668);
          return (undefined4 *)(puVar3);
        case 0xf:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x254), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x59));
          local_4 = 0xe;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_004f7e90(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e1490);
          puVar3[2] = ((void*)0x005e1418);
          return (undefined4 *)(puVar3);
        case 0x10:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x288), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x5a));
          local_4 = 0xf;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050f0a0(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e123c);
          puVar3[2] = ((void*)0x005e11c4);
          return (undefined4 *)(puVar3);
        case 0x11:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x274), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x5b));
          local_4 = 0x10;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050ed10(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e0fe0);
          puVar3[2] = ((void*)0x005e0f68);
          return (undefined4 *)(puVar3);
        case 0x12:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x28c), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x5c));
          local_4 = 0x11;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050f0a0(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e0d8c);
          puVar3[2] = ((void*)0x005e0d14);
          return (undefined4 *)(puVar3);
        case 0x13:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x288), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x5d));
          local_4 = 0x12;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050ed10(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e0b30);
          puVar3[2] = ((void*)0x005e0ab8);
          return (undefined4 *)(puVar3);
        case 0x14:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x264), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x5e));
          local_4 = 0x13;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_004f7e90(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e08e0);
          puVar3[2] = ((void*)0x005e0868);
          return (undefined4 *)(puVar3);
        case 0x15:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x26c), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x5f));
          local_4 = 0x14;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050ed10(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e0684);
          puVar3[2] = ((void*)0x005e060c);
          return (undefined4 *)(puVar3);
        case 0x16:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x290), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x60));
          local_4 = 0x15;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_0050ed80(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e0430);
          puVar3[2] = ((void*)0x005e03b8);
          return (undefined4 *)(puVar3);
        case 0x17:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2b8), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x61));
          local_4 = 0x16;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_004f7e90(bea_arg(puVar3));
          *puVar3 = ((void*)0x005e01dc);
          puVar3[2] = ((void*)0x005e0164);
          return (undefined4 *)(puVar3);
        case 0x18:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x268), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x62));
          local_4 = 0x17;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_004f7e90(bea_arg(puVar3));
          *puVar3 = ((void*)0x005dff8c);
          puVar3[2] = ((void*)0x005dff14);
          return (undefined4 *)(puVar3);
        case 0x19:
          puVar3 = (undefined4 *)
                   FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x254), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(99));
          local_4 = 0x18;
          if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)((undefined4 *)0x0);
          }
          FUN_004f7e90(bea_arg(puVar3));
          *puVar3 = ((void*)0x005dfd3c);
          puVar3[2] = ((void*)0x005dfcc4);
          return (undefined4 *)(puVar3);
        }
      }
      iVar4 = iVar4 + 1;
      piVar1 = *(int **)(*(int *)((int)DAT_008553fc + 8) + 4);
      *(int **)((int)DAT_008553fc + 8) = piVar1;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
    }
  }
  return (undefined4 *)((undefined4 *)0x0);
switchD_0050dffa_caseD_0:
  puVar3 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x26c), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x4b));
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)((undefined4 *)0x0);
  }
  FUN_0050ed10(bea_arg(puVar3));
  *puVar3 = ((void*)0x005e3074);
  puVar3[2] = ((void*)0x005e2ffc);
  return (undefined4 *)(puVar3);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050df80, ap_0050df80));
