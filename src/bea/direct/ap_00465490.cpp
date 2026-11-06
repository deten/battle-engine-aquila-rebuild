// auto-ported from 00465490_FUN_00465490.c (FUN_00465490, 155 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-23: the table is indexed in the original's element size (tools/check_table_index.py;
// 0x515970's int-typed key table read another key's state: the first recorded playthrough)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_00679ec1 GLOBAL_AT(char, 0x00679ec1)
#define DAT_00629464 GLOBAL_AT(int, 0x00629464)
#define s_HELP_ME___00629a64 ((char*)0x00629a64)
typedef undefined1 * (BEA_CDECL* FUN_004f7d30_t)(void *, ...);
static const bea_guard<FUN_004f7d30_t> FUN_004f7d30 = {(FUN_004f7d30_t)0x004f7d30};
typedef char * (BEA_CDECL* _strstr_t)(uint32_t, uint32_t);
static const bea_guard<_strstr_t> _strstr = {(_strstr_t)0x0055ea80};

static uint32_t BEA_THISCALL ap_00465490(void * this_, int param_1)
{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  byte (&local_100)[256] = *reinterpret_cast<byte (*)[256]>(bea_frame_ + 0x100 - 0x100);
  if ((DAT_00662df4 != 0) || (DAT_00679ec1 != '\0')) {
    return true;
  }
  iVar3 = -1;
  uVar5 = 0;
  pcVar2 = s_HELP_ME___00629a64;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  if (iVar3 != -2) {
    do {
      local_100[uVar5] = ((uint8_t *)&DAT_00629464)[uVar5 + param_1 * 0x100] ^ s_HELP_ME___00629a64[uVar5];
      uVar4 = 0xffffffff;
      uVar5 = uVar5 + 1;
      pcVar2 = s_HELP_ME___00629a64;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    } while (BEA_LOOP_GUARD((uVar5 < ~uVar4 - 1)));
  }
  pcVar2 = (char *)FUN_004f7d30((int)this_ + 0x14);
  pcVar2 = _strstr(bea_arg(pcVar2), bea_arg((char *)local_100));
  return pcVar2 != (char *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00465490, ap_00465490));
