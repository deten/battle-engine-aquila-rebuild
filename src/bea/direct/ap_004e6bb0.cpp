// auto-ported from 004e6bb0_vslot9.c (CNormalSquad::vslot9, 291 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CNormalSquad;
typedef char CSquad;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_008550c0 GLOBAL_AT(int, 0x008550c0)
#define DAT_008550b0 GLOBAL_AT(int, 0x008550b0)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* CSquad__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CSquad__vslot9_t> CSquad__vslot9 = {(CSquad__vslot9_t)0x004e5e70};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004e8100_t)(uint32_t);
static const bea_guard<FUN_004e8100_t> FUN_004e8100 = {(FUN_004e8100_t)0x004e8100};
typedef uint32_t (BEA_THISCALL* FUN_004e83b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e83b0_t> FUN_004e83b0 = {(FUN_004e83b0_t)0x004e83b0};

static uint32_t BEA_THISCALL ap_004e6bb0(CNormalSquad * this_, int param_1)
{
  CNormalSquad *pCVar1;
  float10 fVar2;
  pCVar1 = this_ + 0x1c;
  *(undefined4 *)(this_ + 0xb8) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(this_ + 0x104) = 0;
  *(undefined4 *)(this_ + 0x10c) = 0;
  *(undefined4 *)(this_ + 0xc0) = 0;
  *(undefined4 *)(this_ + 0xbc) = 0;
  *(undefined4 *)pCVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this_ + 0x20) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0x24) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x28) = *(undefined4 *)(param_1 + 0x10);
  fVar2 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(pCVar1)));
  *(float *)(this_ + 0x24) = bea_fcast<float>(fVar2);
  *(undefined4 *)(this_ + 0x120) = 0;
  *(undefined4 *)(this_ + 0x134) = *(undefined4 *)pCVar1;
  *(undefined4 *)(this_ + 0x138) = *(undefined4 *)(this_ + 0x20);
  *(undefined4 *)(this_ + 0x13c) = *(undefined4 *)(this_ + 0x24);
  *(undefined4 *)(this_ + 0x140) = *(undefined4 *)(this_ + 0x28);
  *(undefined4 *)(this_ + 0x124) = *(undefined4 *)pCVar1;
  *(undefined4 *)(this_ + 0x128) = *(undefined4 *)(this_ + 0x20);
  *(undefined4 *)(this_ + 300) = *(undefined4 *)(this_ + 0x24);
  *(undefined4 *)(this_ + 0x130) = *(undefined4 *)(this_ + 0x28);
  CSquad__vslot9(bea_arg((CSquad *)this_), bea_arg(param_1));
  if ((*(int *)(this_ + 0x7c) == 1) || (*(int *)(this_ + 0x7c) == 6)) {
    FUN_004e5b20(bea_arg(&DAT_008550c0), bea_arg(this_));
  }
  if ((*(int *)(this_ + 0x7c) == 0) || (*(int *)(this_ + 0x7c) == 6)) {
    FUN_004e5b20(bea_arg(&DAT_008550b0), bea_arg(this_));
  }
  *(undefined4 *)(this_ + 0xcc) = 0;
  *(undefined4 *)(this_ + 0xf4) = *(undefined4 *)pCVar1;
  *(undefined4 *)(this_ + 0xf8) = *(undefined4 *)(this_ + 0x20);
  *(undefined4 *)(this_ + 0xfc) = *(undefined4 *)(this_ + 0x24);
  *(undefined4 *)(this_ + 0x100) = *(undefined4 *)(this_ + 0x28);
  *(undefined4 *)(this_ + 0x11c) = DAT_00672fd0;
  FUN_004e8100(bea_arg(this_));
  FUN_004e83b0(bea_arg(this_), bea_arg(1));
  return bea_vcall<uint32_t>(this_, 0x108, 0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e6bb0, ap_004e6bb0));
