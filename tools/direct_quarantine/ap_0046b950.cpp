// auto-ported from 0046b950_FUN_0046b950.c (FUN_0046b950, 315 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static FUN_00516580_t const FUN_00516580 = (FUN_00516580_t)0x00516580;
typedef uint32_t (BEA_CDECL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_0055db0a_t const FUN_0055db0a = (FUN_0055db0a_t)0x0055db0a;
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_0055dc20_t const FUN_0055dc20 = (FUN_0055dc20_t)0x0055dc20;

static uint32_t BEA_THISCALL ap_0046b950(void * this_, undefined4 *param_1)
{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  float10 fVar10;
  char local_42c [1024];
  void *local_2c;
  undefined4 local_10;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = *param_1;
  *(undefined4 *)((int)this_ + 8) = param_1[1];
  *(undefined4 *)((int)this_ + 0xc) = param_1[2];
  *(undefined4 *)((int)this_ + 0x10) = param_1[3];
  puVar6 = param_1 + 4;
  puVar8 = (undefined4 *)((int)this_ + 0x14);
  for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_0055dc20(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
  uVar4 = 0xffffffff;
  pcVar7 = (char *)(param_1 + 0x10);
  do {
    pcVar9 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar4 = ~uVar4;
  pcVar7 = pcVar9 + -uVar4;
  pcVar9 = local_42c;
  local_2c = this_;
  for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  piVar2 = (int *)FUN_00516580(1);
  *(int **)((int)this_ + 0x58) = piVar2;
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)this_ + 0x48) = 0;
    *(undefined4 *)((int)this_ + 0x4c) = 0;
    *(undefined4 *)((int)this_ + 0x44) = 0;
  }
  else {
    bea_vcall<uint32_t>(piVar2, 0x4, local_42c);
    fVar10 = (float10)bea_vcall<float10>(*(int **)((int)this_ + 0x58), 0x38, 1,(int)this_ + 0x44);
    *(float *)((int)this_ + 0x48) = (float)fVar10;
    *(undefined4 *)((int)this_ + 0x4c) = 0;
  }
  *(undefined4 *)((int)this_ + 0x50) = 1;
  *(undefined4 *)((int)this_ + 0x54) = 200;
  return FUN_0055db0a(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f80)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046b950, ap_0046b950));
