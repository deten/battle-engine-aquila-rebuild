// auto-ported from 004f34a0_vslot9.c (CThing::vslot9, 301 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CThing;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_00855170 GLOBAL_AT(int, 0x00855170)
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_THISCALL* FUN_00492ba0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00492ba0_t> FUN_00492ba0 = {(FUN_00492ba0_t)0x00492ba0};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
// @autoport-arity: call arity differs from the asm (2 pushes: asm 1 call(s), port 0)

static uint32_t BEA_THISCALL ap_004f34a0(CThing * this_, int param_1)
{
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x14);
  CThing *pCVar1;
  int iVar2;
  float10 fVar3;
  if (*(int *)(this_ + 0x30) == 0) {
    bea_vcall<uint32_t>(this_, 0x88, param_1);
  }
  bea_vcall<uint32_t>(this_, 0x98, 0);
  pCVar1 = this_ + 0x1c;
  *(undefined4 *)pCVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this_ + 0x20) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0x24) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x28) = *(undefined4 *)(param_1 + 0x10);
  iVar2 = bea_vcall<uint32_t>(this_, 0xb0);
  if ((iVar2 != 0) &&
     (fVar3 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(pCVar1))), fVar3 < bea_fcast<float10>(*(float *)(this_ + 0x24)))
     ) {
    bea_vcall<uint32_t>(this_, 0x50, &local_14);
  }
  iVar2 = bea_vcall<uint32_t>(this_, 0xc4);
  if ((iVar2 == 0) && (DAT_006fbdfc < *(float *)(this_ + 0x24))) {
    *(float *)(this_ + 0x24) = DAT_006fbdfc;
  }
  if (((byte)this_[0x2c] & 2) != 0) {
    FUN_00492ba0(bea_arg(this_ + 0xc), bea_arg(pCVar1), bea_arg(this_), bea_arg(*(undefined4 *)(param_1 + 0xa8)));
    if (*(int *)(this_ + 0x18) < 3) {
      FUN_004e5b20(bea_arg(&DAT_00855170), bea_arg(this_));
      this_[0x2c] = (CThing)((byte)this_[0x2c] | 0x40);
    }
    bea_vcall<uint32_t>(this_, 0x8c, param_1 + 0x68);
  }
  if (*(int *)(this_ + 0x30) != 0) {
    *(uint *)(this_ + 0x34) = *(uint *)(this_ + 0x34) | 0x800000;
  }
  if (*(int *)(param_1 + 0x3ac) == 0) {
    bea_vcall<uint32_t>(this_, 0x5c);
  }
  return FUN_004e5a80(bea_arg(&DAT_00855090), bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f34a0, ap_004f34a0));
