// hand-ported from 0047ea20_FUN_0047ea20.c (FUN_0047ea20, 211 bytes)
// @hand-fixed 2026-10-29 fastcall (ECX=map object, EDX=param_2, one stack argument, ret 4 at 0x47ea63/0x47ea90/0x47eab5/0x47eae9/0x47eaf0) per conv_overrides.csv; EAX keeps the original's upper half on every path (`mov ax, word ptr [...]` over the index at 0x47ea5f/0x47eae1, over [ecx+0x1028] at 0x47ea89/0x47eaad, `xor ax, ax` over param_3 & 0x3ffe00 at 0x47eaec)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

static uint BEA_FASTCALL ap_0047ea20(int param_1, uint param_2, uint param_3)
{
  uint iVar1;
  uint tbl;

  if (((param_2 | param_3) & 0x3ffe00) == 0) {
    iVar1 = ((((int)param_2 >> 3 & 0x3fU) * 0x40 + ((int)param_3 >> 3 & 0x3fU)) * 9 + (param_3 & 7))
            * 9 + (param_2 & 7);
    return (iVar1 & 0xffff0000u) |
           *(uint16_t *)(*(int *)(param_1 + 0x1028) + iVar1 * 2);
  }
  if ((param_2 & 0x3ffe00) == 0x200) {
    tbl = *(uint *)(param_1 + 0x1028);
    if ((param_3 & 0x3ffe00) == 0x200) {
      return (tbl & 0xffff0000u) | *(uint16_t *)(tbl + 0xa1ffe);
    }
    return (tbl & 0xffff0000u) |
           *(uint16_t *)(tbl + 0x9f790 + (((int)param_3 >> 8 & 0x3fU) * 9 + (param_3 & 7)) * 0x12);
  }
  if ((param_3 & 0x3ffe00) == 0x200) {
    iVar1 = ((int)param_2 >> 3 & 0x3fU) * 0x1440 + (param_2 & 7);
    return (iVar1 & 0xffff0000u) |
           *(uint16_t *)(*(int *)(param_1 + 0x1028) + 0x286e + iVar1 * 2);
  }
  return param_3 & 0x3f0000;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047ea20, ap_0047ea20));
