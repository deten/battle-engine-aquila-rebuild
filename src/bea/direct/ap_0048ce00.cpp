// auto-ported from 0048ce00_vslot1.c (CSpawnerInitThing::vslot1, 2497 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSpawnerInitThing;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static void BEA_THISCALL ap_0048ce00(CSpawnerInitThing * this_, undefined4 param_1, void *param_2)
{
  void *this_00;
  char cVar1;
  int iVar2;
  CSpawnerInitThing *pCVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  CSpawnerInitThing * &local_4 = *reinterpret_cast<CSpawnerInitThing * *>(bea_frame_ + 0x10 - 0x4);
  this_00 = param_2;
  local_4 = this_;
  if ((short)param_1 < 0x11) {
    FUN_00548570(bea_arg(param_2), bea_arg(this_ + 4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x14), bea_arg(0x30));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x44), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x48), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x4c), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x50), bea_arg(0x10));
    FUN_00548570(bea_arg(this_00), bea_arg(&local_4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x60), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(&param_2), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(&param_2), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 100), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0xa0), bea_arg(4));
    pCVar3 = this_ + 0xa4;
  }
  else {
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
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0xac] != (CSpawnerInitThing)0x0)));
      goto LAB_0048d335;
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
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0xac] != (CSpawnerInitThing)0x0)));
      cVar1 = -1;
      do {
        cVar1 = cVar1 + '\x01';
        FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x1ac), bea_arg(1));
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0x1ac] != (CSpawnerInitThing)0x0)));
      goto LAB_0048d335;
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
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0xac] != (CSpawnerInitThing)0x0)));
      cVar1 = -1;
      do {
        cVar1 = cVar1 + '\x01';
        FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x1ac), bea_arg(1));
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0x1ac] != (CSpawnerInitThing)0x0)));
      cVar1 = -1;
      do {
        cVar1 = cVar1 + '\x01';
        FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x2ac), bea_arg(1));
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0x2ac] != (CSpawnerInitThing)0x0)));
      goto LAB_0048d335;
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
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0xac] != (CSpawnerInitThing)0x0)));
      cVar1 = -1;
      do {
        cVar1 = cVar1 + '\x01';
        FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x1ac), bea_arg(1));
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0x1ac] != (CSpawnerInitThing)0x0)));
      cVar1 = -1;
      do {
        cVar1 = cVar1 + '\x01';
        FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x2ac), bea_arg(1));
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0x2ac] != (CSpawnerInitThing)0x0)));
      pCVar3 = this_ + 0x3ac;
    }
    else {
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
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0xac] != (CSpawnerInitThing)0x0)));
      cVar1 = -1;
      do {
        cVar1 = cVar1 + '\x01';
        FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x1ac), bea_arg(1));
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0x1ac] != (CSpawnerInitThing)0x0)));
      cVar1 = -1;
      do {
        cVar1 = cVar1 + '\x01';
        FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x2ac), bea_arg(1));
      } while (BEA_LOOP_GUARD((this_[cVar1 + 0x2ac] != (CSpawnerInitThing)0x0)));
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3ac), bea_arg(4));
      pCVar3 = this_ + 0x3b0;
    }
  }
  FUN_00548570(bea_arg(this_00), bea_arg(pCVar3), bea_arg(4));
LAB_0048d335:
  if ((short)param_1 < 0x11) {
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3bc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c8), bea_arg(4));
    pCVar3 = this_ + 0x3d0;
    iVar2 = 0x100;
    do {
      FUN_00548570(bea_arg(this_00), bea_arg(pCVar3), bea_arg(1));
      pCVar3 = pCVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (BEA_LOOP_GUARD((iVar2 != 0)));
    return;
  }
  if ((short)param_1 < 0x15) {
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3bc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c8), bea_arg(4));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x3d0), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x3d0] != (CSpawnerInitThing)0x0)));
    return;
  }
  if ((short)param_1 < 0x16) {
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3bc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c0), bea_arg(4));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x3d0), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x3d0] != (CSpawnerInitThing)0x0)));
    return;
  }
  if ((short)param_1 < 0x17) {
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3bc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c0), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3ac), bea_arg(4));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x3d0), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x3d0] != (CSpawnerInitThing)0x0)));
    return;
  }
  if ((short)param_1 < 0x19) {
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3bc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c0), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3ac), bea_arg(4));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x3d0), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x3d0] != (CSpawnerInitThing)0x0)));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x2ac), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x2ac] != (CSpawnerInitThing)0x0)));
    return;
  }
  if ((short)param_1 < 0x1c) {
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3bc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3cc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c0), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3ac), bea_arg(4));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x3d0), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x3d0] != (CSpawnerInitThing)0x0)));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x2ac), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x2ac] != (CSpawnerInitThing)0x0)));
    return;
  }
  if ((short)param_1 < 0x22) {
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3bc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3cc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c0), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3ac), bea_arg(4));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x3d0), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x3d0] != (CSpawnerInitThing)0x0)));
    return;
  }
  if (0x2b < (short)param_1) {
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3bc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3cc), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c0), bea_arg(4));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x3d0), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x3d0] != (CSpawnerInitThing)0x0)));
    cVar1 = -1;
    do {
      cVar1 = cVar1 + '\x01';
      FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x4d0), bea_arg(1));
    } while (BEA_LOOP_GUARD((this_[cVar1 + 0x4d0] != (CSpawnerInitThing)0x0)));
    return;
  }
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3bc), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c4), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3cc), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c8), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x3c0), bea_arg(4));
  cVar1 = -1;
  do {
    cVar1 = cVar1 + '\x01';
    FUN_00548570(bea_arg(this_00), bea_arg(this_ + cVar1 + 0x3d0), bea_arg(1));
  } while (BEA_LOOP_GUARD((this_[cVar1 + 0x3d0] != (CSpawnerInitThing)0x0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048ce00, ap_0048ce00));
