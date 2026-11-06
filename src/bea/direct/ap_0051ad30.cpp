// auto-ported from 0051ad30_FUN_0051ad30.c (FUN_0051ad30, 283 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9694 GLOBAL_AT(int, 0x008a9694)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_FEPDirectory_c_0063fb4c ((char*)0x0063fb4c)
typedef undefined1 (BEA_CDECL* CMovieCamera__vslot7_t)(void);
static const bea_guard<CMovieCamera__vslot7_t> CMovieCamera__vslot7 = {(CMovieCamera__vslot7_t)0x0041a200};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef undefined4 (BEA_STDCALL* FUN_00514960_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514960_t> FUN_00514960 = {(FUN_00514960_t)0x00514960};
typedef undefined4 (BEA_STDCALL* FUN_005149c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005149c0_t> FUN_005149c0 = {(FUN_005149c0_t)0x005149c0};
typedef undefined4 (BEA_STDCALL* FUN_00514a80_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514a80_t> FUN_00514a80 = {(FUN_00514a80_t)0x00514a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0051ad30(void * this_, int param_1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  CMovieCamera__vslot7();
  uVar2 = DAT_008a9694;
  FUN_00514960(bea_arg(DAT_008a9694), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
  if ((param_1 == 0) && (local_4 == 0)) {
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0), bea_arg(0x32));
    return;
  }
  piVar1 = (int *)((int)this_ + 0x4004);
  FUN_005149c0(bea_arg(uVar2), bea_arg(piVar1));
  iVar5 = 0;
  piVar4 = this_;
  if (0 < *piVar1) {
    do {
      piVar4 = piVar4 + 1;
      if (*piVar4 == 0) {
        iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x200), bea_arg(0x37), bea_arg(s_C__dev_ONSLAUGHT2_FEPDirectory_c_0063fb4c), bea_arg(0xd0));
        *piVar4 = iVar3;
      }
      FUN_00514a80(bea_arg(uVar2), bea_arg(iVar5), bea_arg(*piVar4));
      iVar5 = iVar5 + 1;
    } while (BEA_LOOP_GUARD((iVar5 < *piVar1)));
  }
  iVar5 = *piVar1;
  if (iVar5 < 0x1000) {
    piVar4 = (int *)((int)this_ + iVar5 * 4 + 4);
    iVar5 = 0x1000 - iVar5;
    do {
      if (*piVar4 != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*piVar4));
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (BEA_LOOP_GUARD((iVar5 != 0)));
  }
  if (*piVar1 <= *(int *)((int)this_ + 0x4008)) {
    *(int *)((int)this_ + 0x4008) = *piVar1 + -1;
  }
  if (*(int *)((int)this_ + 0x4008) < 0) {
    *(undefined4 *)((int)this_ + 0x4008) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051ad30, ap_0051ad30));
