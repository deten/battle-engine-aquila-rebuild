// auto-ported from 004c7db0_FUN_004c7db0.c (FUN_004c7db0, 647 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 check_fild: DAT_0082a358 table is float (fld/fadd/fmul [reg*4+0x82a358] at 0x4c7e61..0x4c8014) -> bea_fcast<float> on its reads instead of (float)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0082b398 GLOBAL_AT(char, 0x0082b398)
#define DAT_0082a358 GLOBAL_AT(undefined4, 0x0082a358)
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_CDECL ap_004c7db0(void)
{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint local_24;
  float local_20;
  
  if (DAT_0082b398 == '\0') {
    DAT_0082b398 = '\x01';
    puVar12 = &DAT_0082a358;
    for (iVar8 = 0x400; ((iVar8 != 0)); iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    local_24 = 0x20;
    do {
      uVar2 = local_24 >> 1;
      iVar8 = uVar2 * 0x50;
      uVar11 = 0;
      do {
        uVar9 = local_24 + uVar11;
        iVar13 = (uVar9 & 0x1f) * 0x20;
        iVar3 = (uVar2 + uVar11 & 0x1f) * 0x20;
        iVar10 = (uVar11 & 0x1f) * 0x20;
        uVar11 = 0;
        do {
          iVar4 = _rand();
          uVar5 = uVar11 & 0x1f;
          iVar7 = uVar5 + iVar13;
          iVar1 = iVar10 + uVar5;
          (&DAT_0082a358)[iVar3 + uVar5] =
               bea_piece32((float)((iVar4 / 3 + -0x1000) * iVar8 >> 0xc) * 0.00024414062f +
               (bea_fcast<float>((&DAT_0082a358)[iVar7]) + bea_fcast<float>((&DAT_0082a358)[iVar1])) * 0.5f);
          iVar6 = _rand();
          uVar5 = local_24 + uVar11;
          iVar4 = (uVar5 & 0x1f) + iVar10;
          uVar11 = uVar11 + uVar2 & 0x1f;
          (&DAT_0082a358)[uVar11 + iVar3] =
               bea_piece32((float)((iVar6 / 3 + -0x1000) * iVar8 >> 0xc) * 0.00024414062f +
               (bea_fcast<float>((&DAT_0082a358)[(uVar5 & 0x1f) + iVar13]) + bea_fcast<float>((&DAT_0082a358)[iVar4]) +
                bea_fcast<float>((&DAT_0082a358)[iVar7]) + bea_fcast<float>((&DAT_0082a358)[iVar1])) * 0.25f);
          iVar7 = _rand();
          (&DAT_0082a358)[uVar11 + iVar10] =
               bea_piece32((float)((iVar7 / 3 + -0x1000) * iVar8 >> 0xc) * 0.00024414062f +
               (bea_fcast<float>((&DAT_0082a358)[iVar4]) + bea_fcast<float>((&DAT_0082a358)[iVar1])) * 0.5f);
          uVar11 = uVar5;
        } while ((((int)uVar5 < 0x20)));
        uVar11 = uVar9;
      } while ((((int)uVar9 < 0x20)));
      local_24 = (int)local_24 >> 1;
    } while (((1 < local_24)));
    local_20 = 0.0f;
    uVar11 = 0;
    do {
      uVar2 = 0;
      do {
        if (local_20 < ABS(bea_fcast<float>((&DAT_0082a358)[(uVar2 & 0x1f) + (uVar11 & 0x1f) * 0x20]))) {
          local_20 = ABS(bea_fcast<float>((&DAT_0082a358)[(uVar2 & 0x1f) + (uVar11 & 0x1f) * 0x20]));
        }
        uVar2 = uVar2 + local_24;
      } while ((((int)uVar2 < 0x20)));
      uVar11 = uVar11 + local_24;
    } while ((((int)uVar11 < 0x20)));
    if (0.0f < local_20) {
      uVar11 = 0;
      do {
        uVar2 = 0;
        do {
          uVar9 = uVar2 & 0x1f;
          uVar2 = uVar2 + local_24;
          iVar8 = uVar9 + (uVar11 & 0x1f) * 0x20;
          (&DAT_0082a358)[iVar8] = bea_piece32((1.0f / local_20) * bea_fcast<float>((&DAT_0082a358)[iVar8]));
        } while ((((int)uVar2 < 0x20)));
        uVar11 = uVar11 + local_24;
      } while ((((int)uVar11 < 0x20)));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c7db0, ap_004c7db0));
