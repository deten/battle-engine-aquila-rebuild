// auto-ported from 005154e0_FUN_005154e0.c (FUN_005154e0, 253 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char FpsTimer;
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662f00 GLOBAL_AT(int, 0x00662f00)
#define DAT_00662dec GLOBAL_AT(int, 0x00662dec)
#define DAT_0063c108 GLOBAL_AT(char, 0x0063c108)
#define DAT_0062b13c GLOBAL_AT(int, 0x0062b13c)
#define s_Vertex_shader_suppport_ENABLED_0063e01c ((char*)0x0063e01c)
#define s_C__dev_ONSLAUGHT2_PCPlatform_cpp_0063e03c ((char*)0x0063e03c)
#define s_Initting_shaders_0063e008 ((char*)0x0063e008)
#define s_Platform_init_0063e060 ((char*)0x0063e060)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef FpsTimer* (BEA_THISCALL* FUN_00423650_t)(uint32_t);
static const bea_guard<FUN_00423650_t> FUN_00423650 = {(FUN_00423650_t)0x00423650};
typedef uint32_t (BEA_THISCALL* FUN_00423680_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00423680_t> FUN_00423680 = {(FUN_00423680_t)0x00423680};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_CDECL* FUN_005016b0_t)(void);
static const bea_guard<FUN_005016b0_t> FUN_005016b0 = {(FUN_005016b0_t)0x005016b0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_005154e0(void * this_)
{
  void *pvVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_00441740(&DAT_0066eb90,s_Platform_init_0063e060);
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x38), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_PCPlatform_cpp_0063e03c), bea_arg(0x1b));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_00423650(bea_arg(pvVar1));
  }
  *(void **)this_ = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  FUN_00423680(bea_arg(pvVar1), bea_arg(0x3f800000));
  QueryPerformanceFrequency((LARGE_INTEGER *)((int)this_ + 8));
  *(undefined4 *)((int)this_ + 0x10) = 0x3f800000;
  if ((DAT_00662f00 == 0) || (DAT_00662dec != 0)) {
    CRenderThing__vslot3(s_Vertex_shader_suppport_ENABLED_0063e01c);
    DAT_0063c108 = 1;
  }
  FUN_00441740(&DAT_0066eb90,s_Initting_shaders_0063e008);
  FUN_005016b0();
  FUN_00441740(&DAT_0066eb90,&DAT_0062b13c);
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005154e0, ap_005154e0));
