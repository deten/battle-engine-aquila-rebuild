// auto-ported from 0051fff0_FUN_0051fff0.c (FUN_0051fff0, 314 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xe0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_0063fd34 GLOBAL_AT(int, 0x0063fd34)
#define DAT_008a9694 GLOBAL_AT(int, 0x008a9694)
#define PTR_DAT_00629314 GLOBAL_AT(void*, 0x00629314)
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef undefined4 (BEA_STDCALL* FUN_005149c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005149c0_t> FUN_005149c0 = {(FUN_005149c0_t)0x005149c0};
typedef undefined4 (BEA_STDCALL* FUN_00514a80_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514a80_t> FUN_00514a80 = {(FUN_00514a80_t)0x00514a80};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_0055e607_t)(uint32_t);
static const bea_guard<FUN_0055e607_t> FUN_0055e607 = {(FUN_0055e607_t)0x0055e607};
typedef short * (BEA_CDECL* FUN_0055e624_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e624_t> FUN_0055e624 = {(FUN_0055e624_t)0x0055e624};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};
typedef uint32_t (BEA_CDECL* FUN_0055f2e8_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055f2e8_t> FUN_0055f2e8 = {(FUN_0055f2e8_t)0x0055f2e8};

static void BEA_THISCALL ap_0051fff0(void * this_)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int v0;

  alignas(16) uint8_t bea_frame_[0xe0] = {};   // the original stack frame (emulate_frame)
  int &local_e0 = *reinterpret_cast<int *>(bea_frame_ + 0xe0 - 0xe0);
  undefined1 (&local_dc)[20] = *reinterpret_cast<undefined1 (*)[20]>(bea_frame_ + 0xe0 - 0xdc);
  undefined1 (&local_c8)[200] = *reinterpret_cast<undefined1 (*)[200]>(bea_frame_ + 0xe0 - 0xc8);
  iVar1 = (int)this_ + 4;
  uVar2 = FUN_004f7bf0(bea_arg(&DAT_0063fd34));
  FUN_0055e64e(bea_arg(iVar1), bea_arg(uVar2));
  FUN_0055de9b(local_dc,(char *)&PTR_DAT_00629314,1);
  uVar2 = FUN_004f7bf0(bea_arg(local_dc));
  FUN_0055e624(bea_arg(iVar1), bea_arg(uVar2));
  v0 = 2;
  do {
    uVar2 = DAT_008a9694;
    iVar3 = FUN_005149c0(bea_arg(DAT_008a9694), bea_arg(&local_e0));
    if ((iVar3 != 0) || (iVar3 = 0, local_e0 < 1)) break;
    while (BEA_LOOP_GUARD(((iVar4 = FUN_00514a80(bea_arg(uVar2), bea_arg(iVar3), bea_arg(local_c8)), iVar4 != 0 ||
           (iVar4 = FUN_0055f2e8(bea_arg(local_c8), bea_arg(iVar1)), iVar4 != 0))))) {
      iVar3 = iVar3 + 1;
      if (local_e0 <= iVar3) goto LAB_005200ea;
    }
    uVar2 = FUN_004f7bf0(bea_arg(&DAT_0063fd34));
    FUN_0055e64e(bea_arg(iVar1), bea_arg(uVar2));
    FUN_0055de9b(local_dc,(char *)&PTR_DAT_00629314,v0);
    uVar2 = FUN_004f7bf0(bea_arg(local_dc));
    FUN_0055e624(bea_arg(iVar1), bea_arg(uVar2));
    v0 = v0 + 1;
  } while (BEA_LOOP_GUARD((v0 < 0x1001)));
LAB_005200ea:
  uVar5 = FUN_0055e607(bea_arg(iVar1));
  if (0x1e < uVar5) {
    *(undefined1 *)((int)this_ + 0x48) = 1;
    *(undefined4 *)((int)this_ + 0x44) = 0x1f;
    return;
  }
  uVar2 = FUN_0055e607(bea_arg(iVar1));
  *(undefined4 *)((int)this_ + 0x44) = uVar2;
  *(undefined1 *)((int)this_ + 0x48) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051fff0, ap_0051fff0));
