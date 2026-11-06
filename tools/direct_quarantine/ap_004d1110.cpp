// auto-ported from 004d1110_vslot6.c (CPauseMenu::vslot6, 177 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00939ef4 GLOBAL_AT(int, 0x00939ef4)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_008a9d3c GLOBAL_AT(int, 0x008a9d3c)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define s_Setting_sound_volume_to___4f_006315d0 ((char*)0x006315d0)
#define s_Setting_music_volume_to___4f_006315f0 ((char*)0x006315f0)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004bba10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004bba10_t> FUN_004bba10 = {(FUN_004bba10_t)0x004bba10};
typedef uint32_t (BEA_THISCALL* FUN_004d3020_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d3020_t> FUN_004d3020 = {(FUN_004d3020_t)0x004d3020};
typedef uint32_t (BEA_THISCALL* FUN_004e04c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e04c0_t> FUN_004e04c0 = {(FUN_004e04c0_t)0x004e04c0};

static void BEA_STDCALL ap_004d1110(int param_1)
{
  undefined *puVar1;
  float fVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if ((int)puVar1 < 0x939ef5) {
    if (puVar1 == &DAT_00939ef4) {
      fVar2 = (float)*(int *)(param_1 + 0x24) / (float)*(int *)(param_1 + 0x2c);
      FUN_00441740(&DAT_0066f580,s_Setting_music_volume_to___4f_006315f0,(double)fVar2);
      FUN_004bba10(bea_arg(&DAT_00889a48), bea_arg(fVar2));
      return;
    }
    if (puVar1 == (undefined *)0x148fe9) {
      FUN_004d3020(bea_arg(DAT_008a9d3c), bea_arg(1));
      return;
    }
    if (puVar1 == (undefined *)0x226f16) {
      FUN_004d3020(bea_arg(DAT_008a9d3c), bea_arg(0));
      return;
    }
  }
  else if (puVar1 == (undefined *)0x9d5a3f) {
    fVar2 = (float)*(int *)(param_1 + 0x24) / (float)*(int *)(param_1 + 0x2c);
    FUN_00441740(&DAT_0066f580,s_Setting_sound_volume_to___4f_006315d0,(double)fVar2);
    FUN_004e04c0(bea_arg(&DAT_00896988), bea_arg(fVar2));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d1110, ap_004d1110));
