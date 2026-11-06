// auto-ported from 00539990_FUN_00539990.c (FUN_00539990, 207 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (8 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__stack_not_empty_on_c_00650160 ((char*)0x00650160)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_00539420_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539420_t> FUN_00539420 = {(FUN_00539420_t)0x00539420};
typedef uint32_t (BEA_THISCALL* FUN_00539b00_t)(uint32_t);
static const bea_guard<FUN_00539b00_t> FUN_00539b00 = {(FUN_00539b00_t)0x00539b00};

static void BEA_THISCALL ap_00539990(void * this_, int param_1, int param_2, int *param_3, int param_4)
{
  int iVar1;
  
  if (*(int *)((int)this_ + 0x20c) != 0) {
    FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__stack_not_empty_on_c_00650160);
  }
  *(int *)((int)this_ + 8) = param_1;
  if ((*(int *)(param_1 + 0x6c) == 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    *(undefined4 *)((int)this_ + 0x214) = 0;
    *(undefined4 *)((int)this_ + 0x21c) = *(undefined4 *)((int)this_ + 0x20c);
    FUN_00539b00(bea_arg(this_));
    *(undefined4 *)(param_1 + 0x6c) = 1;
  }
  iVar1 = *(int *)(*(int *)((int)this_ + 8) + 0x14 + param_2 * 4);
  *(int *)((int)this_ + 0x214) = iVar1;
  if (iVar1 == -1) {
    if (0 < param_4) {
      do {
        if ((undefined4 *)*param_3 != (undefined4 *)0x0) {
          bea_vcall<uint32_t>(*param_3, 0x0, 1);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
      } while (BEA_LOOP_GUARD((param_4 != 0)));
      return;
    }
  }
  else {
    *(undefined4 *)((int)this_ + 0x21c) = *(undefined4 *)((int)this_ + 0x20c);
    if (0 < param_4) {
      do {
        FUN_00539420(bea_arg((void *)((int)this_ + 0xc)), bea_arg(*param_3));
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
      } while (BEA_LOOP_GUARD((param_4 != 0)));
    }
    FUN_00539b00(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539990, ap_00539990));
