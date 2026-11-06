// auto-ported from 00546220_FUN_00546220.c (FUN_00546220, 453 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CTweakSLONG;
#define DAT_0089c9b0 GLOBAL_AT(int, 0x0089c9b0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_009c6480 GLOBAL_AT(int, 0x009c6480)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define s_Failed_SRT_in_for__s_00650ec8 ((char*)0x00650ec8)
#define s_Failed_SDSS_in_for__s_00650eb0 ((char*)0x00650eb0)
typedef uint32_t (BEA_THISCALL* CTweakSLONG__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakSLONG__vslot0_t> CTweakSLONG__vslot0 = {(CTweakSLONG__vslot0_t)0x00528ad0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef const char * (BEA_STDCALL* FUN_005be628_t)(uint32_t);
static const bea_guard<FUN_005be628_t> FUN_005be628 = {(FUN_005be628_t)0x005be628};

static undefined4 BEA_THISCALL ap_00546220(void * this_, int *param_1)
{
  undefined4 *a2;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int * &piStack_4 = *reinterpret_cast<int * *>(bea_frame_ + 0x10 - 0x4);
  if (DAT_0089c9b0 == 0) {
    return 0;
  }
  piStack_4 = this_;
  iVar3 = bea_vcall<uint32_t>(DAT_00888a50, 0x98, DAT_00888a50,0,this_);
  if (iVar3 < 0) {
    CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_009c6480), bea_arg(0));
    return 0;
  }
  a2 = (undefined4 *)((int)this_ + 4);
  iVar3 = bea_vcall<uint32_t>(DAT_00888a50, 0xa0, DAT_00888a50,a2);
  if (iVar3 < 0) {
    CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_009c6480), bea_arg(0));
    return 0;
  }
  iVar3 = bea_vcall<uint32_t>(param_1, 0x48, param_1,0,&piStack_4);
  if (iVar3 < 0) {
    CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_009c6480), bea_arg(0));
    return 0;
  }
  iVar3 = bea_vcall<uint32_t>(DAT_00888a50, 0x94, DAT_00888a50,0,piStack_4);
  if (iVar3 < 0) {
    pcVar4 = (char *)FUN_005be628(bea_arg(iVar3));
    FUN_00441740(&DAT_0066eb90,s_Failed_SRT_in_for__s_00650ec8,pcVar4);
    piVar2 = DAT_00888a50;
    uVar1 = *(undefined4 *)this_;
    iVar3 = bea_vcall<uint32_t>(DAT_00888a50, 0x9c, DAT_00888a50,*a2);
    if (iVar3 < 0) {
      bea_vcall<uint32_t>(piVar2, 0x94, piVar2,0,uVar1);
      CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_009c6480), bea_arg(0));
      return 0;
    }
    bea_vcall<uint32_t>(piVar2, 0x94, piVar2,0,uVar1);
    CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_009c6480), bea_arg(0));
    return 0;
  }
  iVar3 = bea_vcall<uint32_t>(DAT_00888a50, 0x9c, DAT_00888a50,*(undefined4 *)(DAT_0089c9b0 + 0xc));
  if (-1 < iVar3) {
    bea_vcall<uint32_t>(piStack_4, 0x8, piStack_4);
    return 1;
  }
  pcVar4 = (char *)FUN_005be628(bea_arg(iVar3));
  FUN_00441740(&DAT_0066eb90,s_Failed_SDSS_in_for__s_00650eb0,pcVar4);
  piVar2 = DAT_00888a50;
  uVar1 = *(undefined4 *)this_;
  iVar3 = bea_vcall<uint32_t>(DAT_00888a50, 0x9c, DAT_00888a50,*a2);
  if (iVar3 < 0) {
    bea_vcall<uint32_t>(piVar2, 0x94, piVar2,0,uVar1);
    CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_009c6480), bea_arg(0));
    return 0;
  }
  bea_vcall<uint32_t>(piVar2, 0x94, piVar2,0,uVar1);
  CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_009c6480), bea_arg(0));
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00546220, ap_00546220));
