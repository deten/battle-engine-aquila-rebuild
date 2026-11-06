// auto-ported from 004e5540_vslot22.c (CSphereTrigger::vslot22, 313 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSphereTrigger;
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_0083d120 GLOBAL_AT(int, 0x0083d120)
#define DAT_0083d124 GLOBAL_AT(int, 0x0083d124)
#define DAT_0083d128 GLOBAL_AT(int, 0x0083d128)
#define DAT_0083d12c GLOBAL_AT(int, 0x0083d12c)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define s_Sphere_Trigger_Effect_006326f4 ((char*)0x006326f4)
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};

static undefined4 * BEA_THISCALL ap_004e5540(CSphereTrigger * this_)
{
  CSphereTrigger *pCVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = bea_vcall<uint32_t>(this_, 0x68);
  puVar4 = (undefined4 *)0x0;
  if (iVar2 != 0) {
    FUN_004cb0b0(bea_arg(this_ + 0x7c), bea_arg(0));
    uVar3 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Sphere_Trigger_Effect_006326f4));
    FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar3), bea_arg(this_ + 0x7c), bea_arg(DAT_0083d120), bea_arg(DAT_0083d124), bea_arg(DAT_0083d128), bea_arg(DAT_0083d12c), bea_arg(0), bea_arg(1));
    puVar4 = *(undefined4 **)(this_ + 0x80);
    pCVar1 = this_ + 0x1c;
    if (puVar4 != (undefined4 *)0x0) {
      if (puVar4[0x12] == 0x461c4000) {
        puVar4[0x20] = *(undefined4 *)pCVar1;
        puVar4[0x21] = *(undefined4 *)(this_ + 0x20);
        puVar4[0x22] = *(undefined4 *)(this_ + 0x24);
        puVar4[0x23] = *(undefined4 *)(this_ + 0x28);
        puVar4[0x10] = *(undefined4 *)pCVar1;
        puVar4[0x11] = *(undefined4 *)(this_ + 0x20);
        puVar4[0x12] = *(undefined4 *)(this_ + 0x24);
        puVar4[0x13] = *(undefined4 *)(this_ + 0x28);
        *puVar4 = *(undefined4 *)pCVar1;
        puVar4[1] = *(undefined4 *)(this_ + 0x20);
        puVar4[2] = *(undefined4 *)(this_ + 0x24);
        puVar4[3] = *(undefined4 *)(this_ + 0x28);
        if (puVar4[0x2b] != -0x40800000) {
          puVar4[0x2b] = DAT_00672fd0;
          return (undefined4 *)(puVar4);
        }
      }
      else {
        puVar4[0x10] = *puVar4;
        puVar4[0x11] = puVar4[1];
        puVar4[0x12] = puVar4[2];
        puVar4[0x13] = puVar4[3];
        *puVar4 = *(undefined4 *)pCVar1;
        puVar4[1] = *(undefined4 *)(this_ + 0x20);
        puVar4[2] = *(undefined4 *)(this_ + 0x24);
        puVar4[3] = *(undefined4 *)(this_ + 0x28);
        if (puVar4[0x2b] != -0x40800000) {
          puVar4[0x2b] = DAT_00672fd0;
        }
      }
    }
  }
  return (undefined4 *)(puVar4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5540, ap_004e5540));
