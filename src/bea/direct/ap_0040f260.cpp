// auto-ported from 0040f260_FUN_0040f260.c (FUN_0040f260, 138 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_BattleEngineCo_006235a8 ((char*)0x006235a8)
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_0040f260(void *param_1)
{
  void *this_local;
  int iVar1;
  int iVar2;
  int iVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  this_local = param_1;
  FUN_00548570(bea_arg(param_1), bea_arg(&local_4), bea_arg(4));
  iVar2 = 0;
  if (0 < local_4) {
    do {
      FUN_00548570(bea_arg(this_local), bea_arg(&param_1), bea_arg(1));
      iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((char)param_1 + 1), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineCo_006235a8), bea_arg(0x44));
      iVar3 = 0;
      if ('\0' < (char)param_1) {
        do {
          FUN_00548570(bea_arg(this_local), bea_arg(iVar3 + iVar1), bea_arg(1));
          iVar3 = iVar3 + 1;
        } while (BEA_LOOP_GUARD((iVar3 < (char)param_1)));
      }
      *(undefined1 *)(iVar3 + iVar1) = 0;
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < local_4)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040f260, ap_0040f260));
