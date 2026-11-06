// auto-ported from 00552800_FUN_00552800.c (FUN_00552800, 165 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static void BEA_THISCALL ap_00552800(void * this_)
{
  void *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  if (DAT_0089d680 == '\0') {
    piVar5 = (int *)((int)this_ + 0xc);
    puVar4 = (undefined4 *)((int)this_ + 0x50c);
    for (iVar2 = *(int *)((int)this_ + 0x5bc); BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      if (*piVar5 != 0) {
        piVar1 = (int *)((int)this_ + 0x10c);
        for (iVar3 = *(int *)((int)this_ + 0x5bc); BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
          if (*piVar1 == *piVar5) {
            *(undefined1 *)((int)piVar1 + 6) = 0;
            if (*(char *)((int)piVar1 + 5) == '\x01') {
              *(undefined1 *)((int)piVar1 + 5) = 2;
            }
            goto LAB_0055287f;
          }
          piVar1 = piVar1 + 8;
        }
        if (0 < *(int *)((int)this_ + 0x58c)) {
          this_00 = (void *)*puVar4;
          *(undefined1 *)((int)this_00 + 4) = 2;
          *(undefined1 *)((int)this_00 + 5) = 2;
          *(undefined1 *)((int)this_00 + 6) = 0;
          FUN_00401000(bea_arg(this_00), bea_arg(*piVar5));
          *(undefined1 *)((int)this_00 + 8) = 0;
          puVar4 = puVar4 + 1;
          *(int *)((int)this_ + 0x58c) = *(int *)((int)this_ + 0x58c) + -1;
        }
      }
LAB_0055287f:
      piVar5 = piVar5 + 2;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00552800, ap_00552800));
