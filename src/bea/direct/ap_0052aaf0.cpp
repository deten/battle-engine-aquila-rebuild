// auto-ported from 0052aaf0_vslot12.c (CD3DApplication::vslot12, 864 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CD3DApplication;
typedef int (BEA_CDECL* FUN_00513730_t)(void);
static const bea_guard<FUN_00513730_t> FUN_00513730 = {(FUN_00513730_t)0x00513730};
typedef int (BEA_THISCALL* FUN_0052b760_t)(uint32_t);
static const bea_guard<FUN_0052b760_t> FUN_0052b760 = {(FUN_0052b760_t)0x0052b760};
typedef int (BEA_STDCALL* FUN_0052c4f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052c4f0_t> FUN_0052c4f0 = {(FUN_0052c4f0_t)0x0052c4f0};
typedef float10 (BEA_STDCALL* FUN_0052cd20_t)(uint32_t);
static const bea_guard<FUN_0052cd20_t> FUN_0052cd20 = {(FUN_0052cd20_t)0x0052cd20};

static LRESULT BEA_THISCALL ap_0052aaf0(CD3DApplication * this_, HWND param_1, uint param_2, uint param_3, int param_4)
{
  LPRECT lpRect;
  int iVar1;
  int iVar2;
  int iVar3;
  LRESULT LVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  tagPOINT (&local_10)[2] = *reinterpret_cast<tagPOINT (*)[2]>(bea_frame_ + 0x10 - 0x10);
  if (0x112 < param_2) {
    switch(param_2) {
    case 0x200:
      if (((*(int *)(this_ + 0x32e48) != 0) && (*(int *)(this_ + 0x32e4c) != 0)) &&
         (*(int *)(this_ + 0x32ea0) != 0)) {
        GetCursorPos(local_10);
        ScreenToClient(*(HWND *)(this_ + 0x32e94),local_10);
        bea_vcall<uint32_t>(*(int **)(this_ + 0x32ea0), 0x2c, *(int **)(this_ + 0x32ea0),local_10[0].x,local_10[0].y,0);
      }
      break;
    case 0x211:
      bea_vcall<uint32_t>(this_, 0x34, 1);
      break;
    case 0x212:
      bea_vcall<uint32_t>(this_, 0x34, 0);
      break;
    case 0x218:
      if (param_3 == 0) {
        return 1;
      }
      if (param_3 == 7) {
        return 1;
      }
      break;
    case 0x231:
      if (*(int *)(this_ + 0x32e50) != 0) {
        FUN_0052cd20(bea_arg(2));
      }
      break;
    case 0x232:
      if (*(int *)(this_ + 0x32e50) != 0) {
        FUN_0052cd20(bea_arg(1));
      }
      if ((*(int *)(this_ + 0x32e48) != 0) && (*(int *)(this_ + 0x32e44) != 0)) {
        lpRect = (LPRECT)(this_ + 0x3300c);
        local_10[0].x = lpRect->left;
        local_10[0].y = *(LONG *)(this_ + 0x33010);
        iVar3 = *(int *)(this_ + 0x33014);
        iVar1 = *(int *)(this_ + 0x33018);
        GetWindowRect(*(HWND *)(this_ + 0x32e94),(LPRECT)(this_ + 0x32ffc));
        GetClientRect(*(HWND *)(this_ + 0x32e94),lpRect);
        iVar2 = *(int *)(this_ + 0x33014) - lpRect->left;
        if ((iVar3 - local_10[0].x != iVar2) ||
           (iVar1 - local_10[0].y != *(int *)(this_ + 0x33018) - *(int *)(this_ + 0x33010))) {
          *(undefined4 *)(this_ + 0x32e4c) = 0;
          *(int *)(this_ + 0x32e58) = iVar2;
          *(int *)(this_ + 0x32e5c) = *(int *)(this_ + 0x33018) - *(int *)(this_ + 0x33010);
          iVar3 = FUN_0052b760(bea_arg(this_));
          if (iVar3 < 0) {
            FUN_0052c4f0(bea_arg(0x8200000c), bea_arg(1));
            return 0;
          }
          *(undefined4 *)(this_ + 0x32e4c) = 1;
        }
      }
    }
    goto switchD_0052ac8c_caseD_201;
  }
  if (param_2 == 0x112) {
    if (param_3 < 0xf031) {
      if ((param_3 != 0xf030) && ((param_3 != 0xf000 && (param_3 != 0xf010))))
      goto switchD_0052ac8c_caseD_201;
    }
    else if ((param_3 != 0xf100) && (param_3 != 0xf170)) goto switchD_0052ac8c_caseD_201;
  }
  else {
    if (param_2 < 0x25) {
      if (param_2 == 0x24) {
        *(undefined4 *)(param_4 + 0x18) = 100;
        *(undefined4 *)(param_4 + 0x1c) = 100;
      }
      else if (param_2 == 5) {
        if ((param_3 == 4) || (param_3 == 1)) {
          *(undefined4 *)(this_ + 0x32e48) = 0;
        }
        else {
          *(undefined4 *)(this_ + 0x32e48) = 1;
        }
      }
      else {
        if (param_2 == 0x10) {
          FUN_00513730();
          return 0;
        }
        if ((((param_2 == 0x20) && (*(int *)(this_ + 0x32e48) != 0)) &&
            (*(int *)(this_ + 0x32e4c) != 0)) && (*(int *)(this_ + 0x32e44) == 0)) {
          SetCursor((HCURSOR)0x0);
          if (*(int *)(this_ + 0x330c4) != 0) {
            bea_vcall<uint32_t>(*(int **)(this_ + 0x32ea0), 0x30, *(int **)(this_ + 0x32ea0),1);
          }
          return 1;
        }
      }
      goto switchD_0052ac8c_caseD_201;
    }
    if (param_2 != 0x84) {
      if (param_2 == 0x111) {
        if ((param_3 & 0xffff) == 0x9c42) {
          return 0;
        }
        if ((param_3 & 0xffff) == 0x9c46) {
          SendMessageA(param_1,0x10,0,0);
          return 0;
        }
      }
      goto switchD_0052ac8c_caseD_201;
    }
  }
  if (*(int *)(this_ + 0x32e44) == 0) {
    return 1;
  }
switchD_0052ac8c_caseD_201:
  LVar4 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052aaf0, ap_0052aaf0));
