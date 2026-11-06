// auto-ported from 00498080_FUN_00498080.c (FUN_00498080, 493 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_Emidoutcyl_0062df00 ((char*)0x0062df00)
#define s_Sbotoutcyl_0062de4c ((char*)0x0062de4c)
#define s_Wbotoutcyl_0062de34 ((char*)0x0062de34)
#define s_Nmidoutcyl_0062df18 ((char*)0x0062df18)
#define s_Ebotoutcyl_0062de40 ((char*)0x0062de40)
#define s_Nbotincyl_0062de28 ((char*)0x0062de28)
#define s_Etopoutcyl_0062dea0 ((char*)0x0062dea0)
#define s_Smidincyl_0062dedc ((char*)0x0062dedc)
#define s_Wmidoutcyl_0062def4 ((char*)0x0062def4)
#define s_Nbotoutcyl_0062de58 ((char*)0x0062de58)
#define s_Wbotincyl_0062de04 ((char*)0x0062de04)
#define s_Nmidincyl_0062dee8 ((char*)0x0062dee8)
#define s_Wtopincyl_0062de64 ((char*)0x0062de64)
#define s_Smidoutcyl_0062df0c ((char*)0x0062df0c)
#define s_Ebotincyl_0062de10 ((char*)0x0062de10)
#define s_Ntopincyl_0062de88 ((char*)0x0062de88)
#define s_Etopincyl_0062de70 ((char*)0x0062de70)
#define s_Sbotincyl_0062de1c ((char*)0x0062de1c)
#define s_Wtopoutcyl_0062de94 ((char*)0x0062de94)
#define s_Wmidincyl_0062dec4 ((char*)0x0062dec4)
#define s_Stopoutcyl_0062deac ((char*)0x0062deac)
#define s_Stopincyl_0062de7c ((char*)0x0062de7c)
#define s_Emidincyl_0062ded0 ((char*)0x0062ded0)
#define s_Ntopoutcyl_0062deb8 ((char*)0x0062deb8)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static uint32_t BEA_CDECL ap_00498080(int param_1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0xdc;
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Nmidoutcyl_0062df18));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Emidoutcyl_0062df00));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Wmidoutcyl_0062def4));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Smidoutcyl_0062df0c));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Nmidincyl_0062dee8));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Emidincyl_0062ded0));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Wmidincyl_0062dec4));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Smidincyl_0062dedc));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Ntopoutcyl_0062deb8));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Etopoutcyl_0062dea0));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Wtopoutcyl_0062de94));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Stopoutcyl_0062deac));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Ntopincyl_0062de88));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Etopincyl_0062de70));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Wtopincyl_0062de64));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Stopincyl_0062de7c));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Nbotoutcyl_0062de58));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Ebotoutcyl_0062de40));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Wbotoutcyl_0062de34));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Sbotoutcyl_0062de4c));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Nbotincyl_0062de28));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Ebotincyl_0062de10));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Wbotincyl_0062de04));
  if (iVar1 == 0) {
    return false;
  }
  iVar2 = FUN_00568390(bea_arg(iVar2), bea_arg(s_Sbotincyl_0062de1c));
  return iVar2 != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00498080, ap_00498080));
