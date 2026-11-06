// auto-ported from 00552330_FUN_00552330.c (FUN_00552330, 211 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00889010 GLOBAL_AT(int, 0x00889010)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_DXShadows_cpp_00652410 ((char*)0x00652410)
#define s_shadowblob_tga_00652430 ((char*)0x00652430)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_THISCALL* FUN_005003f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005003f0_t> FUN_005003f0 = {(FUN_005003f0_t)0x005003f0};
typedef uint32_t (BEA_THISCALL* FUN_00500540_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500540_t> FUN_00500540 = {(FUN_00500540_t)0x00500540};
typedef uint32_t (BEA_THISCALL* FUN_00500590_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500590_t> FUN_00500590 = {(FUN_00500590_t)0x00500590};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_00552330(void * this_)
{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  uVar1 = DAT_00889010;
  DAT_00889010 = 1;
  uVar2 = FUN_004f27f0(s_shadowblob_tga_00652430,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x5b4) = uVar2;
  DAT_00889010 = uVar1;
  pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x68), bea_arg(0x1f), bea_arg(s_C__dev_ONSLAUGHT2_DXShadows_cpp_00652410), bea_arg(0x97));
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_005003f0(bea_arg(pvVar3), bea_arg(*(undefined4 *)((int)this_ + 0x5b4)));
  }
  *(void **)((int)this_ + 0x5b8) = pvVar3;
  FUN_00500540(bea_arg(pvVar3), bea_arg(0x152), bea_arg(0x208), bea_arg(0x24), bea_arg(4), bea_arg(0));
  return FUN_00500590(bea_arg(*(void **)((int)this_ + 0x5b8)), bea_arg(0x65), bea_arg(0x208), bea_arg(2), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00552330, ap_00552330));
