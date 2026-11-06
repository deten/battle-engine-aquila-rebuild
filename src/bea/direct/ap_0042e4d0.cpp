// auto-ported from 0042e4d0_FUN_0042e4d0.c (FUN_0042e4d0, 312 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CGame;
#define DAT_0066e8c8 GLOBAL_AT(char, 0x0066e8c8)
#define DAT_0066e94c GLOBAL_AT(char, 0x0066e94c)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define _DAT_0066e948 GLOBAL_AT(float, 0x0066e948)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_0089be58 GLOBAL_AT(int, 0x0089be58)
#define DAT_0089be64 GLOBAL_AT(int, 0x0089be64)
#define DAT_0089be50 GLOBAL_AT(int, 0x0089be50)
#define DAT_0089be5c GLOBAL_AT(int, 0x0089be5c)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Nothing_to_Control____006255f8 ((char*)0x006255f8)
typedef CGame * (BEA_THISCALL* CGame__vslot3_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<CGame__vslot3_t> CGame__vslot3 = {(CGame__vslot3_t)0x0046f7e0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static void BEA_THISCALL ap_0042e4d0(void * this_, int param_1, undefined4 param_2)
{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  
  bVar4 = (byte)param_1;
  if (param_1 < 0x40) {
    if (param_1 < 0x20) {
      *(uint *)((int)this_ + 0x14) = *(uint *)((int)this_ + 0x14) | 1 << (bVar4 & 0x1f);
    }
    else {
      *(uint *)((int)this_ + 0x18) = *(uint *)((int)this_ + 0x18) | 1 << (bVar4 - 0x20 & 0x1f);
    }
  }
  else {
    *(uint *)((int)this_ + 0x1c) = *(uint *)((int)this_ + 0x1c) | 1 << (bVar4 - 0x40 & 0x1f);
  }
  piVar1 = *(int **)((int)this_ + 4);
  *(int **)((int)this_ + 0xc) = piVar1;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    puVar2 = *(undefined4 **)((int)this_ + 4);
    *(undefined4 **)((int)this_ + 0xc) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    piVar1 = (int *)*puVar2;
    if (DAT_0066e8c8 == '\0') {
      if (DAT_0066e94c == '\0') {
        fVar5 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
        _DAT_0066e948 = (float)fVar5;
      }
      else {
        _DAT_0066e948 = 0.0;
      }
    }
    if (piVar1 != (int *)0x0) {
      if (param_1 < 0x10) {
        iVar3 = bea_vcall<uint32_t>(piVar1, 0x14);
        if (iVar3 == 0) {
          bea_vcall<uint32_t>(piVar1, 0xc, this_,param_1,param_2);
          return;
        }
        CGame__vslot3(bea_arg((CGame *)&DAT_008a9a98), bea_arg(this_), bea_arg(param_1), bea_arg(param_2));
        return;
      }
      if ((((DAT_0089be58 == 0) && (DAT_0089be64 == 0)) || (piVar1 == (int *)&DAT_0089be50)) ||
         (piVar1 == (int *)&DAT_0089be5c)) {
        if ((*(int *)((int)this_ + 0x170) != 0) &&
           (iVar3 = bea_vcall<uint32_t>(piVar1, 0x10), iVar3 != 1)) {
          return;
        }
        bea_vcall<uint32_t>(piVar1, 0xc, this_,param_1,param_2);
      }
    }
    return;
  }
  FUN_00441740(&DAT_0066f580,s_Nothing_to_Control____006255f8);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042e4d0, ap_0042e4d0));
