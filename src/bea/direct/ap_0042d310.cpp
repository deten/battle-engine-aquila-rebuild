// auto-ported from 0042d310_FUN_0042d310.c (FUN_0042d310, 146 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00889028 GLOBAL_AT(undefined4*, 0x00889028)
#define DAT_0060c0bc GLOBAL_AT(int, 0x0060c0bc)
#define DAT_0066e950 GLOBAL_AT(undefined4*, 0x0066e950)
#define DAT_0060be3c GLOBAL_AT(int, 0x0060be3c)
#define DAT_00888a44 GLOBAL_AT(int, 0x00888a44)
#define DAT_0066e8f0 GLOBAL_AT(int, 0x0066e8f0)
#define DAT_0066e8f4 GLOBAL_AT(int, 0x0066e8f4)
#define DAT_0066e8f8 GLOBAL_AT(int, 0x0066e8f8)
#define DAT_0066e8fc GLOBAL_AT(int, 0x0066e8fc)
#define _DAT_0066e900 GLOBAL_AT(int, 0x0066e900)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef uint32_t (BEA_CDECL* FUN_005234d0_t)(uint32_t);
static const bea_guard<FUN_005234d0_t> FUN_005234d0 = {(FUN_005234d0_t)0x005234d0};
typedef uint32_t (BEA_CDECL* FUN_00523db0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_00523db0_t> FUN_00523db0 = {(FUN_00523db0_t)0x00523db0};

static int BEA_CDECL ap_0042d310(void)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = bea_vcall<uint32_t>(DAT_00889028, 0xc, DAT_00889028,&DAT_0060c0bc,&DAT_0066e950,0);
  if (-1 < iVar1) {
    iVar1 = bea_vcall<uint32_t>(DAT_0066e950, 0x2c, DAT_0066e950,&DAT_0060be3c);
    if (-1 < iVar1) {
      piVar2 = DAT_0066e950;
      uVar3 = DAT_00888a44;
      bea_vcall<uint32_t>(DAT_0066e950, 0x34, DAT_0066e950,DAT_00888a44,5);
      DAT_0066e8f0 = 0;
      DAT_0066e8f4 = 0;
      DAT_0066e8f8 = 0;
      DAT_0066e8fc = 0;
      _DAT_0066e900 = 0;
      FUN_00523db0(piVar2,uVar3);
      iVar1 = FUN_00515940();
      DAT_0089bda8 = iVar1 >> 1;
      iVar1 = FUN_00515b00();
      DAT_0089bda4 = iVar1 >> 1;
      FUN_005234d0(bea_arg(1));
      iVar1 = 0;
    }
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042d310, ap_0042d310));
