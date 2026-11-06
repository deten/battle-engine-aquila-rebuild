// auto-ported from 0046f360_FUN_0046f360.c (FUN_0046f360, 126 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_ERROR__invalid_player_num___d__t_0062c150 ((char*)0x0062c150)
typedef uint32_t (BEA_THISCALL* FUN_0042e750_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042e750_t> FUN_0042e750 = {(FUN_0042e750_t)0x0042e750};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_0046fb00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046fb00_t> FUN_0046fb00 = {(FUN_0046fb00_t)0x0046fb00};

static void BEA_THISCALL ap_0046f360(void * this_, int param_1)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this_ + 0x28) < 4) {
    if ((param_1 < 3) && (0 < param_1)) {
      if (param_1 == 1) {
        *(undefined4 *)((int)this_ + 0x28) = 6;
      }
      else if (param_1 == 2) {
        *(undefined4 *)((int)this_ + 0x28) = 7;
      }
      iVar1 = 0;
      puVar2 = (undefined4 *)((int)this_ + 0x2b4);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          FUN_0042e750(bea_arg((void *)*puVar2), bea_arg(0), bea_arg(iVar1));
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (BEA_LOOP_GUARD((iVar1 < 4)));
      *(undefined4 *)((int)this_ + 0x48) = 0x40a00000;
      FUN_0046fb00(bea_arg(this_), bea_arg(0), bea_arg(0));
      return;
    }
    FUN_00441740(&DAT_0066f580,s_ERROR__invalid_player_num___d__t_0062c150,param_1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046f360, ap_0046f360));
