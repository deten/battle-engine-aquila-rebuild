// auto-ported from 0042d640_FUN_0042d640.c (FUN_0042d640, 308 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
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
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_0042d640(void * this_, int param_1, undefined4 param_2, undefined4 param_3)
{
  int *piVar1;
  void *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  FUN_004e5840(bea_arg((void *)((int)this_ + 4)));
  local_4 = 0;
  FUN_00547d70(bea_arg((void *)((int)this_ + 0x2c)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  *(undefined ***)this_ = ((void*)0x005d977c);
  piVar1 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x27), bea_arg(s_C__dev_ONSLAUGHT2_Controller_cpp_00625538), bea_arg(0x3c7));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    (*(uint8_t*)((char*)&local_4 + 0)) = 3;
    *piVar1 = param_1;
    if (param_1 != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_monitor_h_0062551c), bea_arg(0x18));
        (*(uint8_t*)((char*)&local_4 + 0)) = 4;
        if (this_00 == (void *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          FUN_004e5840(bea_arg(this_00));
        }
        *(void **)(param_1 + 4) = this_00;
      }
      (*(uint8_t*)((char*)&local_4 + 0)) = 3;
      FUN_004e5a80(bea_arg(*(void **)(param_1 + 4)), bea_arg(piVar1));
    }
  }
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  FUN_004e5a80(bea_arg((void *)((int)this_ + 4)), bea_arg(piVar1));
  *(undefined4 *)((int)this_ + 0x16c) = param_2;
  *(undefined1 *)((int)this_ + 0x160) = 0;
  *(undefined1 *)((int)this_ + 0x161) = 0;
  *(undefined4 *)((int)this_ + 0x170) = 0;
  *(undefined4 *)((int)this_ + 0x174) = param_3;
  *(undefined4 *)((int)this_ + 0x164) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x168) = 0x3dcccccd;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042d640, ap_0042d640));
