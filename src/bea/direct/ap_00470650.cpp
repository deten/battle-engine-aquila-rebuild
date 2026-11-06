// auto-ported from 00470650_FUN_00470650.c (FUN_00470650, 1641 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: format string 0x62c280 by address (symbol had ">" in it); name entry stride 0x20 (shl ecx,5 at 0x470b13, was *8); heap counters 0x9c51f0/0x9c51a4/0x9c4058/0x9c400c unsigned (shr 0x4706aa, jae 0x470715/0x470745); y+10+10 in one x87 sum (0x470792-0x4707a2)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x210: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d248 GLOBAL_AT(int, 0x0083d248)
#define DAT_00662dd0 GLOBAL_AT(int, 0x00662dd0)
#define DAT_009c51f0 GLOBAL_AT(uint, 0x009c51f0)   // shr / jae: unsigned
#define DAT_009c51a4 GLOBAL_AT(uint, 0x009c51a4)   // shr / jae: unsigned
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_009c4058 GLOBAL_AT(uint, 0x009c4058)   // shr / jae: unsigned
#define DAT_009c400c GLOBAL_AT(uint, 0x009c400c)   // shr / jae: unsigned
#define DAT_009c421c GLOBAL_AT(int, 0x009c421c)
#define DAT_009c4060 GLOBAL_AT(int, 0x009c4060)
#define DAT_009c422c GLOBAL_AT(int, 0x009c422c)
#define DAT_009c4174 GLOBAL_AT(int, 0x009c4174)
#define DAT_009c4178 GLOBAL_AT(int, 0x009c4178)
#define DAT_009c41ac GLOBAL_AT(int, 0x009c41ac)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_009c2dd0 GLOBAL_AT(char, 0x009c2dd0)
#define DAT_009c405c GLOBAL_AT(int, 0x009c405c)
#define s_UNIT_INFO_0062c268 ((char*)0x0062c268)
#define s__dK_of_mesh_data_0062c300 ((char*)0x0062c300)
#define s_WARNING___THING_HEAP_NEARLY_FULL_0062c368 ((char*)0x0062c368)
#define s___TOO_MUCH_MESH_DATA_____dK__dK__0062c2c0 ((char*)0x0062c2c0)
#define s__dK_of_static_shadow_data_0062c2e4 ((char*)0x0062c2e4)
#define s_SQUAD_INFO_0062c274 ((char*)0x0062c274)
#define s_ERROR___THING_HEAP_FULL__THIS_LE_0062c334 ((char*)0x0062c334)
#define s___TOO_MUCH_STATIC_SHADOW_DATA_____0062c294 ((char*)0x0062c294)
#define s__dK__dK_of_default_heap_free_0062c314 ((char*)0x0062c314)
#define s__dK__dK_of_thing_heap_free_0062c38c ((char*)0x0062c38c)
typedef uint32_t (BEA_THISCALL* FUN_004eb1e0_t)(uint32_t);
static const bea_guard<FUN_004eb1e0_t> FUN_004eb1e0 = {(FUN_004eb1e0_t)0x004eb1e0};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540640_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540640_t> FUN_00540640 = {(FUN_00540640_t)0x00540640};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_THISCALL ap_00470650(void * this_)
{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;

  alignas(16) uint8_t bea_frame_[0x210] = {};   // the original stack frame (emulate_frame)
  float &fStack_208 = *reinterpret_cast<float *>(bea_frame_ + 0x210 - 0x208);
  int &iStack_204 = *reinterpret_cast<int *>(bea_frame_ + 0x210 - 0x204);
  undefined1 (&auStack_200)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x210 - 0x200);
  undefined1 (&auStack_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x210 - 0x100);
  FUN_004eb1e0(bea_arg(&DAT_0083d248));
  if (*(int **)((int)this_ + 0xa04) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0xa04), 0xd0);
  }
  if (*(int **)((int)this_ + 0x9f8) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x9f8), 0xd0);
  }
  fStack_208 = 110.0;
  if (DAT_00662dd0 != 0) {
    FUN_0055de9b(auStack_200,s__dK__dK_of_thing_heap_free_0062c38c,DAT_009c51f0 >> 10,
                 DAT_009c51a4 >> 10);
    uVar14 = 0x3f800000;
    uVar13 = 0;
    uVar12 = 0;
    uVar2 = FUN_004f7bf0(bea_arg(auStack_200));
    uVar11 = 0xffffff00;
    uVar9 = 0x42800000;
    fVar10 = fStack_208;
    pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
    FUN_00540640(bea_arg(pvVar3), bea_arg(uVar9), bea_arg(fVar10), bea_arg(uVar11), bea_arg(uVar2), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
    fStack_208 = fStack_208 + 10.0f;
    if (DAT_009c51f0 < 0x32000) {
      fStack_208 = fStack_208 + 10.0f;
      FUN_0055de9b(auStack_200,s_WARNING___THING_HEAP_NEARLY_FULL_0062c368);
      if (DAT_009c51f0 < 0x2800) {
        FUN_0055de9b(auStack_200,s_ERROR___THING_HEAP_FULL__THIS_LE_0062c334);
      }
      uVar14 = 0x3f800000;
      uVar13 = 0;
      uVar12 = 0;
      uVar2 = FUN_004f7bf0(bea_arg(auStack_200));
      uVar11 = 0xffff0000;
      uVar9 = 0x42800000;
      fVar10 = fStack_208;
      pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
      FUN_00540640(bea_arg(pvVar3), bea_arg(uVar9), bea_arg(fVar10), bea_arg(uVar11), bea_arg(uVar2), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
      fStack_208 = (float)((float10)fStack_208 + (float10)10.0f + (float10)10.0f);
    }
    FUN_0055de9b(auStack_200,s__dK__dK_of_default_heap_free_0062c314,DAT_009c4058 >> 10,
                 DAT_009c400c >> 10);
    uVar14 = 0x3f800000;
    uVar13 = 0;
    uVar12 = 0;
    uVar2 = FUN_004f7bf0(bea_arg(auStack_200));
    uVar11 = 0xffffff00;
    uVar9 = 0x42800000;
    fVar10 = fStack_208;
    pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
    FUN_00540640(bea_arg(pvVar3), bea_arg(uVar9), bea_arg(fVar10), bea_arg(uVar11), bea_arg(uVar2), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
    iVar6 = DAT_009c421c;
    fStack_208 = fStack_208 + 10.0f;
    iVar8 = DAT_009c4060 + DAT_009c422c + DAT_009c4174 + DAT_009c4178 + DAT_009c41ac;
    uVar7 = DAT_009c421c >> 0x1f;
    if (*(int *)((int)this_ + 0x9f0) != 0) {
      FUN_0055de9b(auStack_200,s__dK_of_mesh_data_0062c300,
                   (int)(iVar8 + (iVar8 >> 0x1f & 0x3ffU)) >> 10);
      uVar14 = 0x3f800000;
      uVar13 = 0;
      uVar12 = 0;
      uVar2 = FUN_004f7bf0(bea_arg(auStack_200));
      uVar11 = 0xffffff00;
      uVar9 = 0x42800000;
      fVar10 = fStack_208;
      pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
      FUN_00540640(bea_arg(pvVar3), bea_arg(uVar9), bea_arg(fVar10), bea_arg(uVar11), bea_arg(uVar2), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
      fStack_208 = fStack_208 + 10.0f;
      FUN_0055de9b(auStack_200,s__dK_of_static_shadow_data_0062c2e4,
                   (int)(iVar6 + (uVar7 & 0x3ff)) >> 10);
      uVar14 = 0x3f800000;
      uVar13 = 0;
      uVar12 = 0;
      uVar2 = FUN_004f7bf0(bea_arg(auStack_200));
      uVar11 = 0xffffff00;
      uVar9 = 0x42800000;
      fVar10 = fStack_208;
      pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
      FUN_00540640(bea_arg(pvVar3), bea_arg(uVar9), bea_arg(fVar10), bea_arg(uVar11), bea_arg(uVar2), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
      fStack_208 = fStack_208 + 10.0f;
    }
    if (0x1900000 < iVar8) {
      fStack_208 = fStack_208 + 10.0f;
      iVar4 = _rand();
      iVar4 = (iVar4 % 0xff | 0xffff00U) << 8;
      FUN_0055de9b(auStack_200,s___TOO_MUCH_MESH_DATA_____dK__dK__0062c2c0,
                   (int)(iVar8 + (iVar8 >> 0x1f & 0x3ffU)) >> 10,0x6400);
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      uVar2 = FUN_004f7bf0(bea_arg(auStack_200));
      uVar9 = 0x42800000;
      fVar10 = fStack_208;
      pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
      FUN_00540640(bea_arg(pvVar3), bea_arg(uVar9), bea_arg(fVar10), bea_arg(iVar4), bea_arg(uVar2), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar13));
      fStack_208 = fStack_208 + 10.0f;
    }
    if (0x100000 < iVar6) {
      fStack_208 = fStack_208 + 10.0f;
      iVar8 = _rand();
      iVar8 = (iVar8 % 0xff | 0xffff00U) << 8;
      FUN_0055de9b(auStack_200,s___TOO_MUCH_STATIC_SHADOW_DATA_____0062c294,
                   (int)(iVar6 + (uVar7 & 0x3ff)) >> 10,0x400);
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      uVar2 = FUN_004f7bf0(bea_arg(auStack_200));
      uVar9 = 0x42800000;
      fVar10 = fStack_208;
      pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
      FUN_00540640(bea_arg(pvVar3), bea_arg(uVar9), bea_arg(fVar10), bea_arg(iVar8), bea_arg(uVar2), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar13));
      fStack_208 = fStack_208 + 10.0f;
    }
    if (*(int *)((int)this_ + 0x9f4) != 0) {
      fStack_208 = fStack_208 + 10.0f;
      piVar5 = (int *)((int)this_ + 0x3c0);
      iVar6 = 0x26c;
      do {
        piVar5[0x81] = 0;
        piVar1 = (int *)((int)&DAT_009c3df0 + iVar6);
        iVar6 = iVar6 + 4;
        piVar5[0x102] = *piVar1 - *piVar5;
        piVar5 = piVar5 + 1;
      } while (BEA_LOOP_GUARD((iVar6 < 0x470)));
      iStack_204 = 8;
      do {
        iVar8 = 0;
        iVar6 = -1;
        iVar4 = 0;
        piVar5 = (int *)((int)this_ + 0x7c8);
        do {
          if ((iVar8 < *piVar5) && (piVar5[-0x81] == 0)) {
            iVar6 = iVar4;
            iVar8 = *piVar5;
          }
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (BEA_LOOP_GUARD((iVar4 < 0x81)));
        if (iVar6 != -1) {
          *(undefined4 *)((int)this_ + iVar6 * 4 + 0x5c4) = 1;
          iVar8 = *(int *)((int)this_ + iVar6 * 4 + 0x7c8);
          if (0 < iVar8) {
            FUN_0055de9b(auStack_100,((char*)0x0062c280),
                         (char *)(((char *)&DAT_009c2dd0) + iVar6 * 0x20),
                         *(uint *)((int)this_ + iVar6 * 4 + 0x3c0) >> 10,
                         (uint)(&DAT_009c405c)[iVar6] >> 10,
                         (int)(iVar8 + (iVar8 >> 0x1f & 0x3ffU)) >> 10);
            uVar14 = 0x3f800000;
            uVar13 = 0;
            uVar12 = 0;
            uVar2 = FUN_004f7bf0(bea_arg(auStack_100));
            fVar10 = fStack_208 - 2.0f;
            uVar11 = 0xff000000;
            uVar9 = 0x41f00000;
            pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
            FUN_00540640(bea_arg(pvVar3), bea_arg(uVar9), bea_arg(fVar10), bea_arg(uVar11), bea_arg(uVar2), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
            uVar14 = 0x3f800000;
            uVar13 = 0;
            uVar12 = 0;
            uVar2 = FUN_004f7bf0(bea_arg(auStack_100));
            uVar11 = 0xffff0000;
            uVar9 = 0x42000000;
            fVar10 = fStack_208;
            pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
            FUN_00540640(bea_arg(pvVar3), bea_arg(uVar9), bea_arg(fVar10), bea_arg(uVar11), bea_arg(uVar2), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
            fStack_208 = fStack_208 + 10.0f;
          }
        }
        iStack_204 = iStack_204 + -1;
      } while (BEA_LOOP_GUARD((iStack_204 != 0)));
    }
  }
  if (*(int *)((int)this_ + 0x9f8) != 0) {
    uVar14 = 0x3f800000;
    uVar13 = 0;
    uVar12 = 0;
    uVar2 = FUN_004f7bf0(bea_arg(s_SQUAD_INFO_0062c274));
    uVar11 = 0xffff0000;
    uVar9 = 0x40800000;
    fVar10 = fStack_208;
    pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
    FUN_00540640(bea_arg(pvVar3), bea_arg(uVar9), bea_arg(fVar10), bea_arg(uVar11), bea_arg(uVar2), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
    fStack_208 = fStack_208 + 10.0f;
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x9f8), 0xcc, &fStack_208);
    fStack_208 = fStack_208 + 10.0f;
  }
  if (*(int *)((int)this_ + 0xa04) != 0) {
    uVar14 = 0x3f800000;
    uVar13 = 0;
    uVar12 = 0;
    uVar2 = FUN_004f7bf0(bea_arg(s_UNIT_INFO_0062c268));
    uVar11 = 0xffff0000;
    uVar9 = 0x40800000;
    fVar10 = fStack_208;
    pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
    FUN_00540640(bea_arg(pvVar3), bea_arg(uVar9), bea_arg(fVar10), bea_arg(uVar11), bea_arg(uVar2), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
    fStack_208 = fStack_208 + 10.0f;
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0xa04), 0xcc, &fStack_208);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00470650, ap_00470650));
