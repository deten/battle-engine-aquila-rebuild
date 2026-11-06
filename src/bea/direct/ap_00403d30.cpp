// auto-ported from 00403d30_vslot9.c (CAnimal::vslot9, 526 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x440: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CAnimal;
typedef char CComplexThing;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_00660130 GLOBAL_AT(int, 0x00660130)
#define DAT_00660134 GLOBAL_AT(int, 0x00660134)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_bird_msh_00622d48 ((char*)0x00622d48)
#define s_Warning__Unknown_animal_type__d_g_00622d1c ((char*)0x00622d1c)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};
typedef uint32_t (BEA_CDECL* FUN_0042b840_t)(int, undefined4, ...);
static const bea_guard<FUN_0042b840_t> FUN_0042b840 = {(FUN_0042b840_t)0x0042b840};
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

static uint32_t BEA_THISCALL ap_00403d30(CAnimal * this_, int param_1)
{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  CAnimal *pCVar9;
  char *pcVar10;
  alignas(16) uint8_t bea_frame_[0x440] = {};   // the original stack frame (emulate_frame)
  int (&local_438)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x440 - 0x438);
  undefined4 &local_430 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x440 - 0x430);
  char (&local_42c)[1024] = *reinterpret_cast<char (*)[1024]>(bea_frame_ + 0x440 - 0x42c);
  CAnimal * &local_2c = *reinterpret_cast<CAnimal * *>(bea_frame_ + 0x440 - 0x2c);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x440 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x440 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x440 - 0x4);
  *(undefined4 *)(this_ + 0x7c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this_ + 0x80) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this_ + 0x84) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this_ + 0x88) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this_ + 0x90) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0x94) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x98) = *(undefined4 *)(param_1 + 0x10);
  puVar7 = (undefined4 *)(param_1 + 0x14);
  pCVar9 = this_ + 0x9c;
  for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    pCVar9 = pCVar9 + 4;
  }
  *(undefined4 *)(this_ + 0xd0) = 0;
  *(undefined4 *)(this_ + 0xdc) = 0;
  FUN_0055dc20(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
  if (this_ == (CAnimal *)0x0) {
    local_2c = (CAnimal *)0x0;
  }
  else {
    local_2c = this_ + 8;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x3bc);
  this_[0x2c] = (CAnimal)((byte)this_[0x2c] | 2);
  *(undefined4 *)(this_ + 0xd4) = uVar2;
  iVar4 = *(int *)(this_ + 0xd4);
  local_430 = 1;
  if (iVar4 == 0) {
    *(ushort *)(this_ + 0x2c) = *(ushort *)(this_ + 0x2c) | 8;
  }
  else if (iVar4 == 1) {
    uVar5 = 0xffffffff;
    pcVar8 = s_bird_msh_00622d48;
    do {
      pcVar10 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar5 = ~uVar5;
    pcVar8 = pcVar10 + -uVar5;
    pcVar10 = local_42c;
    for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    local_438[0] = _rand();
    *(float *)(this_ + 0xd8) = -((float)local_438[0] * 20.0f * 3.051851e-05f + 40.0f);
  }
  else {
    FUN_0042b840(&DAT_00663498,s_Warning__Unknown_animal_type__d_g_00622d1c,iVar4);
  }
  piVar3 = (int *)FUN_00516580(local_430);
  *(int **)(this_ + 0x30) = piVar3;
  if (piVar3 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar3, 0x4, local_42c);
  }
  CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
  *(undefined4 *)(this_ + 0x24) = *(undefined4 *)(this_ + 0xd8);
  *(CAnimal **)(this_ + 0xcc) = DAT_00660130;
  DAT_00660134 = DAT_00660134 + 1;
  DAT_00660130 = this_;
  if (*(int *)(this_ + 0xd4) != 0) {
    local_438[0] = -0x40800000;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(local_438), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return FUN_0055db0a(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f80)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00403d30, ap_00403d30));
