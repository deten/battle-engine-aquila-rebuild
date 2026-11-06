// auto-ported from 004fc000_vslot84.c (CUnit::vslot84, 124 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
typedef bool (BEA_THISCALL* FUN_004e4420_t)(uint32_t);
static const bea_guard<FUN_004e4420_t> FUN_004e4420 = {(FUN_004e4420_t)0x004e4420};
typedef undefined4 (BEA_THISCALL* FUN_00509f70_t)(uint32_t);
static const bea_guard<FUN_00509f70_t> FUN_00509f70 = {(FUN_00509f70_t)0x00509f70};

static undefined4 BEA_THISCALL ap_004fc000(CUnit * this_)
{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  
  if (*(void **)(this_ + 0x140) == (void *)0x0) {
    if (*(int *)(this_ + 0x144) != 0) {
      if (*(int *)(*(int *)(this_ + 0x164) + 0x110) == 0) {
        puVar1 = *(undefined4 **)(this_ + 0x18c);
        if (puVar1 == (undefined4 *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)*puVar1;
        }
        while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
          iVar2 = FUN_004e4420(bea_arg(this_00));
          if (iVar2 != 0) {
            return 0;
          }
          puVar1 = (undefined4 *)puVar1[1];
          if (puVar1 == (undefined4 *)0x0) {
            this_00 = (void *)0x0;
          }
          else {
            this_00 = (void *)*puVar1;
          }
        }
      }
      return 1;
    }
  }
  else if ((*(int *)(this_ + 0x1e8) != 0) &&
          (iVar2 = FUN_00509f70(bea_arg(*(void **)(this_ + 0x140))), iVar2 != 0)) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fc000, ap_004fc000));
