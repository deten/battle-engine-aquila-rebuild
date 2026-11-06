// auto-ported from 004c2640_vslot10.c (CPDTimeline::vslot10, 1315 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CPDTimeline;
typedef char Mat34;
typedef char Vec3;
#define DAT_009c648c GLOBAL_AT(int, 0x009c648c)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define s_Mech_Pulse_Bolt_Explosion_Large_00630d94 ((char*)0x00630d94)
#define s_Plasma_Explosion_Aug_Emitter_00630d54 ((char*)0x00630d54)
#define s_Flash_00630d04 ((char*)0x00630d04)
#define s_Mech_Pulse_Bolt_Explosion_Large_E_00630d0c ((char*)0x00630d0c)
#define s_Mech_Pulse_Bolt_Explosion_Aug_00630d74 ((char*)0x00630d74)
#define s_Plasma_Explosion_Aug_Emitter_2_00630d34 ((char*)0x00630d34)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_0041ad10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041ad10_t> FUN_0041ad10 = {(FUN_0041ad10_t)0x0041ad10};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef undefined4 * (BEA_THISCALL* FUN_004cb5c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb5c0_t> FUN_004cb5c0 = {(FUN_004cb5c0_t)0x004cb5c0};
typedef uint32_t (BEA_THISCALL* FUN_004cb920_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb920_t> FUN_004cb920 = {(FUN_004cb920_t)0x004cb920};
typedef undefined1 (BEA_STDCALL* FUN_00515970_t)(uint32_t);
static const bea_guard<FUN_00515970_t> FUN_00515970 = {(FUN_00515970_t)0x00515970};

static undefined4 BEA_THISCALL ap_004c2640(CPDTimeline * this_, int param_1)
{
  float *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  CPDTimeline CVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  CPDTimeline *pCVar14;
  CPDTimeline *pCVar15;
  int *piVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  int iVar23;
  float *this_01;
  float *pfVar24;
  char *pcVar25;
  float *pfVar26;
  bool bVar27;
  bool bVar28;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  undefined4 &uStack_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x74);
  undefined1 (&auStack_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x70);
  undefined1 (&auStack_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x60);
  undefined1 (&auStack_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x50);
  undefined1 (&auStack_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x40);
  float (&afStack_30)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x80 - 0x30);
  if (((((this_[5] == (CPDTimeline)0x65) && (this_[9] == (CPDTimeline)0x50)) && (DAT_009c648c != 0))
      && ((iVar13 = FUN_004725d0(bea_arg(&DAT_008a9a98)), iVar13 == 0 &&
          (iVar13 = FUN_00515970(bea_arg(0x3b)), iVar13 == 0)))) &&
     ((this_[0x1e] == (CPDTimeline)0x4c || (this_[0x1e] == (CPDTimeline)0x41)))) {
    pCVar15 = this_ + 4;
    pcVar25 = s_Mech_Pulse_Bolt_Explosion_Large_00630d94;
    pCVar14 = pCVar15;
    do {
      CVar10 = *pCVar14;
      bVar27 = (byte)CVar10 < (byte)*pcVar25;
      if (CVar10 != (CPDTimeline)*pcVar25) {
LAB_004c26d4:
        iVar13 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
        goto LAB_004c26d9;
      }
      if (CVar10 == (CPDTimeline)0x0) break;
      CVar10 = pCVar14[1];
      bVar27 = (byte)CVar10 < (byte)*(CPDTimeline *)(pcVar25 + 1);
      if (CVar10 != *(CPDTimeline *)(pcVar25 + 1)) goto LAB_004c26d4;
      pCVar14 = pCVar14 + 2;
      pcVar25 = pcVar25 + 2;
    } while (BEA_LOOP_GUARD((CVar10 != (CPDTimeline)0x0)));
    iVar13 = 0;
LAB_004c26d9:
    if (iVar13 != 0) {
      pcVar25 = s_Mech_Pulse_Bolt_Explosion_Aug_00630d74;
      do {
        CVar10 = *pCVar15;
        bVar27 = (byte)CVar10 < (byte)*pcVar25;
        if (CVar10 != (CPDTimeline)*pcVar25) {
LAB_004c270c:
          iVar13 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
          goto LAB_004c2711;
        }
        if (CVar10 == (CPDTimeline)0x0) break;
        CVar10 = pCVar15[1];
        bVar27 = (byte)CVar10 < (byte)*(CPDTimeline *)(pcVar25 + 1);
        if (CVar10 != *(CPDTimeline *)(pcVar25 + 1)) goto LAB_004c270c;
        pCVar15 = pCVar15 + 2;
        pcVar25 = pcVar25 + 2;
      } while (BEA_LOOP_GUARD((CVar10 != (CPDTimeline)0x0)));
      iVar13 = 0;
LAB_004c2711:
      if (iVar13 != 0) goto LAB_004c271c;
    }
    bVar27 = true;
  }
  else {
LAB_004c271c:
    bVar27 = false;
  }
  if (*(float *)(param_1 + 0x60) <= 0.0f) {
    return 1;
  }
  if (*(int *)(this_ + *(int *)(param_1 + 0x80) * 0xc + 100) != (int)*(short *)(param_1 + 0x7e)) {
LAB_004c2b31:
    if (*(int *)(this_ + 0x5c) <= *(int *)(param_1 + 0x80)) {
      return 1;
    }
    *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + 1;
    return 0;
  }
LAB_004c2761:
  if (*(int *)(param_1 + 0x80) < *(int *)(this_ + 0x5c)) {
    for (piVar16 = *(int **)(this_ + (*(int *)(param_1 + 0x80) * 3 + 0x18) * 4); BEA_LOOP_GUARD((piVar16 != (int *)0x0)); piVar16 = (int *)bea_vcall<uint32_t>(piVar16, 0x40)) {
      iVar13 = bea_vcall<uint32_t>(piVar16, 0x4);
      if (iVar13 != 4) {
        if (piVar16 != (int *)0x0) {
          if (!bVar27) goto LAB_004c2896;
          pbVar18 = (byte *)(piVar16 + 1);
          pcVar25 = s_Plasma_Explosion_Aug_Emitter_00630d54;
          pbVar17 = pbVar18;
          goto LAB_004c27bd;
        }
        break;
      }
    }
    goto LAB_004c2b09;
  }
  goto LAB_004c2b31;
  while(BEA_LOOP_GUARD(( true ))) {
    bVar11 = pbVar17[1];
    bVar28 = bVar11 < (byte)pcVar25[1];
    if (bVar11 != pcVar25[1]) goto LAB_004c27e1;
    pbVar17 = pbVar17 + 2;
    pcVar25 = pcVar25 + 2;
    if (bVar11 == 0) break;
LAB_004c27bd:
    bVar11 = *pbVar17;
    bVar28 = bVar11 < (byte)*pcVar25;
    if (bVar11 != *pcVar25) {
LAB_004c27e1:
      iVar13 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
      goto LAB_004c27e6;
    }
    if (bVar11 == 0) break;
  }
  iVar13 = 0;
LAB_004c27e6:
  if (iVar13 != 0) {
    pcVar25 = s_Plasma_Explosion_Aug_Emitter_2_00630d34;
    pbVar17 = pbVar18;
    do {
      bVar11 = *pbVar17;
      bVar28 = bVar11 < (byte)*pcVar25;
      if (bVar11 != *pcVar25) {
LAB_004c2819:
        iVar13 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
        goto LAB_004c281e;
      }
      if (bVar11 == 0) break;
      bVar11 = pbVar17[1];
      bVar28 = bVar11 < (byte)pcVar25[1];
      if (bVar11 != pcVar25[1]) goto LAB_004c2819;
      pbVar17 = pbVar17 + 2;
      pcVar25 = pcVar25 + 2;
    } while (BEA_LOOP_GUARD((bVar11 != 0)));
    iVar13 = 0;
LAB_004c281e:
    if (iVar13 != 0) {
      pcVar25 = s_Mech_Pulse_Bolt_Explosion_Large_E_00630d0c;
      pbVar17 = pbVar18;
      do {
        bVar11 = *pbVar17;
        bVar28 = bVar11 < (byte)*pcVar25;
        if (bVar11 != *pcVar25) {
LAB_004c2851:
          iVar13 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
          goto LAB_004c2856;
        }
        if (bVar11 == 0) break;
        bVar11 = pbVar17[1];
        bVar28 = bVar11 < (byte)pcVar25[1];
        if (bVar11 != pcVar25[1]) goto LAB_004c2851;
        pbVar17 = pbVar17 + 2;
        pcVar25 = pcVar25 + 2;
      } while (BEA_LOOP_GUARD((bVar11 != 0)));
      iVar13 = 0;
LAB_004c2856:
      if (iVar13 != 0) {
        pcVar25 = s_Flash_00630d04;
        do {
          bVar11 = *pbVar18;
          bVar28 = bVar11 < (byte)*pcVar25;
          if (bVar11 != *pcVar25) {
LAB_004c2889:
            iVar13 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
            goto LAB_004c288e;
          }
          if (bVar11 == 0) break;
          bVar11 = pbVar18[1];
          bVar28 = bVar11 < (byte)pcVar25[1];
          if (bVar11 != pcVar25[1]) goto LAB_004c2889;
          pbVar18 = pbVar18 + 2;
          pcVar25 = pcVar25 + 2;
        } while (BEA_LOOP_GUARD((bVar11 != 0)));
        iVar13 = 0;
LAB_004c288e:
        if (iVar13 != 0) {
LAB_004c2896:
          if ((*(int *)(param_1 + 0x58) == 0) ||
             ((*(ushort *)(*(int *)(param_1 + 0x58) + 0xb6) | 1) == 0)) {
            uVar19 = 0;
          }
          else {
            uVar19 = 1;
          }
          iVar13 = FUN_004cb5c0(bea_arg(&DAT_009c63e8), bea_arg(piVar16), bea_arg(uVar19));
          if (iVar13 != 0) {
            this_00 = (float *)(iVar13 + 0x38);
            *this_00 = *(float *)(param_1 + 0x38);
            *(undefined4 *)(iVar13 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
            *(undefined4 *)(iVar13 + 0x40) = *(undefined4 *)(param_1 + 0x40);
            *(undefined4 *)(iVar13 + 0x44) = *(undefined4 *)(param_1 + 0x44);
            iVar12 = *(int *)(param_1 + 0x58);
            if (*(int *)(this_ + *(int *)(param_1 + 0x80) * 0xc + 0x68) == 0) {
              if (iVar12 != 0) {
                if (*(int *)(iVar12 + 0xa0) != 0) {
                  this_01 = (float *)(iVar12 + 0x10);
                  pfVar26 = (float *)(iVar13 + 8);
                  fVar1 = *(float *)(iVar12 + 0x28);
                  fVar2 = *(float *)(iVar12 + 0x24);
                  fVar3 = *(float *)(iVar12 + 0x20);
                  fVar4 = *this_00;
                  fVar5 = *(float *)(iVar12 + 0x38);
                  fVar6 = *(float *)(iVar12 + 0x34);
                  fVar7 = *(float *)(iVar13 + 0x3c);
                  fVar8 = *(float *)(iVar12 + 0x30);
                  fVar9 = *this_00;
                  // class 19: the asm's order (all 12 sums)
                  *this_00 = *(float *)(iVar12 + 0x18) * *(float *)(iVar13 + 0x40) +
                             *(float *)(iVar12 + 0x14) * *(float *)(iVar13 + 0x3c) +
                             *this_00 * *this_01;
                  *(float *)(iVar13 + 0x3c) =
                       fVar1 * *(float *)(iVar13 + 0x40) +
                       fVar2 * *(float *)(iVar13 + 0x3c) + fVar3 * fVar4;
                  *(float *)(iVar13 + 0x40) =
                       fVar5 * *(float *)(iVar13 + 0x40) + fVar6 * fVar7 + fVar8 * fVar9;
                  *(undefined4 *)(iVar13 + 0x44) = uStack_74;
                  uVar19 = FUN_00401ec0(bea_arg(auStack_60), bea_arg(*this_01 * *(float *)(iVar13 + 0x28) +
                                        *(float *)(iVar12 + 0x20) * *(float *)(iVar13 + 0x2c) +
                                        *(float *)(iVar12 + 0x30) * *(float *)(iVar13 + 0x30)), bea_arg(*(float *)(iVar12 + 0x34) * *(float *)(iVar13 + 0x30) +
                                        *(float *)(iVar12 + 0x24) * *(float *)(iVar13 + 0x2c) +
                                        *(float *)(iVar12 + 0x14) * *(float *)(iVar13 + 0x28)), bea_arg(*(float *)(iVar12 + 0x38) * *(float *)(iVar13 + 0x30) +
                                        *(float *)(iVar12 + 0x28) * *(float *)(iVar13 + 0x2c) +
                                        *(float *)(iVar12 + 0x18) * *(float *)(iVar13 + 0x28)));
                  uVar20 = FUN_00401ec0(bea_arg(auStack_40), bea_arg(*this_01 * *(float *)(iVar13 + 0x18) +
                                        *(float *)(iVar12 + 0x30) * *(float *)(iVar13 + 0x20) +
                                        *(float *)(iVar12 + 0x20) * *(float *)(iVar13 + 0x1c)), bea_arg(*(float *)(iVar12 + 0x34) * *(float *)(iVar13 + 0x20) +
                                        *(float *)(iVar12 + 0x24) * *(float *)(iVar13 + 0x1c) +
                                        *(float *)(iVar12 + 0x14) * *(float *)(iVar13 + 0x18)), bea_arg(*(float *)(iVar12 + 0x38) * *(float *)(iVar13 + 0x20) +
                                        *(float *)(iVar12 + 0x28) * *(float *)(iVar13 + 0x1c) +
                                        *(float *)(iVar12 + 0x18) * *(float *)(iVar13 + 0x18)));
                  uVar21 = FUN_00401ec0(bea_arg(auStack_70), bea_arg(*this_01 * *pfVar26 +
                                        *(float *)(iVar12 + 0x30) * *(float *)(iVar13 + 0x10) +
                                        *(float *)(iVar12 + 0x20) * *(float *)(iVar13 + 0xc)), bea_arg(*(float *)(iVar12 + 0x34) * *(float *)(iVar13 + 0x10) +
                                        *(float *)(iVar12 + 0x24) * *(float *)(iVar13 + 0xc) +
                                        *(float *)(iVar12 + 0x14) * *pfVar26), bea_arg(*(float *)(iVar12 + 0x38) * *(float *)(iVar13 + 0x10) +
                                        *(float *)(iVar12 + 0x28) * *(float *)(iVar13 + 0xc) +
                                        *(float *)(iVar12 + 0x18) * *pfVar26));
                  FUN_00401f10(bea_arg(afStack_30), bea_arg(uVar21), bea_arg(uVar20), bea_arg(uVar19));
                  pfVar24 = afStack_30;
                  for (iVar23 = 0xc; BEA_LOOP_GUARD((iVar23 != 0)); iVar23 = iVar23 + -1) {
                    *pfVar26 = *pfVar24;
                    pfVar24 = pfVar24 + 1;
                    pfVar26 = pfVar26 + 1;
                  }
                  puVar22 = (undefined4 *)
                            FUN_0040d2c0(bea_arg(this_01), bea_arg(auStack_50), bea_arg((undefined4 *)(iVar13 + 0x48)));
                  *(undefined4 *)(iVar13 + 0x48) = *puVar22;
                  *(undefined4 *)(iVar13 + 0x4c) = puVar22[1];
                  *(undefined4 *)(iVar13 + 0x50) = puVar22[2];
                  *(undefined4 *)(iVar13 + 0x54) = puVar22[3];
                }
                FUN_0041ad10(bea_arg(this_00), bea_arg(iVar12));
              }
            }
            else {
              *(int *)(iVar13 + 0x58) = iVar12;
            }
            FUN_004cb920(bea_arg(&DAT_009c63e8), bea_arg(iVar13));
            bea_vcall<uint32_t>(*(int **)(iVar13 + 0x5c), 0x3c, iVar13);
          }
        }
      }
    }
  }
LAB_004c2b09:
  iVar13 = *(int *)(param_1 + 0x80) + 1;
  *(int *)(param_1 + 0x80) = iVar13;
  if (*(int *)(this_ + iVar13 * 0xc + 100) != (int)*(short *)(param_1 + 0x7e)) goto LAB_004c2b31;
  goto LAB_004c2761;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c2640, ap_004c2640));
