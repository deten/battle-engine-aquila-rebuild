// auto-ported from 00418920_FUN_00418920.c (FUN_00418920, 199 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00418750_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00418750_t> FUN_00418750 = {(FUN_00418750_t)0x00418750};
typedef uint32_t (BEA_THISCALL* FUN_004187e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004187e0_t> FUN_004187e0 = {(FUN_004187e0_t)0x004187e0};
typedef uint32_t (BEA_THISCALL* FUN_00418880_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00418880_t> FUN_00418880 = {(FUN_00418880_t)0x00418880};

static void BEA_THISCALL ap_00418920(void * this_, int param_1, int param_2, int param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 < *(int *)((int)this_ + 8)) {
    pcVar4 = (char *)(*(int *)(*(int *)((int)this_ + 4) + param_1 * 4) + *(int *)this_);
    iVar2 = param_2 + *pcVar4;
    iVar3 = param_3 + pcVar4[1];
    iVar1 = (int)pcVar4[3];
    pcVar5 = pcVar4 + 4;
    if ((((iVar2 < *(int *)((int)this_ + 0x14)) && (iVar3 < *(int *)((int)this_ + 0x18))) &&
        (-1 < pcVar4[2] + iVar2)) && (-1 < iVar1 + iVar3)) {
      if (iVar2 < 0) {
        FUN_004187e0(bea_arg(this_), bea_arg(pcVar5), bea_arg(iVar2), bea_arg(iVar3), bea_arg(iVar1));
        if ((*(byte *)((int)this_ + 0x1c) & 1) != 0) {
          FUN_00418880(bea_arg(this_), bea_arg(pcVar5), bea_arg(iVar2 + *(int *)((int)this_ + 0x14)), bea_arg(iVar3), bea_arg(iVar1));
        }
      }
      else {
        if (pcVar4[2] + iVar2 < *(int *)((int)this_ + 0x14)) {
          FUN_00418750(bea_arg(this_), bea_arg(pcVar5), bea_arg(iVar2), bea_arg(iVar3), bea_arg(iVar1));
          return;
        }
        FUN_00418880(bea_arg(this_), bea_arg(pcVar5), bea_arg(iVar2), bea_arg(iVar3), bea_arg(iVar1));
        if ((*(byte *)((int)this_ + 0x1c) & 1) != 0) {
          FUN_004187e0(bea_arg(this_), bea_arg(pcVar5), bea_arg(iVar2 - *(int *)((int)this_ + 0x14)), bea_arg(iVar3), bea_arg(iVar1));
          return;
        }
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418920, ap_00418920));
