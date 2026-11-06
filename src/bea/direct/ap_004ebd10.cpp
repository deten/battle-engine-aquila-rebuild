// auto-ported from 004ebd10_FUN_004ebd10.c (FUN_004ebd10, 218 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_009c8010 GLOBAL_AT(int, 0x009c8010)
typedef uint32_t (BEA_THISCALL* FUN_004ebfb0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ebfb0_t> FUN_004ebfb0 = {(FUN_004ebfb0_t)0x004ebfb0};
typedef void * (BEA_THISCALL* FUN_004ec250_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004ec250_t> FUN_004ec250 = {(FUN_004ec250_t)0x004ec250};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004ebd10(void * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = *(undefined4 **)this_;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      piVar5 = (int *)((int)this_ + 0x18);
      iVar4 = 0x40;
      do {
        iVar6 = 0x40;
        do {
          if (*piVar5 != 0) {
            FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*piVar5));
            *piVar5 = 0;
          }
          piVar5 = piVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (BEA_LOOP_GUARD((iVar6 != 0)));
        iVar4 = iVar4 + -1;
      } while (BEA_LOOP_GUARD((iVar4 != 0)));
      if (*(int *)((int)this_ + 0x4018) != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x4018)));
        *(undefined4 *)((int)this_ + 0x4018) = 0;
      }
      return;
    }
    *puVar1 = 0;
    piVar5 = *(int **)this_;
    if (piVar5 != (int *)0x0) {
      if (*piVar5 != 0) {
        FUN_004ebfb0(bea_arg(&DAT_009c8010), bea_arg(*piVar5), bea_arg(1));
      }
      piVar3 = DAT_009c8010;
      if (DAT_009c8010 == piVar5) {
        DAT_009c8010 = (int *)piVar5[8];
      }
      else {
        do {
          piVar2 = piVar3;
          if (piVar2 == (int *)0x0) break;
          piVar3 = (int *)piVar2[8];
        } while (BEA_LOOP_GUARD(((int *)piVar2[8] != piVar5)));
        piVar2[8] = piVar5[8];
      }
      if ((void *)piVar5[2] != (void *)0x0) {
        FUN_004ec250(bea_arg((void *)piVar5[2]), bea_arg(3));
        piVar5[2] = 0;
      }
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar5));
    }
    puVar1 = *(undefined4 **)this_;
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ebd10, ap_004ebd10));
