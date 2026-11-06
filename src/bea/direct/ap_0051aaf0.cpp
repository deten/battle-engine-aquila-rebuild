// auto-ported from 0051aaf0_vslot3.c (CFEPDirectory::vslot3, 314 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPDirectory;
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define _DAT_008a1168 GLOBAL_AT(int, 0x008a1168)
#define DAT_008a116c GLOBAL_AT(int, 0x008a116c)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static void BEA_THISCALL ap_0051aaf0(CFEPDirectory * this_, undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  switch(param_1) {
  case 0x2a:
    if (*(int *)(this_ + 0x4008) < 1) goto LAB_0051ab53;
    FUN_00468770(1);
    iVar1 = *(int *)(this_ + 0x4008) + -1;
    goto LAB_0051ab4d;
  case 0x2b:
    if ((0xffe < *(int *)(this_ + 0x4008)) || (*(int *)(this_ + *(int *)(this_ + 0x4008) * 4 + 8) == 0)
       ) goto LAB_0051ab53;
    FUN_00468770(1);
    iVar1 = *(int *)(this_ + 0x4008) + 1;
LAB_0051ab4d:
    *(int *)(this_ + 0x4008) = iVar1;
LAB_0051ab53:
    *(undefined4 *)(this_ + 0x4010) = bea_piece32(_DAT_008a9570);
    return;
  case 0x2c:
    if (*(int *)(this_ + *(int *)(this_ + 0x4008) * 4 + 4) != 0) {
      FUN_00468770(1);
      if (DAT_008a9580 != 0) {
        uVar8 = 6;
        uVar7 = 2;
        uVar6 = 0;
        uVar5 = 10;
        uVar4 = 0;
        DAT_00677614 = 0;
        uVar2 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        uVar3 = FUN_0046a2a0(0x2a,0);
        FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(uVar3), bea_arg(uVar2), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8));
        return;
      }
      _DAT_008a1168 = *(undefined4 *)(this_ + 0x4008);
      FUN_0055e64e(bea_arg(&DAT_008a116c), bea_arg(*(undefined4 *)(this_ + *(int *)(this_ + 0x4008) * 4 + 4)));
      FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(10), bea_arg(0));
      return;
    }
    break;
  case 0x2e:
    FUN_00468770(2);
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0), bea_arg(0x32));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051aaf0, ap_0051aaf0));
