// auto-ported from 004d2600_FUN_004d2600.c (FUN_004d2600, 144 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_0055f347_t)(uint32_t);
static const bea_guard<FUN_0055f347_t> FUN_0055f347 = {(FUN_0055f347_t)0x0055f347};
typedef char * (BEA_CDECL* _strchr_t)(uint32_t, uint32_t);
static const bea_guard<_strchr_t> _strchr = {(_strchr_t)0x0055e2d0};
typedef char * (BEA_CDECL* _strrchr_t)(uint32_t, uint32_t);
static const bea_guard<_strrchr_t> _strrchr = {(_strrchr_t)0x0055f320};

static void BEA_STDCALL ap_004d2600(char *param_1, int param_2)
{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  char (&local_104)[260] = *reinterpret_cast<char (*)[260]>(bea_frame_ + 0x110 - 0x104);
  uVar3 = 0xffffffff;
  do {
    pcVar2 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar2;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar2 = pcVar2 + -uVar3;
  pcVar5 = local_104;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if (param_2 != 0) {
    pcVar2 = _strrchr(bea_arg(local_104), bea_arg(0x5c));
    pcVar2[1] = '\0';
  }
  for (pcVar2 = _strchr(bea_arg(local_104), bea_arg(0x5c)); BEA_LOOP_GUARD((pcVar2 != (char *)0x0)); pcVar2 = _strchr(bea_arg(pcVar2 + 1), bea_arg(0x5c))) {
    *pcVar2 = '\0';
    FUN_0055f347(bea_arg(local_104));
    *pcVar2 = '\\';
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d2600, ap_004d2600));
