// auto-ported from 005102a0_FUN_005102a0.c (FUN_005102a0, 626 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008553e8 GLOBAL_AT(int, 0x008553e8)
#define DAT_008553ec GLOBAL_AT(int, 0x008553ec)
#define DAT_008553f0 GLOBAL_AT(int, 0x008553f0)
#define DAT_008553f4 GLOBAL_AT(int, 0x008553f4)
#define DAT_008553f8 GLOBAL_AT(int, 0x008553f8)
#define DAT_008553fc GLOBAL_AT(int, 0x008553fc)
#define DAT_00855400 GLOBAL_AT(int, 0x00855400)
#define DAT_00855404 GLOBAL_AT(int, 0x00855404)
#define DAT_00855408 GLOBAL_AT(int, 0x00855408)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798 ((char*)0x0063d798)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_CDECL ap_005102a0(void)
{
  void *pvVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x12d));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(pvVar1));
  }
  DAT_008553e8 = pvVar1;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x12e));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(pvVar1));
  }
  DAT_008553ec = pvVar1;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x12f));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(pvVar1));
  }
  DAT_008553f0 = pvVar1;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x130));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(pvVar1));
  }
  DAT_008553f4 = pvVar1;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x131));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(pvVar1));
  }
  DAT_008553f8 = pvVar1;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x132));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(pvVar1));
  }
  DAT_008553fc = pvVar1;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x133));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(pvVar1));
  }
  DAT_00855400 = pvVar1;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x134));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(pvVar1));
  }
  DAT_00855404 = pvVar1;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x135));
  if (pvVar1 != (void *)0x0) {
    FUN_004e5840(bea_arg(pvVar1));
    DAT_00855408 = pvVar1;
    return;
  }
  DAT_00855408 = (void *)0x0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005102a0, ap_005102a0));
