// auto-ported from 0042e610_FUN_0042e610.c (FUN_0042e610, 204 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_monitor_h_0062551c ((char*)0x0062551c)
#define s_C__dev_ONSLAUGHT2_Controller_cpp_00625538 ((char*)0x00625538)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_0042e610(void * this_, int param_1)
{
  undefined3 uVar1;
  int *piVar2;
  void *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  local_4 = 0xffffffff;
  piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x27), bea_arg(s_C__dev_ONSLAUGHT2_Controller_cpp_00625538), bea_arg(0x3c7));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
    uVar1 = ((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu);
    (*(uint8_t*)((char*)&local_4 + 0)) = 1;
    *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
    *piVar2 = param_1;
    if (param_1 != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_monitor_h_0062551c), bea_arg(0x18));
        (*(uint8_t*)((char*)&local_4 + 0)) = 2;
        if (this_00 == (void *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          FUN_004e5840(bea_arg(this_00));
        }
        *(void **)(param_1 + 4) = this_00;
        uVar1 = ((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu);
      }
      *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(uVar1) & 0xffffffu) << 8);
      (*(uint8_t*)((char*)&local_4 + 0)) = 1;
      FUN_004e5a80(bea_arg(*(void **)(param_1 + 4)), bea_arg(piVar2));
    }
  }
  local_4 = 0xffffffff;
  return FUN_004e5a80(bea_arg((void *)((int)this_ + 4)), bea_arg(piVar2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042e610, ap_0042e610));
