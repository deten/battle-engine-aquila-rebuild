// auto-ported from 00488380_FUN_00488380.c (FUN_00488380, 97 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_ibuffer_cpp_0062d390 ((char*)0x0062d390)
typedef uint32_t (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static int BEA_THISCALL ap_00488380(void * this_, int param_1)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1 * 2), bea_arg(0x2f), bea_arg(s_C__dev_ONSLAUGHT2_ibuffer_cpp_0062d390), bea_arg(0x36))
  ;
  *(undefined4 *)((int)this_ + 0x1c) = uVar1;
  *(int *)((int)this_ + 0xc) = param_1 * 2;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0x65;
  *(undefined4 *)((int)this_ + 0x18) = 1;
  iVar2 = bea_vcall<uint32_t>(this_, 0x4);
  FUN_0042d080(bea_arg(CONCAT31((int3)((uint)iVar2 >> 8),-1 < iVar2)), bea_arg(0xd2), bea_arg(7));
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488380, ap_00488380));
