// auto-ported from 00545070_FUN_00545070.c (FUN_00545070, 851 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_FASTCALL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_009c7c54 GLOBAL_AT(char, 0x009c7c54)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_009c64d8 GLOBAL_AT(int, 0x009c64d8)
#define DAT_0083d3d0 GLOBAL_AT(int, 0x0083d3d0)
#define s_C__dev_ONSLAUGHT2_DXLandscape_cp_00650bdc ((char*)0x00650bdc)
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_CDECL* FUN_0048e7b0_t)(void);
static const bea_guard<FUN_0048e7b0_t> FUN_0048e7b0 = {(FUN_0048e7b0_t)0x0048e7b0};
typedef uint32_t (BEA_THISCALL* FUN_0048f180_t)(uint32_t);
static const bea_guard<FUN_0048f180_t> FUN_0048f180 = {(FUN_0048f180_t)0x0048f180};
typedef uint32_t (BEA_THISCALL* FUN_005447e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005447e0_t> FUN_005447e0 = {(FUN_005447e0_t)0x005447e0};
typedef uint32_t (BEA_THISCALL* FUN_00544fc0_t)(uint32_t);
static const bea_guard<FUN_00544fc0_t> FUN_00544fc0 = {(FUN_00544fc0_t)0x00544fc0};
typedef float10 (BEA_STDCALL* FUN_00547a60_t)(uint32_t);
static const bea_guard<FUN_00547a60_t> FUN_00547a60 = {(FUN_00547a60_t)0x00547a60};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_THISCALL* FUN_005503d0_t)(uint32_t);
static const bea_guard<FUN_005503d0_t> FUN_005503d0 = {(FUN_005503d0_t)0x005503d0};
typedef uint32_t (BEA_THISCALL* FUN_00556470_t)(uint32_t);
static const bea_guard<FUN_00556470_t> FUN_00556470 = {(FUN_00556470_t)0x00556470};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static uint32_t BEA_THISCALL ap_00545070(void * this_)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  float10 fVar10;
  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  float &local_34 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x34);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x30);
  int &local_28 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x28);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x18);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  iVar3 = *(int *)((int)this_ + 0x24);
  if (iVar3 != 0) {
    FUN_0055db0a(bea_arg(iVar3), bea_arg(0x34), bea_arg(*(undefined4 *)(iVar3 + -4)), bea_arg(((void*)0x00544770)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + -4));
    *(undefined4 *)((int)this_ + 0x24) = 0;
  }
  FUN_0048e7b0();
  iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x38), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXLandscape_cp_00650bdc), bea_arg(0x1bb))
    ;
    if (puVar4 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = puVar4 + 1;
      *puVar4 = 1;
      FUN_0055dc20(bea_arg(puVar5), bea_arg(0x34), bea_arg(1), bea_arg(((void*)0x00544710)), bea_arg(((void*)0x00544770)));
    }
    *(undefined4 **)((int)this_ + 0x24) = puVar5;
    *(undefined4 *)((int)this_ + 0x20) = 1;
    FUN_005447e0(bea_arg(puVar5), bea_arg(5));
    DAT_009c7c54 = 1;
  }
  else {
    puVar4 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x6c), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXLandscape_cp_00650bdc), bea_arg(0x1b2))
    ;
    if (puVar4 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = puVar4 + 1;
      *puVar4 = 2;
      FUN_0055dc20(bea_arg(puVar5), bea_arg(0x34), bea_arg(2), bea_arg(((void*)0x00544710)), bea_arg(((void*)0x00544770)));
    }
    *(undefined4 **)((int)this_ + 0x24) = puVar5;
    *(undefined4 *)((int)this_ + 0x20) = 2;
    FUN_005447e0(bea_arg(puVar5), bea_arg(4));
    FUN_005447e0(bea_arg((void *)(*(int *)((int)this_ + 0x24) + 0x34)), bea_arg(4));
    DAT_009c7c54 = 0;
  }
  FUN_00544fc0(bea_arg(this_));
  local_30 = 0.0;
  puVar9 = *(undefined1 **)(*(int *)((int)this_ + 0x24) + 4);
  do {
    iVar3 = 0;
    puVar6 = puVar9;
    do {
      local_34 = -10000.0;
      local_38 = 10000.0;
      iVar7 = 0;
      do {
        iVar8 = 0;
        do {
          local_1c = (float)(iVar8 + iVar3 & 0x1ff);
          local_18 = (float)(iVar7 + (int)local_30 & 0x1ff);
          fVar10 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_1c));
          if (fVar10 < (float10)local_38) {
            local_38 = (float)fVar10;
          }
          if ((float10)local_34 < fVar10) {
            local_34 = (float)fVar10;
          }
          iVar8 = iVar8 + 1;
        } while (BEA_LOOP_GUARD((iVar8 < 9)));
        iVar7 = iVar7 + 1;
      } while (BEA_LOOP_GUARD((iVar7 < 9)));
      local_28 = (int)(longlong)ROUND(local_34 * 127.0f * 0.016666668f);
      if (local_28 < -0x7f) {
        local_28 = -0x7f;
      }
      else if (0x7f < local_28) {
        local_28 = 0x7f;
      }
      puVar6[1] = (char)local_28;
      local_28 = (int)(longlong)ROUND(local_38 * 127.0f * 0.016666668f);
      if (local_28 < -0x7f) {
        local_28 = -0x7f;
      }
      else if (0x7f < local_28) {
        local_28 = 0x7f;
      }
      *puVar6 = (char)local_28;
      puVar6[0x10] = 0x9d;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      iVar3 = iVar3 + 8;
      puVar9 = puVar6 + 0x14;
      *(float *)(puVar6 + 4) = (local_38 + local_34) * 0.5f;
      puVar6 = puVar9;
    } while (BEA_LOOP_GUARD((iVar3 < 0x200)));
    local_30 = (float)((int)local_30 + 8);
  } while (BEA_LOOP_GUARD(((int)local_30 < 0x200)));
  iVar8 = 0;
  local_30 = 0.0;
  iVar7 = 0;
  iVar3 = *(int *)((int)this_ + 0x24);
  do {
    fVar10 = (float10)FUN_00547a60(bea_arg(iVar8));
    *(float *)(iVar7 + 8 + *(int *)(iVar3 + 4)) = (float)fVar10;
    if ((float10)local_30 < fVar10) {
      local_30 = (float)fVar10;
    }
    iVar7 = iVar7 + 0x14;
    iVar8 = iVar8 + 1;
  } while (BEA_LOOP_GUARD((iVar7 < 0x14000)));
  iVar7 = 0;
  do {
    iVar2 = *(int *)(iVar3 + 4);
    iVar8 = iVar7 + 8;
    iVar1 = iVar7 + 8;
    iVar7 = iVar7 + 0x14;
    *(float *)(iVar1 + iVar2) = *(float *)(iVar8 + iVar2) * 128.0f;
  } while (BEA_LOOP_GUARD((iVar7 < 0x14000)));
  if (*(int *)((int)this_ + 0x20) == 2) {
    iVar3 = 0x1000;
    puVar9 = *(undefined1 **)(*(int *)((int)this_ + 0x24) + 0x38);
    puVar6 = *(undefined1 **)(*(int *)((int)this_ + 0x24) + 4);
    do {
      puVar9[1] = puVar6[1];
      *puVar9 = *puVar6;
      *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar6 + 4);
      puVar9[0x10] = puVar6[0x10];
      *(undefined4 *)(puVar9 + 0xc) = 0;
      *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar6 + 8);
      puVar9 = puVar9 + 0x14;
      iVar3 = iVar3 + -1;
      puVar6 = puVar6 + 0x14;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
  }
  iVar3 = 0;
  do {
    FUN_005503d0(bea_arg((void *)(iVar3 + DAT_009c64d8)));
    iVar3 = iVar3 + 8;
  } while (BEA_LOOP_GUARD((iVar3 < 0x18)));
  FUN_0048f180(bea_arg(*(void **)((int)this_ + 0x30)));
  return FUN_00556470(bea_arg(&DAT_0083d3d0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00545070, ap_00545070));
