// auto-ported from 00490e30_FUN_00490e30.c (FUN_00490e30, 218 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef uint (BEA_FASTCALL* FUN_0047ea20_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ea20_t> FUN_0047ea20 = {(FUN_0047ea20_t)0x0047ea20};

static void BEA_THISCALL ap_00490e30(void * this_)
{
  short sVar1;
  short sVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int local_14;
  int local_c;
  float *local_4;
  
  local_c = 0;
  local_4 = (float *)((int)this_ + 0x13dc);
  do {
    iVar4 = 0;
    do {
      sVar6 = 0x7fff;
      sVar1 = -0x8000;
      local_14 = 0;
      do {
        iVar5 = 0;
        do {
          sVar2 = FUN_0047ea20(bea_arg(this_), bea_arg(iVar5 + iVar4), bea_arg(local_14 + local_c));
          if (sVar2 < sVar6) {
            sVar6 = sVar2;
          }
          if (sVar1 < sVar2) {
            sVar1 = sVar2;
          }
          iVar5 = iVar5 + 1;
        } while (BEA_LOOP_GUARD((iVar5 < 9)));
        local_14 = local_14 + 1;
      } while (BEA_LOOP_GUARD((local_14 < 9)));
      iVar4 = iVar4 + 8;
      pfVar3 = local_4 + 2;
      *local_4 = *(float *)((int)this_ + 0x102c) * (float)(int)sVar1;
      local_4[1] = *(float *)((int)this_ + 0x102c) * (float)(int)sVar6;
      local_4 = pfVar3;
    } while (BEA_LOOP_GUARD((iVar4 < 0x200)));
    local_c = local_c + 8;
  } while (BEA_LOOP_GUARD((local_c < 0x200)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00490e30, ap_00490e30));
