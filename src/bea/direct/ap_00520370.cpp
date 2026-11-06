// auto-ported from 00520370_vslot3.c (CFEPVirtualKeyboard::vslot3, 392 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPVirtualKeyboard;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef uint32_t (BEA_THISCALL* FUN_00520cc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00520cc0_t> FUN_00520cc0 = {(FUN_00520cc0_t)0x00520cc0};
typedef uint32_t (BEA_THISCALL* FUN_00520f70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00520f70_t> FUN_00520f70 = {(FUN_00520f70_t)0x00520f70};
typedef undefined4 (BEA_THISCALL* FUN_005214d0_t)(uint32_t);
static const bea_guard<FUN_005214d0_t> FUN_005214d0 = {(FUN_005214d0_t)0x005214d0};

static void BEA_THISCALL ap_00520370(CFEPVirtualKeyboard * this_, undefined4 param_1, undefined4 param_2)
{
  short sVar1;
  int iVar2;
  int iVar3;
  
  switch(param_1) {
  case 0x2a:
    break;
  case 0x2b:
    if (*(int *)(this_ + 0x6e8) != 4) {
      FUN_00520f70(bea_arg(this_), bea_arg(*(int *)(this_ + 0x6e8) + 1));
      return;
    }
    FUN_00520f70(bea_arg(this_), bea_arg(0));
    return;
  case 0x2c:
    FUN_00468770(1);
    iVar3 = *(int *)(this_ + 0x6e4) * 5 + *(int *)(this_ + 0x6e8);
    FUN_00520cc0(bea_arg(this_), bea_arg(CONCAT22((short)((uint)(iVar3 * 7) >> 0x10),
                               *(undefined2 *)
                                (this_ + (*(int *)(this_ + 0x6ec) + iVar3 * 0xe) * 8 + 0x54))));
    return;
  default:
    return;
  case 0x2e:
    FUN_00468770(2);
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0), bea_arg(0x46));
    return;
  case 0x36:
    *(undefined4 *)(this_ + 0x6f4) = 0x3f000000;
    do {
      if (*(int *)(this_ + 0x6ec) == 0) {
        iVar3 = *(int *)(this_ + 0x6e4) * 5 + *(int *)(this_ + 0x6e8);
        sVar1 = *(short *)(this_ + iVar3 * 0x70 + 0x5c);
        while (BEA_LOOP_GUARD((sVar1 != 0))) {
          iVar2 = *(int *)(this_ + 0x6ec);
          *(int *)(this_ + 0x6ec) = iVar2 + 1;
          sVar1 = *(short *)(this_ + (iVar2 + 1 + iVar3 * 0xe) * 8 + 0x5c);
        }
      }
      else {
        *(int *)(this_ + 0x6ec) = *(int *)(this_ + 0x6ec) + -1;
      }
      iVar3 = FUN_005214d0(bea_arg(this_));
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
    return;
  case 0x37:
    *(undefined4 *)(this_ + 0x6f4) = 0x3f000000;
    do {
      if (*(short *)(this_ + (*(int *)(this_ + 0x6ec) +
                            (*(int *)(this_ + 0x6e4) * 5 + *(int *)(this_ + 0x6e8)) * 0xe) * 8 + 0x5c)
          == 0) {
        *(undefined4 *)(this_ + 0x6ec) = 0;
      }
      else {
        *(int *)(this_ + 0x6ec) = *(int *)(this_ + 0x6ec) + 1;
      }
      iVar3 = FUN_005214d0(bea_arg(this_));
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
    return;
  }
  if (*(int *)(this_ + 0x6e8) != 0) {
    FUN_00520f70(bea_arg(this_), bea_arg(*(int *)(this_ + 0x6e8) + -1));
    return;
  }
  FUN_00520f70(bea_arg(this_), bea_arg(4));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00520370, ap_00520370));
