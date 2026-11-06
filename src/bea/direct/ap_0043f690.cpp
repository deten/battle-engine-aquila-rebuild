// auto-ported from 0043f690_FUN_0043f690.c (FUN_0043f690, 988 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x120: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @autoport-repair: 2 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_0089ce48 GLOBAL_AT(char, 0x0089ce48)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_006281b8 GLOBAL_AT(int, 0x006281b8)
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
#define DAT_008aa4e8 GLOBAL_AT(int, 0x008aa4e8)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_Warning___Could_not_find_animati_006281f8 ((char*)0x006281f8)
#define s_C__dev_ONSLAUGHT2_Cutscene_cpp_0062811c ((char*)0x0062811c)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef void * (BEA_THISCALL* FUN_0041a210_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041a210_t> FUN_0041a210 = {(FUN_0041a210_t)0x0041a210};
typedef uint32_t (BEA_THISCALL* FUN_0043fa70_t)(uint32_t);
static const bea_guard<FUN_0043fa70_t> FUN_0043fa70 = {(FUN_0043fa70_t)0x0043fa70};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef undefined4 (BEA_THISCALL* FUN_0046f2c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046f2c0_t> FUN_0046f2c0 = {(FUN_0046f2c0_t)0x0046f2c0};
typedef uint32_t (BEA_THISCALL* FUN_0046f2d0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046f2d0_t> FUN_0046f2d0 = {(FUN_0046f2d0_t)0x0046f2d0};
typedef uint32_t (BEA_THISCALL* FUN_00481f40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00481f40_t> FUN_00481f40 = {(FUN_00481f40_t)0x00481f40};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef uint32_t (BEA_THISCALL* FUN_004dbf70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004dbf70_t> FUN_004dbf70 = {(FUN_004dbf70_t)0x004dbf70};
typedef uint32_t (BEA_THISCALL* FUN_004e0b30_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0b30_t> FUN_004e0b30 = {(FUN_004e0b30_t)0x004e0b30};
typedef uint32_t (BEA_THISCALL* FUN_004e12b0_t)(uint32_t);
static const bea_guard<FUN_004e12b0_t> FUN_004e12b0 = {(FUN_004e12b0_t)0x004e12b0};
typedef float10 (BEA_THISCALL* FUN_004f3c80_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f3c80_t> FUN_004f3c80 = {(FUN_004f3c80_t)0x004f3c80};
typedef uint32_t (BEA_THISCALL* FUN_0053f010_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053f010_t> FUN_0053f010 = {(FUN_0053f010_t)0x0053f010};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_0043f690(void * this_)
{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  void *this_00;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;

  alignas(16) uint8_t bea_frame_[0x120] = {};   // the original stack frame (emulate_frame)
  void * &pvStack_114 = *reinterpret_cast<void * *>(bea_frame_ + 0x120 - 0x114);
  int &iStack_110 = *reinterpret_cast<int *>(bea_frame_ + 0x120 - 0x110);
  undefined1 (&auStack_10c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x120 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x120 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x4);
  if (*(char *)((int)this_ + 0x6b8) != '\0') {
    iVar4 = *(int *)((int)this_ + 0x854);
    if (iVar4 != 0) {
      *(undefined4 *)((int)this_ + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined4 *)((int)this_ + 0x20) = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)((int)this_ + 0x24) = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)((int)this_ + 0x28) = *(undefined4 *)(iVar4 + 0x28);
    }
    piVar6 = *(int **)((int)this_ + 0x30);
    if (*(char *)((int)this_ + 0x841) != '\0') {
      bea_vcall<uint32_t>(piVar6, 0x30);
      FUN_0043fa70(bea_arg(this_));
      *(undefined1 *)((int)this_ + 0x841) = 0;
    }
    if (*(char *)((int)this_ + 0x840) == '\0') {
      pvStack_114 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x9c), bea_arg(0x1d), bea_arg(s_C__dev_ONSLAUGHT2_Cutscene_cpp_0062811c), bea_arg(0x225));
      if (pvStack_114 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0041a210(bea_arg(pvStack_114), bea_arg(this_));
      }
      *(undefined4 *)((int)this_ + 0x734) = uVar3;
      uVar3 = FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(0));
      *(undefined4 *)((int)this_ + 0x738) = uVar3;
      FUN_0046f2d0(bea_arg(&DAT_008a9a98), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x734)));
      *(byte *)((int)this_ + 0x2c) = *(byte *)((int)this_ + 0x2c) & 0xf7;
      *(undefined1 *)((int)this_ + 0x840) = 1;
    }
    iVar4 = *(int *)((int)this_ + 0x844) + 1;
    *(int *)((int)this_ + 0x844) = iVar4;
    if (iVar4 < 0) {
      *(undefined4 *)((int)this_ + 0x844) = 0;
    }
    if (*(int *)((int)this_ + 0x848) <= *(int *)((int)this_ + 0x844)) {
      *(int *)((int)this_ + 0x844) = *(int *)((int)this_ + 0x848) + -1;
    }
    puVar7 = *(undefined4 **)((int)this_ + 0x7c);
    iVar4 = *(int *)((int)this_ + 0x844);
    if (puVar7 != (undefined4 *)0x0) {
      while (BEA_LOOP_GUARD(((iVar4 < (int)puVar7[0x8f] || (puVar7[0x8d] + -1 + puVar7[0x8f] < iVar4))))) {
        puVar7 = (undefined4 *)puVar7[0x92];
        if (puVar7 == (undefined4 *)0x0) {
          bea_vcall<uint32_t>(this_, 0x100);
          return;
        }
      }
      if (puVar7 != (undefined4 *)0x0) {
        *(float *)((int)this_ + 0x6b4) =
             (((float)iVar4 - (float)(int)puVar7[0x8f]) + (float)(int)puVar7[0x90]) /
             (float)(int)puVar7[0x8e];
        FUN_004dbf70(bea_arg(piVar6), bea_arg(puVar7[0x4a]));
        pcVar9 = (char *)(puVar7 + 0x42);
        this_00 = (void *)bea_vcall<uint32_t>(piVar6, 0x24);
        iVar4 = FUN_004aa630(bea_arg(this_00), bea_arg(pcVar9));
        if ((iVar4 == 0) || (iVar4 == -1)) {
          FUN_0055de9b(auStack_10c,s_Warning___Could_not_find_animati_006281f8,
                       (char *)(puVar7 + 0x42));
          CRenderThing__vslot3(auStack_10c);
        }
        *(int *)((int)this_ + 0x6ac) = iVar4;
        FUN_004f3c80(bea_arg(this_), bea_arg(iVar4), bea_arg((int)this_ + 0x6a8));
        DAT_0089ce48 = ((byte)*puVar7 & 1) != 1;
        if (*(int *)((int)this_ + 0x844) == *(int *)((int)this_ + 0x850)) {
          FUN_004e12b0(bea_arg(&DAT_00896988));
        }
        else {
          iStack_110 = 0;
          if (0 < *(int *)((int)this_ + 0xf4)) {
            piVar6 = (int *)((int)this_ + 0x530);
            do {
              if ((piVar6[-0x10e] == 2) &&
                 ((*piVar6 == -1 || (*piVar6 == *(int *)((int)this_ + 0x84c))))) {
                iVar5 = *(int *)((int)this_ + 0x844);
                for (iVar4 = piVar6[-0x12d]; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = *(int *)(iVar4 + 0x248)) {
                  if ((*(int *)(iVar4 + 0x23c) <= iVar5) &&
                     (iVar5 <= *(int *)(iVar4 + 0x23c) + -1 + *(int *)(iVar4 + 0x234))) {
                    if (iVar4 != 0) {
                      fVar2 = (((float)iVar5 - (float)*(int *)(iVar4 + 0x23c)) +
                              (float)*(int *)(iVar4 + 0x240)) * 0.05f;
                      pvStack_114 = (void *)(uintptr_t)bea_piece32((((float)*(int *)(iVar4 + 0x240) +
                                             (float)*(int *)(iVar4 + 0x234)) * 0.05f));
                      if (fVar2 < __builtin_bit_cast(float, (uint32_t)(uintptr_t)(pvStack_114))) {
                        FUN_004e0b30(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)(iVar4 + 0x244)), bea_arg(0), bea_arg(0x3f333333), bea_arg(0), bea_arg(1), bea_arg(0), bea_arg(fVar2), bea_arg(pvStack_114), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(1));
                      }
                    }
                    break;
                  }
                }
              }
              iStack_110 = iStack_110 + 1;
              piVar6 = piVar6 + 1;
            } while (BEA_LOOP_GUARD((iStack_110 < *(int *)((int)this_ + 0xf4))));
          }
        }
        if (*(int *)((int)this_ + 0x844) == puVar7[0x8f]) {
          pcVar9 = (char *)((int)puVar7 + 0x12d);
          iVar4 = -1;
          pcVar8 = pcVar9;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (BEA_LOOP_GUARD((cVar1 != '\0')));
          if ((iVar4 != -2) && (*(int *)((int)this_ + 0x844) == 0)) {
            iVar5 = FUN_00568390(bea_arg(pcVar9), bea_arg(&DAT_006281b8));
            iVar4 = *(int *)((int)this_ + 0x844);
            if (iVar5 == 0) {
              FUN_0053f010(bea_arg(&DAT_0089c9a0), bea_arg(0xff), bea_arg(CONCAT31((int3)((uint)iVar4 >> 8),iVar4 != 0)));
            }
            else {
              FUN_00481f40(bea_arg(&DAT_008aa4e8), bea_arg(pcVar9), bea_arg(CONCAT31((int3)((uint)iVar5 >> 8),iVar4 != 0)));
            }
          }
        }
        *(undefined4 *)((int)this_ + 0x850) = *(undefined4 *)((int)this_ + 0x844);
        pvStack_114 = (void *)0xbf800000;
        FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&pvStack_114), bea_arg(0), bea_arg(0), bea_arg(0));
        return;
      }
    }
    bea_vcall<uint32_t>(this_, 0x100);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043f690, ap_0043f690));
