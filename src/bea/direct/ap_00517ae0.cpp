// auto-ported from 00517ae0_FUN_00517ae0.c (FUN_00517ae0, 350 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 param_2 is an integer flag (test ebx, ebx / sete at 00517b10), not a float; the sample-rate scale reads the dword at +0x38 as float (fild qword rate; fmul dword at 00517bdb/00517be6; fistp qword); the vtable calls are COM (stdcall, object pushed: 00517b26), passed as bea_vcall's first stack argument; 0x4e0f70 is stdcall (does not read ECX)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_008964d0 GLOBAL_AT(char, 0x008964d0)
#define DAT_00663080 GLOBAL_AT(int, 0x00663080)
typedef uint32_t (BEA_STDCALL* FUN_004e0f70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e0f70_t> FUN_004e0f70 = {(FUN_004e0f70_t)0x004e0f70};

static void BEA_THISCALL ap_00517ae0(uint8_t *this_, uint8_t *param_1, int param_2)
{
  uint8_t *p = param_1;
  int *obj;
  if (*(int *)(this_ + *(int *)(p + 4) * 4 + 0xc4) == 0) return;
  obj = *(int **)(this_ + *(int *)(p + 4) * 4 + 0x1c4);
  if (obj != 0) {
    uint32_t flag = (param_2 == 0);                                  // sete (00517b12)
    bea_vcall<uint32_t>(obj, 0x4c, obj, *(uint32_t *)(p + 0x44), *(uint32_t *)(p + 0x48),
                        *(uint32_t *)(p + 0x4c), flag);
    obj = *(int **)(this_ + *(int *)(p + 4) * 4 + 0x1c4);
    float z = *(float *)(p + 0x5c) * 20.0f;                          // 00517b2e, fstp dword
    float y = *(float *)(p + 0x58) * 20.0f;
    float x = *(float *)(p + 0x54) * 20.0f;
    bea_vcall<uint32_t>(obj, 0x50, obj, x, y, z, flag);
    obj = *(int **)(this_ + *(int *)(p + 4) * 4 + 0x1c4);
    bea_vcall<uint32_t>(obj, 0x40, obj, (uint32_t)0x42480000, flag);
  }
  int a2 = *(int *)(p + 0x64);
  if (a2 < -4000) {
    a2 = a2 * 3 + 8000;                                              // lea (00517b84)
  }
  uint32_t scale_bits = *(uint32_t *)(p + 0x38);                     // kept in param_2's slot (00517b91)
  obj = *(int **)(this_ + *(int *)(p + 4) * 4 + 0xc4);
  bea_vcall<uint32_t>(obj, 0x3c, obj, a2);
  if (DAT_008964d0 != '\0') {
    uint32_t rate;
    if (DAT_00663080 == 0) rate = 0xac44;
    else if (DAT_00663080 == 1) rate = 0x5622;
    else rate = 0x2b11;
    obj = *(int **)(this_ + *(int *)(p + 4) * 4 + 0xc4);
    long long q = __builtin_llrintl((float10)(long long)(uint64_t)rate * (float10)bea_fcast<float>(scale_bits));
    bea_vcall<uint32_t>(obj, 0x44, obj, (uint32_t)q);
  }
  if (param_2 == 0 && *(int *)(p + 0x84) == 0) {
    uint32_t status = 0;                                             // param_1's slot (00517bfb)
    obj = *(int **)(this_ + *(int *)(p + 4) * 4 + 0xc4);
    bea_vcall<uint32_t>(obj, 0x24, obj, &status);
    if ((status & 1) == 0) {
      FUN_004e0f70(bea_arg(p), bea_arg(0));
    }
  }
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00517ae0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
