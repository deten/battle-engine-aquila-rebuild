// auto-ported from 00415780_vslot82.c (CBoat::vslot82, 62 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBoat;
#define s_deploying_006239cc ((char*)0x006239cc)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static FUN_004aa630_t const FUN_004aa630 = (FUN_004aa630_t)0x004aa630;

static void BEA_THISCALL ap_00415780(CBoat * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  char *pcVar3;
  
  if (*(int *)(this_ + 0x260) == 0) {
    iVar1 = *(int *)this_;
    pcVar3 = s_deploying_006239cc;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_deploying_006239cc,1,0);
    uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(pcVar3));
    bea_vcall<uint32_t>(this_, 0xf0, uVar2);
    *(undefined4 *)(this_ + 0x260) = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00415780, ap_00415780));
