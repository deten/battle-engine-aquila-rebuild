// auto-ported from 00445250_vslot9.c (CDiveBomber::vslot9, 302 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CDiveBomber;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define s_C__dev_ONSLAUGHT2_DiveBomber_cpp_006289c0 ((char*)0x006289c0)
#define PTR_DAT_0062359c GLOBAL_AT(void*, 0x0062359c)
typedef uint32_t (BEA_THISCALL* CAirUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CAirUnit__vslot9_t> CAirUnit__vslot9 = {(CAirUnit__vslot9_t)0x00402ad0};
typedef void * (BEA_THISCALL* FUN_00402150_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00402150_t> FUN_00402150 = {(FUN_00402150_t)0x00402150};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00445250(CDiveBomber * this_, undefined4 param_1)
{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  CAirUnit__vslot9(bea_arg((CAirUnit *)this_), bea_arg(param_1));
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x74), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_DiveBomber_cpp_006289c0), bea_arg(0x12));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_004fe710(bea_arg(puVar2), bea_arg(this_), bea_arg(param_1));
    *puVar2 = ((void*)0x005db1ac);
    puVar2[0x18] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1b] = 0;
  }
  *(undefined4 **)(this_ + 0x13c) = puVar2;
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x30), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_DiveBomber_cpp_006289c0), bea_arg(0x13));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00402150(bea_arg(puVar2), bea_arg(this_));
    *puVar2 = ((void*)0x005db180);
  }
  *(undefined4 **)(this_ + 0x208) = puVar2;
  iVar1 = *(int *)this_;
  uVar4 = 1;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, &PTR_DAT_0062359c,1);
  uVar4 = FUN_004aa630(bea_arg(this_00), bea_arg(uVar4));
  bea_vcall<uint32_t>(this_, 0xf0, uVar4);
  *(undefined4 *)(this_ + 0x280) = 1;
  *(undefined4 *)(this_ + 0x27c) = 0;
  uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar3 = uVar3 & 0x8000ffff;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffff0000) + 1;
  }
  *(float *)(this_ + 0x284) = (float)(int)uVar3 * 9.58738e-05f;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00445250, ap_00445250));
