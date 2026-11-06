// auto-ported from 004d06e0_FUN_004d06e0.c (FUN_004d06e0, 294 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0082b4e8 GLOBAL_AT(char, 0x0082b4e8)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define DAT_008a1388 GLOBAL_AT(short, 0x008a1388)
#define DAT_008a9694 GLOBAL_AT(int, 0x008a9694)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define s_C__dev_ONSLAUGHT2_PauseMenu_cpp_006314dc ((char*)0x006314dc)
typedef uint32_t (BEA_THISCALL* FUN_00421350_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00421350_t> FUN_00421350 = {(FUN_00421350_t)0x00421350};
typedef int (BEA_CDECL* FUN_00421430_t)(void);
static const bea_guard<FUN_00421430_t> FUN_00421430 = {(FUN_00421430_t)0x00421430};
typedef int (BEA_CDECL* FUN_0042d310_t)(void);
static const bea_guard<FUN_0042d310_t> FUN_0042d310 = {(FUN_0042d310_t)0x0042d310};
typedef undefined4 (BEA_THISCALL* FUN_0042e4b0_t)(uint32_t);
static const bea_guard<FUN_0042e4b0_t> FUN_0042e4b0 = {(FUN_0042e4b0_t)0x0042e4b0};
typedef uint32_t (BEA_THISCALL* FUN_0042e6e0_t)(uint32_t);
static const bea_guard<FUN_0042e6e0_t> FUN_0042e6e0 = {(FUN_0042e6e0_t)0x0042e6e0};
typedef uint32_t (BEA_THISCALL* FUN_0046fae0_t)(uint32_t);
static const bea_guard<FUN_0046fae0_t> FUN_0046fae0 = {(FUN_0046fae0_t)0x0046fae0};
typedef undefined4 (BEA_THISCALL* FUN_004705d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004705d0_t> FUN_004705d0 = {(FUN_004705d0_t)0x004705d0};
typedef undefined4 (BEA_STDCALL* FUN_00514be0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514be0_t> FUN_00514be0 = {(FUN_00514be0_t)0x00514be0};
typedef undefined4 (BEA_STDCALL* FUN_00514f80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514f80_t> FUN_00514f80 = {(FUN_00514f80_t)0x00514f80};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_CDECL* FUN_0051f680_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0051f680_t> FUN_0051f680 = {(FUN_0051f680_t)0x0051f680};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004d06e0(void * this_, undefined4 param_1)
{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  local_4 = this_;
  if (DAT_0082b4e8 == '\0') {
    iVar5 = 0;
    do {
      iVar1 = FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar5));
      if (iVar1 != 0) {
        pvVar2 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar5));
        pvVar2 = (void *)FUN_0042e4b0(bea_arg(pvVar2));
        if (pvVar2 == this_) {
          pvVar2 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar5));
          FUN_0042e6e0(bea_arg(pvVar2));
        }
      }
      iVar5 = iVar5 + 1;
    } while (BEA_LOOP_GUARD((iVar5 < 2)));
    FUN_0046fae0(bea_arg(&DAT_008a9a98));
    FUN_0042d310();
    uVar3 = FUN_00421430();
    uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar3), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_PauseMenu_cpp_006314dc), bea_arg(0x60b));
    FUN_00421350(bea_arg(&DAT_00660620), bea_arg(uVar4));
    if (DAT_008a1388 != 0) {
      iVar5 = FUN_00514be0(bea_arg(DAT_008a9694), bea_arg(&DAT_008a1388), bea_arg(&local_4), bea_arg(1));
      if (iVar5 == 0) {
        FUN_00514f80(bea_arg(DAT_008a9694), bea_arg(local_4), bea_arg(&DAT_008a1388), bea_arg(uVar4), bea_arg(uVar3));
      }
    }
    FUN_0051f680(bea_arg(uVar4), bea_arg(uVar3));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar4));
  }
  *(undefined4 *)((int)this_ + 0x10) = 0;
  fVar6 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)((int)this_ + 0x30) = (float)fVar6;
  if (*(int **)((int)this_ + 8) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x4, 1);
    *(undefined4 *)((int)this_ + 8) = 0;
  }
  if (*(int **)((int)this_ + 0x3c) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x3c), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x3c) = 0;
  }
  *(undefined4 *)((int)this_ + 0x48) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d06e0, ap_004d06e0));
