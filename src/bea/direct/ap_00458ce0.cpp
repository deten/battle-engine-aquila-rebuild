// auto-ported from 00458ce0_FUN_00458ce0.c (FUN_00458ce0, 280 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_00677624 GLOBAL_AT(int, 0x00677624)
typedef undefined4 (BEA_CDECL* CControllerDefinition__vslot7_t)(void);
static const bea_guard<CControllerDefinition__vslot7_t> CControllerDefinition__vslot7 = {(CControllerDefinition__vslot7_t)0x005019c0};
typedef undefined1 (BEA_CDECL* CMovieCamera__vslot7_t)(void);
static const bea_guard<CMovieCamera__vslot7_t> CMovieCamera__vslot7 = {(CMovieCamera__vslot7_t)0x0041a200};
typedef undefined4 (BEA_STDCALL* FUN_00514950_t)(uint32_t);
static const bea_guard<FUN_00514950_t> FUN_00514950 = {(FUN_00514950_t)0x00514950};
typedef undefined4 (BEA_STDCALL* FUN_00514960_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514960_t> FUN_00514960 = {(FUN_00514960_t)0x00514960};

static void BEA_THISCALL ap_00458ce0(void * this_, undefined4 param_1)
{
  char cVar1;
  int iVar2;
  int iVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_10 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x10);
  int &local_c = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0xc);
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x8);
  undefined1 (&local_4)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x10 - 0x4);
  cVar1 = CMovieCamera__vslot7();
  if (cVar1 != '\0') {
    *(undefined4 *)((int)this_ + 0x14) = 1;
  }
  iVar3 = 0;
  if (*(int *)((int)this_ + 0x10) < 0) {
    local_10 = 0;
  }
  else {
    FUN_00514960(bea_arg(*(int *)((int)this_ + 0x10)), bea_arg(&local_10), bea_arg(local_4), bea_arg(0), bea_arg(0));
  }
  if ((*(int *)((int)this_ + 0x10) == -1) && (iVar2 = CControllerDefinition__vslot7(), iVar2 != 0)) {
    return;
  }
  if (local_10 != 0) {
    return;
  }
  iVar2 = CControllerDefinition__vslot7();
  if (iVar2 == 0) {
    iVar2 = -1;
    FUN_00514950(bea_arg(&local_c));
    if (0 < local_c) {
      do {
        if (iVar2 != -1) goto LAB_00458dad;
        FUN_00514960(bea_arg(iVar3), bea_arg(&local_8), bea_arg(0), bea_arg(0), bea_arg(0));
        if (local_8 != 0) {
          iVar2 = iVar3;
        }
        iVar3 = iVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar3 < local_c)));
      if (iVar2 != -1) {
LAB_00458dad:
        *(int *)((int)this_ + 8) = iVar2;
        *(undefined4 *)((int)this_ + 0xc) = 1;
        *(int *)((int)this_ + 0x10) = iVar2;
        goto LAB_00458dcb;
      }
    }
    *(undefined4 *)((int)this_ + 8) = 0xffffffff;
    *(undefined4 *)((int)this_ + 0xc) = 0xffffffff;
    *(undefined4 *)((int)this_ + 0x10) = 0xfffffffe;
  }
  else {
    *(undefined4 *)((int)this_ + 8) = 0;
    *(undefined4 *)((int)this_ + 0xc) = 0;
    *(undefined4 *)((int)this_ + 0x10) = 0xffffffff;
  }
LAB_00458dcb:
  if (((DAT_00677614 != 0) && (3 < DAT_00677624)) && ((DAT_00677624 < 7 || (DAT_00677624 == 9)))) {
    DAT_00677614 = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00458ce0, ap_00458ce0));
