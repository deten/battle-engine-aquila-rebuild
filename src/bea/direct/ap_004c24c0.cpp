// auto-ported from 004c24c0_vslot6.c (CPDTimeline::vslot6, 194 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x400: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPDTimeline;
typedef undefined4 (BEA_THISCALL* FUN_004f57b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f57b0_t> FUN_004f57b0 = {(FUN_004f57b0_t)0x004f57b0};
typedef uint32_t (BEA_THISCALL* FUN_004f5b70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f5b70_t> FUN_004f5b70 = {(FUN_004f5b70_t)0x004f5b70};

static undefined4 BEA_THISCALL ap_004c24c0(CPDTimeline * this_, void *param_1)
{
  CPDTimeline *pCVar1;
  int iVar2;
  CPDTimeline *pCVar3;
  CPDTimeline *pCVar4;
  CPDTimeline *pCVar5;

  alignas(16) uint8_t bea_frame_[0x400] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_3f8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x400 - 0x3f8);
  int &local_3f4 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3f4);
  CPDTimeline * &local_3f0 = *reinterpret_cast<CPDTimeline * *>(bea_frame_ + 0x400 - 0x3f0);
  undefined1 (&local_3ec)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x400 - 0x3ec);
  undefined1 (&local_3e8)[1000] = *reinterpret_cast<undefined1 (*)[1000]>(bea_frame_ + 0x400 - 0x3e8);
  iVar2 = 10;
  pCVar3 = this_ + 100;
  pCVar1 = pCVar3;
  do {
    *(undefined4 *)(pCVar1 + -4) = 0;
    *(undefined4 *)pCVar1 = 0;
    *(undefined4 *)(pCVar1 + 4) = 1;
    pCVar1 = pCVar1 + 0xc;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  pCVar1 = this_ + 0x68;
  pCVar4 = this_ + 0x60;
  local_3f0 = this_;
  do {
    FUN_004f57b0(bea_arg(param_1), bea_arg(&local_3f4), bea_arg(&local_3f8), bea_arg(local_3ec), bea_arg(local_3e8));
    pCVar5 = pCVar4;
    switch(local_3f4) {
    case 0x1c:
      pCVar5 = pCVar4 + 0xc;
      FUN_004f5b70(bea_arg(param_1), bea_arg(local_3f8), bea_arg(pCVar4));
      break;
    case 0x22:
      *(undefined4 *)pCVar1 = local_3f8;
      pCVar1 = pCVar1 + 0xc;
      break;
    case 0x3d:
      *(undefined4 *)(local_3f0 + 0x5c) = local_3f8;
      break;
    case 0x3e:
      *(undefined4 *)pCVar3 = local_3f8;
      pCVar3 = pCVar3 + 0xc;
    }
    pCVar4 = pCVar5;
  } while (BEA_LOOP_GUARD((local_3f4 != 5)));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c24c0, ap_004c24c0));
