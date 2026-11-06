// auto-ported from 0054fbc0_FUN_0054fbc0.c (FUN_0054fbc0, 448 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c64d0 GLOBAL_AT(int, 0x009c64d0)
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define DAT_00854dec GLOBAL_AT(int, 0x00854dec)
#define s_C__dev_ONSLAUGHT2_DXParticleText_00651dcc ((char*)0x00651dcc)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_THISCALL* FUN_00500540_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500540_t> FUN_00500540 = {(FUN_00500540_t)0x00500540};
typedef uint32_t (BEA_THISCALL* FUN_00500590_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500590_t> FUN_00500590 = {(FUN_00500590_t)0x00500590};
typedef int * (BEA_CDECL* FUN_00501280_t)(int, int, ...);
static const bea_guard<FUN_00501280_t> FUN_00501280 = {(FUN_00501280_t)0x00501280};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static char * BEA_CDECL ap_0054fbc0(char *param_1, int param_2)
{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  void *this_local;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;

  alignas(16) uint8_t bea_frame_[0xd0] = {};   // the original stack frame (emulate_frame)
  char (&local_c8)[32] = *reinterpret_cast<char (*)[32]>(bea_frame_ + 0xd0 - 0xc8);
  undefined1 (&local_a8)[168] = *reinterpret_cast<undefined1 (*)[168]>(bea_frame_ + 0xd0 - 0xa8);
  for (pcVar3 = DAT_009c64d0; BEA_LOOP_GUARD((pcVar3 != (char *)0x0)); pcVar3 = *(char **)(pcVar3 + 0x1a0)) {
    iVar2 = FUN_00568390(bea_arg(param_1), bea_arg(pcVar3));
    if ((iVar2 == 0) && (param_2 == *(int *)(pcVar3 + 400))) {
      if (pcVar3 != (char *)0x0) {
        return (char *)(pcVar3);
      }
      break;
    }
  }
  pcVar3 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1a4), bea_arg(0x23), bea_arg(s_C__dev_ONSLAUGHT2_DXParticleText_00651dcc), bea_arg(0x51));
  if (pcVar3 == (char *)0x0) {
    return (char *)((char *)0x0);
  }
  uVar5 = 0xffffffff;
  pcVar3[0x1a0] = '\0';
  pcVar3[0x1a1] = '\0';
  pcVar3[0x1a2] = '\0';
  pcVar3[0x1a3] = '\0';
  *pcVar3 = '\0';
  pcVar3[0x198] = '\0';
  pcVar3[0x199] = '\0';
  pcVar3[0x19a] = '\0';
  pcVar3[0x19b] = '\0';
  pcVar3[0x194] = '\0';
  pcVar3[0x195] = '\0';
  pcVar3[0x196] = '\0';
  pcVar3[0x197] = '\0';
  pcVar3[0x19c] = -1;
  pcVar3[0x19d] = -1;
  pcVar3[0x19e] = -1;
  pcVar3[0x19f] = -1;
  pcVar7 = param_1;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = local_c8;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(int *)(pcVar3 + 400) = param_2;
  if ((param_2 < 2) || (uVar4 = 2, 3 < param_2)) {
    uVar4 = 5;
  }
  uVar4 = FUN_004f27f0(local_a8,uVar4,0,1,1,1);
  *(undefined4 *)(pcVar3 + 0x194) = uVar4;
  this_local = (void *)FUN_00501280(uVar4,0);
  *(void **)(pcVar3 + 0x198) = this_local;
  bVar9 = DAT_00854dec == 0;
  FUN_00500540(bea_arg(this_local), bea_arg(0x142), bea_arg(8), bea_arg(0x18), bea_arg(4), bea_arg((uint)bVar9));
  FUN_00500590(bea_arg(*(void **)(pcVar3 + 0x198)), bea_arg(0x65), bea_arg(8), bea_arg(2), bea_arg((uint)bVar9));
  uVar5 = 0xffffffff;
  pcVar7 = param_1;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = pcVar3;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  for (iVar2 = ~uVar5 - 2; BEA_LOOP_GUARD(((-1 < iVar2 && (param_1[iVar2] != '\\')))); iVar2 = iVar2 + -1) {
  }
  uVar5 = 0xffffffff;
  pcVar7 = param_1 + iVar2 + 1;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = pcVar3 + 200;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(char **)(pcVar3 + 0x1a0) = DAT_009c64d0;
  DAT_009c64d0 = pcVar3;
  return (char *)(pcVar3);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054fbc0, ap_0054fbc0));
