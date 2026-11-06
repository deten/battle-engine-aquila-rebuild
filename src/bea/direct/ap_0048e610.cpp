// auto-ported from 0048e610_vslot2.c (CLandscapeTexture::vslot2, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CLandscapeTexture;
typedef char CUMTexture;
typedef uint (BEA_THISCALL* CUMTexture__vslot2_t)(uint32_t);
static const bea_guard<CUMTexture__vslot2_t> CUMTexture__vslot2 = {(CUMTexture__vslot2_t)0x004f7b60};
typedef uint32_t (BEA_THISCALL* FUN_0048ef00_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0048ef00_t> FUN_0048ef00 = {(FUN_0048ef00_t)0x0048ef00};

static int BEA_THISCALL ap_0048e610(CLandscapeTexture * this_)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar2 = CUMTexture__vslot2(bea_arg((CUMTexture *)this_));
  if (iVar2 < 0) {
    return iVar2;
  }
  if (*(int *)(this_ + 0x2c) != 0) {
    *(undefined4 *)(this_ + 0x2c) = 1;
    if (*(undefined4 **)(this_ + 0x40) != (undefined4 *)0x0) {
      uVar1 = *(uint *)(this_ + 0x44);
      puVar5 = *(undefined4 **)(this_ + 0x40);
      for (uVar3 = (uVar1 & 0x7fffffff) >> 1; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (iVar4 = (uVar1 & 1) << 1; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      return iVar2;
    }
    FUN_0048ef00(bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0x3f), bea_arg(0x3f));
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e610, ap_0048e610));
