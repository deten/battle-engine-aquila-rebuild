// auto-ported from 004691c0_FUN_004691c0.c (FUN_004691c0, 224 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_009c63f0 GLOBAL_AT(int, 0x009c63f0)
#define DAT_009c63f4 GLOBAL_AT(int, 0x009c63f4)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
typedef uint32_t (BEA_CDECL* FUN_004a5430_t)(void);
static const bea_guard<FUN_004a5430_t> FUN_004a5430 = {(FUN_004a5430_t)0x004a5430};
typedef uint32_t (BEA_THISCALL* FUN_004cae50_t)(uint32_t);
static const bea_guard<FUN_004cae50_t> FUN_004cae50 = {(FUN_004cae50_t)0x004cae50};
typedef uint32_t (BEA_CDECL* FUN_004caf30_t)(void);
static const bea_guard<FUN_004caf30_t> FUN_004caf30 = {(FUN_004caf30_t)0x004caf30};
typedef uint32_t (BEA_CDECL* FUN_004caf60_t)(void);
static const bea_guard<FUN_004caf60_t> FUN_004caf60 = {(FUN_004caf60_t)0x004caf60};
typedef uint32_t (BEA_CDECL* FUN_004cb080_t)(void);
static const bea_guard<FUN_004cb080_t> FUN_004cb080 = {(FUN_004cb080_t)0x004cb080};
typedef uint32_t (BEA_THISCALL* FUN_004cb1b0_t)(uint32_t);
static const bea_guard<FUN_004cb1b0_t> FUN_004cb1b0 = {(FUN_004cb1b0_t)0x004cb1b0};
typedef uint32_t (BEA_THISCALL* FUN_004cbff0_t)(uint32_t);
static const bea_guard<FUN_004cbff0_t> FUN_004cbff0 = {(FUN_004cbff0_t)0x004cbff0};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_CDECL* FUN_004f2b40_t)(void);
static const bea_guard<FUN_004f2b40_t> FUN_004f2b40 = {(FUN_004f2b40_t)0x004f2b40};
typedef uint32_t (BEA_CDECL* FUN_00501360_t)(void);
static const bea_guard<FUN_00501360_t> FUN_00501360 = {(FUN_00501360_t)0x00501360};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_CDECL* FUN_0054fee0_t)(void);
static const bea_guard<FUN_0054fee0_t> FUN_0054fee0 = {(FUN_0054fee0_t)0x0054fee0};

static uint32_t BEA_THISCALL ap_004691c0(void * this_)
{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  pvVar1 = DAT_009c63e8;
  while (BEA_LOOP_GUARD((DAT_009c63e8 = pvVar1, DAT_009c63e8 != (void *)0x0))) {
    pvVar1 = *(void **)((int)DAT_009c63e8 + 0x68);
    FUN_004cae50(bea_arg(DAT_009c63e8));
    *(void **)((int)DAT_009c63e8 + 0x68) = DAT_009c63f0;
    DAT_009c63f0 = DAT_009c63e8;
  }
  FUN_004caf30();
  FUN_004cb080();
  FUN_004caf60();
  pvVar1 = DAT_009c63f4;
  if (DAT_009c63f4 != (void *)0x0) {
    FUN_004cb1b0(bea_arg(DAT_009c63f4));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  DAT_009c63f4 = (void *)0x0;
  FUN_004cbff0(bea_arg(&DAT_0082b400));
  FUN_0054fee0();
  piVar3 = (int *)((int)this_ + 0x48);
  iVar4 = 0x56;
  do {
    if (*piVar3 != 0) {
      FUN_004f27e0(bea_arg((void *)(*piVar3 + 8)));
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (BEA_LOOP_GUARD((iVar4 != 0)));
  piVar3 = (int *)((int)this_ + 0x1a0);
  iVar4 = 6;
  do {
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x170) = *(int *)(iVar2 + 0x170) + -1;
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (BEA_LOOP_GUARD((iVar4 != 0)));
  FUN_004a5430();
  FUN_00501360();
  return FUN_004f2b40();
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004691c0, ap_004691c0));
