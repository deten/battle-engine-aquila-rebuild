// auto-ported from 004d7b10_vslot9.c (CRocket::vslot9, 334 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CActor;
typedef char CRocket;
#define s_m_rocket_msh_00628cf0 ((char*)0x00628cf0)
typedef int (BEA_THISCALL* CActor__vslot9_t)(uint32_t, uint32_t);
static CActor__vslot9_t const CActor__vslot9 = (CActor__vslot9_t)0x004011e0;
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static FUN_00516580_t const FUN_00516580 = (FUN_00516580_t)0x00516580;
typedef uint32_t (BEA_CDECL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_0055db0a_t const FUN_0055db0a = (FUN_0055db0a_t)0x0055db0a;
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_0055dc20_t const FUN_0055dc20 = (FUN_0055dc20_t)0x0055dc20;

static uint32_t BEA_THISCALL ap_004d7b10(CRocket * this_, int param_1)
{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  char local_42c [1024];
  CRocket *local_2c;
  undefined4 local_10;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x120;
  FUN_0055dc20(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
  if (this_ == (CRocket *)0x0) {
    local_2c = (CRocket *)0x0;
  }
  else {
    local_2c = this_ + 8;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_m_rocket_msh_00628cf0;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = local_42c;
  for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  piVar3 = (int *)FUN_00516580(1);
  *(int **)(this_ + 0x30) = piVar3;
  if (piVar3 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar3, 0x4, local_42c);
  }
  fVar8 = (float10)bea_vcall<float10>(this_, 0x40);
  iVar2 = *(int *)(param_1 + 0x3ac);
  *(float *)(param_1 + 0xa8) = (float)fVar8;
  *(int *)(this_ + 0xe4) = iVar2;
  if (iVar2 != 0) {
    bea_vcall<uint32_t>(this_, 0x58);
  }
  *(undefined4 *)(this_ + 0xe8) = 0x41c80000;
  *(undefined4 *)(this_ + 0xe0) = 1;
  CActor__vslot9(bea_arg((CActor *)this_), bea_arg(param_1));
  return FUN_0055db0a(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f80)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d7b10, ap_004d7b10));
