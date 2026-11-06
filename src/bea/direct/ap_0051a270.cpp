// auto-ported from 0051a270_FUN_0051a270.c (FUN_0051a270, 201 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_FastVB_cpp_0063fb24 ((char*)0x0063fb24)
typedef void * (BEA_THISCALL* FUN_004fff00_t)(uint32_t);
static const bea_guard<FUN_004fff00_t> FUN_004fff00 = {(FUN_004fff00_t)0x004fff00};
typedef bool (BEA_THISCALL* FUN_00500080_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500080_t> FUN_00500080 = {(FUN_00500080_t)0x00500080};
typedef uint32_t (BEA_STDCALL* FUN_00513d20_t)(uint32_t);
static const bea_guard<FUN_00513d20_t> FUN_00513d20 = {(FUN_00513d20_t)0x00513d20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static int BEA_THISCALL ap_0051a270(void * this_)
{
  void *pvVar1;
  int iVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(int *)this_ != 0) {
    return 0;
  }
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x2c), bea_arg(s_C__dev_ONSLAUGHT2_FastVB_cpp_0063fb24), bea_arg(0x29));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_004fff00(bea_arg(pvVar1));
  }
  *(void **)this_ = pvVar1;
  iVar2 = FUN_00500080(bea_arg(pvVar1), bea_arg(*(undefined4 *)((int)this_ + 0xc)), bea_arg(0x1c), bea_arg(0x144));
  if (iVar2 < 0) {
    if (*(undefined4 **)this_ != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(*(undefined4 **)this_, 0x0, 1);
      *(undefined4 *)this_ = 0;
      return iVar2;
    }
  }
  else {
    FUN_00513d20(bea_arg(*(undefined4 *)this_));
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051a270, ap_0051a270));
