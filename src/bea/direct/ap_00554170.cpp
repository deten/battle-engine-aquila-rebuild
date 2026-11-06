// auto-ported from 00554170_FUN_00554170.c (FUN_00554170, 1105 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
#define _DAT_00628268 GLOBAL_AT(int, 0x00628268)
#define DAT_0062825c GLOBAL_AT(int, 0x0062825c)
#define DAT_00628258 GLOBAL_AT(int, 0x00628258)
#define _DAT_0062826c GLOBAL_AT(int, 0x0062826c)
#define _DAT_00628278 GLOBAL_AT(int, 0x00628278)
#define _DAT_0062827c GLOBAL_AT(int, 0x0062827c)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_009c6914 GLOBAL_AT(float, 0x009c6914)
#define DAT_009c73e8 GLOBAL_AT(char, 0x009c73e8)
#define DAT_009c6954 GLOBAL_AT(float, 0x009c6954)
#define DAT_009c73e9 GLOBAL_AT(char, 0x009c73e9)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define _DAT_009c73d4 GLOBAL_AT(int, 0x009c73d4)
#define DAT_009c741c GLOBAL_AT(char, 0x009c741c)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
typedef uint32_t (BEA_CDECL* FUN_004d1710_t)(undefined4, ...);
static const bea_guard<FUN_004d1710_t> FUN_004d1710 = {(FUN_004d1710_t)0x004d1710};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};

static void BEA_THISCALL ap_00554170(void * this_)
{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  float &fStack_64 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x64);
  float (&afStack_60)[19] = *reinterpret_cast<float (*)[19]>(bea_frame_ + 0x70 - 0x60);
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x14);
  undefined4 &uStack_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x10);
  undefined4 &uStack_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0xc);
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x4);
  if (((DAT_0089d680 == '\0') && (*(char *)((int)this_ + 0x704) != '\0')) &&
     (*(char *)((int)this_ + 0x5b0) != '\0')) {
    FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(7));
    FUN_00513820(bea_arg(2), bea_arg(1), bea_arg(7));
    FUN_00513820(bea_arg(3), bea_arg(1), bea_arg(7));
    FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(0));
    FUN_00513820(bea_arg(2), bea_arg(0xb), bea_arg(0));
    FUN_00513820(bea_arg(3), bea_arg(0xb), bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(0x18), bea_arg(2));
    FUN_00513820(bea_arg(2), bea_arg(0x18), bea_arg(2));
    FUN_00513820(bea_arg(3), bea_arg(0x18), bea_arg(2));
    _DAT_00628268 = 0;
    DAT_0062825c = 0;
    DAT_00628258 = 0x3f800000;
    _DAT_0062826c = 0x3f800000;
    _DAT_00628278 = 0x3baaaaab;
    _DAT_0062827c = 0xbc800000;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,&DAT_00628258);
    _DAT_00628278 = 0x3c800000;
    _DAT_0062827c = 0x3baaaaab;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x11,&DAT_00628258);
    _DAT_00628278 = 0xbbaaaaab;
    _DAT_0062827c = 0x3c800000;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x12,&DAT_00628258);
    _DAT_00628278 = 0xbc800000;
    _DAT_0062827c = 0xbbaaaaab;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x13,&DAT_00628258);
    DAT_009c68ac = 0;
    DAT_009c690d = 1;
    DAT_009c68ad = 0;
    DAT_009c6910 = 1;
    afStack_60[0xe] = 0.0;
    afStack_60[0xd] = 0.0;
    afStack_60[0xc] = 0.0;
    afStack_60[0xb] = 0.0;
    afStack_60[9] = 0.0;
    afStack_60[8] = 0.0;
    afStack_60[7] = 0.0;
    afStack_60[6] = 0.0;
    afStack_60[4] = 0.0;
    afStack_60[3] = 0.0;
    afStack_60[2] = 0.0;
    afStack_60[1] = 0.0;
    afStack_60[0xf] = 1.0f;
    afStack_60[10] = 1.0f;
    afStack_60[5] = 1.0f;
    afStack_60[0] = 1.0f;
    fStack_64 = -2.0;
    pfVar3 = afStack_60;
    pfVar5 = (float *)&DAT_009c6914;
    for (iVar2 = 0x10; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *pfVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar5 = pfVar5 + 1;
    }
    DAT_009c73e8 = 1;
    pfVar3 = afStack_60;
    pfVar5 = (float *)&DAT_009c6954;
    for (iVar2 = 0x10; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *pfVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar5 = pfVar5 + 1;
    }
    DAT_009c73e9 = 1;
    iVar2 = 0;
    if (0 < *(int *)((int)this_ + 0x5bc)) {
      piVar4 = (int *)((int)this_ + 0x640);
      do {
        if (*piVar4 == 0) {
          FUN_004d1710(0xe7);
          *(undefined1 *)((int)this_ + 0x704) = 0;
          break;
        }
        fVar1 = fStack_64 + 1.0f;
        afStack_60[1] = 1.0f;
        afStack_60[0] = fStack_64;
        afStack_60[2] = 2.0;
        afStack_60[3] = -NAN;
        afStack_60[4] = 0.0;
        afStack_60[5] = 0.0;
        afStack_60[7] = 1.0f;
        afStack_60[8] = 2.0;
        afStack_60[9] = -NAN;
        afStack_60[10] = 1.0f;
        afStack_60[0xb] = 0.0;
        afStack_60[0xd] = 0.0;
        afStack_60[0xe] = 2.0;
        afStack_60[0xf] = -NAN;
        afStack_60[0x10] = 1.0f;
        afStack_60[0x11] = 1.0f;
        afStack_60[0x12] = fStack_64;
        uStack_14 = 0;
        uStack_10 = 0x40000000;
        uStack_c = 0xffffffff;
        uStack_8 = 0;
        uStack_4 = 0x3f800000;
        afStack_60[6] = fVar1;
        afStack_60[0xc] = fVar1;
        FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(*(undefined4 *)(*piVar4 + 8)));
        FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(1), bea_arg(*(undefined4 *)(*piVar4 + 8)));
        FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(2), bea_arg(*(undefined4 *)(*piVar4 + 8)));
        FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(3), bea_arg(*(undefined4 *)(*piVar4 + 8)));
        _DAT_009c73d4 = 0x142;
        DAT_009c741c = 1;
        FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
        bea_vcall<uint32_t>(DAT_00888a50, 0x14c, DAT_00888a50,6,2,afStack_60,0x18);
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
        fStack_64 = fVar1;
      } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0x5bc))));
    }
    FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(1));
    FUN_00513820(bea_arg(2), bea_arg(0xb), bea_arg(2));
    FUN_00513820(bea_arg(3), bea_arg(0xb), bea_arg(3));
    DAT_009c68ac = 1;
    DAT_009c690d = 1;
    DAT_009c68ad = 1;
    DAT_009c6910 = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00554170, ap_00554170));
