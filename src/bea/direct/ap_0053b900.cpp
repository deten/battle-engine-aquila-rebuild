// auto-ported from 0053b900_FUN_0053b900.c (FUN_0053b900, 217 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_C__dev_ONSLAUGHT2_DXClouds_cpp_006503d4 ((char*)0x006503d4)
#define s_Atmospherics_Clouds_Cloud_tga_006503f4 ((char*)0x006503f4)
#define s_cg_cloudwidth_006503a8 ((char*)0x006503a8)
#define s_Width_of_in_flight_clouds_006503b8 ((char*)0x006503b8)
typedef void * (BEA_THISCALL* FUN_00404920_t)(uint32_t);
static const bea_guard<FUN_00404920_t> FUN_00404920 = {(FUN_00404920_t)0x00404920};
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef void * (BEA_THISCALL* FUN_005003f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005003f0_t> FUN_005003f0 = {(FUN_005003f0_t)0x005003f0};
typedef uint32_t (BEA_THISCALL* FUN_00500540_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500540_t> FUN_00500540 = {(FUN_00500540_t)0x00500540};
typedef uint32_t (BEA_THISCALL* FUN_00500590_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500590_t> FUN_00500590 = {(FUN_00500590_t)0x00500590};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_0053b900(void * this_)
{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  FUN_00404920(bea_arg(this_));
  local_4 = 0;
  *(undefined ***)this_ = ((void*)0x005e4f9c);
  uVar1 = FUN_004f27f0(s_Atmospherics_Clouds_Cloud_tga_006503f4,0,0,0xffffffff,1,1);
  *(undefined4 *)((int)this_ + 0xc) = uVar1;
  pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x68), bea_arg(0x65), bea_arg(s_C__dev_ONSLAUGHT2_DXClouds_cpp_006503d4), bea_arg(0x1f));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_005003f0(bea_arg(pvVar2), bea_arg(*(undefined4 *)((int)this_ + 0xc)));
  }
  local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
  *(void **)((int)this_ + 8) = pvVar2;
  FUN_00500540(bea_arg(pvVar2), bea_arg(0x152), bea_arg(8), bea_arg(0x24), bea_arg(4), bea_arg(1));
  FUN_00500590(bea_arg(*(void **)((int)this_ + 8)), bea_arg(0x65), bea_arg(8), bea_arg(2), bea_arg(1));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_cloudwidth_006503a8), bea_arg(s_Width_of_in_flight_clouds_006503b8), bea_arg(4), bea_arg((int)this_ + 0x10), bea_arg(0), bea_arg(0));
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053b900, ap_0053b900));
