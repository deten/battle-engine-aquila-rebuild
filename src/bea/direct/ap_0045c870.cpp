// auto-ported from 0045c870_FUN_0045c870.c (FUN_0045c870, 355 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_FEPGoodies_cpp_00629318 ((char*)0x00629318)
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_THISCALL* FUN_0045cd10_t)(uint32_t);
static const bea_guard<FUN_0045cd10_t> FUN_0045cd10 = {(FUN_0045cd10_t)0x0045cd10};
typedef int * (BEA_CDECL* FUN_004aab90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aab90_t> FUN_004aab90 = {(FUN_004aab90_t)0x004aab90};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 * (BEA_CDECL* FUN_00559be0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00559be0_t> FUN_00559be0 = {(FUN_00559be0_t)0x00559be0};

static void BEA_THISCALL ap_0045c870(void * this_, void *param_1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  local_4 = this_;
  FUN_0045cd10(bea_arg(this_));
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(param_1), bea_arg(&local_4), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg((int *)((int)this_ + 0x154)), bea_arg(4), bea_arg(1));
  iVar4 = *(int *)((int)this_ + 0x154);
  if (iVar4 == 0) {
    *(undefined4 *)((int)this_ + 0x14c) = 1;
    uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_FEPGoodies_cpp_00629318), bea_arg(0x4b1));
    *(undefined4 *)((int)this_ + 0x144) = uVar3;
    uVar3 = FUN_00559be0(bea_arg(0), bea_arg(param_1));
    **(undefined4 **)((int)this_ + 0x144) = uVar3;
    *(int *)(**(int **)((int)this_ + 0x144) + 0xa4) =
         *(int *)(**(int **)((int)this_ + 0x144) + 0xa4) + 1;
    *(int *)((int)this_ + 0x150) = (int)*(short *)(**(int **)((int)this_ + 0x144) + 0xb0);
    return;
  }
  if (iVar4 == 1) {
    FUN_00423910(bea_arg(param_1));
    piVar1 = (int *)((int)this_ + 0x14c);
    FUN_00423960(bea_arg(param_1), bea_arg(piVar1), bea_arg(4), bea_arg(1));
    uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*piVar1 << 2), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_FEPGoodies_cpp_00629318), bea_arg(0x4d9));
    *(undefined4 *)((int)this_ + 0x144) = uVar3;
    iVar4 = 0;
    if (0 < *piVar1) {
      do {
        FUN_00423910(bea_arg(param_1));
        uVar3 = FUN_00559be0(bea_arg(0), bea_arg(param_1));
        *(undefined4 *)(*(int *)((int)this_ + 0x144) + iVar4 * 4) = uVar3;
        iVar2 = *(int *)(*(int *)((int)this_ + 0x144) + iVar4 * 4);
        iVar4 = iVar4 + 1;
        *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 1;
      } while (BEA_LOOP_GUARD((iVar4 < *piVar1)));
    }
    FUN_00423910(bea_arg(param_1));
    iVar4 = FUN_004aab90(bea_arg(param_1), bea_arg(0));
    *(int *)((int)this_ + 0x148) = iVar4;
    *(int *)(iVar4 + 0x170) = *(int *)(iVar4 + 0x170) + 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0045c870, ap_0045c870));
