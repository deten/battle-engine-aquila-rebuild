// auto-ported from 004f7cd0_FUN_004f7cd0.c (FUN_004f7cd0, 96 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-23: the table is indexed in the original's element size (tools/check_table_index.py;
// 0x515970's int-typed key table read another key's state: the first recorded playthrough)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00854d48 GLOBAL_AT(int, 0x00854d48)
#define DAT_00844d40 GLOBAL_AT(int, 0x00844d40)

static undefined1 * BEA_CDECL ap_004f7cd0(char *param_1)
{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  uVar4 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  iVar5 = ~uVar4 - 1;
  DAT_00854d48 = DAT_00854d48 + 1;
  if (3 < DAT_00854d48) {
    DAT_00854d48 = 0;
  }
  iVar2 = DAT_00854d48;
  iVar3 = 0;
  if (0 < iVar5) {
    iVar6 = DAT_00854d48 * 0x1000;
    do {
      ((uint8_t *)&DAT_00844d40)[iVar3 + iVar6] = param_1[iVar3];
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 < iVar5)));
  }
  ((uint8_t *)&DAT_00844d40)[iVar5 + iVar2 * 0x1000] = 0;
  return (undefined1 *)(((uint8_t *)&DAT_00844d40) + iVar2 * 0x1000);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7cd0, ap_004f7cd0));
