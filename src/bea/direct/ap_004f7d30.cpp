// auto-ported from 004f7d30_FUN_004f7d30.c (FUN_004f7d30, 99 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-23: the table is indexed in the original's element size (tools/check_table_index.py;
// 0x515970's int-typed key table read another key's state: the first recorded playthrough)
// @hand-fixed 2026-10-28: the returned buffer address too (int-typed global + byte offset was
// scaled by 4: the Load Game screen rejected the person's save as invalid, tools/menu_test.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00854d4c GLOBAL_AT(int, 0x00854d4c)
#define DAT_00840d40 GLOBAL_AT(int, 0x00840d40)
typedef int (BEA_CDECL* FUN_0055e607_t)(uint32_t);
static const bea_guard<FUN_0055e607_t> FUN_0055e607 = {(FUN_0055e607_t)0x0055e607};

static undefined1 * BEA_CDECL ap_004f7d30(undefined1 *param_1)
{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_0055e607(bea_arg(param_1));
  DAT_00854d4c = DAT_00854d4c + 1;
  if (3 < DAT_00854d4c) {
    DAT_00854d4c = 0;
  }
  iVar2 = DAT_00854d4c;
  iVar5 = 0;
  if (0 < iVar3) {
    iVar4 = DAT_00854d4c * 0x1000;
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 2;
      ((uint8_t *)&DAT_00840d40)[iVar5 + iVar4] = uVar1;
      iVar5 = iVar5 + 1;
    } while (BEA_LOOP_GUARD((iVar5 < iVar3)));
  }
  ((uint8_t *)&DAT_00840d40)[iVar3 + iVar2 * 0x1000] = 0;
  return (undefined1 *)((uint8_t *)&DAT_00840d40 + iVar2 * 0x1000);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7d30, ap_004f7d30));
