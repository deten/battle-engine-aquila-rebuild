// auto-ported from 005042f0_FUN_005042f0.c (FUN_005042f0, 122 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00634070 GLOBAL_AT(int, 0x00634070)
#define DAT_00634554 GLOBAL_AT(int, 0x00634554)
#define DAT_00854e74 GLOBAL_AT(int, 0x00854e74)
#define PTR_s_f_create_eyespace_vertex_00634074 GLOBAL_AT(void*, 0x00634074)
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef int * (BEA_CDECL* FUN_00503f90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00503f90_t> FUN_00503f90 = {(FUN_00503f90_t)0x00503f90};

static void BEA_CDECL ap_005042f0(void *param_1)
{
  void *this_local;
  undefined **ppuVar1;
  int iVar2;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  this_local = param_1;
  FUN_00423960(bea_arg(param_1), bea_arg(&local_4), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(this_local), bea_arg(&param_1), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(this_local), bea_arg(&DAT_00634070), bea_arg(0x4e0), bea_arg(1));
  ppuVar1 = &PTR_s_f_create_eyespace_vertex_00634074;
  do {
    *ppuVar1 = (undefined *)0x0;
    ppuVar1 = ppuVar1 + 3;
  } while (BEA_LOOP_GUARD((ppuVar1 < &DAT_00634554)));
  iVar2 = 0;
  DAT_00854e74 = local_4;
  if (0 < (int)param_1) {
    do {
      FUN_00503f90(bea_arg(this_local), bea_arg(iVar2));
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < (int)param_1)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005042f0, ap_005042f0));
