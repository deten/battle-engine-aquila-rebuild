// auto-ported from 004903a0_FUN_004903a0.c (FUN_004903a0, 529 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: switch on the int at +4 of the param_2 entry (0x49040a jump table 0x4905b4, cases 0-4); the +0x18 and +8 fields are ints (1; 10 or 5) and the other constants raw float bits as the asm stores them (0x490433-0x490574); the three flags are bytes at 0x9c68fe/0x9c68a2/0x9c6906 + param_1 (0x490598), not ints
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_009c68fe GLOBAL_AT(int, 0x009c68fe)
#define DAT_009c68a2 GLOBAL_AT(int, 0x009c68a2)
#define DAT_009c6906 GLOBAL_AT(int, 0x009c6906)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static void BEA_THISCALL ap_004903a0(void * this_, int param_1, int param_2)
{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  
  pfVar1 = (float *)((int)this_ + param_1 * 0x74 + 0x1c4);
  pfVar4 = pfVar1 + 6;
  pfVar6 = (float *)((int)this_ + param_2 * 0x1c);
  pfVar5 = pfVar4;
  for (iVar3 = 0x17; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *pfVar5 = 0.0f;
    pfVar5 = pfVar5 + 1;
  }
  pfVar1[7] = pfVar6[3];
  pfVar1[8] = pfVar6[4];
  fVar7 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(pfVar6 + 3)));
  fVar7 = fVar7 - bea_fcast<float10>(0.1f);
  if (bea_fcast<float10>(pfVar6[5]) <= fVar7) {
    fVar7 = bea_fcast<float10>(pfVar6[5]);
  }
  pfVar1[9] = bea_fcast<float>(fVar7);
  uint32_t *puVar1 = (uint32_t *)pfVar1;
  switch((uint32_t)*(int *)(pfVar6 + 1)) {
  case 0:
    pfVar1[1] = *pfVar1 * -0.1f;
    *(int *)pfVar4 = 1;
    puVar1[0xf] = 0x3f800000;
    puVar1[0x10] = 0x3f800000;
    puVar1[0x11] = 0x3f800000;
    puVar1[0x12] = *(uint32_t *)pfVar6;
    puVar1[3] = 0xbdcccccd;
    puVar1[4] = 0xbdcccccd;
    puVar1[5] = 0xbdcccccd;
    puVar1[2] = 10;
    break;
  case 1:
    pfVar1[1] = *pfVar1 * -0.2f;
    *(int *)pfVar4 = 1;
    puVar1[0xf] = 0x3f800000;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = *(uint32_t *)pfVar6;
    puVar1[2] = 5;
    pfVar1[4] = GLOBAL_AT(float, 0x005d856c);
    pfVar1[5] = GLOBAL_AT(float, 0x005d856c);
    puVar1[3] = 0xbe4ccccd;
    break;
  case 2:
    pfVar1[1] = *pfVar1 * -0.2f;
    *(int *)pfVar4 = 1;
    puVar1[0xf] = 0x3f800000;
    puVar1[0x10] = 0x3f000000;
    puVar1[0x11] = 0;
    puVar1[2] = 5;
    puVar1[0x12] = *(uint32_t *)pfVar6;
    puVar1[3] = 0xbe4ccccd;
    puVar1[4] = 0xbdcccccd;
    puVar1[5] = 0;
    break;
  case 3:
    pfVar1[1] = *pfVar1 * -0.2f;
    puVar1[0xf] = 0x3f800000;
    puVar1[0x10] = 0x3f800000;
    *(int *)pfVar4 = 1;
    puVar1[0x11] = 0;
    puVar1[0x12] = *(uint32_t *)pfVar6;
    puVar1[2] = 5;
    puVar1[3] = 0xbe4ccccd;
    puVar1[4] = 0xbe4ccccd;
    puVar1[5] = 0;
    break;
  case 4:
    pfVar1[1] = *pfVar1 * -0.2f;
    *(int *)pfVar4 = 1;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0x3f000000;
    puVar1[0x11] = 0x3f800000;
    puVar1[0x12] = *(uint32_t *)pfVar6;
    puVar1[2] = 5;
    puVar1[3] = 0;
    puVar1[4] = 0xbdcccccd;
    puVar1[5] = 0xbe4ccccd;
    break;
  default:
    goto switchD_00490416_default;
  }
  pfVar6 = (float *)(&DAT_009c65c0 + (param_1 + 2) * 0x17);
  for (iVar3 = 0x17; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar6 = pfVar6 + 1;
  }
  GLOBAL_AT(uint8_t, 0x009c68fe + param_1) = 1;
  GLOBAL_AT(uint8_t, 0x009c68a2 + param_1) = 1;
  GLOBAL_AT(uint8_t, 0x009c6906 + param_1) = 1;
switchD_00490416_default:
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004903a0, ap_004903a0));
