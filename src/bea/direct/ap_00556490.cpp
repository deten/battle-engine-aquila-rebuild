// auto-ported from 00556490_FUN_00556490.c (FUN_00556490, 259 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_DXSurf_cpp_006525a0 ((char*)0x006525a0)
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_005565d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005565d0_t> FUN_005565d0 = {(FUN_005565d0_t)0x005565d0};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void BEA_THISCALL ap_00556490(void * this_, uint *param_1)
{
  int *piVar1;
  uint *this_00;
  int *piVar2;
  int iVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_1;
  if (7 < *param_1) {
    FUN_00423910(bea_arg(param_1));
    piVar1 = (int *)((int)this_ + 4);
    FUN_00423960(bea_arg(param_1), bea_arg(piVar1), bea_arg(4), bea_arg(1));
    iVar3 = *piVar1;
    if (iVar3 != 0) {
      piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 * 0xc + 4), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXSurf_cpp_006525a0), bea_arg(0x38));
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        *piVar2 = iVar3;
        piVar2 = piVar2 + 1;
        FUN_0055dc20(bea_arg(piVar2), bea_arg(0xc), bea_arg(iVar3), bea_arg(((void*)0x005565a0)), bea_arg(((void*)0x005565b0)));
      }
      *(int **)this_ = piVar2;
    }
    iVar3 = 0;
    param_1 = (uint *)0x0;
    if (0 < *piVar1) {
      do {
        FUN_00423910(bea_arg(this_00));
        FUN_00423960(bea_arg(this_00), bea_arg(iVar3 + 8 + *(int *)this_), bea_arg(4), bea_arg(1));
        FUN_005565d0(bea_arg((void *)(iVar3 + *(int *)this_)), bea_arg(this_00));
        param_1 = (uint *)((int)param_1 + 1);
        iVar3 = iVar3 + 0xc;
      } while (BEA_LOOP_GUARD(((int)param_1 < *piVar1)));
    }
    *(undefined4 *)((int)this_ + 0xc) = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00556490, ap_00556490));
