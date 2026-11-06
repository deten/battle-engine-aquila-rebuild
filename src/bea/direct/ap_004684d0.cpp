// auto-ported from 004684d0_FUN_004684d0.c (FUN_004684d0, 205 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00679b40 GLOBAL_AT(char, 0x00679b40)
#define DAT_0083d454 GLOBAL_AT(int, 0x0083d454)
typedef undefined4 (BEA_THISCALL* FUN_004662a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004662a0_t> FUN_004662a0 = {(FUN_004662a0_t)0x004662a0};
typedef uint32_t (BEA_THISCALL* FUN_00466ba0_t)(uint32_t);
static const bea_guard<FUN_00466ba0_t> FUN_00466ba0 = {(FUN_00466ba0_t)0x00466ba0};
typedef int (BEA_THISCALL* FUN_00468200_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00468200_t> FUN_00468200 = {(FUN_00468200_t)0x00468200};

static undefined4 BEA_THISCALL ap_004684d0(void * this_, undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  if (*(int *)((int)this_ + 0xbe14) == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_004662a0(bea_arg(this_), bea_arg(param_1), bea_arg(param_2));
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  DAT_00679b40 = 1;
  iVar1 = *(int *)((int)this_ + 0xbe14);
  do {
    if (iVar1 != -2) {
      bea_vcall<uint32_t>(this_, 0x8);
      DAT_00679b40 = 0;
      return *(undefined4 *)((int)this_ + 0xbe14);
    }
    FUN_00466ba0(bea_arg(this_));
    if (*(int *)((int)this_ + 0xbe14) == -2) {
      iVar1 = FUN_00468200(bea_arg(this_), bea_arg(0));
      while (BEA_LOOP_GUARD((iVar1 == 0))) {
        iVar1 = FUN_00468200(bea_arg(this_), bea_arg(0));
      }
    }
    if (0 < DAT_0083d454) {
      if (DAT_0083d454 == 3) {
        if (60.0f < *(float *)((int)this_ + 0xbe18)) {
LAB_00468575:
          *(undefined4 *)((int)this_ + 0xbe14) = 0xfffffffd;
        }
      }
      else if (2.0f < *(float *)((int)this_ + 0xbe18)) goto LAB_00468575;
    }
    iVar1 = *(int *)((int)this_ + 0xbe14);
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004684d0, ap_004684d0));
