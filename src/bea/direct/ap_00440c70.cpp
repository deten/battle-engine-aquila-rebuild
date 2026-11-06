// auto-ported from 00440c70_FUN_00440c70.c (FUN_00440c70, 483 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: local_128 is the CTGALoader object at esp+0x2c (byte array); the source pointer and the halving size are registers in the asm (edi 0x440d2c, edx 0x440d7d/0x440dcf), not writes to the loader's fields at +4/+0x10; DAT_0062829c typed char so idx*4 is a byte offset (was int: 16-byte stride)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x150: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0062829c GLOBAL_AT(char, 0x0062829c)   // byte-offset base: [idx*4 + 0x62829c] (0x440d12, 0x440dff)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00628298 GLOBAL_AT(char, 0x00628298)
#define s_C__dev_ONSLAUGHT2_damage_cpp_006282dc ((char*)0x006282dc)
typedef undefined4 (BEA_THISCALL* CTGALoader__vslot1_t)(uint32_t);
static const bea_guard<CTGALoader__vslot1_t> CTGALoader__vslot1 = {(CTGALoader__vslot1_t)0x004f2ce0};
typedef void * (BEA_THISCALL* FUN_004f2c60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f2c60_t> FUN_004f2c60 = {(FUN_004f2c60_t)0x004f2c60};
typedef uint32_t (BEA_THISCALL* FUN_004f2cb0_t)(uint32_t);
static const bea_guard<FUN_004f2cb0_t> FUN_004f2cb0 = {(FUN_004f2cb0_t)0x004f2cb0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_00440c70(void * this_, undefined4 param_1)
{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  alignas(16) uint8_t bea_frame_[0x150] = {};   // the original stack frame (emulate_frame)
  int &local_144 = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0x144);
  undefined1 (&local_12c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x150 - 0x12c);
  undefined1 (&local_128)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x150 - 0x128);   // the CTGALoader object (esp+0x2c)
  int &local_124 = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0x124);
  char * &local_118 = *reinterpret_cast<char * *>(bea_frame_ + 0x150 - 0x118);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x150 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x4);
  FUN_004f2c60(bea_arg(local_128), bea_arg(param_1), bea_arg(local_12c));
  CTGALoader__vslot1(bea_arg(local_128));
  *(undefined4 *)((int)this_ + 4) = 0;
  int iSize;
  char *pcSrc;
  switch(local_124) {
  case 4:
    *(undefined4 *)((int)this_ + 4) = 2;
    break;
  case 8:
    *(undefined4 *)((int)this_ + 4) = 3;
    break;
  case 0x10:
    *(undefined4 *)((int)this_ + 4) = 4;
    break;
  case 0x20:
    *(undefined4 *)((int)this_ + 4) = 5;
    break;
  case 0x40:
    *(undefined4 *)((int)this_ + 4) = 6;
  }
  uVar6 = *(undefined4 *)(&DAT_0062829c + *(int *)((int)this_ + 4) * 4);
  *(undefined4 *)((int)this_ + 8) = uVar6;
  iVar7 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar6), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_damage_cpp_006282dc), bea_arg(0x4e));
  *(int *)this_ = iVar7;
  pcVar12 = (char *)(*(int *)(&DAT_00628298 + *(int *)((int)this_ + 4) * 4) + iVar7);
  iSize = local_124;
  pcSrc = local_118;
  for (iVar7 = iSize * iSize; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    cVar3 = *pcSrc;
    pcSrc = pcSrc + 3;
    *pcVar12 = -1 - cVar3;
    pcVar12 = pcVar12 + 1;
  }
  local_144 = *(int *)((int)this_ + 4) + -1;
  if (0 < local_144) {
    piVar11 = (int *)(((char *)&DAT_00628298) + local_144 * 4);
    do {
      iVar9 = iSize >> 1;
      pbVar13 = (byte *)(piVar11[1] + *(int *)this_);
      puVar14 = (undefined1 *)(*piVar11 + *(int *)this_);
      for (iVar7 = iVar9; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
        pbVar8 = pbVar13 + iSize;
        iVar10 = iVar9;
        do {
          pbVar2 = pbVar8 + (1 - iSize);
          pbVar1 = pbVar8 + 1;
          bVar4 = *pbVar13;
          pbVar13 = pbVar13 + 2;
          bVar5 = *pbVar8;
          pbVar8 = pbVar8 + 2;
          *puVar14 = (char)(((uint)*pbVar2 + (uint)*pbVar1 + (uint)bVar4 + (uint)bVar5) * 0x40 >> 8)
          ;
          puVar14 = puVar14 + 1;
          iVar10 = iVar10 + -1;
        } while (BEA_LOOP_GUARD((iVar10 != 0)));
        pbVar13 = pbVar13 + iSize;
      }
      piVar11 = piVar11 + -1;
      local_144 = local_144 + -1;
      iSize = iVar9;
    } while (BEA_LOOP_GUARD((local_144 != 0)));
  }
  pbVar13 = *(byte **)this_;
  for (iVar7 = *(int *)(&DAT_0062829c + *(int *)((int)this_ + 4) * 4); BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1
      ) {
    *pbVar13 = 0x20 - (char)((int)((uint)*pbVar13 * 3) >> 6);
    pbVar13 = pbVar13 + 1;
  }
  return FUN_004f2cb0(bea_arg(local_128));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00440c70, ap_00440c70));
