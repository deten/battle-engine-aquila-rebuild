// auto-ported from 00541d30_FUN_00541d30.c (FUN_00541d30, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char IAT;
#define DAT_008a9810 GLOBAL_AT(int, 0x008a9810)
typedef uint32_t (BEA_THISCALL* FUN_00528da0_t)(uint32_t);
static const bea_guard<FUN_00528da0_t> FUN_00528da0 = {(FUN_00528da0_t)0x00528da0};
typedef uint32_t (BEA_THISCALL* FUN_00528dc0_t)(uint32_t);
static const bea_guard<FUN_00528dc0_t> FUN_00528dc0 = {(FUN_00528dc0_t)0x00528dc0};
typedef uint32_t (BEA_STDCALL* _BinkDoFrame_4_t)(uint32_t);
#define _BinkDoFrame_4 (*(_BinkDoFrame_4_t*)0x005d8328)   /* BINKW32.DLL import, via the IAT */
typedef uint32_t (BEA_STDCALL* _BinkNextFrame_4_t)(uint32_t);
#define _BinkNextFrame_4 (*(_BinkNextFrame_4_t*)0x005d8324)   /* BINKW32.DLL import, via the IAT */
typedef uint32_t (BEA_STDCALL* _BinkWait_4_t)(uint32_t);
#define _BinkWait_4 (*(_BinkWait_4_t*)0x005d833c)   /* BINKW32.DLL import, via the IAT */

static undefined4 BEA_THISCALL ap_00541d30(void * this_, undefined4 param_1)
{
  int iVar1;
  
  if (*(int *)((int)this_ + 8) == 0) {
    return 0;
  }
  FUN_00528da0(bea_arg(&DAT_008a9810));
  if (*(int *)((int)this_ + 0x1c) == 0) goto LAB_00541db4;
  if ((char)param_1 == '\0') {
    iVar1 = _BinkWait_4(bea_arg(*(undefined4 *)((int)this_ + 8)));
    if (iVar1 == 0) goto LAB_00541d84;
  }
  else {
    iVar1 = _BinkWait_4(bea_arg(*(undefined4 *)((int)this_ + 8)));
    if (iVar1 != 0) {
      FUN_00528dc0(bea_arg(&DAT_008a9810));
      return 0xffffffff;
    }
LAB_00541d84:
    *(undefined4 *)((int)this_ + 0x1c) = 0;
  }
  if ((*(int *)((int)this_ + 0x1c) == 0) && (*(int *)((int)this_ + 0x18) == 0)) {
    _BinkDoFrame_4(bea_arg(*(undefined4 *)((int)this_ + 8)));
    _BinkNextFrame_4(bea_arg(*(undefined4 *)((int)this_ + 8)));
    *(undefined4 *)((int)this_ + 0x18) = 1;
  }
LAB_00541db4:
  FUN_00528dc0(bea_arg(&DAT_008a9810));
  if (*(int *)(*(int *)((int)this_ + 8) + 0xc) != *(int *)(*(int *)((int)this_ + 8) + 8)) {
    return 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00541d30, ap_00541d30));
