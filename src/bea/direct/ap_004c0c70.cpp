// auto-ported from 004c0c70_FUN_004c0c70.c (FUN_004c0c70, 1049 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: rewritten from the asm. param_8 is a context pointer (edi, [edi+0x84]) not a float; Ghidra's reuse of the param_3/param_4/param_8 slots as float scratch (0x4c0ccb, 0x4c0ce1, 0x4c0d94) became locals; the four identical curve terms (0x4c0c7d, 0x4c0d3a, 0x4c0e8e, 0x4c0f48) share one helper; _CIfmod(period ST0, time ST1) as at 0x4c0d04-0x4c0d1f; fldl2e/fldln2+fyl2x use exact extended constants (0x4c0e1e, 0x4c0e63); case 5 skips on zero or NaN (test ah,0x40 at 0x4c0e52); param_7==0 clamp returns -1 for NaN (test ah,1 at 0x4c107a); param_7==1 compares the unrounded sum and wraps the float-stored one (0x4c1014-0x4c101a)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c6400 GLOBAL_AT(uint32_t, 0x009c6400)
typedef float10 (BEA_CDECL* FUN_004c0c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c0c70_t> FUN_004c0c70 = {(FUN_004c0c70_t)0x004c0c70};
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

// fldln2; fld x; fyl2x (0x4c0e63): one transcendental op, ln2 exactly as fldln2 loads it
static inline float10 ap_004c0c70_ln(float10 x)
{
  float10 ln2 = 0.693147180559945309417232121458176568L;
  __asm__("fyl2x" : "+t"(x) : "u"(ln2) : "st(1)");
  return x;
}

// One curve term: obj = param_N[1] (non-null).  Returns the recursive value (ST0 after
// call 0x4c0c70) before the caller's fmul by param_N[0].
static inline float10 ap_004c0c70_term(int obj, uint32_t p1bits, int ctx)
{
  uint32_t a;
  if (*(int *)(obj + 0x84) == 0) {
    a = p1bits;                                       // push ebp (0x4c0cbf)
  }
  else {
    uint32_t tbits = DAT_009c6400;                    // mov ecx,[0x9c6400] (0x4c0cc2)
    float t = bea_fcast<float>(tbits);
    float p = (float)FUN_004c10c0(bea_arg(obj + 0x88), bea_arg(tbits), bea_arg(ctx));
    if ((*(int *)(obj + 0x90) != 0) && (ctx != 0)) {
      t = t - *(float *)(ctx + 0x84);                 // fld; fsub [edi+0x84]; fstp (0x4c0ced)
    }
    float q = (float)(_CIfmod(p, t) / (float10)p);    // fdiv [period] (0x4c0d24)
    a = bea_arg(q);
  }
  return FUN_004c0c70(a, bea_arg(obj + 0x5c), bea_arg(obj + 0x64), bea_arg(obj + 0x6c), bea_arg(obj + 0x74),
                      *(uint32_t *)(obj + 0x7c), *(uint32_t *)(obj + 0x80), bea_arg(ctx));
}

static float10 BEA_CDECL ap_004c0c70(float param_1, float *param_2, float *param_3, float *param_4, float *param_5, int param_6, int param_7, int param_8)
{
  uint32_t p1bits = bea_arg(param_1);                 // [esp+0x10] / ebp: the incoming param_1
  int obj;
  float fA;
  float10 fB;

  obj = ((int *)param_3)[1];
  if (obj == 0) {
    fA = *param_3;
  }
  else {
    fA = (float)(ap_004c0c70_term(obj, p1bits, param_8) * (float10)*param_3);
  }
  obj = ((int *)param_4)[1];
  if (obj == 0) {
    fB = (float10)*param_4;
  }
  else {
    fB = ap_004c0c70_term(obj, p1bits, param_8) * (float10)*param_4;   // kept on the x87 stack
  }
  param_1 = (float)((float10)fA * (float10)param_1 + fB);
  switch (param_6) {
  case 1:
    param_1 = (float)((float10)param_1 * (float10)param_1);
    break;
  case 2: {
    float10 x = (float10)param_1 * 1.44269504088896340735992468100189214L;   // fldl2e; fmulp
    float10 r = ROUND(x);
    param_1 = (float)fscale((float10)1 + f2xm1(x - r), r);
    break;
  }
  case 3:
    param_1 = (float)fsin((float10)param_1);
    break;
  case 4:
    param_1 = (float)fcos((float10)param_1);
    break;
  case 5:
    if (!(param_1 == 0.0f || bea_isnan(param_1))) {
      param_1 = (float)((float10)1.0f / (float10)param_1);
    }
    break;
  case 6:
    param_1 = (float)ap_004c0c70_ln((float10)param_1);
    break;
  case 10: {
    uint uVar3 = _rand();
    param_1 = (float)((float10)(int)((uVar3 & 0xff) - 0x80) * (float10)0.0078125f);
    break;
  }
  default:
    break;
  }

  obj = ((int *)param_2)[1];
  if (obj == 0) {
    fA = *param_2;
  }
  else {
    fA = (float)(ap_004c0c70_term(obj, p1bits, param_8) * (float10)*param_2);
  }
  obj = ((int *)param_5)[1];
  if (obj == 0) {
    fB = (float10)*param_5;
  }
  else {
    fB = ap_004c0c70_term(obj, p1bits, param_8) * (float10)*param_5;
  }
  float10 fR = (float10)fA * (float10)param_1 + fB;
  if (param_7 == 0) {
    if ((float10)1.0f < fR) {
      return (float10)1.0f;
    }
    if (!(fR >= (float10)-1.0f)) {
      return (float10)-1.0f;
    }
    return fR;
  }
  if (param_7 == 1) {
    float fV = (float)fR;                             // fst [esp+8]; fld [esp+8]
    if ((float10)-1.0f < fR) {
      return _CIfmod((float10)2.0, (float10)fV + (float10)1.0f) - (float10)1.0f;
    }
    return -(_CIfmod((float10)2.0, -(float10)fV + (float10)1.0f) - (float10)1.0f);
  }
  return fR;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c0c70, ap_004c0c70));
