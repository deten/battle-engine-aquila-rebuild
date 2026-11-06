// auto-ported from 004c2300_vslot6.c (CPDColourRange::vslot6, 199 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x400: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPDColourRange;
typedef undefined4 (BEA_THISCALL* FUN_004f57b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f57b0_t> FUN_004f57b0 = {(FUN_004f57b0_t)0x004f57b0};
typedef uint32_t (BEA_THISCALL* FUN_004f5b80_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f5b80_t> FUN_004f5b80 = {(FUN_004f5b80_t)0x004f5b80};

static undefined4 BEA_THISCALL ap_004c2300(CPDColourRange * this_, void *param_1)
{
  CPDColourRange *pCVar1;

  alignas(16) uint8_t bea_frame_[0x400] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_3f4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x400 - 0x3f4);
  undefined4 &local_3f0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x400 - 0x3f0);
  int &local_3ec = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3ec);
  undefined1 (&local_3e8)[1000] = *reinterpret_cast<undefined1 (*)[1000]>(bea_frame_ + 0x400 - 0x3e8);
  do {
    FUN_004f57b0(bea_arg(param_1), bea_arg(&local_3ec), bea_arg(&local_3f4), bea_arg(&local_3f0), bea_arg(local_3e8));
    switch(local_3ec) {
    case 0x31:
      pCVar1 = this_ + 0x5c;
      break;
    case 0x32:
      pCVar1 = this_ + 100;
      break;
    case 0x33:
      pCVar1 = this_ + 0x6c;
      break;
    case 0x34:
      pCVar1 = this_ + 0x74;
      break;
    case 0x35:
      pCVar1 = this_ + 0x7c;
      break;
    case 0x36:
      pCVar1 = this_ + 0x84;
      break;
    case 0x37:
      pCVar1 = this_ + 0x8c;
      break;
    case 0x38:
      pCVar1 = this_ + 0x94;
      break;
    case 0x39:
      pCVar1 = this_ + 0x9c;
      break;
    case 0x3a:
      *(undefined4 *)(this_ + 0xa4) = local_3f4;
      goto switchD_004c2338_default;
    case 0x3b:
      *(undefined4 *)(this_ + 0xa8) = local_3f4;
      goto switchD_004c2338_default;
    case 0x3c:
      *(undefined4 *)(this_ + 0xac) = local_3f0;
    default:
      goto switchD_004c2338_default;
    }
    FUN_004f5b80(bea_arg(param_1), bea_arg(local_3f0), bea_arg(local_3f4), bea_arg(pCVar1));
switchD_004c2338_default:
    if (local_3ec == 5) {
      return 1;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c2300, ap_004c2300));
