// auto-ported from 00516580_FUN_00516580.c (FUN_00516580, 285 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_PCRTID_cpp_0063e284 ((char*)0x0063e284)
typedef uint32_t (BEA_THISCALL* FUN_004dbb60_t)(uint32_t);
static const bea_guard<FUN_004dbb60_t> FUN_004dbb60 = {(FUN_004dbb60_t)0x004dbb60};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_CDECL ap_00516580(undefined4 param_1)
{
  void *this_local;
  undefined4 *puVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  switch(param_1) {
  case 1:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x50), bea_arg(0x3b), bea_arg(s_C__dev_ONSLAUGHT2_PCRTID_cpp_0063e284), bea_arg(0x11));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[4] = 0;
      *puVar1 = ((void*)0x005deb1c);
      return puVar1;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x34), bea_arg(0x3b), bea_arg(s_C__dev_ONSLAUGHT2_PCRTID_cpp_0063e284), bea_arg(0x12));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[4] = 0;
      *puVar1 = ((void*)0x005deb9c);
      return puVar1;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x5c), bea_arg(0x3b), bea_arg(s_C__dev_ONSLAUGHT2_PCRTID_cpp_0063e284), bea_arg(0x14));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[4] = 0;
      *puVar1 = ((void*)0x005de9c0);
      return puVar1;
    }
    break;
  case 5:
    this_local = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x28), bea_arg(0x3b), bea_arg(s_C__dev_ONSLAUGHT2_PCRTID_cpp_0063e284), bea_arg(0x15));
    if (this_local != (void *)0x0) {
      puVar1 = (undefined4 *)FUN_004dbb60(bea_arg(this_local));
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00516580, ap_00516580));
