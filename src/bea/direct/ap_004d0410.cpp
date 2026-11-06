// auto-ported from 004d0410_vslot1.c (CJoystickEnableItem::vslot1, 125 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CJoystickEnableItem;
#define DAT_00889024 GLOBAL_AT(char, 0x00889024)
#define DAT_008892dc GLOBAL_AT(undefined4, 0x008892dc)
#define DAT_00677d70 GLOBAL_AT(int, 0x00677d70)
typedef uint32_t (BEA_CDECL* FUN_00453780_t)(int, ...);
static const bea_guard<FUN_00453780_t> FUN_00453780 = {(FUN_00453780_t)0x00453780};

static void BEA_THISCALL ap_004d0410(CJoystickEnableItem * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0x2c) {
    (&DAT_00889024)[*(int *)(this_ + 0x1c)] = (&DAT_00889024)[*(int *)(this_ + 0x1c)] ^ 1;
    if (((&DAT_00889024)[*(int *)(this_ + 0x1c)] == '\0') && (DAT_008892dc != -1)) {
      puVar3 = &DAT_008892dc;
      do {
        piVar1 = puVar3 + 1;
        iVar2 = 2;
        do {
          if (((*piVar1 == *(int *)(this_ + 0x1c)) && (-1 < piVar1[1])) && (piVar1[1] < 8)) {
            *piVar1 = -1;
          }
          piVar1 = piVar1 + 3;
          iVar2 = iVar2 + -1;
        } while (BEA_LOOP_GUARD((iVar2 != 0)));
        piVar1 = puVar3 + 8;
        puVar3 = puVar3 + 8;
      } while (BEA_LOOP_GUARD((*piVar1 != -1)));
    }
    FUN_00453780(DAT_00677d70);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d0410, ap_004d0410));
