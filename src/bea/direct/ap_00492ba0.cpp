// auto-ported from 00492ba0_FUN_00492ba0.c (FUN_00492ba0, 184 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall, 3 stack args (ret 0xc); vcall slot 0x40 on arg2 takes no args (Ghidra's unaff_EDI) and its float is rounded into arg2's slot (fstp [esp+0x18] at 0x492bc5); slot 0x54 is called on the sub-object arg2+8 (ecx = edi+8 at 0x492bc2); extent = sqrt(b*b + a*a) with a=|p0|+p4, b=|p1|+p5 (0x492bdf-0x492be7) rounded by fstp; arg3 replaces it as a bit copy when not below 0 (test ah,1, NaN keeps the computed value); 0x492670 gets (&local8, ARG1, size) - Ghidra passed arg2 - and its EAX (the returned record pointer) is what the asm reads (0x492c30); EAX of 0x491cd0 is passed through
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_005d856c GLOBAL_AT(float, 0x005d856c)
typedef uint32_t (BEA_THISCALL* FUN_00491c50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00491c50_t> FUN_00491c50 = {(FUN_00491c50_t)0x00491c50};
typedef uint32_t (BEA_THISCALL* FUN_00492670_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00492670_t> FUN_00492670 = {(FUN_00492670_t)0x00492670};
typedef uint32_t (BEA_THISCALL* FUN_00491cd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00491cd0_t> FUN_00491cd0 = {(FUN_00491cd0_t)0x00491cd0};

static uint32_t BEA_THISCALL ap_00492ba0(void * this_, uint32_t param_1, int param_2, uint32_t param_3)
{
  char *s = (char *)this_;
  *(uint32_t *)(s + 0) = 0;
  *(uint32_t *)(s + 4) = 0;
  volatile float r = (float)bea_vcall<float10>(param_2, 0x40);       // fstp [esp+0x18]
  float *p = (float *)(uintptr_t)bea_vcall<uint32_t>(param_2 + 8, 0x54);
  if (p != (float *)0x0) {
    float10 a = ABS((float10)p[0]) + (float10)p[4];
    float10 b = ABS((float10)p[1]) + (float10)p[5];
    r = (float)SQRT(b * b + a * a);
  }
  uint32_t rb;
  if (bea_fcast<float10>(param_3) >= (float10)DAT_005d856c) {        // test ah,1 clear (C0 is set for NaN)
    rb = param_3;
  }
  else {
    float rv = r;
    __builtin_memcpy(&rb, &rv, 4);
  }
  uint32_t sz = FUN_00491c50((uint32_t)0x00704200, rb);
  uint8_t rec[8];
  uint8_t *q = (uint8_t *)(uintptr_t)FUN_00492670((uint32_t)0x00704200, (uint32_t)(uintptr_t)rec, param_1, sz);
  *(uint16_t *)(s + 8) = *(uint16_t *)(q + 0);
  *(uint16_t *)(s + 0xa) = *(uint16_t *)(q + 2);
  *(uint32_t *)(s + 0xc) = *(uint32_t *)(q + 4);
  return FUN_00491cd0((uint32_t)0x00704200, (uint32_t)(uintptr_t)this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00492ba0, ap_00492ba0));
