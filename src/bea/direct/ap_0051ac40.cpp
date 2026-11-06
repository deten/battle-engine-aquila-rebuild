// auto-ported from 0051ac40_vslot2.c (CFEPDirectory::vslot2, 226 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPDirectory;
#define DAT_0067762c GLOBAL_AT(int, 0x0067762c)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_00677624 GLOBAL_AT(int, 0x00677624)
#define DAT_008a9694 GLOBAL_AT(int, 0x008a9694)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};
typedef int (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef bool (BEA_STDCALL* FUN_00514ec0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514ec0_t> FUN_00514ec0 = {(FUN_00514ec0_t)0x00514ec0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef uint32_t (BEA_THISCALL* FUN_0051ad30_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0051ad30_t> FUN_0051ad30 = {(FUN_0051ad30_t)0x0051ad30};

static void BEA_THISCALL ap_0051ac40(CFEPDirectory * this_, int param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((((param_1 != 3) && (FUN_0051ad30(bea_arg(this_), bea_arg(param_1)), iVar2 = DAT_0067762c, DAT_00677614 != 0)) &&
      (DAT_00677624 == 6)) && (DAT_0067762c = -1, iVar2 == 1)) {
    if (*(int *)(this_ + *(int *)(this_ + 0x4008) * 4 + 4) != 0) {
      uVar1 = FUN_0046a2a0(0x78,DAT_008a9694);
      CFEPBEConfig__vslot7(bea_arg(uVar1));
      iVar2 = FUN_00514ec0(bea_arg(DAT_008a9694), bea_arg(*(int *)(this_ + 0x4008)), bea_arg(*(undefined4 *)(this_ + *(int *)(this_ + 0x4008) * 4 + 4)));
      if (iVar2 == 0) {
        return;
      }
    }
    uVar8 = 0;
    uVar7 = 1;
    uVar6 = 0;
    uVar5 = 10;
    uVar4 = 0;
    uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    uVar3 = FUN_0046a2a0(0x21,0);
    FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(uVar3), bea_arg(uVar1), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051ac40, ap_0051ac40));
