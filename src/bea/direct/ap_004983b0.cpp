// auto-ported from 004983b0_FUN_004983b0.c (FUN_004983b0, 351 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-uninit local_10: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMotionController;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_00704650 GLOBAL_AT(int, 0x00704650)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef CMotionController* (BEA_THISCALL* FUN_004bae30_t)(uint32_t);
static const bea_guard<FUN_004bae30_t> FUN_004bae30 = {(FUN_004bae30_t)0x004bae30};

static void * BEA_THISCALL ap_004983b0(void * this_, undefined4 param_1)
{
  undefined4 local_10 = 0;
  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_004bae30(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005dc3b4);
  *(undefined4 *)((int)this_ + 0xc) = 0x3ecccccd;
  *(undefined4 *)((int)this_ + 8) = param_1;
  *(undefined4 *)((int)this_ + 0xac) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  *(undefined4 *)((int)this_ + 0x40) = 0;
  *(undefined4 *)((int)this_ + 0x44) = 0;
  *(undefined4 *)((int)this_ + 0x4c) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x88) = 0;
  *(undefined4 *)((int)this_ + 0x8c) = 0;
  *(undefined4 *)((int)this_ + 0x90) = 0;
  *(undefined4 *)((int)this_ + 0xd4) = 0;
  *(undefined4 *)((int)this_ + 0xd8) = 0;
  *(undefined4 *)((int)this_ + 0xdc) = 0;
  *(undefined4 *)((int)this_ + 0x98) = 0;
  *(undefined4 *)((int)this_ + 0x9c) = 0x43480000;
  *(undefined4 *)((int)this_ + 0xe0) = local_10;
  *(undefined4 *)((int)this_ + 0xa0) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0xa4) = 0x3d4ccccd;
  *(undefined4 *)((int)this_ + 0xb4) = 0;
  *(undefined4 *)((int)this_ + 0xb8) = 0;
  *(undefined4 *)((int)this_ + 0xc0) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0x3f666666;
  *(undefined4 *)((int)this_ + 0xbc) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x50) = 0;
  *(undefined4 *)((int)this_ + 0x54) = 0;
  *(undefined4 *)((int)this_ + 0xe8) = 0;
  *(undefined4 *)((int)this_ + 0xa8) = 0;
  *(undefined4 *)((int)this_ + 0xcc) = 0;
  *(undefined4 *)((int)this_ + 0xd0) = 0;
  param_1 = 0xbf800000;
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
  *(undefined4 *)((int)this_ + 0xe4) = 0;
  *(undefined4 *)((int)this_ + 200) = 1;
  *(void **)((int)this_ + 0xec) = DAT_00704650;
  DAT_00704650 = this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004983b0, ap_004983b0));
