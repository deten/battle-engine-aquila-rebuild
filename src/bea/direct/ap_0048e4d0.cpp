// auto-ported from 0048e4d0_FUN_0048e4d0.c (FUN_0048e4d0, 290 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_006fabf8 GLOBAL_AT(int, 0x006fabf8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0062d864 GLOBAL_AT(int, 0x0062d864)
#define DAT_006fabf4 GLOBAL_AT(undefined4*, 0x006fabf4)
#define DAT_006fabcc GLOBAL_AT(int, 0x006fabcc)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define s_C__dev_ONSLAUGHT2_LandscapeTextu_0062d8e0 ((char*)0x0062d8e0)
typedef uint32_t (BEA_THISCALL* FUN_004f7ab0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f7ab0_t> FUN_004f7ab0 = {(FUN_004f7ab0_t)0x004f7ab0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_0048e4d0(void * this_, int param_1, undefined4 param_2)
{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  *(int *)((int)this_ + 0x34) = param_1;
  switch(param_1) {
  case 0:
    *(undefined2 *)((int)this_ + 0x48) = 0x3f;
    *(undefined2 *)((int)this_ + 0x4a) = 0xfc0;
    break;
  case 1:
    *(undefined2 *)((int)this_ + 0x48) = 0x1f;
    *(undefined2 *)((int)this_ + 0x4a) = 0x7c0;
    break;
  case 2:
    *(undefined2 *)((int)this_ + 0x48) = 0xf;
    *(undefined2 *)((int)this_ + 0x4a) = 0x3c0;
    break;
  case 3:
    *(undefined2 *)((int)this_ + 0x48) = 7;
    *(undefined2 *)((int)this_ + 0x4a) = 0x1c0;
    break;
  case 4:
    *(undefined2 *)((int)this_ + 0x48) = 3;
    *(undefined2 *)((int)this_ + 0x4a) = 0xc0;
  }
  iVar2 = (int)(0x200 / (longlong)(1 << ((byte)param_1 & 0x1f)));
  *(int *)((int)this_ + 0x38) = iVar2;
  *(int *)((int)this_ + 0x3c) = iVar2 + -1;
  *(undefined4 *)((int)this_ + 0x30) = param_2;
  bea_vcall<uint32_t>(this_, 0x4);
  DAT_006fabf8 = DAT_006fabf8 + 1;
  if (param_1 != 0) {
    iVar2 = (int)(0x200 / (longlong)(8 << ((byte)param_1 & 0x1f)));
    iVar2 = iVar2 * iVar2;
    *(int *)((int)this_ + 0x44) = iVar2;
    puVar3 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar2 * 2), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_LandscapeTextu_0062d8e0), bea_arg(0x5b));
    uVar1 = *(uint *)((int)this_ + 0x44);
    *(undefined4 **)((int)this_ + 0x40) = puVar3;
    for (uVar5 = (uVar1 & 0x7fffffff) >> 1; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = (uVar1 & 1) << 1; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  uVar4 = FUN_004f7ab0(bea_arg(this_), bea_arg(DAT_0062d864), bea_arg(1), bea_arg(1));
  bea_vcall<uint32_t>(DAT_006fabf4, 0x54, DAT_006fabf4,0);
  if (DAT_006fabcc == 0) {
    bea_vcall<uint32_t>(DAT_00888a50, 0x7c, DAT_00888a50,DAT_006fabf4,*(undefined4 *)((int)this_ + 8));
  }
  return uVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e4d0, ap_0048e4d0));
