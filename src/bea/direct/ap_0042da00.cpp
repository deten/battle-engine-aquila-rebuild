// auto-ported from 0042da00_FUN_0042da00.c (FUN_0042da00, 272 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)
#define DAT_0066e94d GLOBAL_AT(char, 0x0066e94d)
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};

static void BEA_CDECL ap_0042da00(undefined4 param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  if (DAT_00662df4 == 0) {
    if ((char)param_1 != '\0') {
      iVar2 = FUN_00515940();
      DAT_0089bda8 = iVar2 / 2;
      iVar2 = FUN_00515b00();
      DAT_0089bda4 = iVar2 / 2;
    }
    iVar1 = DAT_0089bda8;
    iVar2 = DAT_0089bda4;
    if (DAT_0066e94d != '\0') {
      iVar3 = FUN_00515940();
      iVar3 = iVar3 >> 1;
      iVar4 = FUN_00515b00();
      iVar4 = iVar4 >> 1;
      local_8 = (int)(longlong)ROUND(((float)iVar3 * 0.7f + (float)iVar1) * 0.5882353f - (float)iVar1)
      ;
      iVar5 = local_8;
      local_8 = (int)(longlong)ROUND(((float)iVar4 * 0.7f + (float)iVar2) * 0.5882353f - (float)iVar2)
      ;
      if ((iVar3 != iVar1) && (iVar5 == 0)) {
        iVar5 = ((iVar1 <= iVar3) - 1 & 0xfffffffe) + 1;
      }
      if ((iVar4 != iVar2) && (local_8 == 0)) {
        local_8 = ((iVar2 <= iVar4) - 1 & 0xfffffffe) + 1;
      }
      DAT_0089bda8 = iVar5 + iVar1;
      DAT_0089bda4 = local_8 + iVar2;
      DAT_0066e94d = '\0';
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042da00, ap_0042da00));
