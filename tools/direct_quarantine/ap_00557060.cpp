// auto-ported from 00557060_vslot2.c (CDXTexture::vslot2, 463 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CDXTexture;
#define DAT_00888c8c GLOBAL_AT(int, 0x00888c8c)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef undefined4 (BEA_STDCALL* FUN_00513640_t)(uint32_t);
static const bea_guard<FUN_00513640_t> FUN_00513640 = {(FUN_00513640_t)0x00513640};
typedef uint32_t (BEA_THISCALL* FUN_00513760_t)(uint32_t);
static const bea_guard<FUN_00513760_t> FUN_00513760 = {(FUN_00513760_t)0x00513760};
typedef int (BEA_THISCALL* FUN_005139a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005139a0_t> FUN_005139a0 = {(FUN_005139a0_t)0x005139a0};

static undefined4 BEA_THISCALL ap_00557060(CDXTexture * this_)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_00888c8c != 0) {
    uVar2 = 0;
    if (this_[0x14c] != (CDXTexture)0x0) {
      uVar1 = FUN_00513760(bea_arg(&DAT_00855bb0));
      *(undefined4 *)(this_ + 0x144) = uVar1;
      if (*(int *)(this_ + 0xb8) == 0) {
        switch(uVar1) {
        default:
          uVar2 = 0;
          break;
        case 1:
          uVar2 = 0x19;
          break;
        case 2:
          uVar2 = 0x1a;
          break;
        case 3:
          uVar2 = 0x16;
          break;
        case 4:
          uVar2 = 0x15;
          break;
        case 5:
          uVar2 = 0x17;
          break;
        case 6:
          uVar2 = 0x31545844;
          break;
        case 7:
          uVar2 = 0x32545844;
          break;
        case 8:
          uVar2 = 0x34545844;
          break;
        case 9:
          uVar2 = 0x3c;
          break;
        case 10:
          uVar2 = 0x3f;
        }
        uVar2 = FUN_005139a0(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)(this_ + 0xac)), bea_arg((int)*(short *)(this_ + 0xb0)), bea_arg(*(undefined4 *)(this_ + 0x148)), bea_arg(0), bea_arg(uVar2), bea_arg(*(undefined4 *)(this_ + 0x150)), bea_arg(this_ + 0xb8));
      }
      switch(*(undefined4 *)(this_ + 0x144)) {
      default:
        uVar1 = 0;
        break;
      case 1:
        uVar1 = 0x19;
        break;
      case 2:
        uVar1 = 0x1a;
        break;
      case 3:
        uVar1 = 0x16;
        break;
      case 4:
        uVar1 = 0x15;
        break;
      case 5:
        uVar1 = 0x17;
        break;
      case 6:
        uVar1 = 0x31545844;
        break;
      case 7:
        uVar1 = 0x32545844;
        break;
      case 8:
        uVar1 = 0x34545844;
        break;
      case 9:
        uVar1 = 0x3c;
        break;
      case 10:
        uVar1 = 0x3f;
      }
      switch(*(undefined4 *)(this_ + 0x144)) {
      default:
        uVar3 = 0;
        break;
      case 1:
        uVar3 = 0x19;
        break;
      case 2:
        uVar3 = 0x1a;
        break;
      case 3:
        uVar3 = 0x16;
        break;
      case 4:
        uVar3 = 0x15;
        break;
      case 5:
        uVar3 = 0x17;
        break;
      case 6:
        uVar3 = 0x31545844;
        break;
      case 7:
        uVar3 = 0x32545844;
        break;
      case 8:
        uVar3 = 0x34545844;
        break;
      case 9:
        uVar3 = 0x3c;
        break;
      case 10:
        uVar3 = 0x3f;
      }
      FUN_00513640(bea_arg(uVar1));
      FUN_00513640(bea_arg(uVar3));
      CRenderThing__vslot3(&DAT_009c3df0);
    }
    return uVar2;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00557060, ap_00557060));
