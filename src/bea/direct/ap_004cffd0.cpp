// auto-ported from 004cffd0_vslot15.c (CVideoDetailLevel::vslot15, 458 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CVideoDetailLevel;
#define DAT_00856f70 GLOBAL_AT(int, 0x00856f70)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_00856f74 GLOBAL_AT(int, 0x00856f74)
#define DAT_009cc114 GLOBAL_AT(int, 0x009cc114)
#define DAT_00856f78 GLOBAL_AT(int, 0x00856f78)

static undefined4 BEA_THISCALL ap_004cffd0(CVideoDetailLevel * this_)
{
  int iVar1;
  int iVar2;
  
  if ((((((*(int *)(*(int *)(this_ + 0x28) + 0x20) ==
           *(int *)(((uint8_t *)&DAT_00856f70) +
                   *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                   DAT_008889f0 * 0x516c)) && (*(int *)(*(int *)(this_ + 0x2c) + 0x20) == 0)) &&
        (*(int *)(*(int *)(this_ + 0x30) + 0x20) == 0)) &&
       ((*(int *)(*(int *)(this_ + 0x38) + 0x20) == *(int *)(this_ + 0x4c) &&
        (*(int *)(*(int *)(this_ + 0x3c) + 0x20) == 0)))) &&
      (*(int *)(*(int *)(this_ + 0x34) + 0x20) == 0)) &&
     (((*(int *)(*(int *)(this_ + 0x40) + 0x20) == 2 && (*(int *)(*(int *)(this_ + 0x44) + 0x20) == 1)
       ) && (*(int *)(*(int *)(this_ + 0x48) + 0x20) == 0)))) {
    return 1;
  }
  if (((((*(int *)(*(int *)(this_ + 0x28) + 0x20) ==
          *(int *)(((char *)&DAT_00856f74) +
                  DAT_008889f0 * 0x516c +
                  *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68)) &&
        (*(int *)(*(int *)(this_ + 0x2c) + 0x20) == 1)) &&
       (*(int *)(*(int *)(this_ + 0x30) + 0x20) == 1)) &&
      ((*(int *)(*(int *)(this_ + 0x38) + 0x20) == 1 &&
       (*(int *)(*(int *)(this_ + 0x3c) + 0x20) == *(int *)(this_ + 0x50))))) &&
     (((*(int *)(*(int *)(this_ + 0x34) + 0x20) == 1 &&
       ((*(int *)(*(int *)(this_ + 0x40) + 0x20) == DAT_009cc114 &&
        (iVar2 = (*(int **)(this_ + 0x44))[8],
        iVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 0x44), 0x48), iVar2 == iVar1)))) &&
      (*(int *)(*(int *)(this_ + 0x48) + 0x20) == 0)))) {
    return 2;
  }
  if ((((*(int *)(*(int *)(this_ + 0x28) + 0x20) ==
         *(int *)(((uint8_t *)&DAT_00856f78) +
                 *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                 DAT_008889f0 * 0x516c)) && (*(int *)(*(int *)(this_ + 0x2c) + 0x20) == 2)) &&
      (*(int *)(*(int *)(this_ + 0x30) + 0x20) == 2)) &&
     ((((*(int *)(*(int *)(this_ + 0x38) + 0x20) == 1 &&
        (*(int *)(*(int *)(this_ + 0x3c) + 0x20) == *(int *)(this_ + 0x54))) &&
       ((*(int *)(*(int *)(this_ + 0x34) + 0x20) == 1 &&
        ((*(int *)(*(int *)(this_ + 0x40) + 0x20) == DAT_009cc114 &&
         (iVar2 = (*(int **)(this_ + 0x44))[8],
         iVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 0x44), 0x48), iVar2 == iVar1)))))) &&
      ((iVar2 = bea_vcall<uint32_t>(*(int **)(this_ + 0x48), 0x40), iVar2 == 1 ||
       (*(int *)(*(int *)(this_ + 0x48) + 0x20) == 1)))))) {
    return 3;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cffd0, ap_004cffd0));
