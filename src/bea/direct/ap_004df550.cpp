// auto-ported from 004df550_vslot9.c (CShell::vslot9, 472 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x470: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CActor;
typedef char CShell;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef int (BEA_THISCALL* CActor__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot9_t> CActor__vslot9 = {(CActor__vslot9_t)0x004011e0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static uint32_t BEA_THISCALL ap_004df550(CShell * this_, undefined4 param_1)
{
  CShell CVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  CShell *pCVar6;
  undefined4 *puVar7;
  CShell *pCVar8;
  alignas(16) uint8_t bea_frame_[0x470] = {};   // the original stack frame (emulate_frame)
  float &fStack_46c = *reinterpret_cast<float *>(bea_frame_ + 0x470 - 0x46c);
  float &fStack_468 = *reinterpret_cast<float *>(bea_frame_ + 0x470 - 0x468);
  undefined4 (&auStack_464)[13] = *reinterpret_cast<undefined4 (*)[13]>(bea_frame_ + 0x470 - 0x464);
  undefined4 &local_430 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x470 - 0x430);
  CShell (&local_42c)[1024] = *reinterpret_cast<CShell (*)[1024]>(bea_frame_ + 0x470 - 0x42c);
  CShell * &local_2c = *reinterpret_cast<CShell * *>(bea_frame_ + 0x470 - 0x2c);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x470 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x470 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x470 - 0x4);
  FUN_0055dc20(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
  if (this_ == (CShell *)0x0) {
    local_2c = (CShell *)0x0;
  }
  else {
    local_2c = this_ + 8;
  }
  uVar3 = 0xffffffff;
  pCVar6 = this_ + 0x110;
  do {
    pCVar8 = pCVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pCVar8 = pCVar6 + 1;
    CVar1 = *pCVar6;
    pCVar6 = pCVar8;
  } while (BEA_LOOP_GUARD((CVar1 != (CShell)0x0)));
  uVar3 = ~uVar3;
  pCVar6 = pCVar8 + -uVar3;
  pCVar8 = local_42c;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar8 = pCVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pCVar8 = *pCVar6;
    pCVar6 = pCVar6 + 1;
    pCVar8 = pCVar8 + 1;
  }
  piVar2 = (int *)FUN_00516580(1);
  *(int **)(this_ + 0x30) = piVar2;
  if (piVar2 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar2, 0x4, local_42c);
  }
  this_[0x2c] = (CShell)((byte)this_[0x2c] & 0xfd);
  CActor__vslot9(bea_arg((CActor *)this_), bea_arg(param_1));
  uVar3 = _rand();
  uVar3 = uVar3 & 0x800000ff;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffff00) + 1;
  }
  fStack_46c = (float)(int)uVar3 * 0.001953125f - 0.25f;
  uVar3 = _rand();
  uVar3 = uVar3 & 0x800000ff;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffff00) + 1;
  }
  fStack_468 = (float)(int)uVar3 * 0.001953125f - 0.25f;
  uVar3 = _rand();
  uVar3 = uVar3 & 0x800000ff;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffff00) + 1;
  }
  FUN_004062d0(bea_arg(auStack_464), bea_arg(fStack_46c), bea_arg(fStack_468), bea_arg((float)(int)uVar3 * 0.001953125f - 0.25f));
  puVar7 = auStack_464;
  pCVar6 = this_ + 0xe0;
  for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    pCVar6 = pCVar6 + 4;
  }
  fStack_46c = DAT_00672fd0 + 4.0f;
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(2000), bea_arg(this_), bea_arg(&fStack_46c), bea_arg(0), bea_arg(0), bea_arg(0));
  return FUN_0055db0a(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f80)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004df550, ap_004df550));
