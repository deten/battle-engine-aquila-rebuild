// auto-ported from 00460a40_FUN_00460a40.c (FUN_00460a40, 255 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
typedef undefined4 (BEA_STDCALL* FUN_00461a50_t)(uint32_t);
static const bea_guard<FUN_00461a50_t> FUN_00461a50 = {(FUN_00461a50_t)0x00461a50};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static void BEA_THISCALL ap_00460a40(void * this_)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  int *local_8;
  
  iVar3 = *(int *)((int)this_ + 0x345c) + -1;
  if (iVar3 < 0) {
    return;
  }
  local_8 = (int *)((int)this_ + iVar3 * 4 + 4);
  iVar1 = iVar3 * 6;
  do {
    iVar5 = *local_8 + -1;
    if (-1 < iVar5) {
      puVar4 = (undefined4 *)((int)this_ + (iVar1 + iVar5) * 4 + 0xcc);
      do {
        iVar2 = FUN_00461a50(bea_arg(*puVar4));
        if (iVar2 != 0) {
          *(int *)((int)this_ + 0x346c) = iVar5;
          *(int *)((int)this_ + 0x3468) = iVar3;
          fVar6 = (float10)FUN_0055dfe7((double)(360.0f / (float)(*(int *)((int)this_ + 0x345c) + -1))
                                       );
          fVar6 = (float10)*(int *)((int)this_ + 0x3468) * (float10)60.0f -
                  (float10)*(int *)((int)this_ + 0x3468) * fVar6;
          *(float *)((int)this_ + 0x3464) = (float)fVar6;
          *(float *)((int)this_ + 0x3460) = (float)fVar6;
          fVar6 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
          *(float *)((int)this_ + 0x3470) = (float)fVar6;
          fVar6 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
          *(float *)((int)this_ + 0x3474) = (float)fVar6;
          DAT_0089d94c = *(undefined4 *)((int)this_ + (iVar5 + iVar3 * 6) * 4 + 0xcc);
          return;
        }
        iVar5 = iVar5 + -1;
        puVar4 = puVar4 + -1;
      } while (BEA_LOOP_GUARD((-1 < iVar5)));
    }
    iVar3 = iVar3 + -1;
    local_8 = local_8 + -1;
    iVar1 = iVar1 + -6;
  } while (BEA_LOOP_GUARD((-1 < iVar3)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00460a40, ap_00460a40));
