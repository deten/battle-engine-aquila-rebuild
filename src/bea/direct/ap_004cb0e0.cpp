// auto-ported from 004cb0e0_FUN_004cb0e0.c (FUN_004cb0e0, 206 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_009c63f0 GLOBAL_AT(int, 0x009c63f0)
#define DAT_009c63f4 GLOBAL_AT(int, 0x009c63f4)
#define DAT_0082b3ec GLOBAL_AT(int, 0x0082b3ec)
#define s_C__dev_ONSLAUGHT2_ParticleManage_00630e60 ((char*)0x00630e60)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void * BEA_THISCALL ap_004cb0e0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 4) = 0;
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1b004), bea_arg(0x10), bea_arg(s_C__dev_ONSLAUGHT2_ParticleManage_00630e60), bea_arg(0x1a6));
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar1 + 1;
    *puVar1 = 0x200;
    FUN_0055dc20(bea_arg(puVar4), bea_arg(0xd8), bea_arg(0x200), bea_arg(((void*)0x00402d20)), bea_arg(((void*)0x00459990)));
  }
  *(undefined4 **)this_ = puVar4;
  iVar2 = 0;
  do {
    *(int *)(iVar2 + 0x68 + *(int *)this_) = DAT_009c63f0;
    iVar3 = iVar2 + 0xd8;
    DAT_009c63f0 = iVar2 + *(int *)this_;
    iVar2 = iVar3;
  } while (BEA_LOOP_GUARD((iVar3 < 0x1b000)));
  *(void **)((int)this_ + 4) = DAT_009c63f4;
  DAT_009c63f4 = this_;
  DAT_0082b3ec = DAT_0082b3ec + 1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cb0e0, ap_004cb0e0));
