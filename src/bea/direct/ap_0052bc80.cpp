// auto-ported from 0052bc80_FUN_0052bc80.c (FUN_0052bc80, 1849 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0089c048 GLOBAL_AT(int, 0x0089c048)
#define DAT_0089c030 GLOBAL_AT(int, 0x0089c030)
#define DAT_0089c02c GLOBAL_AT(int, 0x0089c02c)
#define DAT_0089c028 GLOBAL_AT(int, 0x0089c028)
#define DAT_0089c024 GLOBAL_AT(int, 0x0089c024)
#define DAT_0089c020 GLOBAL_AT(int, 0x0089c020)
#define DAT_0089c034 GLOBAL_AT(int, 0x0089c034)
#define DAT_0089c038 GLOBAL_AT(int, 0x0089c038)
#define DAT_0089c03c GLOBAL_AT(int, 0x0089c03c)
#define DAT_0089c040 GLOBAL_AT(int, 0x0089c040)
#define DAT_0089c044 GLOBAL_AT(int, 0x0089c044)
#define DAT_0064c3ac GLOBAL_AT(int, 0x0064c3ac)
#define s__d_samples_0064c3a0 ((char*)0x0064c3a0)
#define s__ld_x__ld_x__ld_0064c3b4 ((char*)0x0064c3b4)
typedef char* (BEA_CDECL* FUN_004f7c70_t)(uint32_t);
static const bea_guard<FUN_004f7c70_t> FUN_004f7c70 = {(FUN_004f7c70_t)0x004f7c70};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_STDCALL ap_0052bc80(HWND param_1, LPARAM *param_2, undefined4 param_3, int param_4)
{
  undefined4 *puVar1;
  HWND hWnd;
  HWND hWnd_00;
  HWND hWnd_01;
  HWND hWnd_02;
  HWND hWnd_03;
  HWND hWnd_04;
  int iVar2;
  WPARAM WVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  LPCSTR pCVar7;
  LRESULT LVar8;
  short sVar9;
  int *piVar10;
  uint lParam;
  uint uVar11;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  CHAR (&local_50)[80] = *reinterpret_cast<CHAR (*)[80]>(bea_frame_ + 0x50 - 0x50);
  hWnd = GetDlgItem(param_1,0x3ea);
  hWnd_00 = GetDlgItem(param_1,1000);
  hWnd_01 = GetDlgItem(param_1,0x3eb);
  hWnd_02 = GetDlgItem(param_1,0x3f8);
  hWnd_03 = GetDlgItem(param_1,0x3fa);
  hWnd_04 = GetDlgItem(param_1,0x3ed);
  if (param_2 == (LPARAM *)0x110) {
    DAT_0089c048 = param_4;
    DAT_0089c030 = *(uint *)(param_4 + 0x32e40);
    iVar2 = param_4 + 4 + DAT_0089c030 * 0x516c;
    DAT_0089c02c = *(uint *)(iVar2 + 0x5168);
    iVar2 = iVar2 + 0x460 + DAT_0089c02c * 0xf68;
    DAT_0089c028 = *(uint *)(iVar2 + 0xf50);
    DAT_0089c024 = *(int *)(iVar2 + 0xf54);
    DAT_0089c020 = *(uint *)(iVar2 + 0xf58);
    DAT_0089c034 = DAT_0089c020;
    DAT_0089c038 = DAT_0089c024;
    DAT_0089c03c = DAT_0089c028;
    DAT_0089c040 = DAT_0089c02c;
    DAT_0089c044 = DAT_0089c030;
  }
  else {
    if (param_2 != (LPARAM *)0x111) {
      return 0;
    }
    DAT_0089c024 = SendMessageA(hWnd_02,0xf0,0,0);
    sVar9 = (short)param_3;
    if (sVar9 == 1) {
      if ((((DAT_0089c030 == DAT_0089c044) && (DAT_0089c02c == DAT_0089c040)) &&
          (DAT_0089c028 == DAT_0089c03c)) &&
         ((DAT_0089c024 == DAT_0089c038 && (DAT_0089c020 == DAT_0089c034)))) {
        EndDialog(param_1,2);
        return 1;
      }
      *(uint *)(DAT_0089c048 + 0x32e40) = DAT_0089c030;
      iVar2 = DAT_0089c048 + 4 + DAT_0089c030 * 0x516c;
      *(uint *)(iVar2 + 0x5168) = DAT_0089c02c;
      *(uint *)(iVar2 + 0x13b0 + DAT_0089c02c * 0xf68) = DAT_0089c028;
      *(int *)(iVar2 + 0x13b4 + DAT_0089c02c * 0xf68) = DAT_0089c024;
      *(uint *)(iVar2 + 0x13b8 + DAT_0089c02c * 0xf68) = DAT_0089c020;
      EndDialog(param_1,1);
      return 1;
    }
    if (sVar9 == 2) {
      EndDialog(param_1,2);
      return 1;
    }
    if ((short)((uint)param_3 >> 0x10) == 9) {
      if (sVar9 == 0x3ea) {
        DAT_0089c030 = SendMessageA(hWnd,0x147,0,0);
        DAT_0089c02c = *(uint *)(DAT_0089c048 + 0x516c + DAT_0089c030 * 0x516c);
        iVar2 = DAT_0089c048 + 4 + DAT_0089c030 * 0x516c + DAT_0089c02c * 0xf68;
      }
      else {
        if (sVar9 != 1000) {
          if (sVar9 == 0x3eb) {
            DAT_0089c028 = SendMessageA(hWnd_01,0x147,0,0);
          }
          else if (sVar9 == 0x3ed) {
            WVar3 = SendMessageA(hWnd_04,0x147,0,0);
            DAT_0089c020 = SendMessageA(hWnd_04,0x150,WVar3,0);
          }
          goto LAB_0052bfdf;
        }
        iVar2 = DAT_0089c048 + 4;
        iVar6 = DAT_0089c030 * 0x516c;
        DAT_0089c02c = SendMessageA(hWnd_00,0x147,0,0);
        iVar2 = iVar2 + iVar6 + DAT_0089c02c * 0xf68;
      }
      DAT_0089c028 = *(uint *)(iVar2 + 0x13b0);
      DAT_0089c024 = *(int *)(iVar2 + 0x13b4);
    }
  }
LAB_0052bfdf:
  SendMessageA(hWnd,0x14b,0,0);
  SendMessageA(hWnd_00,0x14b,0,0);
  SendMessageA(hWnd_01,0x14b,0,0);
  SendMessageA(hWnd_04,0x14b,0,0);
  iVar2 = DAT_0089c048 + 4 + DAT_0089c030 * 0x516c;
  puVar1 = (undefined4 *)(iVar2 + 0x460 + DAT_0089c02c * 0xf68);
  uVar11 = 0;
  if (*(int *)(DAT_0089c048 + 0x32e3c) != 0) {
    param_2 = (LPARAM *)0x0;
    do {
      WVar3 = SendMessageA(hWnd,0x143,0,(int)param_2 + DAT_0089c048 + 0x204);
      SendMessageA(hWnd,0x151,WVar3,uVar11);
      if (uVar11 == DAT_0089c030) {
        SendMessageA(hWnd,0x14e,WVar3,0);
      }
      uVar11 = uVar11 + 1;
      param_2 = param_2 + 0x145b;
    } while (BEA_LOOP_GUARD((uVar11 < *(uint *)(DAT_0089c048 + 0x32e3c))));
  }
  uVar11 = 0;
  if (*(int *)(iVar2 + 0x45c) != 0) {
    param_2 = (LPARAM *)(iVar2 + 0x594);
    do {
      WVar3 = SendMessageA(hWnd_00,0x143,0,*param_2);
      SendMessageA(hWnd_00,0x151,WVar3,uVar11);
      if (uVar11 == DAT_0089c02c) {
        SendMessageA(hWnd_00,0x14e,WVar3,0);
      }
      uVar11 = uVar11 + 1;
      param_2 = param_2 + 0x3da;
    } while (BEA_LOOP_GUARD((uVar11 < *(uint *)(iVar2 + 0x45c))));
  }
  param_2 = (LPARAM *)0x0;
  if (puVar1[0x4f] != 0) {
    piVar10 = puVar1 + 0x52;
    do {
      iVar2 = *piVar10;
      uVar4 = 0x10;
      if (((iVar2 == 0x16) || (iVar2 == 0x15)) || (iVar2 == 0x14)) {
        uVar4 = 0x20;
      }
      iVar2 = piVar10[-2];
      iVar6 = piVar10[-1];
      uVar5 = FUN_004f7c70(bea_arg(s__ld_x__ld_x__ld_0064c3b4));
      FUN_0055de9b(local_50,uVar5,iVar2,iVar6,uVar4);
      WVar3 = SendMessageA(hWnd_01,0x143,0,(LPARAM)local_50);
      SendMessageA(hWnd_01,0x151,WVar3,(LPARAM)param_2);
      if (param_2 == (LPARAM *)DAT_0089c028) {
        SendMessageA(hWnd_01,0x14e,WVar3,0);
      }
      param_2 = (LPARAM *)((int)param_2 + 1);
      piVar10 = piVar10 + 6;
    } while (BEA_LOOP_GUARD((param_2 < (LPARAM *)puVar1[0x4f])));
  }
  lParam = 0;
  uVar11 = DAT_0089c030;
  iVar2 = DAT_0089c048;
  do {
    if (DAT_0089c024 == 0) {
      uVar4 = puVar1[DAT_0089c028 * 6 + 0x52];
    }
    else {
      uVar4 = *(undefined4 *)(iVar2 + 0x45c + uVar11 * 0x516c);
    }
    if ((lParam != 1) &&
       (iVar6 = bea_vcall<uint32_t>(*(int **)(iVar2 + 0x32e9c), 0x2c, *(int **)(iVar2 + 0x32e9c),uVar11,*puVar1,uVar4,DAT_0089c024,lParam,0),
       uVar11 = DAT_0089c030, iVar2 = DAT_0089c048, -1 < iVar6)) {
      if (lParam == 0) {
        pCVar7 = (LPCSTR)FUN_004f7c70(bea_arg(&DAT_0064c3ac));
        lstrcpyA(local_50,pCVar7);
      }
      else {
        uVar11 = lParam;
        pCVar7 = (LPCSTR)FUN_004f7c70(bea_arg(s__d_samples_0064c3a0));
        wsprintfA(local_50,pCVar7,uVar11);
      }
      WVar3 = SendMessageA(hWnd_04,0x143,0,(LPARAM)local_50);
      SendMessageA(hWnd_04,0x151,WVar3,lParam);
      if ((lParam == DAT_0089c020) || (uVar11 = DAT_0089c030, iVar2 = DAT_0089c048, lParam == 0)) {
        SendMessageA(hWnd_04,0x14e,WVar3,0);
        uVar11 = DAT_0089c030;
        iVar2 = DAT_0089c048;
      }
    }
    lParam = lParam + 1;
  } while (BEA_LOOP_GUARD((lParam < 0x11)));
  WVar3 = SendMessageA(hWnd_04,0x147,0,0);
  DAT_0089c020 = SendMessageA(hWnd_04,0x150,WVar3,0);
  LVar8 = SendMessageA(hWnd_04,0x146,0,0);
  EnableWindow(hWnd_04,(uint)(1 < LVar8));
  EnableWindow(hWnd_02,puVar1[0x4e]);
  if (DAT_0089c024 == 0) {
    SendMessageA(hWnd_02,0xf1,0,0);
    SendMessageA(hWnd_03,0xf1,1,0);
    EnableWindow(hWnd_01,1);
    return 1;
  }
  SendMessageA(hWnd_02,0xf1,1,0);
  SendMessageA(hWnd_03,0xf1,0,0);
  EnableWindow(hWnd_01,0);
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052bc80, ap_0052bc80));
