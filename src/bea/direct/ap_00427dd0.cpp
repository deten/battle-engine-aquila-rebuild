// auto-ported from 00427dd0_vslot119.c (CComponent::vslot119, 439 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CComponent;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Component_cpp_006247f8 ((char*)0x006247f8)
#define s_Fenrir_Bomb_Launcher_006248a0 ((char*)0x006248a0)
#define s_Carrier_Health_Pad_0062487c ((char*)0x0062487c)
#define s_Fenrir_Main_Gun_00624890 ((char*)0x00624890)
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_00427dd0(CComponent * this_, undefined4 param_1)
{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  iVar1 = FUN_00568390(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xb0)), bea_arg(s_Fenrir_Bomb_Launcher_006248a0));
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Component_cpp_006247f8), bea_arg(0x5c));
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004fe710(bea_arg(puVar2), bea_arg(this_), bea_arg(param_1));
      *puVar2 = ((void*)0x005d96b4);
      *(undefined4 **)(this_ + 0x13c) = puVar2;
      return;
    }
  }
  else {
    iVar1 = FUN_00568390(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xb0)), bea_arg(s_Fenrir_Main_Gun_00624890));
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Component_cpp_006247f8), bea_arg(0x5e))
      ;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_004fe710(bea_arg(puVar2), bea_arg(this_), bea_arg(param_1));
        *puVar2 = ((void*)0x005d9680);
        goto LAB_00427e5d;
      }
    }
    else {
      iVar1 = FUN_00568390(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xb0)), bea_arg(s_Carrier_Health_Pad_0062487c));
      if (iVar1 != 0) {
        this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Component_cpp_006247f8), bea_arg(99));
        if (this_00 == (void *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_004fe710(bea_arg(this_00), bea_arg(this_), bea_arg(param_1));
        }
        *(int *)(this_ + 0x13c) = iVar1;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        return;
      }
      puVar2 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Component_cpp_006247f8), bea_arg(0x60))
      ;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_004fe710(bea_arg(puVar2), bea_arg(this_), bea_arg(param_1));
        *puVar2 = ((void*)0x005d8e08);
        goto LAB_00427e5d;
      }
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_00427e5d:
  *(undefined4 **)(this_ + 0x13c) = puVar2;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00427dd0, ap_00427dd0));
