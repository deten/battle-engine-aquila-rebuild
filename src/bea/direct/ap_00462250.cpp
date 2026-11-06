// auto-ported from 00462250_vslot3.c (CFEPMain::vslot3, 354 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPMain;
#define DAT_0083d990 GLOBAL_AT(int, 0x0083d990)
#define DAT_0083d97c GLOBAL_AT(int, 0x0083d97c)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_THISCALL* FUN_00466ab0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00466ab0_t> FUN_00466ab0 = {(FUN_00466ab0_t)0x00466ab0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};

static void BEA_THISCALL ap_00462250(CFEPMain * this_, undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  switch(param_1) {
  case 0x2a:
    if (DAT_0083d990 == 0) {
      if (-1 < *(int *)(this_ + 8)) {
        do {
          iVar1 = *(int *)(this_ + 8);
          *(int *)(this_ + 8) = iVar1 + -1;
          iVar1 = bea_vcall<uint32_t>(this_, 0x24, iVar1 + -1);
        } while (BEA_LOOP_GUARD((iVar1 == 0)));
        *(undefined4 *)(this_ + 0x14) = 0;
      }
      if (*(int *)(this_ + 8) < -1) {
        *(undefined4 *)(this_ + 8) = 0xffffffff;
      }
    }
    else {
      if (0 < *(int *)(this_ + 8)) {
        do {
          iVar1 = *(int *)(this_ + 8);
          *(int *)(this_ + 8) = iVar1 + -1;
          iVar1 = bea_vcall<uint32_t>(this_, 0x24, iVar1 + -1);
        } while (BEA_LOOP_GUARD((iVar1 == 0)));
        *(undefined4 *)(this_ + 0x14) = 0;
      }
      if (*(int *)(this_ + 8) < 0) {
        *(undefined4 *)(this_ + 8) = 0;
      }
    }
    break;
  case 0x2b:
    iVar1 = bea_vcall<uint32_t>(this_, 0x28);
    if (*(int *)(this_ + 8) < iVar1 + -1) {
      do {
        iVar1 = *(int *)(this_ + 8);
        *(int *)(this_ + 8) = iVar1 + 1;
        iVar1 = bea_vcall<uint32_t>(this_, 0x24, iVar1 + 1);
      } while (BEA_LOOP_GUARD((iVar1 == 0)));
      *(undefined4 *)(this_ + 0x14) = 0;
    }
    iVar1 = bea_vcall<uint32_t>(this_, 0x28);
    if (iVar1 <= *(int *)(this_ + 8)) {
      iVar1 = bea_vcall<uint32_t>(this_, 0x28);
      *(int *)(this_ + 8) = iVar1 + -1;
    }
    break;
  case 0x2c:
    bea_vcall<uint32_t>(this_, 0x2c);
  default:
    return;
  case 0x36:
    if (*(int *)(this_ + 8) == -1) {
      iVar1 = DAT_0083d97c + -1;
      if (iVar1 < 0) {
        iVar1 = 4;
      }
      FUN_00466ab0(bea_arg(&DAT_0089d758), bea_arg(iVar1));
      FUN_00468770(0);
      *(undefined4 *)(this_ + 0x1c) = 0x3f800000;
    }
    *(undefined4 *)(this_ + 0x18) = 0;
    return;
  case 0x37:
    if (*(int *)(this_ + 8) == -1) {
      iVar1 = DAT_0083d97c + 1;
      if (iVar1 == 5) {
        iVar1 = 0;
      }
      FUN_00466ab0(bea_arg(&DAT_0089d758), bea_arg(iVar1));
      FUN_00468770(0);
      *(undefined4 *)(this_ + 0x20) = 0x3f800000;
    }
    *(undefined4 *)(this_ + 0x18) = 0;
    return;
  }
  *(undefined4 *)(this_ + 0xc) = *(undefined4 *)(this_ + 8);
  FUN_00468770(0);
  *(undefined4 *)(this_ + 0x18) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00462250, ap_00462250));
