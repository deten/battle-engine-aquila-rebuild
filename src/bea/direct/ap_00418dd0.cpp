// hand-ported from 00418dd0_vslot2.c (CThingCamera::vslot2, 165 bytes)
// @hand-fixed 2026-10-29 written from the disassembly: vslot 0x78 of *(this+4) takes the 16-byte out buffer (push ecx at 00418de4, callee pops: ret 4; both implementations 0x4041a0 / 0x43e9f0 write all four dwords); vslot 0x54 of the sub-object at +8 takes no argument and returns a pointer in EAX (00418dfb, 00418e0d; the second call re-reads the vtable through esi); the +0x34 flag is re-read from *(this+4) after the call (00418dea); y/z sums rounded through the stack slots (fstp at 00418e09 / 00418e17); returns param_1 in EAX (hidden struct-return pointer, 00418e1b / 00418e44), ret 4
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

static uint32_t *BEA_THISCALL ap_00418dd0(uint8_t *this_, uint32_t *param_1)
{
  uint8_t *obj = *(uint8_t **)(this_ + 4);
  if (obj != nullptr) {
    uint32_t local[4];
    bea_vcall<uint32_t>(obj, 0x78, (uint32_t *)local);                     // 00418de7
    if ((*(uint8_t *)(*(uint8_t **)(this_ + 4) + 0x34) & 8) == 0) {      // 00418ded
      uint8_t *sub = obj + 8;
      uint8_t *r = bea_vcall<uint8_t *>(sub, 0x54);                        // 00418dfb
      float y;
      memcpy(&y, &local[1], 4);
      y = (float)((float10)y + (float10)*(float *)(r + 0x14));             // 00418dfe-00418e09
      memcpy(&local[1], &y, 4);
      r = bea_vcall<uint8_t *>(sub, 0x54);                                 // 00418e0d
      float z;
      memcpy(&z, &local[2], 4);
      z = (float)((float10)z - (float10)*(float *)(r + 0x18));             // 00418e10-00418e17
      memcpy(&local[2], &z, 4);
    }
    param_1[0] = local[0];
    param_1[1] = local[1];
    param_1[2] = local[2];
    param_1[3] = local[3];
    return param_1;
  }
  param_1[0] = GLOBAL_AT(uint32_t, 0x006605b8);
  param_1[1] = GLOBAL_AT(uint32_t, 0x006605bc);
  param_1[2] = GLOBAL_AT(uint32_t, 0x006605c0);
  param_1[3] = GLOBAL_AT(uint32_t, 0x006605c4);
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418dd0, ap_00418dd0));
