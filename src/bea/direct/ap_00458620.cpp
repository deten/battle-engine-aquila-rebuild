// auto-ported from 00458620_vslot0.c (CFEPDevSelect::vslot0, 240 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char CFEPDevSelect;
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_008a9584 GLOBAL_AT(int, 0x008a9584)
typedef undefined4 (BEA_CDECL* CControllerDefinition__vslot7_t)(void);
static const bea_guard<CControllerDefinition__vslot7_t> CControllerDefinition__vslot7 = {(CControllerDefinition__vslot7_t)0x005019c0};
typedef undefined1 (BEA_CDECL* CMovieCamera__vslot7_t)(void);
static const bea_guard<CMovieCamera__vslot7_t> CMovieCamera__vslot7 = {(CMovieCamera__vslot7_t)0x0041a200};
typedef undefined4 (BEA_STDCALL* FUN_00514950_t)(uint32_t);
static const bea_guard<FUN_00514950_t> FUN_00514950 = {(FUN_00514950_t)0x00514950};
typedef undefined4 (BEA_STDCALL* FUN_00514960_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514960_t> FUN_00514960 = {(FUN_00514960_t)0x00514960};

static undefined4 BEA_THISCALL ap_00458620(CFEPDevSelect * this_)
{
  char cVar1;
  int iVar2;
  int iVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  cVar1 = CMovieCamera__vslot7();
  if (cVar1 != '\0') {
    *(undefined4 *)(this_ + 0x14) = 1;
  }
  if (DAT_0083d448 != 0) {
    return 1;
  }
  if (DAT_008a9584 != 0) {
    return 1;
  }
  iVar2 = CControllerDefinition__vslot7();
  if (iVar2 != 0) {
    *(undefined4 *)(this_ + 8) = 0;
    *(undefined4 *)(this_ + 0xc) = 0;
    *(undefined4 *)(this_ + 0x10) = 0xffffffff;
    return 1;
  }
  FUN_00514950(bea_arg(&local_8));
  iVar2 = -1;
  iVar3 = 0;
  if (0 < local_8) {
    do {
      if (iVar2 != -1) goto LAB_004586f7;
      FUN_00514960(bea_arg(iVar3), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
      if (local_4 != 0) {
        iVar2 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 < local_8)));
    if (iVar2 != -1) {
LAB_004586f7:
      *(undefined4 *)(this_ + 0xc) = 1;
      *(int *)(this_ + 8) = iVar2;
      *(int *)(this_ + 0x10) = iVar2;
      return 1;
    }
  }
  *(undefined4 *)(this_ + 8) = 0xffffffff;
  *(undefined4 *)(this_ + 0xc) = 0xffffffff;
  *(undefined4 *)(this_ + 0x10) = 0xfffffffe;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00458620, ap_00458620));
