// auto-ported from 0053bb50_FUN_0053bb50.c (FUN_0053bb50, 228 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define _DAT_0089ce54 GLOBAL_AT(int, 0x0089ce54)
#define DAT_0063012c GLOBAL_AT(int, 0x0063012c)
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};

static void BEA_THISCALL ap_0053bb50(void * this_)
{
  undefined4 uVar1;
  bool bVar2;
  float10 fVar3;
  undefined4 uStack_8;
  
  if (*(int *)((int)this_ + 300) != 0) {
    bVar2 = (_DAT_0089ce54 & 4) != 0;
    if (bVar2) {
      _DAT_0089ce54 = _DAT_0089ce54 & 0xfffffffb;
    }
    FUN_00513bc0(bea_arg(0x8f), bea_arg(1));
    if (*(int *)((int)this_ + 0x8c) != 0) {
      uVar1 = 0;
      fVar3 = (float10)bea_vcall<float10>(*(int **)((int)this_ + 0x110), 0x16c);
      if ((float10)5.0f < fVar3) {
        fVar3 = (float10)bea_vcall<float10>(*(int **)((int)this_ + 0x110), 0x16c);
        uVar1 = 0x40;
        uStack_8 = (undefined4)(longlong)ROUND((float10)255.0f - fVar3 * (float10)2.55f);
        DAT_0063012c = uStack_8;
      }
      bea_vcall<uint32_t>(*(int **)((int)this_ + 0x8c), 0x8, uVar1);
      DAT_0063012c = 0xff;
    }
    FUN_00513bc0(bea_arg(0x8f), bea_arg(0));
    if (bVar2) {
      if ((_DAT_0089ce54 & 4) != 0) {
        _DAT_0089ce54 = _DAT_0089ce54 & 0xfffffffb;
        return;
      }
      _DAT_0089ce54 = _DAT_0089ce54 | 4;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053bb50, ap_0053bb50));
