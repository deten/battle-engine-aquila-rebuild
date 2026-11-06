// auto-ported from 004f2ce0_vslot1.c (CTGALoader::vslot1, 1071 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x170: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CTGALoader;
typedef char uStack_148;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_tgaloader_cpp_0063314c ((char*)0x0063314c)
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_004f2ce0(CTGALoader * this_)
{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;

  alignas(16) uint8_t bea_frame_[0x170] = {};   // the original stack frame (emulate_frame)
  undefined1 &uStack_161 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x170 - 0x161);
  undefined1 &uStack_160 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x170 - 0x160);
  byte &bStack_15f = *reinterpret_cast<byte *>(bea_frame_ + 0x170 - 0x15f);
  byte &bStack_15e = *reinterpret_cast<byte *>(bea_frame_ + 0x170 - 0x15e);
  undefined1 &uStack_15d = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x170 - 0x15d);
  undefined1 * &puStack_15c = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x170 - 0x15c);
  int &iStack_158 = *reinterpret_cast<int *>(bea_frame_ + 0x170 - 0x158);
  undefined1 (&auStack_154)[2] = *reinterpret_cast<undefined1 (*)[2]>(bea_frame_ + 0x170 - 0x154);
  char &cStack_152 = *reinterpret_cast<char *>(bea_frame_ + 0x170 - 0x152);
  short &sStack_14a = *reinterpret_cast<short *>(bea_frame_ + 0x170 - 0x14a);
  ushort &uStack_148 = *reinterpret_cast<ushort *>(bea_frame_ + 0x170 - 0x148);
  undefined2 &uStack_146 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x170 - 0x146);
  byte &bStack_144 = *reinterpret_cast<byte *>(bea_frame_ + 0x170 - 0x144);
  undefined1 (&local_140)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x170 - 0x140);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x170 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x4);
  FUN_00547d70(bea_arg(local_140));
  uVar11 = 0;
  uVar10 = 1;
  uVar9 = 0x11;
  uVar1 = bea_vcall<uint32_t>(this_, 0x8);
  iVar2 = FUN_00547ec0(bea_arg(local_140), bea_arg(uVar1), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11));
  if (iVar2 == 0) {
    FUN_00548c00(bea_arg(local_140));
    FUN_00547d90(bea_arg(local_140));
    return 0;
  }
  FUN_00548570(bea_arg(local_140), bea_arg(auStack_154), bea_arg(0x12));
  *(uint *)(this_ + 0xc) = (uint)bStack_144;
  if (((cStack_152 == '\x02') || (cStack_152 == '\n')) &&
     ((bStack_144 == 0x18 || (bStack_144 == 0x20)))) {
    uVar3 = CONCAT12(bStack_144,uStack_146) & 0xffff;
    *(uint *)(this_ + 8) = uVar3;
    *(uint *)(this_ + 4) = (uint)uStack_148;
    iVar2 = bea_vcall<uint32_t>(this_, 0x2c, uVar3 * uStack_148 * 3);
    if (iVar2 != 0) {
      if (bStack_144 == 0x18) {
        if (cStack_152 == '\x02') {
          FUN_00548570(bea_arg(local_140), bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(*(int *)(this_ + 4) * *(int *)(this_ + 8) * 3));
        }
        else if (cStack_152 == '\n') {
          iVar2 = *(int *)(this_ + 4) * *(int *)(this_ + 8);
          puVar8 = *(undefined1 **)(this_ + 0x10);
          while (BEA_LOOP_GUARD((iVar2 != 0))) {
            FUN_00548570(bea_arg(local_140), bea_arg(&bStack_15f), bea_arg(1));
            iVar5 = (bStack_15f & 0x7f) + 1;
            iVar2 = iVar2 - iVar5;
            if ((bStack_15f & 0x80) == 0) {
              FUN_00548570(bea_arg(local_140), bea_arg(puVar8), bea_arg(iVar5 * 3));
              puVar8 = puVar8 + iVar5 * 3;
            }
            else {
              FUN_00548570(bea_arg(local_140), bea_arg(&uStack_161), bea_arg(1));
              FUN_00548570(bea_arg(local_140), bea_arg(&uStack_160), bea_arg(1));
              FUN_00548570(bea_arg(local_140), bea_arg(&bStack_15e), bea_arg(1));
              for (; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
                *puVar8 = uStack_161;
                puVar8[1] = uStack_160;
                puVar8[2] = bStack_15e;
                puVar8 = puVar8 + 3;
              }
            }
          }
        }
      }
      else {
        puVar8 = (undefined1 *)
                 FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)(this_ + 4) * *(int *)(this_ + 8) * 4), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_tgaloader_cpp_0063314c), bea_arg(0x77));
        puStack_15c = puVar8;
        if (cStack_152 == '\x02') {
          FUN_00548570(bea_arg(local_140), bea_arg(puVar8), bea_arg(*(int *)(this_ + 4) * *(int *)(this_ + 8) * 4));
        }
        else if (cStack_152 == '\n') {
          iVar2 = *(int *)(this_ + 4) * *(int *)(this_ + 8);
          puVar7 = puVar8;
          while (BEA_LOOP_GUARD((puStack_15c = puVar8, iVar2 != 0))) {
            FUN_00548570(bea_arg(local_140), bea_arg(&bStack_15e), bea_arg(1));
            iVar5 = (bStack_15e & 0x7f) + 1;
            iVar2 = iVar2 - iVar5;
            iStack_158 = iVar2;
            if ((bStack_15e & 0x80) == 0) {
              FUN_00548570(bea_arg(local_140), bea_arg(puVar7), bea_arg(iVar5 * 4));
              puVar7 = puVar7 + iVar5 * 4;
              puVar8 = puStack_15c;
            }
            else {
              FUN_00548570(bea_arg(local_140), bea_arg(&uStack_160), bea_arg(1));
              FUN_00548570(bea_arg(local_140), bea_arg(&uStack_161), bea_arg(1));
              FUN_00548570(bea_arg(local_140), bea_arg(&bStack_15f), bea_arg(1));
              FUN_00548570(bea_arg(local_140), bea_arg(&uStack_15d), bea_arg(1));
              for (; BEA_LOOP_GUARD((puVar8 = puStack_15c, iVar5 != 0)); iVar5 = iVar5 + -1) {
                *puVar7 = uStack_160;
                puVar7[1] = uStack_161;
                puVar7[2] = bStack_15f;
                puVar7[3] = uStack_15d;
                puVar7 = puVar7 + 4;
                iVar2 = iStack_158;
              }
            }
          }
        }
        bea_vcall<uint32_t>(this_, 0x28);
        bea_vcall<uint32_t>(this_, 0x30, *(int *)(this_ + 4) * *(int *)(this_ + 8));
        if (sStack_14a == 0) {
          puVar6 = *(undefined1 **)(this_ + 0x10);
          puVar7 = *(undefined1 **)(this_ + 0x14);
        }
        else {
          iVar2 = (*(int *)(this_ + 8) + -1) * *(int *)(this_ + 4);
          puVar6 = (undefined1 *)(iVar2 * 3 + *(int *)(this_ + 0x10));
          puVar7 = (undefined1 *)(*(int *)(this_ + 0x14) + iVar2);
        }
        iVar2 = 0;
        puVar4 = puVar8;
        if (0 < *(int *)(this_ + 8)) {
          do {
            iVar5 = 0;
            puVar4 = puVar8;
            if (0 < *(int *)(this_ + 4)) {
              do {
                puVar8 = puVar4 + 4;
                *puVar6 = *puVar4;
                puVar6[1] = puVar4[1];
                puVar6[2] = puVar4[2];
                *puVar7 = puVar4[3];
                puVar6 = puVar6 + 3;
                puVar7 = puVar7 + 1;
                iVar5 = iVar5 + 1;
                puVar4 = puVar8;
              } while (BEA_LOOP_GUARD((iVar5 < *(int *)(this_ + 4))));
            }
            if (sStack_14a != 0) {
              puVar7 = puVar7 + *(int *)(this_ + 4) * -2;
              puVar6 = puVar6 + *(int *)(this_ + 4) * -6;
            }
            iVar2 = iVar2 + 1;
            puVar4 = puStack_15c;
          } while (BEA_LOOP_GUARD((iVar2 < *(int *)(this_ + 8))));
        }
        **(undefined4 **)(this_ + 0x118) = 4;
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar4));
      }
      FUN_00548c00(bea_arg(local_140));
      FUN_00547d90(bea_arg(local_140));
      return 1;
    }
    FUN_00548c00(bea_arg(local_140));
    FUN_00547d90(bea_arg(local_140));
    return 0;
  }
  FUN_00548c00(bea_arg(local_140));
  FUN_00547d90(bea_arg(local_140));
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2ce0, ap_004f2ce0));
