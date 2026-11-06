// hand-ported from 004b4cd0_FUN_004b4cd0.c (FUN_004b4cd0, 268 bytes)
// @hand-fixed 2026-10-29 written from the disassembly: param_2's slots 0x70, 0x1c and 0x18 and the result's slot 0x20 take no stack argument (nothing pushed before 004b4d13, 004b4d28, 004b4d52, 004b4d6f); slot 0x18 returns ST0, used as (float10)(int)e[0x1c] * st + (int)e[0x14] (fild/fmul st(1)/fiadd at 004b4d55-004b4d5a), rounded to float by fstp into param_2's slot and its own value popped (004b4d61); +0x18 gets that float's bits or 0 (004b4d20, 004b4dce); FUN_004b4ba0 gets 20 dwords (ret 0x50): the 16 bytes at 0x704de8, the 48 at 0x704db8, **(param_1+0x160), the original param_2 pointer, param_3, 0 (004b4d7c-004b4db7) - Ghidra's in_stack names; returns 0/0/1 in EAX
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* FUN_004b4ba0_t)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                                 uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                                 uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                                 uint32_t, uint32_t);
static const bea_guard<FUN_004b4ba0_t> FUN_004b4ba0 = {(FUN_004b4ba0_t)0x004b4ba0};

#define U32(p, k) (*reinterpret_cast<uint32_t *>((uint8_t *)(p) + (k)))
#define I32(p, k) (*reinterpret_cast<int32_t *>((uint8_t *)(p) + (k)))
#define PTR(p, k) (*reinterpret_cast<uint8_t **>((uint8_t *)(p) + (k)))
#define G(a) GLOBAL_AT(uint32_t, a)

static uint32_t BEA_THISCALL ap_004b4cd0(uint8_t *this_, uint8_t *param_1, void *param_2, uint32_t param_3,
                                         int param_4)
{
  int cur = GLOBAL_AT(int, 0x008a9aac);
  if (cur == I32(this_, 0x14)) {
    return 0;
  }
  if ((cur < (int)(U32(this_, 0x14) + 0x1eu)) && (param_4 == 0)) {   // add eax, 0x1e wraps; jge signed
    return 0;
  }
  void *a = bea_vcall<void *>(param_2, 0x70);                            // 004b4d13
  uint32_t res = 0;                                                      // param_2's slot, 004b4d20
  int idx = bea_vcall<int>(param_2, 0x1c);                               // 004b4d28
  U32(this_, 0x14) = 0xffffd8f1;
  if ((U32(param_1, 0x14) != 0) && (idx >= 0)) {
    uint32_t ea = U32(param_1, 0x18) + (uint32_t)idx * 0x24u;            // integer sum: the null test stays
    if (ea != 0) {
      uint8_t *e = (uint8_t *)(uintptr_t)ea;
      float10 s = bea_vcall<float10>(param_2, 0x18);                     // 004b4d52, ST0
      volatile float f = (float)((float10)I32(e, 0x1c) * s + (float10)I32(e, 0x14));
      float ff = f;
      memcpy(&res, &ff, 4);
    }
  }
  if (a != nullptr) {
    bea_vcall<uint32_t>(a, 0x20);                                        // 004b4d6f
  }
  FUN_004b4ba0(this_, G(0x00704de8), G(0x00704dec), G(0x00704df0), G(0x00704df4),
               G(0x00704db8), G(0x00704dbc), G(0x00704dc0), G(0x00704dc4), G(0x00704dc8), G(0x00704dcc),
               G(0x00704dd0), G(0x00704dd4), G(0x00704dd8), G(0x00704ddc), G(0x00704de0), G(0x00704de4),
               U32(PTR(param_1, 0x160), 0), (uint32_t)(uintptr_t)param_2, param_3, 0u);
  U32(this_, 0x14) = (uint32_t)cur;
  U32(this_, 0x18) = res;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b4cd0, ap_004b4cd0));
