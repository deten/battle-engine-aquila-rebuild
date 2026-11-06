// auto-ported from 004c4420_vslot6.c (CPDMover::vslot6, 178 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x400: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPDMover;
typedef undefined4 (BEA_THISCALL* FUN_004f57b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f57b0_t> FUN_004f57b0 = {(FUN_004f57b0_t)0x004f57b0};
typedef uint32_t (BEA_THISCALL* FUN_004f5b70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f5b70_t> FUN_004f5b70 = {(FUN_004f5b70_t)0x004f5b70};
typedef uint32_t (BEA_THISCALL* FUN_004f5b80_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f5b80_t> FUN_004f5b80 = {(FUN_004f5b80_t)0x004f5b80};

static undefined4 BEA_THISCALL ap_004c4420(CPDMover * this_, void *param_1)
{
  CPDMover *pCVar1;

  alignas(16) uint8_t bea_frame_[0x400] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_3f4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x400 - 0x3f4);
  undefined4 &local_3f0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x400 - 0x3f0);
  int &local_3ec = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3ec);
  undefined1 (&local_3e8)[1000] = *reinterpret_cast<undefined1 (*)[1000]>(bea_frame_ + 0x400 - 0x3e8);
  do {
    FUN_004f57b0(bea_arg(param_1), bea_arg(&local_3ec), bea_arg(&local_3f4), bea_arg(&local_3f0), bea_arg(local_3e8));
    switch(local_3ec) {
    case 0x55:
      FUN_004f5b80(bea_arg(param_1), bea_arg(local_3f0), bea_arg(local_3f4), bea_arg(this_ + 0x5c));
      break;
    case 0x56:
      *(undefined4 *)(this_ + 100) = local_3f0;
      break;
    case 0x57:
      *(undefined4 *)(this_ + 0x68) = local_3f0;
      break;
    case 0x58:
      *(undefined4 *)(this_ + 0x6c) = local_3f0;
      break;
    case 0x59:
      pCVar1 = this_ + 0x70;
      goto LAB_004c44b0;
    case 0x5a:
      pCVar1 = this_ + 0x74;
      goto LAB_004c44b0;
    case 0x5b:
      pCVar1 = this_ + 0x78;
LAB_004c44b0:
      FUN_004f5b70(bea_arg(param_1), bea_arg(local_3f4), bea_arg(pCVar1));
    }
    if (local_3ec == 5) {
      return 1;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c4420, ap_004c4420));
