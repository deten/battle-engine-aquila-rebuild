// auto-ported from 0052fa70_FUN_0052fa70.c (FUN_0052fa70, 305 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char Variable;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__Event_Function_was_e_0064cd38 ((char*)0x0064cd38)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064cce0 ((char*)0x0064cce0)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef Variable* (BEA_THISCALL* FUN_00539760_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539760_t> FUN_00539760 = {(FUN_00539760_t)0x00539760};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_0052fa70(void * this_, int param_1, void *param_2)
{
  int *piVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  void * &local_10 = *reinterpret_cast<void * *>(bea_frame_ + 0x20 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005d92d4);
  local_4 = 0;
  local_10 = this_;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0xc)));
  this_00 = param_2;
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  *(undefined ***)this_ = ((void*)0x005e4ef8);
  *(int *)((int)this_ + 0x1c) = param_1;
  FUN_00548570(bea_arg(param_2), bea_arg((int)this_ + 8), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(&local_14), bea_arg(4));
  param_1 = 0;
  if (local_14 < 1) {
    return (void *)(this_);
  }
  do {
    FUN_00548570(bea_arg(this_00), bea_arg(&param_2), bea_arg(4));
    iVar2 = FUN_00539760(bea_arg(*(void **)(*(int *)((int)this_ + 0x1c) + 0x58)), bea_arg(param_2));
    piVar1 = *(int **)(iVar2 + 8);
    iVar2 = bea_vcall<uint32_t>(piVar1, 0x4c);
    if (iVar2 == 3) {
      puVar3 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cce0), bea_arg(0x40));
      if (puVar3 == (undefined4 *)0x0) {
        FUN_004e5b20(bea_arg((void *)((int)this_ + 0xc)), bea_arg(0));
      }
      else {
        *puVar3 = piVar1;
        puVar3[1] = 0;
        FUN_004e5b20(bea_arg((void *)((int)this_ + 0xc)), bea_arg(puVar3));
      }
    }
    else {
      FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Event_Function_was_e_0064cd38);
    }
    param_1 = param_1 + 1;
  } while (BEA_LOOP_GUARD((param_1 < local_14)));
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052fa70, ap_0052fa70));
