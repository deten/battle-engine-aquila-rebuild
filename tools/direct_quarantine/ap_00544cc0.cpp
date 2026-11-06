// auto-ported from 00544cc0_vslot1.c (CDXLandscape::vslot1, 489 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CDXLandscape;
#define DAT_0082b4a4 GLOBAL_AT(int, 0x0082b4a4)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_009c648c GLOBAL_AT(int, 0x009c648c)
#define DAT_00888b20 GLOBAL_AT(int, 0x00888b20)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define DAT_008aa9ac GLOBAL_AT(int, 0x008aa9ac)
#define DAT_008aa9bc GLOBAL_AT(int, 0x008aa9bc)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_008aa97c GLOBAL_AT(int, 0x008aa97c)
#define s_FakeBackBuffer_disallowed_for__s_00650e1c ((char*)0x00650e1c)
#define s_ps_2_0_dcl_t0_mov_oC0__t0_00650e6c ((char*)0x00650e6c)
#define s_FakeZBuffer_disallowed_for__s_00650dfc ((char*)0x00650dfc)
#define s_ReflectionsDestination_disallowe_00650e40 ((char*)0x00650e40)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_THISCALL* FUN_00513a10_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a10_t> FUN_00513a10 = {(FUN_00513a10_t)0x00513a10};
typedef undefined4 (BEA_THISCALL* FUN_00513f20_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513f20_t> FUN_00513f20 = {(FUN_00513f20_t)0x00513f20};
typedef const char * (BEA_STDCALL* FUN_005be628_t)(uint32_t);
static const bea_guard<FUN_005be628_t> FUN_005be628 = {(FUN_005be628_t)0x005be628};

static undefined4 BEA_THISCALL ap_00544cc0(CDXLandscape * this_)
{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  if (DAT_0082b4a4 == 0) {
    return 0;
  }
  iVar2 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar2 != 0) {
    return 0;
  }
  if (DAT_009c648c == 0) {
    return 0;
  }
  if (DAT_00888b20 < 0xffff0200) {
    return 0;
  }
  iVar2 = FUN_00513f20(bea_arg(&DAT_00855bb0), bea_arg(s_ps_2_0_dcl_t0_mov_oC0__t0_00650e6c), bea_arg(this_ + 0x1c));
  if (iVar2 < 0) {
    return 0;
  }
  iVar2 = FUN_00513a10(bea_arg(&DAT_00855bb0), bea_arg(0x100), bea_arg(0x100), bea_arg(1), bea_arg(1), bea_arg(0x17), bea_arg(0), bea_arg(this_ + 0x14));
  if (iVar2 < 0) {
    pcVar3 = (char *)FUN_005be628(bea_arg(iVar2));
    FUN_00441740(&DAT_0066eb90,s_ReflectionsDestination_disallowe_00650e40,pcVar3);
  }
  if (DAT_008aa9ac == 0) {
    if (DAT_008aa9bc == 0) {
      iVar2 = bea_vcall<uint32_t>(DAT_00888a50, 0x74, DAT_00888a50,0x100,0x100,0x50,0,0,1,this_ + 0xc,0);
    }
    else {
      iVar2 = FUN_00513a10(bea_arg(&DAT_00855bb0), bea_arg(0x100), bea_arg(0x100), bea_arg(1), bea_arg(2), bea_arg(0x50), bea_arg(0), bea_arg(this_ + 0x10));
      if (iVar2 < 0) goto LAB_00544e8a;
      piVar1 = *(int **)(this_ + 0x10);
      bea_vcall<uint32_t>(piVar1, 0x48, piVar1,0,this_ + 0xc);
    }
  }
  else {
    iVar2 = FUN_00513a10(bea_arg(&DAT_00855bb0), bea_arg(0x200), bea_arg(0x200), bea_arg(1), bea_arg(1), bea_arg((-(uint)(DAT_008aa97c != 0) & 0xfffffffe) + 0x74), bea_arg(0), bea_arg(this_ + 8));
    if (iVar2 < 0) {
      pcVar3 = (char *)FUN_005be628(bea_arg(iVar2));
      FUN_00441740(&DAT_0066eb90,s_FakeBackBuffer_disallowed_for__s_00650e1c,pcVar3);
    }
    if (DAT_008aa9bc == 0) {
      iVar2 = bea_vcall<uint32_t>(DAT_00888a50, 0x74, DAT_00888a50,0x200,0x200,0x50,0,0,1,this_ + 0xc,0);
    }
    else {
      iVar2 = FUN_00513a10(bea_arg(&DAT_00855bb0), bea_arg(0x200), bea_arg(0x200), bea_arg(1), bea_arg(2), bea_arg(0x50), bea_arg(0), bea_arg(this_ + 0x10));
      if (iVar2 < 0) goto LAB_00544e8a;
      piVar1 = *(int **)(this_ + 0x10);
      bea_vcall<uint32_t>(piVar1, 0x48, piVar1,0,this_ + 0xc);
    }
  }
  if (-1 < iVar2) {
    return 0;
  }
LAB_00544e8a:
  pcVar3 = (char *)FUN_005be628(bea_arg(iVar2));
  FUN_00441740(&DAT_0066eb90,s_FakeZBuffer_disallowed_for__s_00650dfc,pcVar3);
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00544cc0, ap_00544cc0));
