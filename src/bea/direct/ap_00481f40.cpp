// auto-ported from 00481f40_FUN_00481f40.c (FUN_00481f40, 264 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Y_C__dev_ONSLAUGHT2_Hud_cpp_0062ce76 ((char*)0x0062ce76)
typedef void * (BEA_THISCALL* FUN_004de3a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004de3a0_t> FUN_004de3a0 = {(FUN_004de3a0_t)0x004de3a0};
typedef uint32_t (BEA_THISCALL* FUN_004de850_t)(uint32_t);
static const bea_guard<FUN_004de850_t> FUN_004de850 = {(FUN_004de850_t)0x004de850};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00481f40(void * this_, undefined4 param_1, undefined4 param_2)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(void **)((int)this_ + 0x200) != (void *)0x0) {
    FUN_004de850(bea_arg(*(void **)((int)this_ + 0x200)));
    *(undefined4 *)((int)this_ + 0x200) = 0;
  }
  if ((char)param_2 == '\0') {
    pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x68), bea_arg(0x38), bea_arg(s_Y_C__dev_ONSLAUGHT2_Hud_cpp_0062ce76 + 2), bea_arg(0x13b));
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004de3a0(bea_arg(pvVar1), bea_arg(param_1));
    }
    *(undefined4 *)((int)this_ + 0x200) = uVar2;
    return;
  }
  if (*(void **)((int)this_ + 0x1fc) != (void *)0x0) {
    FUN_004de850(bea_arg(*(void **)((int)this_ + 0x1fc)));
    *(undefined4 *)((int)this_ + 0x1fc) = 0;
  }
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x68), bea_arg(0x38), bea_arg(s_Y_C__dev_ONSLAUGHT2_Hud_cpp_0062ce76 + 2), bea_arg(0x137));
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004de3a0(bea_arg(pvVar1), bea_arg(param_1));
    *(undefined4 *)((int)this_ + 0x1fc) = uVar2;
    return;
  }
  *(undefined4 *)((int)this_ + 0x1fc) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00481f40, ap_00481f40));
