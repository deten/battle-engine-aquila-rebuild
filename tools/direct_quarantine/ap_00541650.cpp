// auto-ported from 00541650_FUN_00541650.c (FUN_00541650, 285 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char IAT;
#define DAT_008a9810 GLOBAL_AT(int, 0x008a9810)
#define DAT_008a982c GLOBAL_AT(char, 0x008a982c)
#define DAT_008a97d0 GLOBAL_AT(char, 0x008a97d0)
#define s_done__00629e10 ((char*)0x00629e10)
#define s_Bink_video_closing___i_frames_pl_00650784 ((char*)0x00650784)
#define s_Waiting_for_open_thread__006507c4 ((char*)0x006507c4)
#define s_Closing_FMV_006507e0 ((char*)0x006507e0)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_THISCALL* FUN_00528d90_t)(uint32_t);
static const bea_guard<FUN_00528d90_t> FUN_00528d90 = {(FUN_00528d90_t)0x00528d90};
typedef uint32_t (BEA_THISCALL* FUN_00528da0_t)(uint32_t);
static const bea_guard<FUN_00528da0_t> FUN_00528da0 = {(FUN_00528da0_t)0x00528da0};
typedef uint32_t (BEA_THISCALL* FUN_00528dc0_t)(uint32_t);
static const bea_guard<FUN_00528dc0_t> FUN_00528dc0 = {(FUN_00528dc0_t)0x00528dc0};
typedef uint32_t (BEA_THISCALL* FUN_00541430_t)(uint32_t);
static const bea_guard<FUN_00541430_t> FUN_00541430 = {(FUN_00541430_t)0x00541430};
typedef uint32_t (BEA_STDCALL* _BinkClose_4_t)(uint32_t);
#define _BinkClose_4 (*(_BinkClose_4_t*)0x005d8330)   /* BINKW32.DLL import, via the IAT */
typedef uint32_t (BEA_STDCALL* _BinkGetSummary_8_t)(uint32_t, uint32_t);
#define _BinkGetSummary_8 (*(_BinkGetSummary_8_t*)0x005d8334)   /* BINKW32.DLL import, via the IAT */

static uint32_t BEA_THISCALL ap_00541650(void * this_)
{
  int iVar1;
  int *piVar2;
  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_7c)[36] = *reinterpret_cast<undefined1 (*)[36]>(bea_frame_ + 0x80 - 0x7c);
  int &iStack_58 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x58);
  CRenderThing__vslot3(s_Closing_FMV_006507e0);
  iVar1 = FUN_00528d90(bea_arg(&DAT_008a9810));
  if (iVar1 == 0) {
    if (DAT_008a982c == '\0') goto LAB_005416ac;
  }
  else {
    CRenderThing__vslot3(s_Waiting_for_open_thread__006507c4);
    do {
      Sleep(0);
      iVar1 = FUN_00528d90(bea_arg(&DAT_008a9810));
    } while (BEA_LOOP_GUARD((iVar1 != 0)));
  }
  FUN_00541430(bea_arg(this_));
LAB_005416ac:
  DAT_008a97d0 = 0;
  FUN_00528da0(bea_arg(&DAT_008a9810));
  piVar2 = (int *)((int)this_ + 0xc);
  iVar1 = 2;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(*piVar2, 0x0, 1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  if (*(int *)((int)this_ + 8) != 0) {
    _BinkGetSummary_8(bea_arg(*(int *)((int)this_ + 8)), bea_arg(auStack_7c));
    if (iStack_58 != 0) {
      CRenderThing__vslot3(s_Bink_video_closing___i_frames_pl_00650784);
    }
    _BinkClose_4(bea_arg(*(undefined4 *)((int)this_ + 8)));
  }
  *(undefined4 *)((int)this_ + 8) = 0;
  FUN_00528dc0(bea_arg(&DAT_008a9810));
  return CRenderThing__vslot3(s_done__00629e10);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00541650, ap_00541650));
