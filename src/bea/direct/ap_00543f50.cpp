// auto-ported from 00543f50_FUN_00543f50.c (FUN_00543f50, 232 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008aa8bc GLOBAL_AT(int, 0x008aa8bc)
#define s_C__dev_ONSLAUGHT2_DXImposter_cpp_006508cc ((char*)0x006508cc)
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_THISCALL* FUN_00488a70_t)(uint32_t);
static const bea_guard<FUN_00488a70_t> FUN_00488a70 = {(FUN_00488a70_t)0x00488a70};
typedef int (BEA_CDECL* FUN_004ab330_t)(uint32_t);
static const bea_guard<FUN_004ab330_t> FUN_004ab330 = {(FUN_004ab330_t)0x004ab330};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_CDECL ap_00543f50(void *param_1)
{
  undefined4 uVar1;
  undefined4 *this_local;
  undefined4 uVar2;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  this_local = (undefined4 *)
         FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x4c), bea_arg(0x39), bea_arg(s_C__dev_ONSLAUGHT2_DXImposter_cpp_006508cc), bea_arg(0x7e3));
  if (this_local == (undefined4 *)0x0) {
    this_local = (undefined4 *)0x0;
  }
  else {
    this_local[0xc] = 0;
    this_local[0xe] = 0;
    this_local[0xf] = 0;
    DAT_008aa8bc = DAT_008aa8bc + 1;
  }
  uVar1 = *this_local;
  FUN_00423910(bea_arg(param_1));
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(param_1), bea_arg(this_local), bea_arg(0x4c), bea_arg(1));
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(param_1), bea_arg(&local_4), bea_arg(4), bea_arg(1));
  uVar2 = FUN_004ab330(bea_arg(local_4));
  this_local[9] = uVar2;
  *this_local = 0;
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(this_local[0x11] * this_local[0x10] * 0x18), bea_arg(0x39), bea_arg(s_C__dev_ONSLAUGHT2_DXImposter_cpp_006508cc), bea_arg(0x807));
  this_local[0xf] = uVar2;
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(param_1), bea_arg(this_local[0xf]), bea_arg(0x18), bea_arg(this_local[0x11] * this_local[0x10]));
  *this_local = uVar1;
  FUN_00488a70(bea_arg(this_local));
  return (undefined4 *)(this_local);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00543f50, ap_00543f50));
