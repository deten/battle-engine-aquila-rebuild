// auto-ported from 004a3bb0_FUN_004a3bb0.c (FUN_004a3bb0, 41 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0070486c GLOBAL_AT(int, 0x0070486c)
#define DAT_00704874 GLOBAL_AT(int, 0x00704874)
#define DAT_00704870 GLOBAL_AT(int, 0x00704870)
typedef uint32_t (BEA_THISCALL* FUN_004a3c30_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a3c30_t> FUN_004a3c30 = {(FUN_004a3c30_t)0x004a3c30};

static void BEA_CDECL ap_004a3bb0(void)
{
  void *this_local;
  
  this_local = DAT_0070486c;
  DAT_0070486c = (void *)0x0;
  if (this_local != (void *)0x0) {
    FUN_004a3c30(bea_arg(this_local), bea_arg(DAT_00704874), bea_arg(DAT_00704870), bea_arg(1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3bb0, ap_004a3bb0));
