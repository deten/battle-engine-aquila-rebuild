// auto-ported from 004a5200_FUN_004a5200.c (FUN_004a5200, 171 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00704adc GLOBAL_AT(undefined4*, 0x00704adc)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_meshtex_default_tga_00625498 ((char*)0x00625498)
#define s_C__dev_ONSLAUGHT2_mesh_cpp_0062f8e8 ((char*)0x0062f8e8)
typedef uint32_t (BEA_THISCALL* FUN_004adf80_t)(uint32_t);
static const bea_guard<FUN_004adf80_t> FUN_004adf80 = {(FUN_004adf80_t)0x004adf80};
typedef uint32_t (BEA_THISCALL* FUN_004adf90_t)(uint32_t);
static const bea_guard<FUN_004adf90_t> FUN_004adf90 = {(FUN_004adf90_t)0x004adf90};
typedef uint32_t (BEA_THISCALL* FUN_004ae080_t)(uint32_t);
static const bea_guard<FUN_004ae080_t> FUN_004ae080 = {(FUN_004ae080_t)0x004ae080};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_CDECL ap_004a5200(void)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar1 = DAT_00704adc;
  if (DAT_00704adc != (void *)0x0) {
    FUN_004adf90(bea_arg(DAT_00704adc));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x24), bea_arg(0x24), bea_arg(s_C__dev_ONSLAUGHT2_mesh_cpp_0062f8e8), bea_arg(0x91));
  if (pvVar1 == (void *)0x0) {
    DAT_00704adc = (undefined4 *)0x0;
  }
  else {
    DAT_00704adc = (undefined4 *)FUN_004adf80(bea_arg(pvVar1));
  }
  FUN_004ae080(bea_arg(DAT_00704adc));
  uVar2 = FUN_004f27f0(s_meshtex_default_tga_00625498,0,0,0xffffffff,1,1);
  *DAT_00704adc = uVar2;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a5200, ap_004a5200));
