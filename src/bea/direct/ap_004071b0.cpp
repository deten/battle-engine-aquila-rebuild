// auto-ported from 004071b0_vslot81.c (CBattleEngine::vslot81, 342 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CBattleEngine;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)

static int BEA_THISCALL ap_004071b0(CBattleEngine * this_)
{
  undefined4 *puVar1;
  bool bVar2;
  float fVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  
  iVar6 = *(int *)(this_ + 0x5e0);
  bVar2 = false;
  *(int *)(this_ + 0x5e0) = iVar6 + 1;
  fVar3 = bea_fcast<float>(DAT_00672fd0);
  if (*(short *)(this_ + 0x2b4) != 0) {
    puVar1 = *(undefined4 **)(this_ + 0x294);
    *(undefined4 **)(this_ + 0x29c) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*puVar1;
    }
    while (((piVar4 != (int *)0x0))) {
      if ((bea_fcast<float>(piVar4[2]) < fVar3) && (*piVar4 != 0)) {
        return *piVar4;
      }
      puVar1 = *(undefined4 **)(*(int *)(this_ + 0x29c) + 4);
      *(undefined4 **)(this_ + 0x29c) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)*puVar1;
      }
    }
    puVar1 = *(undefined4 **)(this_ + 0x2a4);
    *(undefined4 **)(this_ + 0x2ac) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*puVar1;
    }
    if (piVar4 != (int *)0x0) {
      do {
        if (*piVar4 != 0) {
          bVar2 = true;
        }
        puVar1 = *(undefined4 **)(*(int *)(this_ + 0x2ac) + 4);
        *(undefined4 **)(this_ + 0x2ac) = puVar1;
        if (puVar1 == (undefined4 *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)*puVar1;
        }
      } while (((piVar4 != (int *)0x0)));
      if (bVar2) {
        puVar1 = *(undefined4 **)(this_ + 0x2a4);
        sVar5 = 1;
        *(undefined4 **)(this_ + 0x2ac) = puVar1;
        if (puVar1 == (undefined4 *)0x0) goto LAB_00407295;
        piVar4 = (int *)*puVar1;
        do {
          if (sVar5 == *(short *)(this_ + 0x2b4)) {
            puVar1 = *(undefined4 **)(this_ + 0x2a4);
            *(undefined4 **)(this_ + 0x2ac) = puVar1;
            if (puVar1 == (undefined4 *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)*puVar1;
            }
            sVar5 = 0;
          }
          if (piVar4 == (int *)0x0) {
            puVar1 = *(undefined4 **)(this_ + 0x2a4);
            *(undefined4 **)(this_ + 0x2ac) = puVar1;
            if (puVar1 == (undefined4 *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)*puVar1;
            }
            if (piVar4 == (int *)0x0) {
              return 0;
            }
          }
          if (iVar6 == 0) {
            if (*piVar4 != 0) {
              return *piVar4;
            }
          }
          else {
            iVar6 = iVar6 + -1;
            sVar5 = sVar5 + 1;
          }
          puVar1 = *(undefined4 **)(*(int *)(this_ + 0x2ac) + 4);
          *(undefined4 **)(this_ + 0x2ac) = puVar1;
          if (puVar1 == (undefined4 *)0x0) {
LAB_00407295:
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)*puVar1;
          }
        } while((( true )));
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004071b0, ap_004071b0));
