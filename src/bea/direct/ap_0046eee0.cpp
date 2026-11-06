// hand-ported from 0046eee0_FUN_0046eee0.c (FUN_0046eee0, 992 bytes)
// @hand-fixed 2026-10-29 callees per asm: 0x523db0 takes nothing (0x46eee9, Ghidra invented unaff_EDI/ESI args), 0x515880 gets ECX=0x88a0a8 (0x46eeee; it pushes ECX's upper bytes to 0x512490), 0x4d2580 stdcall(1); x87 kept extended where the asm keeps it on the stack (fst at 0x46ef4c/0x46ef52 then fsub/fdiv the unrounded sum, fst+fcomp of the unrounded quotient at 0x46ef66/0x46efa3/0x46f0d0/...); NaN branches as the status-word tests do (`test ah,1` = less OR unordered: clamps at 0x46ef74 etc., the loop at 0x46f17b, local_4 at 0x46f055, 0x46f214; `test ah,0x41; jne` at 0x46f19f = only ordered greater continues); constants 0.01f (0x5d8574) and 1.3f (0x5dbbf8) as floats, not Ghidra's doubles
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_006630cc GLOBAL_AT(int, 0x006630cc)
#define DAT_0089ce4c GLOBAL_AT(int, 0x0089ce4c)
typedef uint32_t (BEA_CDECL* FUN_00523db0_t)(void);
static const bea_guard<FUN_00523db0_t> FUN_00523db0 = {(FUN_00523db0_t)0x00523db0};
typedef int (BEA_THISCALL* FUN_00515880_t)(uint32_t);
static const bea_guard<FUN_00515880_t> FUN_00515880 = {(FUN_00515880_t)0x00515880};
typedef uint32_t (BEA_CDECL* FUN_0042d810_t)(void);
static const bea_guard<FUN_0042d810_t> FUN_0042d810 = {(FUN_0042d810_t)0x0042d810};
typedef float10 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_0046e910_t)(void *);
static const bea_guard<FUN_0046e910_t> FUN_0046e910 = {(FUN_0046e910_t)0x0046e910};
typedef uint32_t (BEA_THISCALL* FUN_004e1b20_t)(uint32_t);
static const bea_guard<FUN_004e1b20_t> FUN_004e1b20 = {(FUN_004e1b20_t)0x004e1b20};
typedef uint32_t (BEA_THISCALL* FUN_004bb530_t)(uint32_t);
static const bea_guard<FUN_004bb530_t> FUN_004bb530 = {(FUN_004bb530_t)0x004bb530};
typedef uint32_t (BEA_THISCALL* FUN_0044a1c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a1c0_t> FUN_0044a1c0 = {(FUN_0044a1c0_t)0x0044a1c0};
typedef uint32_t (BEA_THISCALL* FUN_0046e460_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046e460_t> FUN_0046e460 = {(FUN_0046e460_t)0x0046e460};
typedef uint32_t (BEA_STDCALL* FUN_004d2580_t)(uint32_t);
static const bea_guard<FUN_004d2580_t> FUN_004d2580 = {(FUN_004d2580_t)0x004d2580};

#define F(off) (*(float *)((int)this_ + (off)))
#define U(off) (*(uint32_t *)((int)this_ + (off)))

// [0x3ac] = q (clamped to [0,1]) and [0x3b0] likewise: fst the quotient, compare the
// unrounded quotient with 0 (`test ah,1`: less or unordered), then the stored one with 1
static inline void clamp_store(void *this_, int off, float10 q)
{
  F(off) = (float)q;
  if (!(q >= (float10)0.0f)) {
    U(off) = 0;
  }
  if ((float10)F(off) > (float10)1.0f) {
    U(off) = 0x3f800000;
  }
}

static void BEA_THISCALL ap_0046eee0(void *this_)
{
  volatile float fVar1;     // [esp+0x10], a memory float in the original
  volatile float local_4;   // [esp+0x14]
  int iVar5;
  char cVar4;
  int *piVar6;
  float10 s;
  float10 d;
  float10 r;

  FUN_00523db0();
  iVar5 = FUN_00515880(0x0088a0a8);
  cVar4 = (char)FUN_0042d810();
  if (cVar4 != '\0') {
    iVar5 = 1;
    DAT_006630cc = 1;
  }
  else if (iVar5 == 0) {
    goto LAB_0046ef32;
  }
  *(int *)((int)this_ + 0x34) = iVar5;
  if ((0 < iVar5) && (*(int *)((int)this_ + 0x28) < 4)) {
    *(int *)((int)this_ + 0x28) = 9;
  }
  if (iVar5 != 0) {
    return;
  }
LAB_0046ef32:
  fVar1 = (float)FUN_005159e0(0x0088a0a8);
  s = (float10)F(0x3a8) + (float10)F(0x3a0);
  F(0x398) = (float)s;
  F(0x39c) = (float)s;
  d = s - (float10)F(0x3a0);
  clamp_store(this_, 0x3ac, d / (float10)F(0x3a8));
  clamp_store(this_, 0x3b0, d / (float10)F(0x3a8));
  FUN_0046e910(this_);
  if (*(int *)((int)this_ + 0x34) == 1) {
    return;
  }
  if (*(int *)((int)this_ + 0x34) == 6) {
    return;
  }
  FUN_004e1b20(0x00896988);
  FUN_004bb530(0x00889a48);
  iVar5 = 0;
  if (0 < *(int *)((int)this_ + 0x29c)) {
    piVar6 = (int *)((int)this_ + 0x2c4);
    do {
      if (*piVar6 != 0) {
        DAT_0089ce4c = iVar5;
        FUN_0044a1c0(0x0089c9a0, (uint32_t)*piVar6);
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < *(int *)((int)this_ + 0x29c));
  }
  r = FUN_005159e0(0x0088a0a8);
  local_4 = (float)r;
  if (!(r >= (float10)fVar1)) {
    local_4 = (float)((float10)fVar1 + (float10)0.01f);
  }
  iVar5 = 0;
  do {
    if ((*(int *)((int)this_ + 0x2c) == 0) || (*(int *)((int)this_ + 0x9d0) != 0)) {
      r = FUN_005159e0(0x0088a0a8);
      F(0x39c) = (float)(r - ((float10)local_4 - (float10)fVar1));
    }
    else {
      U(0x39c) = U(0x3a0);
    }
    if (*(int *)((int)this_ + 0x2c) == 0) {
      U(0x398) = U(0x39c);
    }
    else {
      U(0x398) = U(0x3a0);
    }
    clamp_store(this_, 0x3ac, ((float10)F(0x398) - (float10)F(0x3a0)) / (float10)F(0x3a8));
    clamp_store(this_, 0x3b0, ((float10)F(0x39c) - (float10)F(0x3a0)) / (float10)F(0x3a8));
    if (*(int *)((int)this_ + 0x34) == 0) {
      FUN_0046e460(0x008a9a98, (uint32_t)iVar5);
    }
    iVar5 = iVar5 + 1;
    FUN_004d2580(1);
    r = FUN_005159e0(0x0088a0a8);
  } while (!(r - (float10)F(0x3a0) >= (float10)F(0x3a8)));
  if (iVar5 == 1) {
    r = FUN_005159e0(0x0088a0a8);
    if (r - (float10)fVar1 > (float10)F(0x3a8)) {
      r = FUN_005159e0(0x0088a0a8);
      F(0x3a0) = (float)((r - (float10)fVar1) + (float10)F(0x3a0));
      r = FUN_005159e0(0x0088a0a8);
      r = r - (float10)fVar1;
      if (!((float10)F(0x3a8) * (float10)1.3f < r)) goto LAB_0046f1ff;    // fcompp at 0x46f1d8
      r = FUN_005159e0(0x0088a0a8);
      F(0x3a0) = (float)r;
      goto LAB_0046f1ff;
    }
  }
  F(0x3a0) = (float)((float10)F(0x3a8) + (float10)F(0x3a0));
LAB_0046f1ff:
  r = FUN_005159e0(0x0088a0a8);
  if (!(r >= (float10)F(0x3a0))) {
    r = FUN_005159e0(0x0088a0a8);
    F(0x3a0) = (float)(r - ((float10)local_4 - (float10)fVar1));
  }
  clamp_store(this_, 0x3ac, ((float10)F(0x398) - (float10)F(0x3a0)) / (float10)F(0x3a8));
  clamp_store(this_, 0x3b0, ((float10)F(0x39c) - (float10)F(0x3a0)) / (float10)F(0x3a8));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046eee0, ap_0046eee0));
