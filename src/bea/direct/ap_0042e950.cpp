// auto-ported from 0042e950_FUN_0042e950.c (FUN_0042e950, 257 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066e99c GLOBAL_AT(undefined4*, 0x0066e99c)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_CDECL* FUN_0042e880_t)(void);
static const bea_guard<FUN_0042e880_t> FUN_0042e880 = {(FUN_0042e880_t)0x0042e880};
typedef undefined4 * (BEA_CDECL* FUN_0042eb90_t)(uint32_t);
static const bea_guard<FUN_0042eb90_t> FUN_0042eb90 = {(FUN_0042eb90_t)0x0042eb90};
typedef uint32_t (BEA_CDECL* FUN_0043e630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0043e630_t> FUN_0043e630 = {(FUN_0043e630_t)0x0043e630};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_CDECL ap_0042e950(void *param_1)
{
  undefined4 *puVar1;
  int *piVar2;
  void *this_local;
  int *piVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  short &local_6 = *reinterpret_cast<short *>(bea_frame_ + 0x10 - 0x6);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  if (DAT_0066e99c != (int *)0x0) {
    while(BEA_LOOP_GUARD(( true ))) {
      piVar3 = (int *)*DAT_0066e99c;
      DAT_0066e99c[2] = (int)piVar3;
      piVar2 = DAT_0066e99c;
      if ((piVar3 == (int *)0x0) || (puVar1 = (undefined4 *)*piVar3, puVar1 == (undefined4 *)0x0))
      break;
      FUN_004e5bd0(bea_arg(DAT_0066e99c), bea_arg(puVar1));
      bea_vcall<uint32_t>(puVar1, 0x0, 1);
    }
    if (DAT_0066e99c != (int *)0x0) {
      FUN_004e5c60(bea_arg(DAT_0066e99c));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
      DAT_0066e99c = (int *)0x0;
    }
  }
  FUN_0042e880();
  this_local = param_1;
  FUN_00548570(bea_arg(param_1), bea_arg(&local_6), bea_arg(2));
  if (local_6 != 0x12) {
    return 0;
  }
  FUN_00548570(bea_arg(this_local), bea_arg(&param_1), bea_arg(4));
  while (BEA_LOOP_GUARD((param_1 != (void *)0xffffffff))) {
    FUN_00548570(bea_arg(this_local), bea_arg(&uStack_4), bea_arg(4));
    piVar3 = (int *)FUN_0042eb90(bea_arg(param_1));
    if (piVar3 == (int *)0x0) {
      FUN_0043e630(bea_arg(this_local), bea_arg(uStack_4));
    }
    else {
      bea_vcall<uint32_t>(piVar3, 0xc, this_local);
      FUN_004e5b20(bea_arg(DAT_0066e99c), bea_arg(piVar3));
    }
    FUN_00548570(bea_arg(this_local), bea_arg(&param_1), bea_arg(4));
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042e950, ap_0042e950));
