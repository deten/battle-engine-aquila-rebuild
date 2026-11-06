// auto-ported from 004cf8e0_vslot17.c (CMultiSample::vslot17, 332 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_00856f64 GLOBAL_AT(int, 0x00856f64)
#define DAT_00631564 GLOBAL_AT(int, 0x00631564)
#define DAT_00631560 GLOBAL_AT(int, 0x00631560)
#define DAT_0063155c GLOBAL_AT(int, 0x0063155c)
#define DAT_00631558 GLOBAL_AT(int, 0x00631558)
#define DAT_00631554 GLOBAL_AT(int, 0x00631554)
#define DAT_00631550 GLOBAL_AT(int, 0x00631550)
#define DAT_0063154c GLOBAL_AT(int, 0x0063154c)
#define DAT_00631548 GLOBAL_AT(int, 0x00631548)
#define DAT_00631540 GLOBAL_AT(int, 0x00631540)
#define DAT_00631538 GLOBAL_AT(int, 0x00631538)
#define DAT_00631530 GLOBAL_AT(int, 0x00631530)
#define DAT_00631528 GLOBAL_AT(int, 0x00631528)
#define DAT_00631520 GLOBAL_AT(int, 0x00631520)
#define DAT_00631518 GLOBAL_AT(int, 0x00631518)
#define DAT_00631510 GLOBAL_AT(int, 0x00631510)
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static undefined * BEA_STDCALL ap_004cf8e0(int param_1)
{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(DAT_008889f0 * 0x516c +
                      *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                      *(int *)(((uint8_t *)&DAT_00856f64) +
                              *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                              DAT_008889f0 * 0x516c) * 0x18 + 0x856164);
    if ((uVar1 & 0x20) != 0) {
      param_1 = param_1 + -1;
    }
    if (param_1 == 0) {
      iVar3 = 2;
    }
    else {
      if ((uVar1 & 0x40) != 0) {
        param_1 = param_1 + -1;
      }
      if (param_1 == 0) {
        iVar3 = 3;
      }
      else {
        if ((uVar1 & 0x80) != 0) {
          param_1 = param_1 + -1;
        }
        if (param_1 == 0) {
          iVar3 = 4;
        }
        else {
          if ((uVar1 & 0x100) != 0) {
            param_1 = param_1 + -1;
          }
          if (param_1 == 0) {
            iVar3 = 6;
          }
          else {
            if ((uVar1 & 0x200) != 0) {
              param_1 = param_1 + -1;
            }
            iVar3 = (-(uint)(param_1 != 0) & 0xfffffff8) + 8;
          }
        }
      }
    }
  }
  switch(iVar3) {
  case 2:
    return (undefined *)(&DAT_00631564);
  case 3:
    return (undefined *)(&DAT_00631560);
  case 4:
    return (undefined *)(&DAT_0063155c);
  case 5:
    return (undefined *)(&DAT_00631558);
  case 6:
    return (undefined *)(&DAT_00631554);
  case 7:
    return (undefined *)(&DAT_00631550);
  case 8:
    return (undefined *)(&DAT_0063154c);
  case 9:
    return (undefined *)(&DAT_00631548);
  case 10:
    return (undefined *)(&DAT_00631540);
  case 0xb:
    return (undefined *)(&DAT_00631538);
  case 0xc:
    return (undefined *)(&DAT_00631530);
  case 0xd:
    return (undefined *)(&DAT_00631528);
  case 0xe:
    return (undefined *)(&DAT_00631520);
  case 0xf:
    return (undefined *)(&DAT_00631518);
  case 0x10:
    return (undefined *)(&DAT_00631510);
  default:
    puVar2 = (undefined *)FUN_00524830(0xd4);
    return (undefined *)(puVar2);
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf8e0, ap_004cf8e0));
