// auto-ported from 005335d0_FUN_005335d0.c (FUN_005335d0, 135 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089c7f0 GLOBAL_AT(int, 0x0089c7f0)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_0089c528 GLOBAL_AT(int, 0x0089c528)
#define _DAT_0089c528 GLOBAL_AT(undefined4*, 0x0089c528)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0089c5e0 GLOBAL_AT(int, 0x0089c5e0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef uint32_t (BEA_THISCALL* FUN_00539980_t)(uint32_t);
static const bea_guard<FUN_00539980_t> FUN_00539980 = {(FUN_00539980_t)0x00539980};
typedef uint32_t (BEA_THISCALL* FUN_00539990_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00539990_t> FUN_00539990 = {(FUN_00539990_t)0x00539990};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_005335d0(void * this_, undefined4 param_1)
{
  if ((DAT_0089c7f0 == 0) && (DAT_008a9ac0 != 4)) {
    _DAT_0089c528 =
         (undefined4 *)
         FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x10d));
    if (_DAT_0089c528 == (undefined4 *)0x0) {
      _DAT_0089c528 = (undefined4 *)0x0;
    }
    else {
      *_DAT_0089c528 = ((void*)0x005e4af8);
      _DAT_0089c528[1] = param_1;
    }
    if (DAT_008a9ac0 == 4) {
      if (_DAT_0089c528 != (undefined4 *)0x0) {
        bea_vcall<uint32_t>(_DAT_0089c528, 0x0, 1);
      }
      FUN_00539980(bea_arg(&DAT_0089c5e0));
      return;
    }
    FUN_00539990(bea_arg(&DAT_0089c5e0), bea_arg(*(undefined4 *)((int)this_ + 0xc)), bea_arg(1), bea_arg(&DAT_0089c528), bea_arg(1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005335d0, ap_005335d0));
