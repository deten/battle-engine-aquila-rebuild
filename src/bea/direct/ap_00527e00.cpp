// auto-ported from 00527e00_FUN_00527e00.c (FUN_00527e00, 92 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00854dd8 GLOBAL_AT(char, 0x00854dd8)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define s_RM__Failed_CheckVBufValid_on___s_0064bcfc ((char*)0x0064bcfc)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static uint BEA_THISCALL ap_00527e00(void * this_)
{
  if (*(int *)((int)this_ + 0x10) != 0) {
    return CONCAT31((int3)((uint)*(int *)((int)this_ + 0x10) >> 8),1);
  }
  if (DAT_00854dd8 != '\0') {
    FUN_00441740(&DAT_0066eb90,s_RM__Failed_CheckVBufValid_on___s_0064bcfc,*(char **)((int)this_ + 8)
                 ,*(int *)((int)this_ + 0xc));
    if (*(int *)((int)this_ + 0xc) == 0) {
      *(undefined4 *)((int)this_ + 0x10) = 1;
      return 1;
    }
    *(undefined4 *)((int)this_ + 0x10) = 0;
    *(int *)((int)this_ + 0xc) = *(int *)((int)this_ + 0xc) + -1;
  }
  return (uint)(DAT_00854dd8 == '\0');
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00527e00, ap_00527e00));
