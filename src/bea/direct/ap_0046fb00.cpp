// auto-ported from 0046fb00_FUN_0046fb00.c (FUN_0046fb00, 127 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (8 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define s_Pause___called_0062c1f8 ((char*)0x0062c1f8)
typedef undefined4 (BEA_CDECL* FUN_0042d3b0_t)(void);
static const bea_guard<FUN_0042d3b0_t> FUN_0042d3b0 = {(FUN_0042d3b0_t)0x0042d3b0};
typedef uint32_t (BEA_THISCALL* FUN_0042e610_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042e610_t> FUN_0042e610 = {(FUN_0042e610_t)0x0042e610};
typedef uint32_t (BEA_THISCALL* FUN_0042e750_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042e750_t> FUN_0042e750 = {(FUN_0042e750_t)0x0042e750};
typedef uint32_t (BEA_THISCALL* FUN_004d0ff0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d0ff0_t> FUN_004d0ff0 = {(FUN_004d0ff0_t)0x004d0ff0};
typedef int (BEA_CDECL* FUN_0055e183_t)(void *, ...);
static const bea_guard<FUN_0055e183_t> FUN_0055e183 = {(FUN_0055e183_t)0x0055e183};

static void BEA_THISCALL ap_0046fb00(void * this_, int param_1, void *param_2)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (1 < DAT_008a9ac0) {
    FUN_0055e183(s_Pause___called_0062c1f8);
    if (*(int *)((int)this_ + 0x2c) == 0) {
      *(undefined4 *)((int)this_ + 0x2c) = 1;
      iVar1 = 0;
      puVar2 = (undefined4 *)((int)this_ + 0x2b4);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          FUN_0042e750(bea_arg((void *)*puVar2), bea_arg(0), bea_arg(iVar1));
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (BEA_LOOP_GUARD((iVar1 < 4)));
      if ((param_1 != 0) && (param_2 != (void *)0x0)) {
        FUN_004d0ff0(bea_arg(*(void **)((int)this_ + 0x2f4)), bea_arg(1));
        FUN_0042d3b0();
        FUN_0042e610(bea_arg(param_2), bea_arg(*(undefined4 *)((int)this_ + 0x2f4)));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046fb00, ap_0046fb00));
