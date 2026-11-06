// auto-ported from 00501540_FUN_00501540.c (FUN_00501540, 122 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00633d2c GLOBAL_AT(char, 0x00633d2c)
#define DAT_00854e00 GLOBAL_AT(int, 0x00854e00)
typedef uint32_t (BEA_THISCALL* FUN_005005e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005005e0_t> FUN_005005e0 = {(FUN_005005e0_t)0x005005e0};

static void BEA_CDECL ap_00501540(void)
{
  int *piVar1;
  int iVar2;
  void *this_local;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (DAT_00633d2c == '\0') {
    iVar4 = 0;
    this_local = (void *)0x0;
    pvVar3 = DAT_00854e00;
    if (DAT_00854e00 != (void *)0x0) {
      do {
        if (*(char *)((int)pvVar3 + 0x5c) == '\0') {
          iVar2 = *(int *)((int)pvVar3 + 0x1c);
          if (*(int *)((int)pvVar3 + 0x1c) < *(int *)((int)pvVar3 + 100)) {
            iVar2 = *(int *)((int)pvVar3 + 100);
          }
          if (iVar2 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = 0x400;
            if (0x400 < iVar2) {
              do {
                iVar6 = iVar6 * 2;
              } while (BEA_LOOP_GUARD((iVar6 < iVar2)));
            }
          }
          iVar2 = *(int *)((int)pvVar3 + *(int *)((int)pvVar3 + 0x48) * 4 + 0x14);
          if (iVar6 < iVar2) {
            iVar5 = 0;
            do {
              iVar2 = iVar2 >> 1;
              iVar5 = iVar5 + 1;
            } while (BEA_LOOP_GUARD((iVar6 < iVar2)));
            if (iVar4 < iVar5) {
              this_local = pvVar3;
              iVar4 = iVar5;
            }
          }
        }
        piVar1 = (int *)((int)pvVar3 + 0x58);
        pvVar3 = (void *)*piVar1;
      } while (BEA_LOOP_GUARD(((void *)*piVar1 != (void *)0x0)));
      if (this_local != (void *)0x0) {
        FUN_005005e0(bea_arg(this_local), bea_arg(*(undefined4 *)((int)this_local + 100)));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00501540, ap_00501540));
