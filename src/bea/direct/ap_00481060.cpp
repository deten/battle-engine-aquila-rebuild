// auto-ported from 00481060_FUN_00481060.c (FUN_00481060, 614 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00704290 GLOBAL_AT(int, 0x00704290)
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__Unexpected_collision_ch_0062cdec ((char*)0x0062cdec)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_00480db0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00480db0_t> FUN_00480db0 = {(FUN_00480db0_t)0x00480db0};
typedef uint32_t (BEA_THISCALL* FUN_00480e10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00480e10_t> FUN_00480e10 = {(FUN_00480e10_t)0x00480e10};
typedef uint32_t (BEA_THISCALL* FUN_00480ed0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00480ed0_t> FUN_00480ed0 = {(FUN_00480ed0_t)0x00480ed0};
typedef uint32_t (BEA_THISCALL* FUN_00491d80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00491d80_t> FUN_00491d80 = {(FUN_00491d80_t)0x00491d80};
typedef undefined4 (BEA_THISCALL* FUN_00491d90_t)(uint32_t);
static const bea_guard<FUN_00491d90_t> FUN_00491d90 = {(FUN_00491d90_t)0x00491d90};
typedef undefined4 (BEA_STDCALL* FUN_00491da0_t)(uint32_t);
static const bea_guard<FUN_00491da0_t> FUN_00491da0 = {(FUN_00491da0_t)0x00491da0};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};
typedef undefined4 (BEA_THISCALL* FUN_004f3d10_t)(uint32_t);
static const bea_guard<FUN_004f3d10_t> FUN_004f3d10 = {(FUN_004f3d10_t)0x004f3d10};

static void BEA_THISCALL ap_00481060(void * this_, undefined4 *param_1, undefined4 *param_2)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int &local_24 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x24);
  int &local_20 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x20);
  short &local_1c = *reinterpret_cast<short *>(bea_frame_ + 0x30 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x18);
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x10);
  int &local_c = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0xc);
  short &local_8 = *reinterpret_cast<short *>(bea_frame_ + 0x30 - 0x8);
  short &local_6 = *reinterpret_cast<short *>(bea_frame_ + 0x30 - 0x6);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x4);
  local_c = param_1[1];
  iVar8 = param_2[1];
  uVar3 = *param_1;
  local_14 = iVar8;
  uVar2 = *param_2;
  for (; BEA_LOOP_GUARD((-1 < iVar8)); iVar8 = iVar8 + -1) {
    (*(uint16_t*)((char*)&local_18 + 0)) = (short)uVar2;
    (*(uint16_t*)((char*)&local_10 + 0)) = (short)uVar3;
    (*(uint16_t*)((char*)&local_18 + 2)) = (short)((uint)uVar2 >> 0x10);
    (*(uint16_t*)((char*)&local_10 + 2)) = (short)((uint)uVar3 >> 0x10);
    if ((((short)local_18 != (short)local_10) || ((*(uint16_t*)((char*)&local_18 + 2)) != (*(uint16_t*)((char*)&local_10 + 2)))) ||
       (local_14 != local_c)) {
      local_20 = -1;
      do {
        local_1c = (short)local_20 + (short)local_18;
        local_24 = -1;
        do {
          local_8 = local_1c;
          local_6 = (short)local_24 + (*(uint16_t*)((char*)&local_18 + 2));
          local_4 = iVar8;
          iVar4 = FUN_00491da0(bea_arg(&local_8));
          if ((iVar4 != 0) &&
             ((uVar5 = (int)local_8 - (int)(short)local_10, uVar9 = (int)uVar5 >> 0x1f,
              1 < (int)((uVar5 ^ uVar9) - uVar9) ||
              (uVar5 = (int)local_6 - (int)(*(uint16_t*)((char*)&local_10 + 2)) >> 0x1f,
              1 < (int)(((int)local_6 - (int)(*(uint16_t*)((char*)&local_10 + 2)) ^ uVar5) - uVar5))))) {
            piVar7 = (int *)(*(int *)(DAT_00704290 + local_4 * 4) +
                            ((0x40 >> (4U - (char)local_4 & 0x1f)) * (int)local_6 + (int)local_8) *
                            8);
            if (iVar8 == param_2[1]) {
              puVar1 = (undefined4 *)*piVar7;
              if (puVar1 != (undefined4 *)0x0) {
                FUN_00480e10(bea_arg(this_), bea_arg(*puVar1));
                FUN_00480e10(bea_arg(this_), bea_arg(puVar1[1]));
                FUN_00480e10(bea_arg(this_), bea_arg(puVar1[2]));
                FUN_00480e10(bea_arg(this_), bea_arg(puVar1[3]));
              }
              pvVar6 = (void *)FUN_00491d80(bea_arg(&DAT_00704200), bea_arg(piVar7));
              while (BEA_LOOP_GUARD((pvVar6 != (void *)0x0))) {
                pvVar6 = (void *)FUN_00492c90(bea_arg(pvVar6));
                iVar4 = FUN_004f3d10(bea_arg(pvVar6));
                if (iVar4 != 0) {
                  FUN_00480db0(bea_arg(this_), bea_arg(iVar4));
                }
                pvVar6 = (void *)FUN_00491d90(bea_arg(&DAT_00704200));
              }
            }
            else {
              pvVar6 = (void *)FUN_00491d80(bea_arg(&DAT_00704200), bea_arg(piVar7));
              while (BEA_LOOP_GUARD((pvVar6 != (void *)0x0))) {
                pvVar6 = (void *)FUN_00492c90(bea_arg(pvVar6));
                piVar7 = (int *)FUN_004f3d10(bea_arg(pvVar6));
                if (((piVar7 != (int *)0x0) && (piVar7 != *(int **)((int)this_ + 8))) &&
                   ((iVar4 = bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x20, piVar7), iVar4 != 0 &&
                    (iVar4 = bea_vcall<uint32_t>(piVar7, 0x20, *(undefined4 *)((int)this_ + 8)),
                    iVar4 != 0)))) {
                  if (*(int *)((int)this_ + 0x10) == 1) {
                    FUN_00441740(&DAT_0066f580,s_WARNING__Unexpected_collision_ch_0062cdec);
                  }
                  else {
                    FUN_00480ed0(bea_arg(this_), bea_arg(piVar7));
                    *(undefined4 *)((int)this_ + 0x10) = 0;
                  }
                }
                pvVar6 = (void *)FUN_00491d90(bea_arg(&DAT_00704200));
              }
            }
          }
          local_24 = local_24 + 1;
        } while (BEA_LOOP_GUARD((local_24 < 2)));
        local_20 = local_20 + 1;
      } while (BEA_LOOP_GUARD((local_20 < 2)));
    }
    if (iVar8 != 0) {
      local_18 = CONCAT22((*(uint16_t*)((char*)&local_18 + 2)) >> 1,(short)local_18 >> 1);
      local_14 = local_14 + -1;
      local_c = local_c + -1;
      local_10 = CONCAT22((*(uint16_t*)((char*)&local_10 + 2)) >> 1,(short)local_10 >> 1);
      uVar2 = local_18;
      uVar3 = local_10;
    }
    local_10 = uVar3;
    local_18 = uVar2;
    uVar3 = local_10;
    uVar2 = local_18;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00481060, ap_00481060));
