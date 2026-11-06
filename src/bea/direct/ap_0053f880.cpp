// auto-ported from 0053f880_FUN_0053f880.c (FUN_0053f880, 638 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char iStack_60;
typedef char iStack_64;
typedef char uStack_58;
#define DAT_00889010 GLOBAL_AT(int, 0x00889010)
#define DAT_005db5fc GLOBAL_AT(int, 0x005db5fc)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_0053f880(void * this_)
{
  void *this_00;
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x78);
  int &iStack_74 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x74);
  int &iStack_64 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x64);
  int &iStack_60 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x60);
  int &iStack_5c = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x5c);
  uint &uStack_58 = *reinterpret_cast<uint *>(bea_frame_ + 0x80 - 0x58);
  undefined4 &uStack_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x54);
  int &iStack_50 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x50);
  undefined4 &uStack_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x4c);
  uint &uStack_48 = *reinterpret_cast<uint *>(bea_frame_ + 0x80 - 0x48);
  undefined4 &uStack_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x44);
  int &iStack_40 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x40);
  undefined4 &uStack_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x3c);
  uint &uStack_38 = *reinterpret_cast<uint *>(bea_frame_ + 0x80 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x34);
  uint &uStack_30 = *reinterpret_cast<uint *>(bea_frame_ + 0x80 - 0x30);
  undefined4 &uStack_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x2c);
  uint &uStack_28 = *reinterpret_cast<uint *>(bea_frame_ + 0x80 - 0x28);
  undefined4 &uStack_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x24);
  undefined1 (&local_20)[32] = *reinterpret_cast<undefined1 (*)[32]>(bea_frame_ + 0x80 - 0x20);
  uVar4 = DAT_00889010;
  DAT_00889010 = 1;
  uVar5 = FUN_004f27f0((int)this_ + 0x5c,4,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x170) = uVar5;
  DAT_00889010 = uVar4;
  if ((*(void **)((int)this_ + 0x170) != (void *)0x0) &&
     (iVar6 = FUN_00558690(bea_arg(*(void **)((int)this_ + 0x170))), iVar6 != 0)) {
    this_00 = *(void **)((int)this_ + 0x170);
    *(undefined4 *)((int)this_ + 0x160) = *(undefined4 *)((int)this_00 + 0xac);
    *(int *)((int)this_ + 0x164) = (int)*(short *)((int)this_00 + 0xb0);
    piVar7 = (int *)FUN_00558690(bea_arg(this_00));
    bea_vcall<uint32_t>(piVar7, 0x44, piVar7,0,local_20);
    piVar7 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + 0x170)));
    iVar6 = bea_vcall<uint32_t>(piVar7, 0x4c, piVar7,0,&iStack_60,0,0);
    if (-1 < iVar6) {
      uStack_38 = *(uint *)((int)this_ + 0x54);
      fVar2 = (float)*(uint *)((int)this_ + 0x160);
      fStack_78 = 0.0f;
      iStack_64 = 0;
      fVar1 = 0.0f;
      do {
        uStack_58 = *(uint *)((int)this_ + 0x164);
        uStack_54 = 0;
        iStack_74 = (int)(longlong)ROUND(fVar2 * fVar1);
        iVar10 = iStack_74 + -1;
        iVar6 = uStack_38 + iStack_74 + -2;
        iStack_74 = (int)(longlong)ROUND((float)uStack_58 * fStack_78);
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        bVar3 = false;
        while (BEA_LOOP_GUARD(((iVar10 <= iVar6 && (!bVar3))))) {
          iVar8 = (uStack_38 - 1) + iStack_74;
          bVar3 = false;
          if (iStack_74 < iVar8) {
            iVar8 = iVar8 - iStack_74;
            puVar9 = (undefined4 *)(iStack_5c + iStack_60 * iStack_74 + iVar6 * 4);
            do {
              if (0x10 < (byte)((uint)*puVar9 >> 0x18)) {
                bVar3 = true;
              }
              puVar9 = (undefined4 *)((int)puVar9 + iStack_60);
              iVar8 = iVar8 + -1;
            } while (BEA_LOOP_GUARD((iVar8 != 0)));
          }
          iVar6 = iVar6 + -1;
        }
        uVar11 = (iVar6 - iVar10) + 2;
        if (iStack_64 == 0) {
          uVar11 = uStack_38 >> 1;
        }
        *(float *)((iStack_64 + 0x18) * 0x10 + (int)this_) = fVar1;
        uStack_4c = 0;
        uStack_44 = 0;
        *(float *)((int)this_ + iStack_64 * 0x10 + 0x184) = fStack_78;
        iStack_50 = *(int *)((int)this_ + 0x160);
        uStack_3c = 0;
        uStack_34 = 0;
        uStack_2c = 0;
        *(float *)((int)this_ + iStack_64 * 0x10 + 0x188) =
             (float)(int)uVar11 / (float)iStack_50 + fVar1;
        uStack_48 = *(uint *)((int)this_ + 0x54);
        iStack_40 = *(int *)((int)this_ + 0x164);
        *(float *)((int)this_ + iStack_64 * 0x10 + 0x18c) =
             (float)uStack_48 / (float)iStack_40 + fStack_78;
        uStack_38 = *(uint *)((int)this_ + 0x54);
        uStack_30 = *(uint *)((int)this_ + 0x160);
        fVar2 = (float)uStack_30;
        fVar1 = (float)uStack_38 / fVar2 + fVar1;
        if (1.0f <= fVar1) {
          uStack_28 = *(uint *)((int)this_ + 0x164);
          uStack_24 = 0;
          fStack_78 = (float)uStack_38 / (float)uStack_28 + fStack_78;
          fVar1 = 0.0f;
        }
        iStack_64 = iStack_64 + 1;
      } while (BEA_LOOP_GUARD(((*(short *)((int)&DAT_005db5fc + iStack_64 * 2) != 0) && (fStack_78 < 1.0f))));
      piVar7 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + 0x170)));
      bea_vcall<uint32_t>(piVar7, 0x50, piVar7,0);
    }
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0053f880.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
