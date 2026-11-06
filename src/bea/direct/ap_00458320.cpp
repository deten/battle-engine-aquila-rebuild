// auto-ported from 00458320_vslot3.c (CFEPDevelopment::vslot3, 157 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CFEPDevelopment;
#define DAT_006245cc GLOBAL_AT(int, 0x006245cc)
#define _DAT_008a956c GLOBAL_AT(int, 0x008a956c)
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef int (BEA_CDECL* FUN_0055e14f_t)(void *, void *, ...);
static const bea_guard<FUN_0055e14f_t> FUN_0055e14f = {(FUN_0055e14f_t)0x0055e14f};

static void BEA_THISCALL ap_00458320(CFEPDevelopment * this_, int param_1, undefined4 param_2)
{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_1 == 0x2a) {
    *(int *)(this_ + 0x10) = (*(int *)(this_ + 8) + -1 + *(int *)(this_ + 0x10)) % *(int *)(this_ + 8);
    FUN_00468770(0);
  }
  else {
    if (param_1 == 0x2b) {
      *(int *)(this_ + 0x10) = (*(int *)(this_ + 0x10) + 1) % *(int *)(this_ + 8);
      FUN_00468770(0);
      return;
    }
    if (param_1 == 0x2c) {
      pcVar2 = *(char **)(*(int *)(this_ + 4) + *(int *)(this_ + 0x10) * 4);
      uVar3 = 0xffffffff;
      pcVar4 = pcVar2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      pcVar2[~uVar3 - 5] = '\0';
      FUN_0055e14f(*(int *)(*(int *)(this_ + 4) + *(int *)(this_ + 0x10) * 4) + (~uVar3 - 8),
                   &DAT_006245cc,&param_1);
      FUN_00468770(1);
      _DAT_008a956c = param_1;
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00458320, ap_00458320));
