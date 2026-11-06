// hand-ported from 00472240_FUN_00472240.c (FUN_00472240, 46 bytes)
// @hand-fixed 2026-10-29 variadic cdecl (obj, fmt, ...): 0x472249 `lea eax,[esp+0x10]` passes the address of the first variadic slot as the va_list to 0x55e38c (vsprintf: count 0x7fffffff at 0x55e3ac, 3 pushes, `add esp,0xc`); returns vsprintf's count in EAX (0x472256 leaves it there to the ret); plain ret
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

// 0x55e38c is vsprintf(char *buf, const char *fmt, va_list ap) (crt_sigs.py calls it _snprintf;
// its body sets the count to 0x7fffffff and calls _output with the three arguments)
typedef int (BEA_CDECL* FUN_0055e38c_t)(void *, void *, void *);
static const bea_guard<FUN_0055e38c_t> FUN_0055e38c = {(FUN_0055e38c_t)0x0055e38c};

// (obj, fmt, ...): param_3 is the first variadic slot; only its address is used
static int BEA_CDECL ap_00472240(int param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;

  iVar1 = FUN_0055e38c(*(void **)(param_1 + 10000), (void *)(uintptr_t)param_2, (void *)&param_3);
  *(int *)(param_1 + 10000) = *(int *)(param_1 + 10000) + iVar1;
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472240, ap_00472240));
