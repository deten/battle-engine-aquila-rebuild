// auto-ported from 0046d470_FUN_0046d470.c (FUN_0046d470, 920 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0085515c GLOBAL_AT(int, 0x0085515c)
#define DAT_006728f8 GLOBAL_AT(int, 0x006728f8)
#define DAT_00855150 GLOBAL_AT(int, 0x00855150)
#define DAT_0062c040 GLOBAL_AT(char, 0x0062c040)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00672e18 GLOBAL_AT(int, 0x00672e18)
#define DAT_00672e1c GLOBAL_AT(int, 0x00672e1c)
#define DAT_00672d78 GLOBAL_AT(undefined4, 0x00672d78)
#define DAT_00672dc8 GLOBAL_AT(int, 0x00672dc8)
#define DAT_00672e20 GLOBAL_AT(float, 0x00672e20)
#define DAT_00672e24 GLOBAL_AT(int, 0x00672e24)
#define _DAT_00672e28 GLOBAL_AT(int, 0x00672e28)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define _DAT_00672e2c GLOBAL_AT(int, 0x00672e2c)
#define DAT_00672e44 GLOBAL_AT(int, 0x00672e44)
#define DAT_00672e30 GLOBAL_AT(int, 0x00672e30)
#define DAT_00672e34 GLOBAL_AT(int, 0x00672e34)
#define _DAT_00672e38 GLOBAL_AT(int, 0x00672e38)
#define _DAT_00672e3c GLOBAL_AT(int, 0x00672e3c)
#define _DAT_00672e40 GLOBAL_AT(int, 0x00672e40)
#define s_FATAL_ERROR__two_many_base_thing_0062c048 ((char*)0x0062c048)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_THISCALL* FUN_004496e0_t)(uint32_t);
static const bea_guard<FUN_004496e0_t> FUN_004496e0 = {(FUN_004496e0_t)0x004496e0};
typedef void* (BEA_THISCALL* FUN_004e5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5c90_t> FUN_004e5c90 = {(FUN_004e5c90_t)0x004e5c90};

static void BEA_THISCALL ap_0046d470(void * this_)
{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  undefined4 * &local_110 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x110 - 0x110);
  int &local_108 = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x108);
  char (&local_100)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x110 - 0x100);
  if (DAT_0085515c < 0x121) {
    iVar12 = 0;
    if (0 < DAT_0085515c) {
      local_110 = &DAT_006728f8;
      do {
        piVar4 = (int *)FUN_004e5c90(bea_arg(&DAT_00855150), bea_arg(iVar12));
        if ((*piVar4 == 0) || ((*(byte *)(*piVar4 + 0x2c) & 4) != 0)) {
          *local_110 = 0;
        }
        else {
          *local_110 = 1;
        }
        uVar8 = 0xffffffff;
        pcVar5 = &DAT_0062c040;
        do {
          pcVar14 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar14;
        } while (BEA_LOOP_GUARD((cVar2 != '\0')));
        uVar8 = ~uVar8;
        pcVar5 = pcVar14 + -uVar8;
        pcVar14 = local_100;
        for (uVar9 = uVar8 >> 2; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar8 = uVar8 & 3; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar14 = pcVar14 + 1;
        }
        if ((int *)*piVar4 != (int *)0x0) {
          pcVar5 = (char *)bea_vcall<uint32_t>(*piVar4, 0x1c);
          uVar8 = 0xffffffff;
          do {
            pcVar14 = pcVar5;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = pcVar5 + 1;
            cVar2 = *pcVar5;
            pcVar5 = pcVar14;
          } while (BEA_LOOP_GUARD((cVar2 != '\0')));
          uVar8 = ~uVar8;
          pcVar5 = pcVar14 + -uVar8;
          pcVar14 = local_100;
          for (uVar9 = uVar8 >> 2; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar8 = uVar8 & 3; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
            *pcVar14 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
        iVar12 = iVar12 + 1;
        local_110 = local_110 + 1;
      } while (BEA_LOOP_GUARD((iVar12 < DAT_0085515c)));
    }
  }
  else {
    FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__two_many_base_thing_0062c048,DAT_0085515c,0x120);
  }
  DAT_00672e18 = *(undefined4 *)((int)this_ + 0x30);
  DAT_00672e1c = *(undefined4 *)((int)this_ + 0x28);
  puVar10 = &DAT_00672d78;
  iVar12 = 10;
  puVar6 = (undefined4 *)((int)this_ + 0x4c);
  do {
    *puVar10 = *puVar6;
    puVar10[1] = puVar6[1];
    puVar10 = puVar10 + 2;
    iVar12 = iVar12 + -1;
    puVar6 = puVar6 + 2;
  } while (BEA_LOOP_GUARD((iVar12 != 0)));
  piVar4 = (int *)((int)this_ + 0x9c);
  piVar11 = &DAT_00672dc8;
  iVar12 = 10;
  piVar7 = piVar4;
  do {
    *piVar11 = *piVar7;
    piVar11[1] = piVar7[1];
    piVar11 = piVar11 + 2;
    iVar12 = iVar12 + -1;
    piVar7 = piVar7 + 2;
  } while (BEA_LOOP_GUARD((iVar12 != 0)));
  DAT_00672e20 = 1.0f;
  DAT_00672e24 = *(undefined4 *)((int)this_ + 0xf4);
  _DAT_00672e28 = bea_piece32(DAT_00672fd0);
  _DAT_00672e2c = *(undefined4 *)((int)this_ + 0x114);
  puVar6 = (undefined4 *)((int)this_ + 0x308);
  iVar12 = 0;
  do {
    uVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    *(undefined4 *)((int)&DAT_00672e44 + iVar12) = uVar3;
    iVar12 = iVar12 + 4;
  } while (BEA_LOOP_GUARD((iVar12 < 0x80)));
  if (*(int *)((int)this_ + 0x2a4) == 0) {
    DAT_00672e30 = 0;
    DAT_00672e34 = 0;
    _DAT_00672e38 = 0;
    _DAT_00672e3c = 0;
    _DAT_00672e40 = 0;
  }
  else {
    puVar6 = (undefined4 *)(*(int *)((int)this_ + 0x2a4) + 8);
    iVar12 = 0;
    do {
      uVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      *(undefined4 *)((int)&DAT_00672e30 + iVar12) = uVar3;
      iVar12 = iVar12 + 4;
    } while (BEA_LOOP_GUARD((iVar12 < 0x14)));
  }
  fVar1 = *(float *)((int)this_ + 0x10c) - *(float *)((int)this_ + 0x108);
  if (0.0f < fVar1) {
    if (*(float *)((int)this_ + 0x108) <= DAT_00672fd0) {
      if (*(float *)((int)this_ + 0x10c) <= DAT_00672fd0) {
        fVar1 = *(float *)((int)this_ + 0x110);
      }
      else {
        fVar1 = *(float *)((int)this_ + 0x110) -
                (1.0f - *(float *)((int)this_ + 0x110)) *
                ((DAT_00672fd0 - *(float *)((int)this_ + 0x10c)) / fVar1);
      }
      if (fVar1 <= 1.0f) {
        if (fVar1 < 0.0f) {
          fVar1 = 0.0f;
        }
      }
      else {
        fVar1 = 1.0f;
      }
    }
    else {
      fVar1 = 1.0f;
    }
    local_108 = (int)(longlong)ROUND((float)*(int *)((int)this_ + 0xf4) * fVar1);
    *(int *)((int)this_ + 0xf4) = local_108;
    if (local_108 < *(int *)((int)this_ + 0xf8)) {
      if (*(int *)((int)this_ + 0xfc) <= local_108) {
        fVar1 = (float)*(int *)((int)this_ + 0xfc);
        DAT_00672e20 = ((float)local_108 - fVar1) / ((float)*(int *)((int)this_ + 0xf8) - fVar1);
        if (1.0f < DAT_00672e20) {
          DAT_00672e20 = 1.0f;
          goto LAB_0046d79b;
        }
        if (0.0f <= DAT_00672e20) {
          if (DAT_00672e20 == 0.0f) {
            DAT_00672e20 = 0.001;
          }
          goto LAB_0046d79b;
        }
      }
      DAT_00672e20 = 0.0f;
    }
    else {
      DAT_00672e20 = 1.0f;
    }
  }
LAB_0046d79b:
  iVar13 = 0;
  iVar12 = 10;
  do {
    if (*piVar4 != 0) {
      iVar13 = iVar13 + 1;
    }
    piVar4 = piVar4 + 2;
    iVar12 = iVar12 + -1;
  } while (BEA_LOOP_GUARD((iVar12 != 0)));
  if (iVar13 != 0) {
    iVar12 = FUN_004496e0(bea_arg(&DAT_006728f8));
    if (iVar12 == 0) {
      if (0.6f < DAT_00672e20) {
        DAT_00672e20 = 0.6f;
      }
    }
    else if (DAT_00672e20 < 0.4f) {
      DAT_00672e20 = 0.4f;
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046d470, ap_0046d470));
