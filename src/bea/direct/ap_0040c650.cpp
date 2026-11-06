// auto-ported from 0040c650_FUN_0040c650.c (FUN_0040c650, 193 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
typedef int (BEA_CDECL* FUN_0040f2f0_t)(uint32_t);
static const bea_guard<FUN_0040f2f0_t> FUN_0040f2f0 = {(FUN_0040f2f0_t)0x0040f2f0};
typedef uint32_t (BEA_THISCALL* FUN_00412650_t)(uint32_t);
static const bea_guard<FUN_00412650_t> FUN_00412650 = {(FUN_00412650_t)0x00412650};
typedef uint32_t (BEA_THISCALL* FUN_004146b0_t)(uint32_t);
static const bea_guard<FUN_004146b0_t> FUN_004146b0 = {(FUN_004146b0_t)0x004146b0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static void BEA_THISCALL ap_0040c650(void * this_)
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = FUN_0040f2f0(bea_arg(*(undefined4 *)((int)this_ + 0x600)));
  if (*(int *)((int)this_ + 0x4b0) != iVar2) {
    *(int *)((int)this_ + 0x4b0) = iVar2;
    *(undefined4 *)((int)this_ + 0xfc) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this_ + 0xf8) = *(undefined4 *)(iVar2 + 0x1c);
    if (*(void **)((int)this_ + 0x57c) != (void *)0x0) {
      FUN_00412650(bea_arg(*(void **)((int)this_ + 0x57c)));
    }
    if (*(void **)((int)this_ + 0x578) != (void *)0x0) {
      FUN_004146b0(bea_arg(*(void **)((int)this_ + 0x578)));
    }
    puVar3 = (undefined4 *)((int)this_ + 0x52c);
    iVar4 = 6;
    do {
      puVar3[6] = 0;
      iVar1 = *(int *)(*(int *)((int)this_ + 0x4b0) + (-0x4bc - (int)this_) + (int)puVar3);
      puVar3[0xc] = iVar1;
      if (iVar1 == 0) {
        *puVar3 = *(undefined4 *)(*(int *)((int)this_ + 0x4b0) + (-0x4a4 - (int)this_) + (int)puVar3);
      }
      else {
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (BEA_LOOP_GUARD((iVar4 != 0)));
    FUN_00441740(&DAT_0066f580,*(undefined4 *)(iVar2 + 0xa8));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c650, ap_0040c650));
