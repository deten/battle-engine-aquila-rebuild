// auto-ported from 0052f690_FUN_0052f690.c (FUN_0052f690, 129 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064cc80 ((char*)0x0064cc80)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef char * (BEA_CDECL* _strncpy_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncpy_t> _strncpy = {(_strncpy_t)0x0055e980};

static void * BEA_THISCALL ap_0052f690(void * this_, char *param_1)
{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  size_t _Count;
  undefined1 *puStack_8;
  undefined4 local_4;
  uVar3 = 0xffffffff;
  *(undefined ***)this_ = ((void*)0x005e4e4c);
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  _Count = ~uVar3 - 1;
  pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar3), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cc80), bea_arg(0x2b));
  *(char **)((int)this_ + 4) = pcVar2;
  _strncpy(bea_arg(pcVar2), bea_arg(param_1), bea_arg(_Count));
  *(undefined1 *)(*(int *)((int)this_ + 4) + _Count) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052f690, ap_0052f690));
