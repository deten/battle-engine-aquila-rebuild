// auto-ported from 0052c8d0_FUN_0052c8d0.c (FUN_0052c8d0, 857 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28 compile: dropped the HGDIOBJ/ICONINFO/tagBITMAPINFO/cLines typedefs that clashed with windows.h; cLines (ebx, 0x52c95d-0x52c969) and bmHeight local_10 (B+0x7c) typed as uint; pvStack_84 reused as the row counter (0x52caf5) with explicit casts
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662b2c GLOBAL_AT(int, 0x00662b2c)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static int BEA_CDECL ap_0052c8d0(int *param_1, HICON param_2)
{
  BOOL BVar1;
  int iVar2;
  HDC pHVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint cLines;
  int iVar7;
  tagBITMAPINFO *ptVar8;
  int iVar9;

  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  LPVOID &local_8c = *reinterpret_cast<LPVOID *>(bea_frame_ + 0x90 - 0x8c);
  int * &local_88 = *reinterpret_cast<int * *>(bea_frame_ + 0x90 - 0x88);
  HGDIOBJ &pvStack_84 = *reinterpret_cast<HGDIOBJ *>(bea_frame_ + 0x90 - 0x84);
  LPVOID &local_80 = *reinterpret_cast<LPVOID *>(bea_frame_ + 0x90 - 0x80);
  HDC &local_7c = *reinterpret_cast<HDC *>(bea_frame_ + 0x90 - 0x7c);
  uint &local_78 = *reinterpret_cast<uint *>(bea_frame_ + 0x90 - 0x78);
  uint &local_74 = *reinterpret_cast<uint *>(bea_frame_ + 0x90 - 0x74);
  ICONINFO &local_70 = *reinterpret_cast<ICONINFO *>(bea_frame_ + 0x90 - 0x70);
  HDC &local_5c = *reinterpret_cast<HDC *>(bea_frame_ + 0x90 - 0x5c);
  HDC &local_58 = *reinterpret_cast<HDC *>(bea_frame_ + 0x90 - 0x58);
  int &iStack_54 = *reinterpret_cast<int *>(bea_frame_ + 0x90 - 0x54);
  int &iStack_50 = *reinterpret_cast<int *>(bea_frame_ + 0x90 - 0x50);
  undefined1 (&auStack_4c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x90 - 0x4c);
  int &iStack_48 = *reinterpret_cast<int *>(bea_frame_ + 0x90 - 0x48);
  tagBITMAPINFO &tStack_44 = *reinterpret_cast<tagBITMAPINFO *>(bea_frame_ + 0x90 - 0x44);
  undefined1 (&local_18)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x90 - 0x18);
  uint &local_14 = *reinterpret_cast<uint *>(bea_frame_ + 0x90 - 0x14);
  uint &local_10 = *reinterpret_cast<uint *>(bea_frame_ + 0x90 - 0x10);
  local_88 = (int *)0x0;
  local_58 = (HDC)0x0;
  local_7c = (HDC)0x0;
  local_5c = (HDC)0x0;
  local_80 = (LPVOID)0x0;
  local_8c = (LPVOID)0x0;
  local_70.fIcon = 0;
  local_70.xHotspot = 0;
  local_70.yHotspot = 0;
  local_70.hbmMask = (HBITMAP)0x0;
  iVar7 = -0x7fffbffb;
  local_70.hbmColor = (HBITMAP)0x0;
  BVar1 = GetIconInfo(param_2,&local_70);
  if ((BVar1 != 0) && (iVar2 = GetObjectA(local_70.hbmMask,0x18,local_18), iVar2 != 0)) {
    local_78 = local_14;
    cLines = local_10;
    if (local_70.hbmColor == (HBITMAP)0x0) {
      cLines = (uint)local_10 >> 1;
    }
    local_74 = (uint)(local_70.hbmColor == (HBITMAP)0x0);
    iVar7 = bea_vcall<uint32_t>(param_1, 0x90, param_1,local_14,cLines,0x15,3,&local_88,0);
    if (-1 < iVar7) {
      local_8c = (LPVOID)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((int)local_10 * local_14 * 4), bea_arg(0), bea_arg(&DAT_00662b2c), bea_arg(0));
      ptVar8 = &tStack_44;
      for (iVar7 = 0xb; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
        (ptVar8->bmiHeader).biSize = 0;
        ptVar8 = (tagBITMAPINFO *)&(ptVar8->bmiHeader).biWidth;
      }
      tStack_44.bmiHeader.biSize = 0x28;
      tStack_44.bmiHeader.biWidth = local_14;
      tStack_44.bmiHeader.biHeight = (LONG)local_10;
      tStack_44.bmiHeader.biPlanes = 1;
      tStack_44.bmiHeader.biBitCount = 0x20;
      tStack_44.bmiHeader.biCompression = 0;
      local_5c = GetDC((HWND)0x0);
      local_7c = CreateCompatibleDC(local_5c);
      if (local_7c == (HDC)0x0) {
        iVar7 = -0x7fffbffb;
      }
      else {
        pvStack_84 = SelectObject(local_7c,local_70.hbmMask);
        GetDIBits(local_7c,local_70.hbmMask,0,(UINT)local_10,local_8c,&tStack_44,0);
        SelectObject(local_7c,pvStack_84);
        if (local_74 == 0) {
          local_80 = (LPVOID)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((int)cLines * local_14 * 4), bea_arg(0), bea_arg(&DAT_00662b2c), bea_arg(0));
          pHVar3 = GetDC((HWND)0x0);
          pHVar3 = CreateCompatibleDC(pHVar3);
          local_58 = pHVar3;
          if (pHVar3 == (HDC)0x0) {
            iVar7 = -0x7fffbffb;
            goto LAB_0052cb9f;
          }
          SelectObject(pHVar3,local_70.hbmColor);
          GetDIBits(pHVar3,local_70.hbmColor,0,(UINT)cLines,local_80,&tStack_44,0);
        }
        bea_vcall<uint32_t>(local_88, 0x34, local_88,auStack_4c,0,0);
        iStack_54 = iStack_48;
        if (cLines != 0) {
          iVar9 = 0;
          iVar2 = ((int)cLines - 1U) * local_78;
          iVar7 = ((int)local_10 + -1) * local_78;
          iStack_50 = -local_78;
          pvStack_84 = (HGDIOBJ)(uintptr_t)cLines;
          do {
            uVar5 = 0;
            if (local_78 != 0) {
              do {
                if (local_74 == 0) {
                  iVar4 = (iVar2 + uVar5) * 4;
                  uVar6 = *(uint *)(iVar4 + (int)local_80);
                  iVar4 = *(int *)(iVar4 + (int)local_8c);
                }
                else {
                  uVar6 = *(uint *)((int)local_8c + (iVar2 + uVar5) * 4);
                  iVar4 = *(int *)((int)local_8c + (uVar5 + iVar7) * 4);
                }
                if (iVar4 == 0) {
                  *(uint *)(iStack_48 + (iVar9 + uVar5) * 4) = uVar6 | 0xff000000;
                }
                else {
                  *(undefined4 *)(iStack_48 + (iVar9 + uVar5) * 4) = 0;
                }
                uVar5 = uVar5 + 1;
              } while (BEA_LOOP_GUARD((uVar5 < local_78)));
            }
            iVar7 = iVar7 + iStack_50;
            iVar2 = iVar2 + iStack_50;
            iVar9 = iVar9 + local_78;
            pvStack_84 = (HGDIOBJ)(uintptr_t)((int)(uintptr_t)pvStack_84 - 1);
          } while (BEA_LOOP_GUARD((pvStack_84 != (HGDIOBJ)0x0)));
        }
        bea_vcall<uint32_t>(local_88, 0x38, local_88);
        iVar7 = bea_vcall<uint32_t>(param_1, 0x28, param_1,local_70.xHotspot,local_70.yHotspot,local_88)
        ;
        if (-1 < iVar7) {
          iVar7 = 0;
        }
      }
    }
  }
LAB_0052cb9f:
  if (local_70.hbmMask != (HBITMAP)0x0) {
    DeleteObject(local_70.hbmMask);
  }
  if (local_70.hbmColor != (HBITMAP)0x0) {
    DeleteObject(local_70.hbmColor);
  }
  if (local_5c != (HDC)0x0) {
    ReleaseDC((HWND)0x0,local_5c);
  }
  if (local_58 != (HDC)0x0) {
    DeleteDC(local_58);
  }
  if (local_7c != (HDC)0x0) {
    DeleteDC(local_7c);
  }
  if (local_80 != (LPVOID)0x0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(local_80));
  }
  if (local_8c != (LPVOID)0x0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(local_8c));
  }
  if (local_88 != (int *)0x0) {
    bea_vcall<uint32_t>(local_88, 0x8, local_88);
  }
  return iVar7;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052c8d0, ap_0052c8d0));
