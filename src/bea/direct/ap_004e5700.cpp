// auto-ported from 004e5700_vslot39.c (CSphereTrigger::vslot39, 315 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CSphereTrigger;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_monitor_h_0062551c ((char*)0x0062551c)
#define s_C__dev_ONSLAUGHT2_SphereTrigger__0063270c ((char*)0x0063270c)
typedef int (BEA_THISCALL* CComplexThing__vslot39_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot39_t> CComplexThing__vslot39 = {(CComplexThing__vslot39_t)0x004f4480};
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004e5700(CSphereTrigger * this_, int param_1, undefined4 param_2)
{
  CSphereTrigger *this_00;
  undefined3 uVar1;
  void *pvVar2;
  int *piVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  CComplexThing__vslot39(bea_arg((CComplexThing *)this_), bea_arg(param_1), bea_arg(param_2));
  if ((*(byte *)(param_1 + 0x34) & 0x10) != 0) {
    if (*(float *)(this_ + 0x88) != DAT_00672fd0) {
      this_00 = this_ + 0x8c;
      pvVar2 = (void *)FUN_00406d20(bea_arg(this_00));
      while (BEA_LOOP_GUARD((pvVar2 != (void *)0x0))) {
        FUN_0044b1d0(bea_arg(pvVar2));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar2));
        pvVar2 = (void *)FUN_00406d30(bea_arg(this_00));
      }
      FUN_004e5c60(bea_arg(this_00));
      *(float *)(this_ + 0x88) = DAT_00672fd0;
    }
    piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x5b), bea_arg(s_C__dev_ONSLAUGHT2_SphereTrigger__0063270c), bea_arg(0x53));
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = param_1;
      *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
      uVar1 = ((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu);
      (*(uint8_t*)((char*)&local_4 + 0)) = 1;
      *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
      if (param_1 != 0) {
        if (*(int *)(param_1 + 4) == 0) {
          pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_monitor_h_0062551c), bea_arg(0x18));
          (*(uint8_t*)((char*)&local_4 + 0)) = 2;
          if (pvVar2 == (void *)0x0) {
            pvVar2 = (void *)0x0;
          }
          else {
            FUN_004e5840(bea_arg(pvVar2));
          }
          *(void **)(param_1 + 4) = pvVar2;
          uVar1 = ((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu);
        }
        *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(uVar1) & 0xffffffu) << 8);
        (*(uint8_t*)((char*)&local_4 + 0)) = 1;
        FUN_004e5a80(bea_arg(*(void **)(param_1 + 4)), bea_arg(piVar3));
      }
    }
    local_4 = 0xffffffff;
    FUN_004e5b20(bea_arg(this_ + 0x8c), bea_arg(piVar3));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5700, ap_004e5700));
