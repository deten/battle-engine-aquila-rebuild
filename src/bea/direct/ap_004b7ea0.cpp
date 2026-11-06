// auto-ported from 004b7ea0_FUN_004b7ea0.c (FUN_004b7ea0, 373 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_0083d960 GLOBAL_AT(char, 0x0083d960)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_0089698c GLOBAL_AT(char, 0x0089698c)
#define DAT_00704e74 GLOBAL_AT(char, 0x00704e74)
#define DAT_00704e70 GLOBAL_AT(int, 0x00704e70)
#define DAT_00704f78 GLOBAL_AT(int, 0x00704f78)
#define DAT_00807288 GLOBAL_AT(char, 0x00807288)
#define DAT_0080738c GLOBAL_AT(int, 0x0080738c)
#define s_ERROR__MB__No_sample_for_message_00630894 ((char*)0x00630894)
#define s_data_sounds__s_ogg_00630880 ((char*)0x00630880)
#define s__s_messagebox__s_006308c4 ((char*)0x006308c4)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef uint32_t (BEA_THISCALL* FUN_004b8020_t)(uint32_t);
static const bea_guard<FUN_004b8020_t> FUN_004b8020 = {(FUN_004b8020_t)0x004b8020};
typedef char * (BEA_THISCALL* FUN_004f2190_t)(uint32_t);
static const bea_guard<FUN_004f2190_t> FUN_004f2190 = {(FUN_004f2190_t)0x004f2190};
typedef int (BEA_THISCALL* FUN_004f24b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f24b0_t> FUN_004f24b0 = {(FUN_004f24b0_t)0x004f24b0};
typedef undefined1 * (BEA_CDECL* FUN_004f7d30_t)(void *, ...);
static const bea_guard<FUN_004f7d30_t> FUN_004f7d30 = {(FUN_004f7d30_t)0x004f7d30};
typedef DWORD (BEA_THISCALL* FUN_00528d10_t)(uint32_t);
static const bea_guard<FUN_00528d10_t> FUN_00528d10 = {(FUN_00528d10_t)0x00528d10};
typedef uint32_t (BEA_THISCALL* FUN_00528d50_t)(uint32_t);
static const bea_guard<FUN_00528d50_t> FUN_00528d50 = {(FUN_00528d50_t)0x00528d50};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_004b7ea0(void * this_)
{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *v0;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_108 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x108);
  char (&local_104)[260] = *reinterpret_cast<char (*)[260]>(bea_frame_ + 0x110 - 0x104);
  iVar7 = *(int *)((int)this_ + 8);
  if ((*(int *)(iVar7 + 0x38) != 0) &&
     ((*(int *)(iVar7 + 0x30) == 0 || ((*(byte *)(*(int *)(iVar7 + 0x30) + 0x2c) & 4) != 0)))) {
    *(undefined4 *)((int)this_ + 0x20) = 0x3f800000;
    *(undefined4 *)((int)this_ + 0x24) = 1;
    local_108 = 0x3f000000;
    return FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&local_108), bea_arg(0xbba), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  pcVar3 = (char *)FUN_004f24b0(bea_arg(&DAT_0083d960), bea_arg(*(undefined4 *)(iVar7 + 0x10)));
  if (pcVar3 == (char *)0x0) {
    iVar7 = *(int *)(*(int *)((int)this_ + 8) + 0x10);
    pcVar3 = (char *)FUN_004f7d30(*(undefined4 *)(*(int *)((int)this_ + 8) + 0xc));
    FUN_00441740(&DAT_0066f580,s_ERROR__MB__No_sample_for_message_00630894,pcVar3,iVar7);
    *(undefined4 *)(*(int *)((int)this_ + 8) + 8) = 1;
  }
  else {
    pcVar6 = (char *)((int)this_ + 0x1c0);
    v0 = (char *)FUN_004f2190(bea_arg(&DAT_0083d960));
    FUN_0055de9b(pcVar6,s__s_messagebox__s_006308c4,v0,pcVar3);
    uVar2 = *(undefined4 *)((int)this_ + 8);
    if (DAT_0089698c != '\0') {
      FUN_0055de9b(local_104,s_data_sounds__s_ogg_00630880,pcVar6);
      uVar4 = 0xffffffff;
      do {
        pcVar3 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar3 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar3;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar4 = ~uVar4;
      pcVar3 = pcVar3 + -uVar4;
      pcVar6 = (char *)&DAT_00704e74;
      for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
      }
      FUN_00401000(bea_arg(&DAT_00704e70), bea_arg(uVar2));
      FUN_00528d10(bea_arg(&DAT_00704f78));
      uVar4 = 0xffffffff;
      pcVar3 = local_104;
      do {
        pcVar6 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar6 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar4 = ~uVar4;
      pcVar3 = pcVar6 + -uVar4;
      pcVar6 = (char *)&DAT_00807288;
      for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
      }
      DAT_0080738c = 0;
      FUN_00528d50(bea_arg(&DAT_00704f78));
      return FUN_004b8020(bea_arg(this_));
    }
  }
  return FUN_004b8020(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b7ea0, ap_004b7ea0));
