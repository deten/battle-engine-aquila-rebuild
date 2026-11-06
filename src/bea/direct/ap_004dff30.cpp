// auto-ported from 004dff30_FUN_004dff30.c (FUN_004dff30, 131 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00896994 GLOBAL_AT(int, 0x00896994)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_005179b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005179b0_t> FUN_005179b0 = {(FUN_005179b0_t)0x005179b0};

static void BEA_THISCALL ap_004dff30(void * this_)
{
  int *this_00;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this_ = ((void*)0x005dee6c);
  for (this_00 = DAT_00896994; BEA_LOOP_GUARD((this_00 != (int *)0x0)); this_00 = (int *)this_00[0x1d]) {
    if ((void *)this_00[3] == this_) {
      if ((this_00[0x1f] == 1) && ((int *)*this_00 != (int *)0x0)) {
        bea_vcall<uint32_t>(*this_00, 0x18, this_00);
      }
      if (-1 < this_00[1]) {
        FUN_005179b0(bea_arg(&DAT_00896988), bea_arg(this_00), bea_arg(1));
      }
      *(undefined1 *)(this_00 + 2) = 0;
      FUN_00401000(bea_arg(this_00), bea_arg(0));
    }
  }
  pvVar1 = DAT_00896988;
  pvVar3 = (void *)0x0;
  if (DAT_00896988 != (void *)0x0) {
    do {
      pvVar2 = pvVar1;
      if (pvVar2 == this_) break;
      pvVar1 = *(void **)((int)pvVar2 + 0x74);
      pvVar3 = pvVar2;
    } while (BEA_LOOP_GUARD((*(void **)((int)pvVar2 + 0x74) != (void *)0x0)));
    if (pvVar3 != (void *)0x0) {
      *(undefined4 *)((int)pvVar3 + 0x74) = *(undefined4 *)((int)this_ + 0x74);
      return;
    }
  }
  DAT_00896988 = (void *)*(undefined4 *)((int)this_ + 0x74);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dff30, ap_004dff30));
