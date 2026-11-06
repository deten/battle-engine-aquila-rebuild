// auto-ported from 005586e0_FUN_005586e0.c (FUN_005586e0, 398 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char iStack_28;
typedef char iStack_4;
typedef char iStack_8;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_DXTexture_cpp_0065269c ((char*)0x0065269c)
#define s_WARNING___Attempt_to_dump_textur_006528ac ((char*)0x006528ac)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef undefined4 (BEA_CDECL* FUN_004f3110_t)(int, int, int, int, int, ...);
static const bea_guard<FUN_004f3110_t> FUN_004f3110 = {(FUN_004f3110_t)0x004f3110};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static int BEA_THISCALL ap_005586e0(void * this_, undefined4 param_1)
{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  char cVar9;
  char *pcVar10;
  int iVar11;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int &iStack_28 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x28);
  int &iStack_24 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x24);
  int (&local_20)[6] = *reinterpret_cast<int (*)[6]>(bea_frame_ + 0x30 - 0x20);
  int &iStack_8 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x8);
  int &iStack_4 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x4);
  bea_vcall<uint32_t>(*(int **)((int)this_ + 0xb8), 0x44, *(int **)((int)this_ + 0xb8),0,local_20);
  iVar5 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0xb8), 0x4c, *(int **)((int)this_ + 0xb8),0,&iStack_28,0,0);
  iVar3 = iStack_8;
  if (-1 < iVar5) {
    pcVar6 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iStack_8 * iStack_4 * 4), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_DXTexture_cpp_0065269c), bea_arg(0x3a1));
    iVar5 = 0;
    pcVar10 = pcVar6;
    if (0 < iStack_4) {
      do {
        iVar11 = 0;
        if (0 < iVar3) {
          do {
            if ((local_20[0] == 0x15) || (local_20[0] == 0x16)) {
              iVar8 = iStack_24 + iStack_28 * iVar5;
              uVar2 = *(undefined4 *)(iVar8 + iVar11 * 4);
              cVar9 = *(char *)(iVar8 + iVar11 * 4);
              cVar7 = (char)((uint)uVar2 >> 0x10);
              cVar4 = (char)((uint)uVar2 >> 8);
            }
            else if (local_20[0] == 0x17) {
              iVar8 = iStack_24 + iStack_28 * iVar5;
              uVar1 = *(uint *)(iVar8 + iVar11 * 2);
              cVar7 = *(char *)(iVar8 + iVar11 * 2) << 3;
              cVar4 = (char)(uVar1 >> 5) << 2;
              cVar9 = (char)(uVar1 >> 0xb) << 3;
            }
            else if (local_20[0] == 0x19) {
              iVar8 = iStack_24 + iStack_28 * iVar5;
              uVar1 = *(uint *)(iVar8 + iVar11 * 2);
              cVar7 = *(char *)(iVar8 + iVar11 * 2) << 3;
              cVar4 = (char)(uVar1 >> 5) << 3;
              cVar9 = (char)(uVar1 >> 10) << 3;
            }
            else {
              CRenderThing__vslot3(s_WARNING___Attempt_to_dump_textur_006528ac);
              cVar7 = '\0';
              cVar4 = '\0';
              cVar9 = '\0';
            }
            *pcVar10 = cVar7;
            pcVar10[1] = cVar4;
            pcVar10[2] = cVar9;
            pcVar10[3] = '\0';
            pcVar10 = pcVar10 + 4;
            iVar11 = iVar11 + 1;
          } while (BEA_LOOP_GUARD((iVar11 < iVar3)));
        }
        iVar5 = iVar5 + 1;
      } while (BEA_LOOP_GUARD((iVar5 < iStack_4)));
    }
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0xb8), 0x50, *(int **)((int)this_ + 0xb8),0);
    FUN_004f3110(param_1,pcVar6,iVar3,iStack_4,iStack_8 * 4);
    iVar5 = FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pcVar6));
  }
  return iVar5;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_005586e0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
