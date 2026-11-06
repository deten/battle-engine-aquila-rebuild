// auto-ported from 0049f940_vslot117.c (CMech::vslot117, 227 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMech;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_LegMotion_00623074 ((char*)0x00623074)
#define s_C__dev_ONSLAUGHT2_Mech_cpp_0062e0e0 ((char*)0x0062e0e0)
typedef void * (BEA_THISCALL* FUN_004983b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004983b0_t> FUN_004983b0 = {(FUN_004983b0_t)0x004983b0};
typedef uint32_t (BEA_THISCALL* FUN_00498bf0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00498bf0_t> FUN_00498bf0 = {(FUN_00498bf0_t)0x00498bf0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0049f940(CMech * this_, int param_1)
{
  void *pvVar1;
  int iVar2;
  CMech *pCVar3;
  char *pcVar4;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  pcVar4 = s_LegMotion_00623074;
  pvVar1 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar2 = FUN_004aa630(bea_arg(pvVar1), bea_arg(pcVar4));
  if (iVar2 != -1) {
    pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xf0), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_Mech_cpp_0062e0e0), bea_arg(0x3d));
    pCVar3 = (CMech *)0x0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      if (this_ != (CMech *)0x0) {
        pCVar3 = this_ + 8;
      }
      pvVar1 = (void *)FUN_004983b0(bea_arg(pvVar1), bea_arg(pCVar3));
    }
    *(void **)(this_ + 0x70) = pvVar1;
    iVar2 = *(int *)(param_1 + 0x3bc);
    FUN_00498bf0(bea_arg(pvVar1), bea_arg(*(undefined4 *)(iVar2 + 0x144)), bea_arg(*(undefined4 *)(iVar2 + 0x148)), bea_arg(*(undefined4 *)(iVar2 + 0x14c)), bea_arg(0x3ecccccd), bea_arg(0x3f666666), bea_arg(*(undefined4 *)(iVar2 + 0x150)), bea_arg(*(undefined4 *)(iVar2 + 0x140)));
    return;
  }
  *(undefined4 *)(this_ + 0x70) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049f940, ap_0049f940));
