// auto-ported from 0051ae70_FUN_0051ae70.c (FUN_0051ae70, 1512 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28 check_fild: local_40 low dword is an int (fistp result, read with mov at 0x51aef0/0x51af23, fild dword at 0x51b1eb) -> (uint)/(int)local_40; later it holds a float -> bea_fcast<float>((uint32_t)local_40) (fld/fsub dword [esp+0x24] at 0x51b3a9/0x51b3b9)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char _DAT_008a9570;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_0063fb70 GLOBAL_AT(int, 0x0063fb70)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0089bdf5 GLOBAL_AT(char, 0x0089bdf5)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)
typedef uint32_t (BEA_STDCALL* FUN_00453140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00453140_t> FUN_00453140 = {(FUN_00453140_t)0x00453140};
typedef uint32_t (BEA_STDCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef uint32_t (BEA_STDCALL* FUN_00466e70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466e70_t> FUN_00466e70 = {(FUN_00466e70_t)0x00466e70};
typedef uint32_t (BEA_STDCALL* FUN_00467010_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467010_t> FUN_00467010 = {(FUN_00467010_t)0x00467010};
typedef uint32_t (BEA_THISCALL* FUN_00467200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467200_t> FUN_00467200 = {(FUN_00467200_t)0x00467200};
typedef uint (BEA_CDECL* FUN_004693d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004693d0_t> FUN_004693d0 = {(FUN_004693d0_t)0x004693d0};
typedef uint (BEA_CDECL* FUN_00469400_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00469400_t> FUN_00469400 = {(FUN_00469400_t)0x00469400};
typedef uint (BEA_CDECL* FUN_00469430_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00469430_t> FUN_00469430 = {(FUN_00469430_t)0x00469430};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};
typedef short * (BEA_CDECL* FUN_0055eb00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055eb00_t> FUN_0055eb00 = {(FUN_0055eb00_t)0x0055eb00};

static int BEA_THISCALL ap_0051ae70(void * this_, float param_1, int *param_2)
{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *this_00;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong *plVar17;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  int &local_4c = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x4c);
  uint &local_44 = *reinterpret_cast<uint *>(bea_frame_ + 0x50 - 0x44);
  longlong &local_40 = *reinterpret_cast<longlong *>(bea_frame_ + 0x50 - 0x40);
  int &local_38 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x38);
  longlong &local_34 = *reinterpret_cast<longlong *>(bea_frame_ + 0x50 - 0x34);
  undefined1 (&local_2c)[34] = *reinterpret_cast<undefined1 (*)[34]>(bea_frame_ + 0x50 - 0x2c);
  short (&local_a)[5] = *reinterpret_cast<short (*)[5]>(bea_frame_ + 0x50 - 0xa);
  local_38 = 0;
  fVar8 = (param_1 - 0.5f) + (param_1 - 0.5f);
  if (0.0f <= fVar8) {
    if (1.0f < fVar8) {
      fVar8 = 1.0f;
    }
  }
  else {
    fVar8 = 0.0f;
  }
  local_40 = (longlong)ROUND(fVar8 * 255.0f);
  uVar6 = (uint)local_40;
  FUN_00467200(bea_arg(&DAT_0089d758), bea_arg(param_1), bea_arg(param_2));
  if (param_1 <= 0.5f) {
    local_44 = 0;
  }
  else {
    local_40 = (longlong)ROUND((param_1 - 0.5f) * 510.0f);
    local_44 = ((uint)local_40 & 0x1fe) << 0x17 ^ 0xffffff;
  }
  FUN_00467010(bea_arg(0x43000000), bea_arg(0x43020000), bea_arg(0x44048000), bea_arg(0x43c88000), bea_arg(0x3f0ccccd), bea_arg((uVar6 * 5 & 0x7f8) << 0x15));
  FUN_00466e70(bea_arg(0x43000000), bea_arg(0x43020000), bea_arg(0x44048000), bea_arg(0x43c88000), bea_arg(local_44), bea_arg(0x40000000), bea_arg(0x3f000000));
  if (*(int *)((int)this_ + 0x400c) + 0xb <= *(int *)((int)this_ + 0x4008)) {
    do {
      iVar5 = *(int *)((int)this_ + 0x400c);
      *(int *)((int)this_ + 0x400c) = iVar5 + 1;
    } while (BEA_LOOP_GUARD((iVar5 + 0xc <= *(int *)((int)this_ + 0x4008))));
  }
  if (*(int *)((int)this_ + 0x4008) < *(int *)((int)this_ + 0x400c)) {
    do {
      iVar5 = *(int *)((int)this_ + 0x400c) + -1;
      *(int *)((int)this_ + 0x400c) = iVar5;
    } while (BEA_LOOP_GUARD((*(int *)((int)this_ + 0x4008) < iVar5)));
  }
  iVar5 = *(int *)((int)this_ + 0x400c);
  if (iVar5 < 0x1000) {
    param_2 = (int *)((int)this_ + iVar5 * 4 + 4);
    do {
      if ((*param_2 == 0) ||
         (iVar2 = iVar5 - *(int *)((int)this_ + 0x400c), local_40 = CONCAT44((*(uint32_t*)((char*)&local_40 + 4)),iVar2),
         10 < iVar2)) break;
      if (iVar5 == *(int *)((int)this_ + 0x4008)) {
        fVar7 = (float10)fcos((float10)_DAT_008a9570 * (float10)3.14f * (float10)0.033333335f);
        local_4c = (int)(longlong)ROUND(fVar7 * (float10)-100.0f);
        uVar4 = local_4c * -0x10101 - 0x69696a;
      }
      else {
        uVar4 = 0xff404040;
      }
      fVar8 = (float)iVar2 * 24.0f + 130.0f;
      uVar4 = ((uVar4 >> 8 & 0xffff0000) * uVar6 ^ uVar4) & 0xffffff ^
              (uVar4 >> 8 & 0xff0000) * uVar6;
      FUN_0055eb00(bea_arg(local_2c), bea_arg(*param_2), bea_arg(0x12));
      if (local_a[0] != 0) {
        uVar3 = FUN_004f7bf0(bea_arg(&DAT_0063fb70));
        FUN_0055e64e(bea_arg(local_a), bea_arg(uVar3));
      }
      uVar16 = 0;
      uVar15 = 0;
      puVar13 = local_2c;
      uVar14 = 0x447a0000;
      uVar12 = 0x3f800000;
      uVar11 = 0x3f800000;
      uVar10 = 0x3dcccccd;
      uVar3 = 0x43040000;
      fVar9 = fVar8;
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00465710(bea_arg(uVar3), bea_arg(fVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar4), bea_arg(puVar13), bea_arg(uVar14), bea_arg(uVar15), bea_arg(uVar16));
      cVar1 = FUN_00469430(bea_arg(0x43040000), bea_arg(fVar8), bea_arg(0x43ff0000), bea_arg(fVar8 + 24.0f));
      if (cVar1 != '\0') {
        *(int *)((int)this_ + 0x4008) = iVar5;
        *(float *)((int)this_ + 0x4010) = _DAT_008a9570;
      }
      cVar1 = FUN_00469400(bea_arg(0x43040000), bea_arg(fVar8), bea_arg(0x43ff0000), bea_arg(fVar8 + 24.0f));
      if (cVar1 != '\0') {
        *(int *)((int)this_ + 0x4008) = iVar5;
        *(float *)((int)this_ + 0x4010) = _DAT_008a9570;
        local_38 = *param_2;
      }
      iVar5 = iVar5 + 1;
      param_2 = param_2 + 1;
    } while (BEA_LOOP_GUARD((iVar5 < 0x1000)));
  }
  if (iVar5 == 0) {
    plVar17 = &local_40;
    uVar3 = FUN_0046a2a0(0x37,0);
    this_00 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(this_00), bea_arg(uVar3), bea_arg(plVar17));
    uVar15 = 0x447a0000;
    fVar8 = (640.0f - (float)(int)local_40) * 0.5f;
    iVar2 = iVar5;
    uVar3 = FUN_0046a2a0(0x37,0);
    uVar6 = (uVar6 & 0x1fe) << 0x17 ^ 0xffffff;
    uVar14 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar11 = 0x3dcccccd;
    uVar10 = 0x43830000;
    FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00465710(bea_arg(fVar8), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar14), bea_arg(uVar6), bea_arg(uVar3), bea_arg(uVar15), bea_arg(iVar5), bea_arg(iVar2));
  }
  else {
    FUN_00466e70(bea_arg(0x43ff0000), bea_arg(0x43020000), bea_arg(0x44048000), bea_arg(0x43c88000), bea_arg(local_44), bea_arg(0x40000000), bea_arg(0x3f000000));
    fVar8 = 261.0 / (float)*(int *)((int)this_ + 0x4004);
    fVar9 = (float)*(int *)((int)this_ + 0x400c) * fVar8 + 130.0f + 5.0f;
    fVar8 = (float)(iVar5 - *(int *)((int)this_ + 0x400c)) * fVar8 + fVar9;
    local_40 = CONCAT44((*(uint32_t*)((char*)&local_40 + 4)),fVar8 - fVar9);
    if (param_1 <= 0.5f) {
      uVar6 = 0;
    }
    else {
      local_34 = (longlong)ROUND((param_1 - 0.5f) * 510.0f);
      uVar6 = ~((int)local_34 * 0xff0000) & 0xffffffU ^ (int)local_34 * 0xff0000;
    }
    FUN_00466e70(bea_arg(0x4400c000), bea_arg(fVar9), bea_arg(0x44034000), bea_arg(fVar8), bea_arg(uVar6), bea_arg(0x40a00000), bea_arg(0x3f000000));
    cVar1 = FUN_004693d0(bea_arg(0x43ff0000), bea_arg(0x43020000), bea_arg(0x44048000), bea_arg(0x43c88000));
    if (cVar1 != '\0') {
      iVar5 = *(int *)((int)this_ + 0x4004);
      if ((iVar5 != 0) && (DAT_0089bdf5 != '\0')) {
        local_34 = (longlong)
                   ROUND(((float)iVar5 - 0.1f) *
                         ((((float)DAT_0089bda4 - 130.0f) - bea_fcast<float>((uint32_t)local_40) * 0.5f) /
                         (271.0 - bea_fcast<float>((uint32_t)local_40))));
        *(int *)((int)this_ + 0x4008) = (int)local_34;
        if ((int)local_34 < 0) {
          *(undefined4 *)((int)this_ + 0x4008) = 0;
        }
        if (iVar5 <= *(int *)((int)this_ + 0x4008)) {
          *(int *)((int)this_ + 0x4008) = iVar5 + -1;
        }
        uVar3 = 0;
        if (0xb < iVar5) {
          local_34 = (longlong)
                     ROUND(((float)(iVar5 + -0xb) + 0.9f) * (((float)DAT_0089bda4 - 130.0f) / 271.0));
          uVar3 = (int)local_34;
        }
        *(undefined4 *)((int)this_ + 0x400c) = uVar3;
      }
    }
    FUN_00453140(bea_arg(5), bea_arg(param_1));
  }
  FUN_00453140(bea_arg(1), bea_arg(param_1));
  return local_38;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051ae70, ap_0051ae70));
