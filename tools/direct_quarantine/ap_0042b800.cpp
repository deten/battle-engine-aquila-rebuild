// auto-ported from 0042b800_FUN_0042b800.c (FUN_0042b800, 60 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_006252c4 GLOBAL_AT(char, 0x006252c4)
#define s__FAILED__006252b8 ((char*)0x006252b8)
typedef uint32_t (BEA_THISCALL* FUN_0042b650_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b650_t> FUN_0042b650 = {(FUN_0042b650_t)0x0042b650};

static undefined4 BEA_THISCALL ap_0042b800(void * this_, undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = (uint)(byte)(*(char *)((int)this_ + 0xb3c5));
  if (*(char *)((int)this_ + 0xb3c5) != '\0') {
    if ((char)param_2 == '\0') {
      pcVar2 = s__FAILED__006252b8;
    }
    else {
      pcVar2 = &DAT_006252c4;
    }
    uVar1 = FUN_0042b650(bea_arg(this_), bea_arg(param_1), bea_arg(pcVar2));
    *(int *)((int)this_ + 0xb3c8) = *(int *)((int)this_ + 0xb3c8) + -1;
  }
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042b800, ap_0042b800));
