// auto-ported from 004c0ab0_vslot9.c (CPDSimpleSprite::vslot9, 446 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPDSimpleSprite;
#define DAT_009c6400 GLOBAL_AT(int, 0x009c6400)
#define DAT_00829e50 GLOBAL_AT(char, 0x00829e50)
typedef float10 (BEA_CDECL* FUN_004c0c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c0c70_t> FUN_004c0c70 = {(FUN_004c0c70_t)0x004c0c70};
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_THISCALL ap_004c0ab0(CPDSimpleSprite * this_, float param_1)
{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar1 = bea_piece32(param_1);
  fVar6 = *(float *)(this_ + 0x74);
  uVar2 = _rand();
  *(float *)(bea_piece32(param_1) + 0x60) =
       ((float)(int)((uVar2 & 0xff) - 0x80) * (1.0f - fVar6) * 0.5f * 0.0078125f +
        (1.0f - *(float *)(this_ + 0x74)) * 0.5f + *(float *)(this_ + 0x74)) *
       (float)*(int *)(this_ + 0x70);
  fVar6 = bea_fcast<float>(DAT_009c6400);
  iVar3 = *(int *)(this_ + 0x60);
  if (iVar3 == 0) {
    fVar4 = (float10)*(float *)(this_ + 0x5c);
  }
  else {
    if (*(int *)(iVar3 + 0x84) == 0) {
      uVar11 = *(undefined4 *)(iVar3 + 0x80);
      uVar10 = *(undefined4 *)(iVar3 + 0x7c);
      iVar9 = iVar3 + 0x74;
      iVar8 = iVar3 + 0x6c;
      iVar7 = iVar3 + 100;
      iVar3 = iVar3 + 0x5c;
      fVar6 = 0.0;
    }
    else {
      param_1 = bea_fcast<float>(DAT_009c6400);
      fVar4 = (float10)FUN_004c10c0(bea_arg((void *)(iVar3 + 0x88)), bea_arg(DAT_009c6400), bea_arg(iVar1));
      if ((*(int *)(iVar3 + 0x90) != 0) && (iVar1 != 0)) {
        param_1 = fVar6 - *(float *)(iVar1 + 0x84);
      }
      uVar11 = *(undefined4 *)(iVar3 + 0x80);
      uVar10 = *(undefined4 *)(iVar3 + 0x7c);
      fVar5 = (float10)param_1;
      iVar9 = iVar3 + 0x74;
      iVar8 = iVar3 + 0x6c;
      iVar7 = iVar3 + 100;
      iVar3 = iVar3 + 0x5c;
      param_1 = (float)iVar1;
      fVar5 = _CIfmod((float10)(float)fVar4,fVar5);
      fVar6 = (float)(fVar5 / (float10)(float)fVar4);
    }
    fVar4 = (float10)FUN_004c0c70(bea_arg(fVar6), bea_arg(iVar3), bea_arg(iVar7), bea_arg(iVar8), bea_arg(iVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(param_1));
    fVar4 = fVar4 * (float10)*(float *)(this_ + 0x5c);
  }
  *(float *)(iVar1 + 0x74) = (float)fVar4;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  if (*(int *)(this_ + 0xb4) != 0) {
    iVar3 = *(int *)(this_ + 0xa8);
    iVar9 = *(int *)(this_ + 0x8c);
    uVar2 = _rand();
    *(float *)(iVar1 + 0x78) =
         ((float)(int)((uVar2 & 0xff) - 0x80) * 0.0078125f + 1.0f) *
         (float)((iVar3 - iVar9) + 1) * 0.5f;
  }
  *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(this_ + 0xb8);
  *(undefined4 *)(iVar1 + 0xd0) = *(undefined4 *)(this_ + 0xc0);
  *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(this_ + 0xbc);
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(this_ + 0xc4);
  *(ushort *)(iVar1 + 0x7e) = ((byte)DAT_00829e50 & 0xf) + 0xc0;
  DAT_00829e50 = DAT_00829e50 + 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c0ab0, ap_004c0ab0));
