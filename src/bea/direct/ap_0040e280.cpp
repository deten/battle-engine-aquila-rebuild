// auto-ported from 0040e280_vslot1.c (CInitThing::vslot1, 1354 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (6 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CInitThing;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static void BEA_THISCALL ap_0040e280(CInitThing * this_, undefined4 param_1, void *param_2)
{
  void *this_00;
  char cVar1;
  
  this_00 = param_2;
  if ((short)param_1 < 0x11) {
    FUN_00548570(bea_arg(param_2), bea_arg(this_ + 4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x14), bea_arg(0x30));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x44), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x48), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x4c), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x50), bea_arg(0x10));
    FUN_00548570(bea_arg(this_00), bea_arg(&param_2), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x60), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 100), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa0), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa4), bea_arg(4));
    return;
  }
  if ((short)param_1 < 0x14) {
    FUN_00548570(bea_arg(param_2), bea_arg(this_ + 4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x44), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x48), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x4c), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 100), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa0), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa4), bea_arg(4));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0xac), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0xac] != (CInitThing)0x0)));
    return;
  }
  if ((short)param_1 < 0x1c) {
    FUN_00548570(bea_arg(param_2), bea_arg(this_ + 4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x44), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x48), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x4c), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 100), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa0), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa4), bea_arg(4));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0xac), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0xac] != (CInitThing)0x0)));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x1ac), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x1ac] != (CInitThing)0x0)));
    return;
  }
  if ((short)param_1 < 0x22) {
    FUN_00548570(bea_arg(param_2), bea_arg(this_ + 4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x44), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x48), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x4c), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 100), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa0), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa4), bea_arg(4));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0xac), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0xac] != (CInitThing)0x0)));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x1ac), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x1ac] != (CInitThing)0x0)));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x2ac), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x2ac] != (CInitThing)0x0)));
    return;
  }
  if ((short)param_1 < 0x2e) {
    FUN_00548570(bea_arg(param_2), bea_arg(this_ + 4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x44), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x48), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x4c), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 100), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa0), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa4), bea_arg(4));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0xac), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0xac] != (CInitThing)0x0)));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x1ac), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x1ac] != (CInitThing)0x0)));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x2ac), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x2ac] != (CInitThing)0x0)));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3ac), bea_arg(4));
    return;
  }
  FUN_00548570(bea_arg(param_2), bea_arg(this_ + 4), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 8), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xc), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x44), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x48), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x4c), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 100), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa0), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa4), bea_arg(4));
  cVar1 = -1;
  do {
    cVar1 = cVar1 + '\x01';
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0xac), bea_arg(1));
  } while (BEA_LOOP_GUARD((this_[cVar1 + 0xac] != (CInitThing)0x0)));
  cVar1 = -1;
  do {
    cVar1 = cVar1 + '\x01';
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x1ac), bea_arg(1));
  } while (BEA_LOOP_GUARD((this_[cVar1 + 0x1ac] != (CInitThing)0x0)));
  cVar1 = -1;
  do {
    cVar1 = cVar1 + '\x01';
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x2ac), bea_arg(1));
  } while (BEA_LOOP_GUARD((this_[cVar1 + 0x2ac] != (CInitThing)0x0)));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3ac), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3b0), bea_arg(4));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040e280, ap_0040e280));
