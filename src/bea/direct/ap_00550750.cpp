// auto-ported from 00550750_FUN_00550750.c (FUN_00550750, 154 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_DXPatchManager_0065211c ((char*)0x0065211c)
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00550750(void * this_, void *param_1)
{
  void *this_00;
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  this_00 = param_1;
  puVar2 = (undefined4 *)((int)this_ + 0x10);
  local_8 = 3;
  do {
    iVar3 = 0x10;
    do {
      FUN_00423960(bea_arg(this_00), bea_arg(&local_4), bea_arg(4), bea_arg(1));
      *puVar2 = local_4;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
    local_8 = local_8 + -1;
  } while (BEA_LOOP_GUARD((local_8 != 0)));
  FUN_00423960(bea_arg(this_00), bea_arg(&param_1), bea_arg(4), bea_arg(1));
  *(void **)((int)this_ + 0xd0) = param_1;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((int)param_1 * 2), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXPatchManager_0065211c), bea_arg(0x94));
  *(undefined4 *)((int)this_ + 0xc) = uVar1;
  FUN_00423960(bea_arg(this_00), bea_arg(uVar1), bea_arg(2), bea_arg(param_1));
  *(undefined4 *)((int)this_ + 8) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550750, ap_00550750));
