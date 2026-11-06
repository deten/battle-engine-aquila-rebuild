// auto-ported from 004f4120_vslot42.c (CComplexThing::vslot42, 131 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
#define DAT_00855130 GLOBAL_AT(int, 0x00855130)
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_thing_cpp_006331c0 ((char*)0x006331c0)
typedef uint32_t (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef char * (BEA_CDECL* _strncpy_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncpy_t> _strncpy = {(_strncpy_t)0x0055e980};

static void BEA_THISCALL ap_004f4120(CComplexThing * this_, char *param_1)
{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  size_t _Count;
  
  if (*(int *)(this_ + 0x78) != 0) {
    FUN_004e5bd0(bea_arg(&DAT_00855130), bea_arg(this_));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(this_ + 0x78)));
    *(undefined4 *)(this_ + 0x78) = 0;
  }
  if (*param_1 != '\0') {
    uVar3 = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    _Count = ~uVar3 - 1;
    pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar3), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_thing_cpp_006331c0), bea_arg(0x271));
    *(char **)(this_ + 0x78) = pcVar2;
    _strncpy(bea_arg(pcVar2), bea_arg(param_1), bea_arg(_Count));
    *(undefined1 *)(_Count + *(int *)(this_ + 0x78)) = 0;
    FUN_004e5a80(bea_arg(&DAT_00855130), bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f4120, ap_004f4120));
