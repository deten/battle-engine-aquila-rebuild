// auto-ported from 004e5b20_FUN_004e5b20.c (FUN_004e5b20, 168 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d134 GLOBAL_AT(int, 0x0083d134)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_0083d130 GLOBAL_AT(undefined4*, 0x0083d130)
#define DAT_0083d140 GLOBAL_AT(int, 0x0083d140)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Warning__SPtrSet_creating_nodes_d_00632774 ((char*)0x00632774)
#define s_FATAL_ERROR__SptSet__Add_when_fr_006327ac ((char*)0x006327ac)
#define s_C__dev_ONSLAUGHT2_SPtrSet_cpp_00632730 ((char*)0x00632730)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_004e5b20(void * this_, undefined4 param_1)
{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_0083d134 == 0) {
    FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__SptSet__Add_when_fr_006327ac);
  }
  if (DAT_0083d130 == (undefined4 *)0x0) {
    if (DAT_0083d140 % 0x14 == 0) {
      FUN_00441740(&DAT_0066f580,s_Warning__SPtrSet_creating_nodes_d_00632774);
    }
    DAT_0083d140 = DAT_0083d140 + 1;
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x4c), bea_arg(s_C__dev_ONSLAUGHT2_SPtrSet_cpp_00632730), bea_arg(0xe3));
  }
  else {
    puVar1 = DAT_0083d130;
    DAT_0083d130 = (undefined4 *)DAT_0083d130[1];
  }
  puVar1[1] = 0;
  *puVar1 = param_1;
  if (*(int *)((int)this_ + 4) != 0) {
    *(undefined4 **)(*(int *)((int)this_ + 4) + 4) = puVar1;
  }
  *(undefined4 **)((int)this_ + 4) = puVar1;
  iVar2 = *(int *)((int)this_ + 0xc) + 1;
  *(int *)((int)this_ + 0xc) = iVar2;
  if (iVar2 == 1) {
    *(undefined4 **)this_ = puVar1;
  }
  return (undefined4 *)(puVar1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5b20, ap_004e5b20));
