// auto-ported from 0046f430_FUN_0046f430.c (FUN_0046f430, 274 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_Level_lost_message_____s__0062c190 ((char*)0x0062c190)
typedef uint32_t (BEA_THISCALL* FUN_0042e750_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042e750_t> FUN_0042e750 = {(FUN_0042e750_t)0x0042e750};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_0046fb00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046fb00_t> FUN_0046fb00 = {(FUN_0046fb00_t)0x0046fb00};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef undefined1 * (BEA_CDECL* FUN_004f7d30_t)(void *, ...);
static const bea_guard<FUN_004f7d30_t> FUN_004f7d30 = {(FUN_004f7d30_t)0x004f7d30};

static void BEA_THISCALL ap_0046f430(void * this_, int param_1, int param_2)
{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_104 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x104);
  char (&local_100)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x110 - 0x100);
  *(int *)((int)this_ + 0x114) = param_1;
  if (param_1 != 0) {
    uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(param_1));
    pcVar3 = (char *)FUN_004f7d30(uVar2);
    uVar4 = 0xffffffff;
    do {
      pcVar7 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar4 = ~uVar4;
    pcVar3 = pcVar7 + -uVar4;
    pcVar7 = local_100;
    for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_00441740(&DAT_0066f580,s_Level_lost_message_____s__0062c190,local_100);
  }
  if (*(int *)((int)this_ + 0x28) < 4) {
    *(undefined4 *)((int)this_ + 0x28) = 4;
    *(undefined4 *)((int)this_ + 0x48) = 0x40000000;
    iVar6 = 0;
    puVar8 = (undefined4 *)((int)this_ + 0x2b4);
    do {
      if ((void *)*puVar8 != (void *)0x0) {
        FUN_0042e750(bea_arg((void *)*puVar8), bea_arg(0), bea_arg(iVar6));
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (BEA_LOOP_GUARD((iVar6 < 4)));
    if (param_2 == 0) {
      FUN_0046fb00(bea_arg(this_), bea_arg(0), bea_arg(0));
      return;
    }
    local_104 = 0x41700000;
    FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&local_104), bea_arg(0x7d5), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
    local_104 = 0xbf800000;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d6), bea_arg(this_), bea_arg(&local_104), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046f430, ap_0046f430));
