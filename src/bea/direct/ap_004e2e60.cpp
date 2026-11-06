// auto-ported from 004e2e60_FUN_004e2e60.c (FUN_004e2e60, 188 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define s_hit__d_00632638 ((char*)0x00632638)
#define s_impact_Wood_00632640 ((char*)0x00632640)
typedef undefined4 (BEA_THISCALL* FUN_004e1910_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1910_t> FUN_004e1910 = {(FUN_004e1910_t)0x004e1910};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_CDECL ap_004e2e60(int *param_1, int *param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  char (&acStack_c)[12] = *reinterpret_cast<char (*)[12]>(bea_frame_ + 0x10 - 0xc);
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = bea_vcall<uint32_t>(param_1, 0xac);
    iVar2 = bea_vcall<uint32_t>(param_2, 0xac);
    iVar3 = iVar2;
    if (iVar2 < iVar1) {
      iVar3 = iVar1;
      iVar1 = iVar2;
    }
    if ((0 < iVar1) && (iVar1 < 9)) {
      if (iVar3 == 0x66) {
        pcVar4 = s_impact_Wood_00632640;
      }
      else {
        iVar3 = _rand();
        FUN_0055de9b(acStack_c,s_hit__d_00632638,iVar3 % 6 + 1);
        pcVar4 = acStack_c;
      }
      iVar3 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(pcVar4), bea_arg(0));
      if (iVar3 != 0) {
        FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(iVar3), bea_arg(param_1), bea_arg(0x3f333333), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e2e60, ap_004e2e60));
