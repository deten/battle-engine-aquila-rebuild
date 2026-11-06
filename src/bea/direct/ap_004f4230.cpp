// auto-ported from 004f4230_FUN_004f4230.c (FUN_004f4230, 194 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_C__dev_ONSLAUGHT2_thing_cpp_006331c0 ((char*)0x006331c0)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef undefined4 (BEA_THISCALL* FUN_0050abc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0050abc0_t> FUN_0050abc0 = {(FUN_0050abc0_t)0x0050abc0};
typedef void * (BEA_THISCALL* FUN_005333b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005333b0_t> FUN_005333b0 = {(FUN_005333b0_t)0x005333b0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004f4230(void * this_, char *param_1)
{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  if (*(int **)((int)this_ + 0x74) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x74), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x74) = 0;
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = FUN_0050abc0(bea_arg(&DAT_00855090), bea_arg(param_1));
    if (iVar1 != 0) {
      param_1 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_thing_cpp_006331c0), bea_arg(0x299));
      if (param_1 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_005333b0(bea_arg(param_1), bea_arg(this_), bea_arg(iVar1));
      }
      *(undefined4 *)((int)this_ + 0x74) = uVar2;
      param_1 = (char *)0xbf800000;
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d1), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f4230, ap_004f4230));
