// auto-ported from 0041a530_vslot1.c (CMovieCamera::vslot1, 252 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit puStack_c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMovieCamera;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00660588 GLOBAL_AT(undefined4, 0x00660588)
#define DAT_0083d9c0 GLOBAL_AT(undefined4, 0x0083d9c0)

static undefined4 * BEA_THISCALL ap_0041a530(CMovieCamera * this_, undefined4 *param_1)
{
  int iVar1;
  int iVar2;
  CMovieCamera *pCVar3;
  undefined4 *puVar4;
  CMovieCamera *pCVar5;
  undefined4 *puVar6;
  undefined1 local_44 [4];
  undefined4 local_40 [4];
  undefined1 local_30 [36];
  undefined4 *puStack_c = 0;
  
  if (*(float *)(this_ + 0x1c) == DAT_00672fd0) {
    pCVar3 = this_ + 0x20;
    puVar4 = param_1;
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pCVar3;
      pCVar3 = pCVar3 + 4;
      puVar4 = puVar4 + 1;
    }
    return param_1;
  }
  iVar1 = *(int *)(this_ + 4);
  pCVar3 = this_ + 0x20;
  pCVar5 = this_ + 0x58;
  for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar5 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    pCVar5 = pCVar5 + 4;
  }
  if (iVar1 == 0) {
    puVar4 = &DAT_00660588;
    puVar6 = param_1;
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    return param_1;
  }
  if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(iVar1 + 0x30), 0x44, local_30,local_40,local_44,iVar1 + 8);
    puVar4 = local_40;
    pCVar3 = this_ + 0x20;
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      pCVar3 = pCVar3 + 4;
    }
    *(float *)(this_ + 0x1c) = DAT_00672fd0;
    puVar4 = local_40;
    puVar6 = puStack_c;
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    return puStack_c;
  }
  if ((*(uint *)(iVar1 + 0x34) & 0x80000000) != 0) {
    puVar4 = (undefined4 *)(iVar1 + 0x3c);
    puVar6 = param_1;
    for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    return param_1;
  }
  puVar4 = &DAT_0083d9c0;
  puVar6 = param_1;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  return param_1;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0041a530.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
