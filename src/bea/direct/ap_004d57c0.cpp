// auto-ported from 004d57c0_FUN_004d57c0.c (FUN_004d57c0, 365 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0082b69c GLOBAL_AT(int, 0x0082b69c)
typedef undefined4 (BEA_THISCALL* FUN_004d5650_t)(uint32_t);
static const bea_guard<FUN_004d5650_t> FUN_004d5650 = {(FUN_004d5650_t)0x004d5650};

static undefined4 BEA_THISCALL ap_004d57c0(void * this_, int param_1)
{
  undefined4 *puVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = *(int *)((int)this_ + 0x60);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    while(BEA_LOOP_GUARD(( true ))) {
      while (BEA_LOOP_GUARD((*(int *)((int)this_ + 0x94) == 0))) {
        puVar1 = *(undefined4 **)
                  (*(int *)((int)this_ + 0x60) +
                  (*(int *)((int)this_ + 0xb4) * *(int *)((int)this_ + 0x68) +
                  *(int *)((int)this_ + 0xb0)) * 4);
        *(undefined4 **)((int)this_ + 0x90) = puVar1;
        if (puVar1 != (undefined4 *)0x0) {
          if ((int)puVar1[2] < 1) {
            sVar3 = -1;
          }
          else {
            DAT_0082b69c = 0;
            sVar3 = *(short *)*puVar1;
          }
          if (sVar3 == -1) {
            *(undefined4 *)((int)this_ + 0x94) = 0;
          }
          else {
            *(int *)((int)this_ + 0x94) = *(int *)((int)this_ + 100) + sVar3 * 0xc;
          }
        }
        iVar2 = *(int *)((int)this_ + 0x94);
        if (iVar2 == 0) goto LAB_004d584d;
        if (((int)*(short *)(iVar2 + 6) != *(int *)((int)this_ + 0x9c)) &&
           ((*(uint *)((int)this_ + 0x8c) & *(uint *)(iVar2 + 8)) != 0)) {
          *(undefined2 *)(*(int *)((int)this_ + 0x94) + 6) = *(undefined2 *)((int)this_ + 0x9c);
          return *(undefined4 *)((int)this_ + 0x94);
        }
      }
      DAT_0082b69c = DAT_0082b69c + 1;
      if (DAT_0082b69c < (*(int **)((int)this_ + 0x90))[2]) {
        sVar3 = *(short *)(**(int **)((int)this_ + 0x90) + DAT_0082b69c * 2);
      }
      else {
        sVar3 = -1;
      }
      if (sVar3 == -1) {
        *(undefined4 *)((int)this_ + 0x94) = 0;
      }
      else {
        *(int *)((int)this_ + 0x94) = *(int *)((int)this_ + 100) + sVar3 * 0xc;
      }
      iVar2 = *(int *)((int)this_ + 0x94);
      if (iVar2 == 0) break;
      if (((int)*(short *)(iVar2 + 6) != *(int *)((int)this_ + 0x9c)) &&
         ((*(uint *)((int)this_ + 0x8c) & *(uint *)(iVar2 + 8)) != 0)) {
        *(undefined2 *)(*(int *)((int)this_ + 0x94) + 6) = *(undefined2 *)((int)this_ + 0x9c);
        return *(undefined4 *)((int)this_ + 0x94);
      }
    }
LAB_004d584d:
    if (param_1 != 0) {
      return 0;
    }
    iVar2 = FUN_004d5650(bea_arg(this_));
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d57c0, ap_004d57c0));
