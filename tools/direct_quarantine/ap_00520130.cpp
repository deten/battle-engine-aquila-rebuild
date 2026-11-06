// auto-ported from 00520130_vslot6.c (CFEPVirtualKeyboard::vslot6, 414 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xe0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char CFEPVirtualKeyboard;
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

static void BEA_THISCALL ap_00520130(CFEPVirtualKeyboard * this_, int param_1)
{
  CFEPVirtualKeyboard *pCVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int v0;

  alignas(16) uint8_t bea_frame_[0xe0] = {};   // the original stack frame (emulate_frame)
  int &local_e0 = *reinterpret_cast<int *>(bea_frame_ + 0xe0 - 0xe0);
  undefined1 (&local_dc)[20] = *reinterpret_cast<undefined1 (*)[20]>(bea_frame_ + 0xe0 - 0xdc);
  undefined1 (&local_c8)[200] = *reinterpret_cast<undefined1 (*)[200]>(bea_frame_ + 0xe0 - 0xc8);
  if (((param_1 == 9) || (param_1 == 0xe)) || (param_1 == 0)) {
    if (this_[0x48] != (CFEPVirtualKeyboard)0x0) {
      pCVar1 = this_ + 4;
      uVar2 = FUN_004f7bf0(bea_arg(&DAT_0063fd34));
      FUN_0055e64e(bea_arg(pCVar1), bea_arg(uVar2));
      FUN_0055de9b(local_dc,(char *)&PTR_DAT_00629314,1);
      uVar2 = FUN_004f7bf0(bea_arg(local_dc));
      FUN_0055e624(bea_arg(pCVar1), bea_arg(uVar2));
      v0 = 2;
      do {
        uVar2 = DAT_008a9694;
        iVar3 = FUN_005149c0(bea_arg(DAT_008a9694), bea_arg(&local_e0));
        if ((iVar3 != 0) || (iVar3 = 0, local_e0 < 1)) break;
        while (BEA_LOOP_GUARD(((iVar4 = FUN_00514a80(bea_arg(uVar2), bea_arg(iVar3), bea_arg(local_c8)), iVar4 != 0 ||
               (iVar4 = FUN_0055f2e8(bea_arg(local_c8), bea_arg(pCVar1)), iVar4 != 0))))) {
          iVar3 = iVar3 + 1;
          if (local_e0 <= iVar3) goto LAB_0052024e;
        }
        uVar2 = FUN_004f7bf0(bea_arg(&DAT_0063fd34));
        FUN_0055e64e(bea_arg(pCVar1), bea_arg(uVar2));
        FUN_0055de9b(local_dc,(char *)&PTR_DAT_00629314,v0);
        uVar2 = FUN_004f7bf0(bea_arg(local_dc));
        FUN_0055e624(bea_arg(pCVar1), bea_arg(uVar2));
        v0 = v0 + 1;
      } while (BEA_LOOP_GUARD((v0 < 0x1001)));
LAB_0052024e:
      uVar5 = FUN_0055e607(bea_arg(pCVar1));
      if (uVar5 < 0x1f) {
        uVar2 = FUN_0055e607(bea_arg(pCVar1));
      }
      else {
        uVar2 = 0x1f;
      }
      *(undefined4 *)(this_ + 0x44) = uVar2;
      this_[0x48] = (CFEPVirtualKeyboard)0x1;
    }
    *(undefined4 *)(this_ + 0x6e4) = 0;
    *(undefined4 *)(this_ + 0x6e8) = 0;
    *(undefined4 *)(this_ + 0x6ec) = 0;
    *(undefined4 *)(this_ + 0x6f4) = 0x3f000000;
    uVar5 = FUN_0055e607(bea_arg(this_ + 4));
    if (uVar5 < 0x1f) {
      uVar2 = FUN_0055e607(bea_arg(this_ + 4));
      *(undefined4 *)(this_ + 0x44) = uVar2;
      return;
    }
    *(undefined4 *)(this_ + 0x44) = 0x1f;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00520130, ap_00520130));
