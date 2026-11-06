// auto-ported from 004e3370_FUN_004e3370.c (FUN_004e3370, 841 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x8a0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CInitThing;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008553fc GLOBAL_AT(int, 0x008553fc)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef CInitThing * (BEA_THISCALL* CInitThing__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CInitThing__vslot0_t> CInitThing__vslot0 = {(CInitThing__vslot0_t)0x0040e1b0};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef int (BEA_CDECL* FUN_004e36c0_t)(uint32_t);
static const bea_guard<FUN_004e36c0_t> FUN_004e36c0 = {(FUN_004e36c0_t)0x004e36c0};
typedef undefined4 * (BEA_CDECL* FUN_0050df80_t)(int, ...);
static const bea_guard<FUN_0050df80_t> FUN_0050df80 = {(FUN_0050df80_t)0x0050df80};
typedef undefined4 * (BEA_CDECL* FUN_0050f4b0_t)(uint32_t);
static const bea_guard<FUN_0050f4b0_t> FUN_0050f4b0 = {(FUN_0050f4b0_t)0x0050f4b0};

static void BEA_THISCALL ap_004e3370(void * this_)
{
  int *this_00;
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  float fVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  float *pfVar14;
  char *pcVar15;
  bool bVar16;

  alignas(16) uint8_t bea_frame_[0x8a0] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_894)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x8a0 - 0x894);
  undefined ** &local_884 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x8a0 - 0x884);
  undefined4 &uStack_880 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x880);
  undefined4 &uStack_87c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x87c);
  undefined4 &uStack_878 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x878);
  undefined4 &uStack_874 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x874);
  undefined4 &uStack_7e4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x7e4);
  int &local_4c8 = *reinterpret_cast<int *>(bea_frame_ + 0x8a0 - 0x4c8);
  undefined ** &ppuStack_4c4 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x8a0 - 0x4c4);
  undefined4 &uStack_4c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x4c0);
  undefined4 &uStack_4bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x4bc);
  undefined4 &uStack_4b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x4b8);
  undefined4 &uStack_4b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x4b4);
  undefined4 &uStack_424 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x424);
  undefined4 &uStack_108 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x108);
  char (&acStack_104)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x8a0 - 0x104);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x8a0 - 0x4);
  if ((*(int *)((int)this_ + 0xa0) != 0) || (*(int *)((int)this_ + 0x98) < *(int *)((int)this_ + 0x94))
     ) {
    if ((*(float *)((int)this_ + 0x80) < DAT_00672fd0) && (*(int *)((int)this_ + 0xa4) == 0)) {
      uVar5 = FUN_004e36c0(bea_arg(*(undefined4 *)((int)this_ + 0x468)));
      piVar6 = (int *)FUN_0050df80(uVar5);
      if (piVar6 != (int *)0x0) {
        FUN_0048dcf0(bea_arg(&local_884));
        local_884 = ((void*)0x005dc1c0);
        local_4c8 = 0;
        CInitThing__vslot0(bea_arg((CInitThing *)&local_884), bea_arg((int)this_ + 0xa8));
        pbVar3 = *(byte **)((int)this_ + 0x468);
        local_4c8 = *(undefined4 *)((int)this_ + 0x464);
        if (pbVar3 != (byte *)0x0) {
          iVar7 = FUN_00406d20(bea_arg(DAT_008553fc));
          while (BEA_LOOP_GUARD((iVar7 != 0))) {
            pbVar12 = *(byte **)(iVar7 + 0xb0);
            pbVar8 = pbVar3;
            do {
              bVar2 = *pbVar8;
              bVar16 = bVar2 < *pbVar12;
              if (bVar2 != *pbVar12) {
LAB_004e3466:
                iVar9 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                goto LAB_004e346b;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar8[1];
              bVar16 = bVar2 < pbVar12[1];
              if (bVar2 != pbVar12[1]) goto LAB_004e3466;
              pbVar8 = pbVar8 + 2;
              pbVar12 = pbVar12 + 2;
            } while (BEA_LOOP_GUARD((bVar2 != 0)));
            iVar9 = 0;
LAB_004e346b:
            if (iVar9 == 0) goto LAB_004e3486;
            iVar7 = FUN_00406d30(bea_arg(DAT_008553fc));
          }
        }
        iVar7 = 0;
LAB_004e3486:
        local_4c8 = iVar7;
        bea_vcall<uint32_t>(piVar6, 0x24, &local_884);
        this_00 = (int *)((int)this_ + 0x7c);
        *(int *)((int)this_ + 0x9c) = *(int *)((int)this_ + 0x9c) + 1;
        if (*(int *)((int)this_ + 0x7c) == 0) {
          FUN_0048dcf0(bea_arg(&ppuStack_4c4));
          pbVar3 = *(byte **)((int)this_ + 0x468);
          ppuStack_4c4 = ((void*)0x005dc1b0);
          uStack_108 = 0;
          acStack_104[0] = '\0';
          uStack_4 = 0;
          if (pbVar3 != (byte *)0x0) {
            iVar7 = FUN_00406d20(bea_arg(DAT_008553fc));
            while (BEA_LOOP_GUARD((iVar7 != 0))) {
              pbVar12 = *(byte **)(iVar7 + 0xb0);
              pbVar8 = pbVar3;
              do {
                bVar2 = *pbVar8;
                bVar16 = bVar2 < *pbVar12;
                if (bVar2 != *pbVar12) {
LAB_004e3533:
                  iVar9 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                  goto LAB_004e3538;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar8[1];
                bVar16 = bVar2 < pbVar12[1];
                if (bVar2 != pbVar12[1]) goto LAB_004e3533;
                pbVar8 = pbVar8 + 2;
                pbVar12 = pbVar12 + 2;
              } while (BEA_LOOP_GUARD((bVar2 != 0)));
              iVar9 = 0;
LAB_004e3538:
              if (iVar9 == 0) goto LAB_004e3553;
              iVar7 = FUN_00406d30(bea_arg(DAT_008553fc));
            }
          }
          iVar7 = 0;
LAB_004e3553:
          uVar5 = FUN_0050f4b0(bea_arg(*(undefined4 *)(iVar7 + 0xe0)));
          FUN_00401000(bea_arg(this_00), bea_arg(uVar5));
          iVar7 = *this_00;
          if (iVar7 != 0) {
            uStack_4bc = uStack_87c;
            uStack_4c0 = uStack_880;
            uStack_4b4 = uStack_874;
            uStack_4b8 = uStack_878;
            uStack_424 = uStack_7e4;
            uVar10 = 0xffffffff;
            pcVar13 = *(char **)((int)this_ + 0x468);
            do {
              pcVar15 = pcVar13;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar15 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar15;
            } while (BEA_LOOP_GUARD((cVar1 != '\0')));
            uVar10 = ~uVar10;
            pcVar13 = pcVar15 + -uVar10;
            pcVar15 = acStack_104;
            for (uVar11 = uVar10 >> 2; BEA_LOOP_GUARD((uVar11 != 0)); uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar10 = uVar10 & 3; BEA_LOOP_GUARD((uVar10 != 0)); uVar10 = uVar10 - 1) {
              *pcVar15 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar15 = pcVar15 + 1;
            }
            *(undefined4 *)(iVar7 + 0x80) = 1;
            bea_vcall<uint32_t>(*this_00, 0x24, &ppuStack_4c4);
          }
        }
        if ((int *)*this_00 != (int *)0x0) {
          bea_vcall<uint32_t>(*this_00, 0x10c, auStack_894,piVar6,0,0);
        }
        if (*(int *)((int)this_ + 0x9c) == *(int *)((int)this_ + 0x90)) {
          *(undefined4 *)((int)this_ + 0x9c) = 0;
          *(int *)((int)this_ + 0x98) = *(int *)((int)this_ + 0x98) + 1;
          if (*this_00 != 0) {
            *(undefined4 *)(*this_00 + 0x80) = 0;
            FUN_00401000(bea_arg(this_00), bea_arg(0));
          }
          fVar4 = DAT_00672fd0 + *(float *)((int)this_ + 0x8c);
        }
        else {
          fVar4 = DAT_00672fd0 + *(float *)((int)this_ + 0x88);
        }
        *(float *)((int)this_ + 0x80) = fVar4;
      }
    }
    pfVar14 = (float *)((int)this_ + 0x80);
    if (*pfVar14 <= DAT_00672fd0) {
      *pfVar14 = DAT_00672fd0 + 0.1f;
    }
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(pfVar14), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e3370, ap_004e3370));
