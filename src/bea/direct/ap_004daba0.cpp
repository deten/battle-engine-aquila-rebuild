// auto-ported from 004daba0_FUN_004daba0.c (FUN_004daba0, 240 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
typedef int (BEA_THISCALL* FUN_00491ea0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00491ea0_t> FUN_00491ea0 = {(FUN_00491ea0_t)0x00491ea0};
typedef int (BEA_THISCALL* FUN_00492020_t)(uint32_t);
static const bea_guard<FUN_00492020_t> FUN_00492020 = {(FUN_00492020_t)0x00492020};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};
typedef uint32_t (BEA_THISCALL* FUN_004f3ac0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f3ac0_t> FUN_004f3ac0 = {(FUN_004f3ac0_t)0x004f3ac0};

static void * BEA_THISCALL ap_004daba0(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x8);
  pvVar4 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*(float *)((int)this_ + 0x1c)), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(*(undefined4 *)((int)this_ + 0x24)), bea_arg(*(undefined4 *)((int)this_ + 0x28)), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0xf0) + 0x90)));
  do {
    if (pvVar4 == (void *)0x0) {
      return (void *)((void *)0x0);
    }
    pvVar4 = (void *)FUN_00492c90(bea_arg(pvVar4));
    if ((((pvVar4 != (void *)0x0) && (pvVar4 != *(void **)((int)this_ + 0xe8))) &&
        ((*(byte *)((int)pvVar4 + 0x34) & 0x10) != 0)) && ((*(byte *)((int)pvVar4 + 0x2c) & 4) == 0)
       ) {
      FUN_004f3ac0(bea_arg(pvVar4), bea_arg(&local_10));
      fVar1 = local_10 - *(float *)((int)this_ + 0x1c);
      fVar2 = local_c - *(float *)((int)this_ + 0x20);
      fVar3 = local_8 - *(float *)((int)this_ + 0x24);
      fVar2 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;   // class 19: the asm's order
      fVar1 = *(float *)(*(int *)((int)this_ + 0xf0) + 0x90);
      if ((fVar2 < fVar1 * fVar1) && (0.25f < fVar2)) {
        return (void *)(pvVar4);
      }
    }
    pvVar4 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004daba0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
