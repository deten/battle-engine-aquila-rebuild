// auto-ported from 0044b060_FUN_0044b060.c (FUN_0044b060, 293 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define _DAT_006755c0 GLOBAL_AT(int, 0x006755c0)
#define s_Size_of_scheduled_event____d_00628d1c ((char*)0x00628d1c)
#define s_C__dev_ONSLAUGHT2_eventmanager_c_00628d3c ((char*)0x00628d3c)
typedef void * (BEA_THISCALL* FUN_004241a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004241a0_t> FUN_004241a0 = {(FUN_004241a0_t)0x004241a0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void BEA_THISCALL ap_0044b060(void * this_)
{
  void *this_00;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x43), bea_arg(s_C__dev_ONSLAUGHT2_eventmanager_c_00628d3c), bea_arg(0x34));
  if (this_00 == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    FUN_004241a0(bea_arg(this_00), bea_arg(0x10), bea_arg(1));
  }
  *(void **)((int)this_ + 0x25b0) = this_00;
  FUN_00441740(&DAT_0066f580,s_Size_of_scheduled_event____d_00628d1c,0x14);
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x61a84), bea_arg(0x43), bea_arg(s_C__dev_ONSLAUGHT2_eventmanager_c_00628d3c), bea_arg(0x37))
  ;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar1 + 1;
    *puVar1 = 20000;
    FUN_0055dc20(bea_arg(puVar3), bea_arg(0x14), bea_arg(20000), bea_arg(((void*)0x0044b190)), bea_arg(((void*)0x004de230)));
  }
  *(undefined4 **)((int)this_ + 0x2c) = puVar3;
  iVar2 = 0;
  do {
    *(int *)(iVar2 + 0x10 + *(int *)((int)this_ + 0x2c)) = iVar2 + 0x14 + *(int *)((int)this_ + 0x2c);
    iVar2 = iVar2 + 0x14;
  } while (BEA_LOOP_GUARD((iVar2 < 0x61a6c)));
  *(undefined4 *)(*(int *)((int)this_ + 0x2c) + 0x61a7c) = 0;
  *(undefined4 *)((int)this_ + 0x28) = *(undefined4 *)((int)this_ + 0x2c);
  _DAT_006755c0 = 0;
  *(undefined4 *)((int)this_ + 4) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044b060, ap_0044b060));
