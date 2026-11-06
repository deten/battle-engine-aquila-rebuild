// auto-ported from 004fd380_FUN_004fd380.c (FUN_004fd380, 49 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00855290 GLOBAL_AT(int, 0x00855290)
#define DAT_00855294 GLOBAL_AT(int, 0x00855294)
#define DAT_00855298 GLOBAL_AT(int, 0x00855298)

static undefined4 BEA_THISCALL ap_004fd380(int in_ECX)
{
  if (*(int *)(in_ECX + 0x164) != 0) {
    switch(*(undefined4 *)(*(int *)(in_ECX + 0x164) + 0xfc)) {
    case 1:
      return DAT_00855290;
    case 2:
      return DAT_00855294;
    case 3:
    case 4:
      return DAT_00855298;
    }
  }
  return 0;
}

// @autoport-registration (verified: 158 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fd380, ap_004fd380));
