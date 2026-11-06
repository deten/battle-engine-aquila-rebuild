// auto-ported from 00528d10_FUN_00528d10.c (FUN_00528d10, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00528c70_t)(uint32_t);
static const bea_guard<FUN_00528c70_t> FUN_00528c70 = {(FUN_00528c70_t)0x00528c70};

static DWORD BEA_THISCALL ap_00528d10(void * this_)
{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  
  iVar2 = FUN_00528c70(bea_arg(this_));
  DVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = *(char *)((int)this_ + 0x15);
    while (BEA_LOOP_GUARD((cVar1 != '\0'))) {
      Sleep(0);
      cVar1 = *(char *)((int)this_ + 0x15);
    }
    DVar3 = WaitForSingleObject(*(HANDLE *)((int)this_ + 8),0xffffffff);
  }
  return DVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528d10, ap_00528d10));
