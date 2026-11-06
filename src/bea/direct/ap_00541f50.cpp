// auto-ported from 00541f50_FUN_00541f50.c (FUN_00541f50, 1707 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00541f50(void * this_, undefined4 param_1, int *param_2, int param_3, uint param_4, uint param_5, int param_6, int param_7, int param_8, int param_9, int param_10)
{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  byte *pbVar25;
  byte *pbVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  byte *pbVar30;
  byte *pbVar31;
  short *psVar32;
  int iVar33;

  alignas(16) uint8_t bea_frame_[0xd0] = {};   // the original stack frame (emulate_frame)
  uint &local_c4 = *reinterpret_cast<uint *>(bea_frame_ + 0xd0 - 0xc4);
  uint &local_b0 = *reinterpret_cast<uint *>(bea_frame_ + 0xd0 - 0xb0);
  uint * &local_ac = *reinterpret_cast<uint * *>(bea_frame_ + 0xd0 - 0xac);
  uint &local_6c = *reinterpret_cast<uint *>(bea_frame_ + 0xd0 - 0x6c);
  int &local_60 = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0x60);
  int &local_5c = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0x5c);
  int &local_58 = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0x58);
  int &local_20 = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0x20);
  uVar8 = 1 << ((byte)param_1 & 0x1f);
  iVar3 = param_2[6];
  local_ac = (uint *)(param_3 + (param_7 * param_10 + param_6) * uVar8 * 4);
  if (param_9 != 0) {
    local_60 = param_9;
    do {
      if (param_8 != 0) {
        local_58 = param_8;
        uVar9 = param_4;
        do {
          uVar23 = uVar9 + 1 & *(uint *)((int)this_ + 0x10c4);
          uVar29 = *(uint *)((int)this_ + 0x10c4) & uVar9;
          iVar14 = (*(uint *)((int)this_ + 0x10c8) & param_5) <<
                   ((byte)*(undefined4 *)((int)this_ + 0x1038) & 0x1f);
          iVar24 = (param_5 + 1 & *(uint *)((int)this_ + 0x10c8)) <<
                   ((byte)*(undefined4 *)((int)this_ + 0x1038) & 0x1f);
          iVar21 = *(int *)((int)this_ + 0x20);
          iVar20 = iVar21 + (iVar14 + uVar29) * 0x18;
          iVar28 = iVar21 + (iVar24 + uVar23) * 0x18;
          iVar14 = iVar21 + (iVar14 + uVar23) * 0x18;
          iVar21 = iVar21 + (uVar29 + iVar24) * 0x18;
          pbVar25 = (byte *)((int)this_ + 0x28);
          pbVar10 = (byte *)((uVar9 & 0xf) * uVar8 * 4 + (param_5 & 0xf) * iVar3 * uVar8 * 4 +
                            *param_2);
          pbVar31 = pbVar10;
          for (uVar23 = uVar8; BEA_LOOP_GUARD((uVar23 != 0)); uVar23 = uVar23 - 1) {
            pbVar26 = pbVar31;
            pbVar30 = pbVar25;
            for (uVar29 = uVar8 & 0x3fffffff; BEA_LOOP_GUARD((uVar29 != 0)); uVar29 = uVar29 - 1) {
              *(undefined4 *)pbVar30 = *(undefined4 *)pbVar26;
              pbVar26 = pbVar26 + 4;
              pbVar30 = pbVar30 + 4;
            }
            for (iVar24 = 0; BEA_LOOP_GUARD((iVar24 != 0)); iVar24 = iVar24 + -1) {
              *pbVar30 = *pbVar26;
              pbVar26 = pbVar26 + 1;
              pbVar30 = pbVar30 + 1;
            }
            pbVar31 = pbVar31 + iVar3 * 4;
            pbVar25 = pbVar25 + uVar8 * 4;
          }
          psVar32 = (short *)(iVar14 + 0xc);
          local_c4 = 1;
          local_5c = 5;
          do {
            pbVar10 = pbVar10 + param_2[4];
            if ((*(uint *)(iVar20 + 4) & local_c4) != 0) {
              iVar18 = (int)*(short *)((iVar20 - iVar14) + (int)psVar32);
              iVar11 = (int)*(short *)((int)psVar32 + (iVar21 - iVar14));
              sVar2 = *(short *)((iVar28 - iVar14) + (int)psVar32);
              iVar15 = *psVar32 * 0x10000 + iVar18 * -0x10000;
              iVar24 = iVar15 >> ((byte)param_1 & 0x1f);
              pbVar31 = (byte *)((int)this_ + 0x28);
              pbVar25 = pbVar10;
              uVar29 = iVar18 * 0x10000;
              for (uVar23 = uVar8; BEA_LOOP_GUARD((uVar23 != 0)); uVar23 = uVar23 - 1) {
                uVar19 = uVar29 + (iVar11 * 0x10000 + iVar18 * -0x10000 >> ((byte)param_1 & 0x1f));
                local_6c = uVar8;
                do {
                  iVar33 = (uVar29 & 0xff000000) + *(int *)pbVar25;
                  if (0 < iVar33 - *(int *)pbVar31) {
                    iVar27 = iVar33 - *(int *)pbVar31 >> 0x19;
                    if (iVar27 < 0x10) {
                      iVar22 = 0xf - iVar27;
                      *pbVar31 = (char)((int)((uint)*pbVar31 * iVar22) >> 4) +
                                 (char)((int)((uint)*pbVar25 * iVar27) >> 4);
                      pbVar31[1] = (char)((int)((uint)pbVar25[1] * iVar27) >> 4) +
                                   (char)((int)((uint)pbVar31[1] * iVar22) >> 4);
                      pbVar31[2] = (char)((int)((uint)pbVar25[2] * iVar27) >> 4) +
                                   (char)((int)((uint)pbVar31[2] * iVar22) >> 4);
                      pbVar31[3] = (byte)((uint)iVar33 >> 0x18);
                    }
                    else {
                      *(int *)pbVar31 = iVar33;
                    }
                  }
                  pbVar31 = pbVar31 + 4;
                  pbVar25 = pbVar25 + 4;
                  uVar29 = uVar29 + iVar24;
                  local_6c = local_6c - 1;
                } while (BEA_LOOP_GUARD((local_6c != 0)));
                iVar24 = iVar24 + ((sVar2 * 0x10000 + iVar11 * -0x10000) - iVar15 >>
                                  ((byte)param_1 * '\x02' & 0x1f));
                pbVar25 = pbVar25 + (iVar3 - uVar8) * 4;
                uVar29 = uVar19;
              }
            }
            psVar32 = psVar32 + 1;
            local_c4 = local_c4 << 1;
            local_5c = local_5c + -1;
          } while (BEA_LOOP_GUARD((local_5c != 0)));
          uVar23 = *(uint *)(iVar20 + 8);
          uVar29 = *(uint *)(iVar14 + 8);
          uVar5 = uVar23 >> 0x10 & 0xff;
          iVar15 = (uVar29 >> 0x10 & 0xff) * 0x100 + uVar5 * -0x100;
          uVar6 = uVar23 & 0xff;
          iVar18 = (uVar29 & 0xff) * 0x100 + uVar6 * -0x100;
          uVar23 = uVar23 & 0xff00;
          uVar19 = *(uint *)(iVar21 + 8);
          uVar7 = uVar19 >> 0x10 & 0xff;
          uVar4 = *(uint *)(iVar28 + 8);
          iVar33 = (uVar29 & 0xff00) - uVar23;
          iVar20 = iVar15 >> ((byte)param_1 & 0x1f);
          iVar28 = iVar33 >> ((byte)param_1 & 0x1f);
          iVar14 = iVar18 >> ((byte)param_1 & 0x1f);
          bVar12 = (byte)param_1 * '\x02';
          iVar21 = uVar5 * 0x100 + 0x400;
          iVar24 = uVar23 + 0x400;
          iVar11 = uVar6 * 0x100 + 0x400;
          pbVar25 = (byte *)((int)this_ + 0x28);
          puVar16 = local_ac;
          for (uVar29 = uVar8; BEA_LOOP_GUARD((uVar29 != 0)); uVar29 = uVar29 - 1) {
            iVar21 = iVar21 + ((int)(uVar7 * 0x100 + uVar5 * -0x100) >> ((byte)param_1 & 0x1f));
            iVar24 = iVar24 + ((int)((uVar19 & 0xff00) - uVar23) >> ((byte)param_1 & 0x1f));
            iVar11 = iVar11 + ((int)((uVar19 & 0xff) * 0x100 + uVar6 * -0x100) >>
                              ((byte)param_1 & 0x1f));
            iVar20 = iVar20 + ((int)(((uVar4 >> 0x10 & 0xff) * 0x100 + uVar7 * -0x100) - iVar15) >>
                              (bVar12 & 0x1f));
            iVar28 = iVar28 + ((int)(((uVar4 & 0xff00) - (uVar19 & 0xff00)) - iVar33) >>
                              (bVar12 & 0x1f));
            iVar14 = iVar14 + ((int)(((uVar4 & 0xff) * 0x100 + (uVar19 & 0xff) * -0x100) - iVar18)
                              >> (bVar12 & 0x1f));
            iVar27 = iVar11;
            iVar22 = iVar21;
            local_b0 = uVar8;
            local_20 = iVar24;
            do {
              iVar27 = iVar27 + iVar14;
              iVar22 = iVar22 + iVar20;
              local_20 = local_20 + iVar28;
              uVar13 = (uint)pbVar25[2] * iVar22 & 0xff0000;
              *puVar16 = uVar13;
              uVar13 = (int)((uint)pbVar25[1] * local_20) >> 8 & 0xff00U | uVar13;
              *puVar16 = uVar13;
              bVar1 = *pbVar25;
              puVar17 = puVar16 + 1;
              pbVar25 = pbVar25 + 4;
              *puVar16 = (int)((uint)bVar1 * iVar27) >> 0x10 & 0xffU | uVar13 | 0x80000000;
              local_b0 = local_b0 - 1;
              puVar16 = puVar17;
            } while (BEA_LOOP_GUARD((local_b0 != 0)));
            puVar16 = puVar17 + (param_10 - uVar8);
          }
          local_ac = local_ac + uVar8;
          local_58 = local_58 + -1;
          uVar9 = uVar9 + 1;
        } while (BEA_LOOP_GUARD((local_58 != 0)));
      }
      param_5 = param_5 + 1;
      local_ac = local_ac + (param_10 - param_8) * uVar8;
      local_60 = local_60 + -1;
    } while (BEA_LOOP_GUARD((local_60 != 0)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00541f50, ap_00541f50));
