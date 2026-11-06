// auto-ported from 0042e880_FUN_0042e880.c (FUN_0042e880, 110 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066e99c GLOBAL_AT(int, 0x0066e99c)
#define s_C__dev_ONSLAUGHT2_CPhysicsScript_0062568c ((char*)0x0062568c)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_CDECL ap_0042e880(void)
{
  void *this_local;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_local = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_0062568c), bea_arg(0x10));
  if (this_local != (void *)0x0) {
    FUN_004e5840(bea_arg(this_local));
    DAT_0066e99c = this_local;
    return;
  }
  DAT_0066e99c = (void *)0x0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042e880, ap_0042e880));
