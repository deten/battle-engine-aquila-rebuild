// auto-ported from 004e2bb0_FUN_004e2bb0.c (FUN_004e2bb0, 154 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(char, 0x0083d960)
#define DAT_0066308c GLOBAL_AT(int, 0x0066308c)
#define PTR_s__s_data_sounds_sounds__s_pc_xap_0063e2ac_4_0063e2a8 GLOBAL_AT(void*, 0x0063e2a8)
typedef char * (BEA_THISCALL* FUN_004f2190_t)(uint32_t);
static const bea_guard<FUN_004f2190_t> FUN_004f2190 = {(FUN_004f2190_t)0x004f2190};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 BEA_THISCALL ap_004e2bb0(void * this_, char *param_1)
{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;

  alignas(16) uint8_t bea_frame_[0xd0] = {};   // the original stack frame (emulate_frame)
  char (&local_c8)[200] = *reinterpret_cast<char (*)[200]>(bea_frame_ + 0xd0 - 0xc8);
  if (*(char *)((int)this_ + 4) == '\0') {
    return 0;
  }
  pcVar2 = (char *)FUN_004f2190(bea_arg(&DAT_0083d960));
  FUN_0055de9b(local_c8,PTR_s__s_data_sounds_sounds__s_pc_xap_0063e2ac_4_0063e2a8,&DAT_0066308c,
               pcVar2);
  iVar3 = FUN_00568390(bea_arg(local_c8), bea_arg((int)this_ + 0x88));
  if (iVar3 == 0) {
    return 0;
  }
  if (param_1 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar2 = local_c8;
    do {
      pcVar6 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar4 = ~uVar4;
    pcVar2 = pcVar6 + -uVar4;
    for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *param_1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
    }
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e2bb0, ap_004e2bb0));
