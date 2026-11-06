// auto-ported from 00541790_FUN_00541790.c (FUN_00541790, 1415 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xc0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28 check_fild: local_b8 = (float)puVar1[1] -> bea_fcast<float> (the slot holds the raw uint: mov [esp+0x10],ecx at 0x541a22 then fild qword, and the uint compare cmp ecx,[ebp+0x24] at 0x541a5f)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char IAT;
#define DAT_008a97d0 GLOBAL_AT(char, 0x008a97d0)
#define DAT_008a982c GLOBAL_AT(char, 0x008a982c)
#define DAT_008a97c9 GLOBAL_AT(char, 0x008a97c9)
#define DAT_008a97c8 GLOBAL_AT(int, 0x008a97c8)
#define DAT_00541d20 GLOBAL_AT(int, 0x00541d20)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define DAT_008a9810 GLOBAL_AT(int, 0x008a9810)
#define DAT_008a9a54 GLOBAL_AT(int, 0x008a9a54)
#define DAT_008a9804 GLOBAL_AT(int, 0x008a9804)
#define DAT_008a9808 GLOBAL_AT(int, 0x008a9808)
#define DAT_0089ce84 GLOBAL_AT(int, 0x0089ce84)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define _DAT_009c73d4 GLOBAL_AT(int, 0x009c73d4)
#define DAT_009c741c GLOBAL_AT(char, 0x009c741c)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define s_meshtex_default_tga_00625498 ((char*)0x00625498)
#define s_DXFEV__LockRect_failed___s_006507f0 ((char*)0x006507f0)
#define s_Failed_lock_0065080c ((char*)0x0065080c)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_00441e20_t)(uint32_t);
static const bea_guard<FUN_00441e20_t> FUN_00441e20 = {(FUN_00441e20_t)0x00441e20};
typedef undefined1 (BEA_THISCALL* FUN_00441e30_t)(uint32_t);
static const bea_guard<FUN_00441e30_t> FUN_00441e30 = {(FUN_00441e30_t)0x00441e30};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef int (BEA_THISCALL* FUN_00528d90_t)(uint32_t);
static const bea_guard<FUN_00528d90_t> FUN_00528d90 = {(FUN_00528d90_t)0x00528d90};
typedef uint32_t (BEA_THISCALL* FUN_00528da0_t)(uint32_t);
static const bea_guard<FUN_00528da0_t> FUN_00528da0 = {(FUN_00528da0_t)0x00528da0};
typedef uint32_t (BEA_THISCALL* FUN_00528dc0_t)(uint32_t);
static const bea_guard<FUN_00528dc0_t> FUN_00528dc0 = {(FUN_00528dc0_t)0x00528dc0};
typedef uint32_t (BEA_THISCALL* FUN_005412e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005412e0_t> FUN_005412e0 = {(FUN_005412e0_t)0x005412e0};
typedef uint32_t (BEA_THISCALL* FUN_00541430_t)(uint32_t);
static const bea_guard<FUN_00541430_t> FUN_00541430 = {(FUN_00541430_t)0x00541430};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};
typedef int (BEA_CDECL* FUN_0055dfa6_t)(uint32_t);
static const bea_guard<FUN_0055dfa6_t> FUN_0055dfa6 = {(FUN_0055dfa6_t)0x0055dfa6};
typedef const char * (BEA_STDCALL* FUN_005be628_t)(uint32_t);
static const bea_guard<FUN_005be628_t> FUN_005be628 = {(FUN_005be628_t)0x005be628};
typedef uint32_t (BEA_STDCALL* _BinkCopyToBuffer_28_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
#define _BinkCopyToBuffer_28 (*(_BinkCopyToBuffer_28_t*)0x005d8338)   /* BINKW32.DLL import, via the IAT */
typedef uint32_t (BEA_STDCALL* _BinkDoFrame_4_t)(uint32_t);
#define _BinkDoFrame_4 (*(_BinkDoFrame_4_t*)0x005d8328)   /* BINKW32.DLL import, via the IAT */
typedef uint32_t (BEA_STDCALL* _BinkNextFrame_4_t)(uint32_t);
#define _BinkNextFrame_4 (*(_BinkNextFrame_4_t*)0x005d8324)   /* BINKW32.DLL import, via the IAT */

static undefined4 BEA_THISCALL ap_00541790(void * this_, float param_1, float param_2, float param_3, float param_4, float param_5, uint param_6, int param_7)
{
  int *a1;
  uint *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;

  alignas(16) uint8_t bea_frame_[0xc0] = {};   // the original stack frame (emulate_frame)
  float &local_b8 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xb8);
  undefined4 &uStack_b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xb4);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xac);
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa8);
  float &local_a4 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa4);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa0);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x9c);
  undefined4 &local_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x98);
  uint &local_94 = *reinterpret_cast<uint *>(bea_frame_ + 0xc0 - 0x94);
  undefined4 &local_90 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x90);
  undefined4 &local_8c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x80);
  undefined4 &local_7c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x7c);
  uint &local_78 = *reinterpret_cast<uint *>(bea_frame_ + 0xc0 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x68);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x64);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x60);
  uint &local_5c = *reinterpret_cast<uint *>(bea_frame_ + 0xc0 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x58);
  float &local_54 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x44);
  uint &local_40 = *reinterpret_cast<uint *>(bea_frame_ + 0xc0 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x38);
  char (&local_34)[52] = *reinterpret_cast<char (*)[52]>(bea_frame_ + 0xc0 - 0x34);
  if (param_3 == 0.0f) {
    param_3 = 0.0001;
  }
  if (DAT_008a97d0 == '\0') {
    if (*(int *)((int)this_ + 0x1c) == 0) {
      if (DAT_008a982c != '\0') {
        FUN_00541430(bea_arg(this_));
      }
      if (*(int *)((int)this_ + 8) != 0) {
        if (*(int *)((int)this_ + 0x18) == 0) {
          _BinkDoFrame_4(bea_arg(*(int *)((int)this_ + 8)));
          _BinkNextFrame_4(bea_arg(*(undefined4 *)((int)this_ + 8)));
          *(undefined4 *)((int)this_ + 0x18) = 1;
        }
        a1 = *(int **)(*(int *)((int)this_ + *(int *)((int)this_ + 0x14) * 4 + 0xc) + 8);
        if (((**(uint **)((int)this_ + 8) <= *(uint *)((int)this_ + 0x20)) &&
            ((*(uint **)((int)this_ + 8))[1] <= *(uint *)((int)this_ + 0x24))) && (a1 != (int *)0x0))
        {
          uVar6 = *(int *)((int)this_ + 0x14) + 1U & 0x80000001;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
          }
          *(uint *)((int)this_ + 0x14) = uVar6;
          iVar3 = bea_vcall<uint32_t>(a1, 0x4c, a1,0,&local_b8,0,0x800);
          if (iVar3 < 0) {
            CRenderThing__vslot3(s_Failed_lock_0065080c);
            if ((DAT_008a97c9 & 1) == 0) {
              DAT_008a97c9 = DAT_008a97c9 | 1;
              FUN_00441e20(bea_arg(&DAT_008a97c8));
              FUN_0055dfa6(bea_arg(&DAT_00541d20));
            }
            cVar2 = FUN_00441e30(bea_arg(&DAT_008a97c8));
            if (cVar2 == '\0') {
              pcVar4 = (char *)FUN_005be628(bea_arg(iVar3));
              FUN_00441740(&DAT_0066eb90,s_DXFEV__LockRect_failed___s_006507f0,pcVar4);
            }
          }
          else {
            FUN_00528da0(bea_arg(&DAT_008a9810));
            iVar3 = _BinkCopyToBuffer_28
                              (bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(uStack_b4), bea_arg(local_b8), bea_arg(*(undefined4 *)((int)this_ + 0x24)), bea_arg(0), bea_arg(0), bea_arg((-(uint)(DAT_008a9a54 != 0) & 0xfffffffb) + 0x7000000a | 0x80000000));
            bea_vcall<uint32_t>(a1, 0x50, a1,0);
            if (iVar3 != 0) {
              uVar6 = *(int *)((int)this_ + 0x14) + 1U & 0x80000001;
              if ((int)uVar6 < 0) {
                uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
              }
              *(uint *)((int)this_ + 0x14) = uVar6;
            }
            *(undefined4 *)((int)this_ + 0x18) = 0;
            if (*(int *)((int)this_ + 8) != 0) {
              _BinkDoFrame_4(bea_arg(*(int *)((int)this_ + 8)));
              _BinkNextFrame_4(bea_arg(*(undefined4 *)((int)this_ + 8)));
              *(undefined4 *)((int)this_ + 0x18) = 1;
            }
            FUN_00528dc0(bea_arg(&DAT_008a9810));
            *(undefined4 *)((int)this_ + 0x1c) = 1;
          }
        }
      }
    }
  }
  else {
    iVar3 = FUN_00528d90(bea_arg(&DAT_008a9810));
    if (iVar3 == 0) {
      uVar6 = 0xffffffff;
      pcVar4 = &DAT_008a97d0;
      do {
        pcVar8 = pcVar4;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar8 = pcVar4 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar8;
      } while (BEA_LOOP_GUARD((cVar2 != '\0')));
      uVar6 = ~uVar6;
      pcVar4 = pcVar8 + -uVar6;
      pcVar8 = local_34;
      for (uVar7 = uVar6 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar6 & 3; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar8 = pcVar8 + 1;
      }
      DAT_008a97d0 = '\0';
      FUN_005412e0(bea_arg(this_), bea_arg(local_34), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(*(undefined4 *)((int)this_ + 0x24)), bea_arg(DAT_008a9804), bea_arg(1), bea_arg(DAT_008a9808));
    }
  }
  puVar1 = *(uint **)((int)this_ + 8);
  if ((puVar1 == (uint *)0x0) || (DAT_008a97d0 != '\0')) {
    local_a8 = (float)*(int *)((int)this_ + 0x20);
    local_ac = (float)*(int *)((int)this_ + 0x24);
    if (DAT_0089ce84 == (void *)0x0) {
      DAT_0089ce84 = (void *)FUN_004f27f0(s_meshtex_default_tga_00625498,0,0,0xffffffff,1,1);
    }
    uVar5 = FUN_00558690(bea_arg(DAT_0089ce84));
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar5));
  }
  else {
    if (*(int *)((int)this_ + 0x2c) != 0xff) {
      *(int *)((int)this_ + 0x2c) = *(int *)((int)this_ + 0x2c) + 0x11;
    }
    local_b8 = bea_fcast<float>(puVar1[1]);
    iVar3 = *(int *)((int)this_ + 0x2c);
    local_a8 = (float)*puVar1;
    uStack_b4 = 0;
    local_ac = (float)bea_piece32(local_b8);
    param_6 = (((param_6 >> 0x10 & 0xff) * iVar3 & 0xffffff00) +
              ((param_6 >> 8 & 0xff) * iVar3 >> 8)) * 0x100 + ((param_6 & 0xff) * iVar3 >> 8) +
              (param_6 & 0xff000000);
    if ((*puVar1 <= *(uint *)((int)this_ + 0x20)) &&
       (bea_piece32(local_b8) <= bea_piece32(*(float *)((int)this_ + 0x24)))) {
      FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(*(undefined4 *)(*(int *)((int)this_ + *(int *)((int)this_ + 0x14) * 4 + 0xc) + 8)));
      goto LAB_00541b0b;
    }
    if (DAT_0089ce84 == (void *)0x0) {
      DAT_0089ce84 = (void *)FUN_004f27f0(s_meshtex_default_tga_00625498,0,0,0xffffffff,1,1);
    }
    uVar5 = FUN_00558690(bea_arg(DAT_0089ce84));
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar5));
  }
  param_6 = param_6 & 0xff000000;
LAB_00541b0b:
  if (param_7 == 1) {
    param_1 = param_1 - local_a8 * param_4 * 0.5f;
    param_2 = param_2 - local_ac * param_5 * 0.5f;
  }
  local_88 = local_a8 * param_4 + param_1;
  local_9c = param_3;
  local_64 = param_3;
  local_80 = param_3;
  local_48 = param_3;
  local_98 = 0x3f800000;
  local_90 = 0;
  local_8c = 0;
  local_7c = 0x3f800000;
  local_b0 = local_a8 / (float)*(int *)((int)this_ + 0x20);
  local_70 = 0;
  local_60 = 0x3f800000;
  local_44 = 0x3f800000;
  local_3c = 0;
  local_68 = param_2 + local_ac * param_5;
  local_b8 = local_ac / (float)*(int *)((int)this_ + 0x24);
  local_a4 = param_1;
  local_a0 = param_2;
  local_94 = param_6;
  local_84 = param_2;
  local_78 = param_6;
  local_74 = local_b0;
  local_6c = local_88;
  local_5c = param_6;
  local_58 = local_b0;
  local_54 = local_b8;
  local_50 = param_1;
  local_4c = local_68;
  local_40 = param_6;
  local_38 = local_b8;
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  FUN_00513bc0(bea_arg(0xf), bea_arg(0));
  FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(1));
  FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
  FUN_00513820(bea_arg(0), bea_arg(2), bea_arg(2));
  FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(0));
  _DAT_009c73d4 = 0x144;
  DAT_009c741c = 1;
  DAT_009c68ad = 0;
  DAT_009c6910 = 1;
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  bea_vcall<uint32_t>(DAT_00888a50, 0x14c, DAT_00888a50,6,2,&local_a4,0x1c);
  FUN_00513bc0(bea_arg(0xf), bea_arg(1));
  FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(4));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00541790, ap_00541790));
