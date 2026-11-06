// auto-ported from 00505210_FUN_00505210.c (FUN_00505210, 435 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_wavread_cpp_0063d1b0 ((char*)0x0063d1b0)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_CDECL ap_00505210(HMMIO param_1, LPMMCKINFO param_2, int *param_3)
{
  int *piVar1;
  MMRESULT MVar2;
  LONG LVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x18);
  _MMCKINFO &local_14 = *reinterpret_cast<_MMCKINFO *>(bea_frame_ + 0x30 - 0x14);
  piVar1 = param_3;
  *param_3 = 0;
  MVar2 = mmioDescend(param_1,param_2,(MMCKINFO *)0x0,0);
  if (((MVar2 != 0) || (param_2->ckid != 0x46464952)) || (param_2->fccType != 0x45564157)) {
    return 0x80004005;
  }
  local_14.ckid = 0x20746d66;
  MVar2 = mmioDescend(param_1,&local_14,param_2,0x10);
  if (MVar2 != 0) {
    return 0x80004005;
  }
  if (local_14.cksize < 0x10) {
    return 0x80004005;
  }
  LVar3 = mmioRead(param_1,(HPSTR)&local_24,0x10);
  if (LVar3 != 0x10) {
    return 0x80004005;
  }
  if ((short)local_24 == 1) {
    puVar4 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x12), bea_arg(0x4a), bea_arg(s_C__dev_ONSLAUGHT2_wavread_cpp_0063d1b0), bea_arg(0x3d));
    *piVar1 = (int)puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      return 0x80004005;
    }
    *puVar4 = local_24;
    puVar4[1] = local_20;
    puVar4[2] = local_1c;
    puVar4[3] = local_18;
    *(undefined2 *)(*piVar1 + 0x10) = 0;
  }
  else {
    param_3 = (int *)0x0;
    LVar3 = mmioRead(param_1,(HPSTR)&param_3,2);
    if (LVar3 != 2) {
      return 0x80004005;
    }
    puVar4 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(((uint)param_3 & 0xffff) + 0x12), bea_arg(0x4a), bea_arg(s_C__dev_ONSLAUGHT2_wavread_cpp_0063d1b0), bea_arg(0x4b));
    *piVar1 = (int)puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      return 0x80004005;
    }
    *puVar4 = local_24;
    puVar4[1] = local_20;
    puVar4[2] = local_1c;
    puVar4[3] = local_18;
    *(undefined2 *)(*piVar1 + 0x10) = (*(uint16_t*)((char*)&param_3 + 0));
    uVar5 = mmioRead(param_1,(HPSTR)(*piVar1 + 0x12),(uint)param_3 & 0xffff);
    if (uVar5 != ((uint)param_3 & 0xffff)) {
      iVar6 = *piVar1;
      goto LAB_005052fa;
    }
  }
  MVar2 = mmioAscend(param_1,&local_14,0);
  if (MVar2 == 0) {
    return 0;
  }
  iVar6 = *piVar1;
LAB_005052fa:
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar6));
  *piVar1 = 0;
  return 0x80004005;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00505210, ap_00505210));
