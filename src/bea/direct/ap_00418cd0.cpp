// auto-ported from 00418cd0_vslot0.c (CThingCamera::vslot0, 169 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThingCamera;
#define DAT_006605b8 GLOBAL_AT(int, 0x006605b8)
#define DAT_006605bc GLOBAL_AT(int, 0x006605bc)
#define DAT_006605c0 GLOBAL_AT(int, 0x006605c0)
#define DAT_006605c4 GLOBAL_AT(int, 0x006605c4)

static undefined4 * BEA_THISCALL ap_00418cd0(CThingCamera * this_, undefined4 *param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float local_c;
  float local_8;
  
  iVar4 = *(int *)(this_ + 4);
  if (iVar4 != 0) {
    uVar1 = *(undefined4 *)(iVar4 + 0x1c);
    local_c = *(float *)(iVar4 + 0x20);
    local_8 = *(float *)(iVar4 + 0x24);
    uVar2 = *(undefined4 *)(iVar4 + 0x28);
    if ((*(byte *)(iVar4 + 0x34) & 8) == 0) {
      iVar3 = bea_vcall<uint32_t>(iVar4 + 8, 0x54);
      local_c = *(float *)(iVar3 + 0x14) * 1.5f + local_c;
      iVar4 = bea_vcall<uint32_t>(iVar4 + 8, 0x54);
      local_8 = local_8 - *(float *)(iVar4 + 0x18);
    }
    *param_1 = uVar1;
    param_1[1] = bea_piece32(local_c);
    param_1[2] = bea_piece32(local_8);
    param_1[3] = uVar2;
    return (undefined4 *)(param_1);
  }
  *param_1 = DAT_006605b8;
  param_1[1] = DAT_006605bc;
  param_1[2] = DAT_006605c0;
  param_1[3] = DAT_006605c4;
  return (undefined4 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418cd0, ap_00418cd0));
