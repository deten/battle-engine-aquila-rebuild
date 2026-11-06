// auto-ported from 0051ded0_vslot2.c (CFEPMultiplayerStart::vslot2, 584 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPMultiplayerStart;
#define _DAT_008a956c GLOBAL_AT(int, 0x008a956c)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define DAT_008a9bb8 GLOBAL_AT(int, 0x008a9bb8)
#define DAT_008a9bbc GLOBAL_AT(int, 0x008a9bbc)
#define _DAT_006602a8 GLOBAL_AT(undefined4*, 0x006602a8)
#define DAT_006602a0 GLOBAL_AT(undefined4*, 0x006602a0)
#define DAT_008a9cf6 GLOBAL_AT(char, 0x008a9cf6)
#define DAT_008a9cc4 GLOBAL_AT(char, 0x008a9cc4)
typedef undefined4 (BEA_CDECL* FUN_0044eab0_t)(int, ...);
static const bea_guard<FUN_0044eab0_t> FUN_0044eab0 = {(FUN_0044eab0_t)0x0044eab0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef uint32_t (BEA_THISCALL* FUN_0046baf0_t)(uint32_t);
static const bea_guard<FUN_0046baf0_t> FUN_0046baf0 = {(FUN_0046baf0_t)0x0046baf0};

static byte * BEA_THISCALL ap_0051ded0(CFEPMultiplayerStart * this_, int param_1)
{
  float fVar1;
  char cVar2;
  byte bVar3;
  uint32_t eax_in = 0;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  
  fVar1 = *(float *)(this_ + 0x20);
  *(float *)(this_ + 0x20) = fVar1 - 0.1f;
  if (fVar1 - 0.1f < 0.0f) {
    *(undefined4 *)(this_ + 0x20) = 0;
  }
  fVar1 = *(float *)(this_ + 0x24);
  *(float *)(this_ + 0x24) = fVar1 - 0.1f;
  if (fVar1 - 0.1f < 0.0f) {
    *(undefined4 *)(this_ + 0x24) = 0;
  }
  fVar1 = *(float *)(this_ + 0x28);
  *(float *)(this_ + 0x28) = fVar1 - 0.1f;
  if (fVar1 - 0.1f < 0.0f) {
    *(undefined4 *)(this_ + 0x28) = 0;
  }
  fVar1 = *(float *)(this_ + 0x2c) - 0.1f;
  *(float *)(this_ + 0x2c) = fVar1;
  uVar4 = CONCAT22((short)((uint)eax_in >> 0x10),
                   (ushort)(fVar1 < 0.0f) << 8 | (ushort)bea_isnan(fVar1) << 10 |
                   (ushort)(fVar1 == 0.0f) << 0xe);
  if (fVar1 < 0.0f) {
    *(undefined4 *)(this_ + 0x2c) = 0;
  }
  *(float *)(this_ + 0x30) = *(float *)(this_ + 0x30) + 0.01f;
  if (*(void **)(this_ + 0x10) != (void *)0x0) {
    uVar4 = FUN_0046baf0(bea_arg(*(void **)(this_ + 0x10)));
  }
  if (*(void **)(this_ + 0x14) != (void *)0x0) {
    uVar4 = FUN_0046baf0(bea_arg(*(void **)(this_ + 0x14)));
  }
  if (param_1 != 0) {
    return (byte *)((byte *)uVar4);
  }
  if ((*(int *)(this_ + 8) != 0) && (*(int *)(this_ + 0xc) != 0)) {
    this_[6] = (CFEPMultiplayerStart)((char)this_[6] + -1);
  }
  if ('\0' < (char)this_[6]) {
    return (byte *)((byte *)uVar4);
  }
  FUN_00468770(1);
  _DAT_008a956c = DAT_0089d94c;
  DAT_008a9bb8 = *(undefined4 *)(this_ + 0x18);
  DAT_008a9bbc = *(undefined4 *)(this_ + 0x1c);
  pbVar5 = (byte *)FUN_0044eab0(*(undefined4 *)(this_ + 0x18));
  if (pbVar5 != (byte *)0x0) {
    _DAT_006602a8 = DAT_006602a0;
    if (DAT_006602a0 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *DAT_006602a0;
    }
    while (BEA_LOOP_GUARD((iVar8 != 0))) {
      pbVar6 = *(byte **)(iVar8 + 0xa8);
      pbVar11 = pbVar5;
      do {
        bVar3 = *pbVar6;
        bVar14 = bVar3 < *pbVar11;
        if (bVar3 != *pbVar11) {
LAB_0051e016:
          iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_0051e01b;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar6[1];
        bVar14 = bVar3 < pbVar11[1];
        if (bVar3 != pbVar11[1]) goto LAB_0051e016;
        pbVar6 = pbVar6 + 2;
        pbVar11 = pbVar11 + 2;
      } while (BEA_LOOP_GUARD((bVar3 != 0)));
      iVar7 = 0;
LAB_0051e01b:
      if (iVar7 == 0) {
        if (iVar8 != 0) {
          uVar9 = 0xffffffff;
          pcVar12 = *(char **)(iVar8 + 0x6c);
          goto code_r0x0051e047;
        }
        break;
      }
      _DAT_006602a8 = (int *)_DAT_006602a8[1];
      if (_DAT_006602a8 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *_DAT_006602a8;
      }
    }
  }
  goto LAB_0051e062;
  while(BEA_LOOP_GUARD(( true ))) {
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar12 + 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar13;
    if (cVar2 == '\0') break;
code_r0x0051e0f6:
    pcVar13 = pcVar12;
    if (uVar9 == 0) break;
  }
  uVar9 = ~uVar9;
  pcVar12 = pcVar13 + -uVar9;
  pcVar13 = (char *)&DAT_008a9cf6;
  for (uVar10 = uVar9 >> 2; BEA_LOOP_GUARD((uVar10 != 0)); uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar13 = pcVar13 + 1;
  }
  return (byte *)((byte *)0);
  while(BEA_LOOP_GUARD(( true ))) {
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar12 + 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar13;
    if (cVar2 == '\0') break;
code_r0x0051e047:
    pcVar13 = pcVar12;
    if (uVar9 == 0) break;
  }
  uVar9 = ~uVar9;
  pcVar12 = pcVar13 + -uVar9;
  pcVar13 = (char *)&DAT_008a9cc4;
  for (uVar10 = uVar9 >> 2; BEA_LOOP_GUARD((uVar10 != 0)); uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar13 = pcVar13 + 1;
  }
LAB_0051e062:
  pbVar5 = (byte *)FUN_0044eab0(*(undefined4 *)(this_ + 0x1c));
  if (pbVar5 != (byte *)0x0) {
    _DAT_006602a8 = DAT_006602a0;
    if (DAT_006602a0 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *DAT_006602a0;
    }
    if (iVar8 != 0) {
      do {
        pbVar6 = *(byte **)(iVar8 + 0xa8);
        pbVar11 = pbVar5;
        do {
          bVar3 = *pbVar6;
          bVar14 = bVar3 < *pbVar11;
          if (bVar3 != *pbVar11) {
LAB_0051e0c0:
            iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_0051e0c5;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar6[1];
          bVar14 = bVar3 < pbVar11[1];
          if (bVar3 != pbVar11[1]) goto LAB_0051e0c0;
          pbVar6 = pbVar6 + 2;
          pbVar11 = pbVar11 + 2;
        } while (BEA_LOOP_GUARD((bVar3 != 0)));
        iVar7 = 0;
LAB_0051e0c5:
        if (iVar7 == 0) {
          if (iVar8 == 0) {
            return (byte *)(pbVar5);
          }
          uVar9 = 0xffffffff;
          pcVar12 = *(char **)(iVar8 + 0x6c);
          goto code_r0x0051e0f6;
        }
        _DAT_006602a8 = (int *)_DAT_006602a8[1];
        if (_DAT_006602a8 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *_DAT_006602a8;
        }
        if (iVar8 == 0) {
          return (byte *)(pbVar5);
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return (byte *)(pbVar5);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051ded0, ap_0051ded0));
