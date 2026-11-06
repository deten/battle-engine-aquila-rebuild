// auto-ported from 0054ff20_FUN_0054ff20.c (FUN_0054ff20, 486 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CTweakSLONG;
#define DAT_009c64d0 GLOBAL_AT(int, 0x009c64d0)
#define DAT_009c64d4 GLOBAL_AT(char, 0x009c64d4)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_009c648c GLOBAL_AT(int, 0x009c648c)
#define DAT_0089c9b0 GLOBAL_AT(int, 0x0089c9b0)
#define DAT_009c6468 GLOBAL_AT(int, 0x009c6468)
#define DAT_009c646c GLOBAL_AT(int, 0x009c646c)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_009c6480 GLOBAL_AT(int, 0x009c6480)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_00651d88 GLOBAL_AT(int, 0x00651d88)
#define DAT_009c647c GLOBAL_AT(int, 0x009c647c)
typedef uint32_t (BEA_THISCALL* CTweakSLONG__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakSLONG__vslot0_t> CTweakSLONG__vslot0 = {(CTweakSLONG__vslot0_t)0x00528ad0};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_THISCALL* FUN_00501cd0_t)(uint32_t);
static const bea_guard<FUN_00501cd0_t> FUN_00501cd0 = {(FUN_00501cd0_t)0x00501cd0};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00513e20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513e20_t> FUN_00513e20 = {(FUN_00513e20_t)0x00513e20};
typedef uint32_t (BEA_STDCALL* FUN_00514010_t)(uint32_t);
static const bea_guard<FUN_00514010_t> FUN_00514010 = {(FUN_00514010_t)0x00514010};
typedef undefined1 (BEA_STDCALL* FUN_00515970_t)(uint32_t);
static const bea_guard<FUN_00515970_t> FUN_00515970 = {(FUN_00515970_t)0x00515970};
typedef uint32_t (BEA_THISCALL* FUN_00550220_t)(uint32_t);
static const bea_guard<FUN_00550220_t> FUN_00550220 = {(FUN_00550220_t)0x00550220};

static uint32_t BEA_CDECL ap_0054ff20(void)
{
  void *this_local;
  int iVar1;
  this_local = DAT_009c64d0;
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  DAT_009c64d4 = '\0';
  iVar1 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if ((((iVar1 == 0) && (iVar1 = FUN_00515970(bea_arg(0x3b)), iVar1 == 0)) && (DAT_009c648c != 0)) &&
     (((DAT_0089c9b0 != 0 && (*(int *)(DAT_0089c9b0 + 8) != 0)) &&
      ((DAT_009c6468 != 0 && (DAT_009c646c != (void *)0x0)))))) {
    iVar1 = bea_vcall<uint32_t>(DAT_00888a50, 0x1ac, DAT_00888a50,DAT_009c6468);
    if (iVar1 < 0) {
      FUN_00514010(bea_arg(&DAT_009c6468));
      CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_009c6480), bea_arg(0));
    }
    else {
      FUN_00513e20(bea_arg(&DAT_00855bb0), bea_arg(DAT_009c646c));
      FUN_00501cd0(bea_arg(DAT_009c646c));
      FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(1), bea_arg(*(undefined4 *)(DAT_0089c9b0 + 8)));
      bea_vcall<uint32_t>(DAT_00888a50, 0x1b4, DAT_00888a50,0,&DAT_00651d88,1);
      FUN_00513930(bea_arg(1), bea_arg(6), bea_arg(1));
      FUN_00513930(bea_arg(1), bea_arg(5), bea_arg(1));
      FUN_00513930(bea_arg(1), bea_arg(7), bea_arg(0));
      FUN_00513930(bea_arg(1), bea_arg(10), bea_arg(1));
      if (DAT_009c647c == 0) {
        FUN_00513bc0(bea_arg(0x1c), bea_arg(0));
      }
      DAT_009c64d4 = '\x01';
    }
  }
  for (; BEA_LOOP_GUARD((this_local != (void *)0x0)); this_local = *(void **)((int)this_local + 0x1a0)) {
    FUN_00550220(bea_arg(this_local));
  }
  if (DAT_009c64d4 != '\0') {
    FUN_00513930(bea_arg(1), bea_arg(6), bea_arg(2));
    FUN_00513930(bea_arg(1), bea_arg(5), bea_arg(2));
    if (DAT_009c647c == 0) {
      FUN_00513bc0(bea_arg(0x1c), bea_arg(1));
    }
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(1), bea_arg(0));
    bea_vcall<uint32_t>(DAT_00888a50, 0x1ac, DAT_00888a50,0);
    DAT_009c64d4 = '\0';
  }
  return FUN_00513bc0(bea_arg(0x1b), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054ff20, ap_0054ff20));
