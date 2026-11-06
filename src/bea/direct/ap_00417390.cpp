// auto-ported from 00417390_FUN_00417390.c (FUN_00417390, 231 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Forseti_Repair_Pad_00623b34 ((char*)0x00623b34)
#define s_C__dev_ONSLAUGHT2_Building_cpp_00623af4 ((char*)0x00623af4)
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 BEA_THISCALL ap_00417390(void * this_, undefined4 param_1)
{
  int iVar1;
  undefined4 *this_00;
  undefined4 uVar2;
  void *this_01;
  undefined1 *puStack_8;
  undefined4 local_4;
  iVar1 = FUN_00568390(bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x164) + 0xb0)), bea_arg(s_Forseti_Repair_Pad_00623b34));
  if (iVar1 == 0) {
    this_00 = (undefined4 *)
              FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Building_cpp_00623af4), bea_arg(100));
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004fe710(bea_arg(this_00), bea_arg(this_), bea_arg(param_1));
      *this_00 = ((void*)0x005d8e08);
    }
    *(undefined4 **)((int)this_ + 0x13c) = this_00;
    *(undefined4 *)((int)this_ + 500) = 1;
    return uVar2;
  }
  this_01 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Building_cpp_00623af4), bea_arg(0x68));
  if (this_01 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004fe710(bea_arg(this_01), bea_arg(this_), bea_arg(param_1));
  }
  *(undefined4 *)((int)this_ + 0x13c) = uVar2;
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00417390, ap_00417390));
