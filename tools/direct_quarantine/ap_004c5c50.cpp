// auto-ported from 004c5c50_FUN_004c5c50.c (FUN_004c5c50, 228 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00829e58 GLOBAL_AT(int, 0x00829e58)
#define DAT_0082b39c GLOBAL_AT(int, 0x0082b39c)

static void BEA_THISCALL ap_004c5c50(float this_)
{
  float fVar1;
  float *pfVar2;

  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  fVar3 = this_;
  fVar1 = this_;
  do {
    uVar6 = 0;
    pfVar2 = (float *)(&DAT_00829e58 + iVar7 * 0x40);
    do {
      switch(iVar7) {
      case 0:
        fVar1 = 0.0625f;
        fVar3 = 2.24208e-44;
        this_ = 5.60519e-45;
        break;
      case 1:
        fVar1 = 0.125f;
        fVar3 = 1.12104e-44;
        this_ = 4.2039e-45;
        break;
      case 2:
        fVar1 = 0.25f;
        fVar3 = 5.60519e-45;
        this_ = 2.8026e-45;
        break;
      case 3:
        fVar1 = 0.5f;
        fVar3 = 2.8026e-45;
        this_ = 1.4013e-45;
        break;
      case 4:
        fVar1 = 1.0f;
        fVar3 = 1.4013e-45;
        this_ = 0.0;
      }
      uVar4 = (int)fVar3 - 1U & uVar6;
      iVar5 = (int)uVar6 >> (SUB41(this_,0) & 0x1f);
      uVar6 = uVar6 + 1;
      *pfVar2 = (float)(int)uVar4 * fVar1;
      pfVar2[1] = (float)iVar5 * fVar1;
      pfVar2[2] = fVar1 + *pfVar2;
      pfVar2[3] = fVar1 + pfVar2[1];
      pfVar2 = pfVar2 + 4;
    } while (BEA_LOOP_GUARD(((int)uVar6 < 0x10)));
    iVar7 = iVar7 + 1;
  } while (BEA_LOOP_GUARD((iVar7 < 5)));
  DAT_0082b39c = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c5c50, ap_004c5c50));
