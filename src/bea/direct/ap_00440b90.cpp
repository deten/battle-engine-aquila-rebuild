// auto-ported from 00440b90_FUN_00440b90.c (FUN_00440b90, 108 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_damage_cpp_006282dc ((char*)0x006282dc)
#define s_data_textures_mixers_damage0_tga_006282b8 ((char*)0x006282b8)
typedef uint32_t (BEA_THISCALL* FUN_00440c70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00440c70_t> FUN_00440c70 = {(FUN_00440c70_t)0x00440c70};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_00440b90(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)((int)this_ + 0x1588c) == 0) {
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_damage_cpp_006282dc), bea_arg(0x16));
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
    }
    *(undefined4 **)this_ = puVar1;
    FUN_00440c70(bea_arg(puVar1), bea_arg(s_data_textures_mixers_damage0_tga_006282b8));
  }
  puVar1 = this_;
  for (iVar2 = 20000; BEA_LOOP_GUARD((puVar1 = puVar1 + 1, iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar1 = 0;
  }
  puVar1 = (undefined4 *)((int)this_ + 0x13884);
  for (iVar2 = 0x800; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)((int)this_ + 0x15888) = 1;
  *(undefined4 *)((int)this_ + 0x15884) = 1;
  return (uint32_t)1;
  return (uint32_t)1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00440b90, ap_00440b90));
