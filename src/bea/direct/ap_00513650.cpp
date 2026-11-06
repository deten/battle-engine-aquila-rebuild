// auto-ported from 00513650_FUN_00513650.c (FUN_00513650, 209 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_00662f04 GLOBAL_AT(int, 0x00662f04)
#define DAT_00622d9c GLOBAL_AT(int, 0x00622d9c)
#define s_Using_pure_device_0063de7c ((char*)0x0063de7c)
#define s____________________0063deec ((char*)0x0063deec)
#define s_Driver____s_0063dea8 ((char*)0x0063dea8)
#define s_Driver_version____d_0063de90 ((char*)0x0063de90)
#define s_Description____s_0063dec0 ((char*)0x0063dec0)
#define s_Graphics_card_info_0063ded8 ((char*)0x0063ded8)
#define s_Using_impure_device_0063de64 ((char*)0x0063de64)
typedef uint32_t (BEA_CDECL* FUN_0042b840_t)(int, undefined4, ...);
static const bea_guard<FUN_0042b840_t> FUN_0042b840 = {(FUN_0042b840_t)0x0042b840};

static uint32_t BEA_THISCALL ap_00513650(void * this_)
{
  char *pcVar1;
  pcVar1 = (char *)((int)this_ + *(int *)((int)this_ + 0x32e40) * 0x516c + 4);
  FUN_0042b840(&DAT_00663498,s____________________0063deec);
  FUN_0042b840(&DAT_00663498,s_Graphics_card_info_0063ded8);
  FUN_0042b840(&DAT_00663498,s____________________0063deec);
  FUN_0042b840(&DAT_00663498,s_Description____s_0063dec0,pcVar1 + 0x200);
  FUN_0042b840(&DAT_00663498,s_Driver____s_0063dea8,pcVar1);
  FUN_0042b840(&DAT_00663498,s_Driver_version____d_0063de90,*(int *)(pcVar1 + 0x420));
  if (DAT_00662f04 == 0) {
    pcVar1 = s_Using_impure_device_0063de64;
  }
  else {
    pcVar1 = s_Using_pure_device_0063de7c;
  }
  FUN_0042b840(&DAT_00663498,pcVar1);
  return FUN_0042b840(&DAT_00663498,&DAT_00622d9c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513650, ap_00513650));
