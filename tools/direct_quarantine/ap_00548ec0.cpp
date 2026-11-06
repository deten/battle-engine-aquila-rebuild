// auto-ported from 00548ec0_FUN_00548ec0.c (FUN_00548ec0, 202 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
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

static undefined4 BEA_THISCALL ap_00548ec0(void * this_)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puStack_8;
  int local_4;
  local_4 = 3;
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
  iVar1 = *(int *)((int)this_ + 4);
  local_4 = 0xffffffff;
  uVar3 = 0;
  while (BEA_LOOP_GUARD((iVar1 != 0))) {
    iVar2 = *(int *)((int)this_ + 4);
    iVar1 = *(int *)(iVar2 + 0x208);
    uVar3 = 0;
    if (((iVar2 != 0) && (uVar3 = FUN_004a1570(bea_arg(&DAT_009c4004), bea_arg(iVar2)), (char)uVar3 == '\0')) &&
       (uVar3 = FUN_004a1570(bea_arg(&DAT_009c519c), bea_arg(iVar2)), (char)uVar3 == '\0')) {
      uVar3 = FUN_004a1ca0(bea_arg(*(void **)(&DAT_009c3e00 + *(int *)(iVar2 + -8) * 4)), bea_arg(iVar2 + -0x10));
    }
    *(int *)((int)this_ + 4) = iVar1;
  }
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00548ec0, ap_00548ec0));
