// auto-ported from 00549400_FUN_00549400.c (FUN_00549400, 87 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c4004 GLOBAL_AT(char, 0x009c4004)
#define DAT_009c519c GLOBAL_AT(char, 0x009c519c)
#define DAT_009c3e00 GLOBAL_AT(int, 0x009c3e00)
typedef undefined4 (BEA_THISCALL* FUN_004a1570_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1570_t> FUN_004a1570 = {(FUN_004a1570_t)0x004a1570};
typedef uint32_t (BEA_THISCALL* FUN_004a1ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1ca0_t> FUN_004a1ca0 = {(FUN_004a1ca0_t)0x004a1ca0};

static void BEA_THISCALL ap_00549400(void * this_)
{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = *(int *)((int)this_ + 4);
  while (BEA_LOOP_GUARD((iVar1 != 0))) {
    iVar2 = *(int *)((int)this_ + 4);
    iVar1 = *(int *)(iVar2 + 0x208);
    if (((iVar2 != 0) && (cVar3 = FUN_004a1570(bea_arg(&DAT_009c4004), bea_arg(iVar2)), cVar3 == '\0')) &&
       (cVar3 = FUN_004a1570(bea_arg(&DAT_009c519c), bea_arg(iVar2)), cVar3 == '\0')) {
      FUN_004a1ca0(bea_arg(*(void **)(((uint8_t *)&DAT_009c3e00) + *(int *)(iVar2 + -8) * 4)), bea_arg(iVar2 + -0x10));
    }
    *(int *)((int)this_ + 4) = iVar1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00549400, ap_00549400));
