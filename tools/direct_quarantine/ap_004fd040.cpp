// auto-ported from 004fd040_FUN_004fd040.c (FUN_004fd040, 250 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static FUN_00401000_t const FUN_00401000 = (FUN_00401000_t)0x00401000;
typedef undefined4 (BEA_THISCALL* FUN_00409760_t)(uint32_t);
static FUN_00409760_t const FUN_00409760 = (FUN_00409760_t)0x00409760;
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static FUN_0044b1d0_t const FUN_0044b1d0 = (FUN_0044b1d0_t)0x0044b1d0;
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_0044b370_t const FUN_0044b370 = (FUN_0044b370_t)0x0044b370;
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static FUN_004e5bd0_t const FUN_004e5bd0 = (FUN_004e5bd0_t)0x004e5bd0;
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static FUN_004fd230_t const FUN_004fd230 = (FUN_004fd230_t)0x004fd230;
typedef uint32_t (BEA_CDECL* FUN_005337e0_t)(void);
static FUN_005337e0_t const FUN_005337e0 = (FUN_005337e0_t)0x005337e0;
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static FUN_00549220_t const FUN_00549220 = (FUN_00549220_t)0x00549220;

static uint32_t BEA_THISCALL ap_004fd040(void * this_)
{
  int *piVar1;
  int *piVar2;
  float10 fVar3;
  float local_8;
  void *local_4;
  local_4 = (void *)((int)this_ + 0x19c);
  piVar2 = (int *)FUN_00409760(bea_arg(&local_8));
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      if ((*(byte *)((int)this_ + 0x2c) & 4) == 0) {
        bea_vcall<uint32_t>(piVar1, 0x8);
      }
      else {
        bea_vcall<uint32_t>(piVar1, 0xc8);
      }
    }
    FUN_004e5bd0(bea_arg((void *)((int)this_ + 0x19c)), bea_arg(piVar2));
    if (piVar2 != (int *)0x0) {
      FUN_0044b1d0(bea_arg(piVar2));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
    }
    piVar2 = (int *)FUN_00409760(bea_arg(&local_8));
  }
  FUN_00401000(bea_arg((void *)((int)this_ + 0x144)), bea_arg(0));
  while (BEA_LOOP_GUARD(((piVar2 = *(int **)((int)this_ + 0x18c), piVar2 != (int *)0x0 &&
         (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0))))) {
    FUN_004e5bd0(bea_arg((int *)((int)this_ + 0x18c)), bea_arg(piVar2));
    bea_vcall<uint32_t>(piVar2, 0x8);
  }
  FUN_004fd230(bea_arg(this_));
  if (*(int *)((int)this_ + 0x74) != 0) {
    FUN_005337e0();
    if (*(int **)((int)this_ + 0x74) != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)((int)this_ + 0x74), 0x4, 1);
    }
    *(undefined4 *)((int)this_ + 0x74) = 0;
  }
  fVar3 = (float10)bea_vcall<float10>(this_, 0x1c0);
  local_8 = (float)(fVar3 + (float10)DAT_00672fd0);
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(2000), bea_arg(this_), bea_arg(&local_8), bea_arg(0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fd040, ap_004fd040));
