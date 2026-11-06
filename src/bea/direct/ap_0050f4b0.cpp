// auto-ported from 0050f4b0_FUN_0050f4b0.c (FUN_0050f4b0, 268 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c51f0 GLOBAL_AT(int, 0x009c51f0)
#define DAT_009c519c GLOBAL_AT(int, 0x009c519c)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798 ((char*)0x0063d798)
#define s_Thing_heap_full_0063d914 ((char*)0x0063d914)
typedef uint (BEA_THISCALL* FUN_004a2460_t)(uint32_t);
static const bea_guard<FUN_004a2460_t> FUN_004a2460 = {(FUN_004a2460_t)0x004a2460};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef void * (BEA_THISCALL* FUN_004e5da0_t)(uint32_t);
static const bea_guard<FUN_004e5da0_t> FUN_004e5da0 = {(FUN_004e5da0_t)0x004e5da0};
typedef void * (BEA_THISCALL* FUN_004e6870_t)(uint32_t);
static const bea_guard<FUN_004e6870_t> FUN_004e6870 = {(FUN_004e6870_t)0x004e6870};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055e183_t)(void *, ...);
static const bea_guard<FUN_0055e183_t> FUN_0055e183 = {(FUN_0055e183_t)0x0055e183};

static undefined4 * BEA_CDECL ap_0050f4b0(undefined4 param_1)
{
  void *this_local;
  undefined4 *puVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  if (DAT_009c51f0 < 0x2800) {
    FUN_0055e183(s_Thing_heap_full_0063d914);
    FUN_004a2460(bea_arg(&DAT_009c519c));
  }
  else {
    switch(param_1) {
    case 0:
    case 3:
      puVar1 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xb4), bea_arg(8), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x91));
      local_4 = 0;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_004e5da0(bea_arg(puVar1));
        local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
        FUN_004e5840(bea_arg(puVar1 + 0x29));
        *puVar1 = ((void*)0x005e39cc);
        puVar1[2] = ((void*)0x005e3954);
        return (undefined4 *)(puVar1);
      }
      break;
    default:
      this_local = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x144), bea_arg(8), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x95));
      local_4 = 2;
      if (this_local != (void *)0x0) {
        puVar1 = (undefined4 *)FUN_004e6870(bea_arg(this_local));
        return (undefined4 *)(puVar1);
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
      break;
    }
  }
  return (undefined4 *)((undefined4 *)0x0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050f4b0, ap_0050f4b0));
