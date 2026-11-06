// auto-ported from 004b1a40_FUN_004b1a40.c (FUN_004b1a40, 750 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x160: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
#define s_Mesh__s_part__s_cached__d_frames_0062ff50 ((char*)0x0062ff50)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_004b1a40(void * this_)
{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;

  alignas(16) uint8_t bea_frame_[0x160] = {};   // the original stack frame (emulate_frame)
  int &local_154 = *reinterpret_cast<int *>(bea_frame_ + 0x160 - 0x154);
  int &local_150 = *reinterpret_cast<int *>(bea_frame_ + 0x160 - 0x150);
  undefined4 &local_14c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x160 - 0x14c);
  undefined4 &local_148 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x160 - 0x148);
  undefined4 &local_144 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x160 - 0x144);
  undefined4 &local_140 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x160 - 0x140);
  undefined4 (&local_13c)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x160 - 0x13c);
  undefined1 (&local_10c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x160 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x160 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x160 - 0x4);
  *(undefined4 *)((int)this_ + 0x118) = 1;
  if (1 < *(int *)((int)this_ + 0xbc)) {
    *(undefined4 *)((int)this_ + 0x118) = *(undefined4 *)((int)this_ + 0xb8);
  }
  for (iVar3 = *(int *)((int)this_ + 0x98); ((iVar3 != 0)); iVar3 = *(int *)(iVar3 + 0x98)) {
    if (1 < *(int *)(iVar3 + 0xbc)) {
      *(undefined4 *)((int)this_ + 0x118) = *(undefined4 *)((int)this_ + 0xb8);
    }
  }
  if ((*(int *)((int)this_ + 0xbc) == 1) && (*(int *)((int)this_ + 0x98) != 0)) {
    piVar1 = *(int **)((int)this_ + 0x10c);
    if ((((*piVar1 == 0x3f800000) &&
         (((bea_fcast<float>(piVar1[1]) == 0.0f && (bea_fcast<float>(piVar1[2]) == 0.0f)) && (bea_fcast<float>(piVar1[4]) == 0.0f)))) &&
        (((piVar1[5] == 0x3f800000 && (bea_fcast<float>(piVar1[6]) == 0.0f)) && (bea_fcast<float>(piVar1[8]) == 0.0f)))) &&
       ((bea_fcast<float>(piVar1[9]) == 0.0f && (piVar1[10] == 0x3f800000)))) {
      *(undefined4 *)((int)this_ + 0x120) = 1;
    }
    pfVar2 = *(float **)((int)this_ + 200);
    if (((*pfVar2 == 0.0f) && (pfVar2[1] == 0.0f)) && (pfVar2[2] == 0.0f)) {
      *(undefined4 *)((int)this_ + 0x11c) = 1;
    }
  }
  FUN_0055de9b(local_10c,s_Mesh__s_part__s_cached__d_frames_0062ff50,
               (char *)(*(int *)((int)this_ + 0x128) + 0x24),(char *)((int)this_ + 0xdc),
               *(int *)((int)this_ + 0x118));
  CRenderThing__vslot3(local_10c);
  if (*(int *)((int)this_ + 0x11c) == 0) {
    iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x118) << 4), bea_arg(0x74), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x713));
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    *(int *)((int)this_ + 0x104) = iVar3;
  }
  if (*(int *)((int)this_ + 0x120) == 0) {
    iVar3 = *(int *)((int)this_ + 0x118);
    iVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 * 0x30), bea_arg(0x74), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x717));
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar6 = iVar4;
      if (-1 < iVar3 + -1) {
        do {
          FUN_004011b0(bea_arg(iVar6), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
          iVar3 = iVar3 + -1;
          iVar6 = iVar6 + 0x30;
        } while (((iVar3 != 0)));
      }
    }
    *(int *)((int)this_ + 0x108) = iVar4;
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this_ + 0x118)) {
    local_154 = 0;
    local_150 = 0;
    do {
      FUN_004b0fb0(bea_arg(this_), bea_arg(iVar3), bea_arg(iVar3), bea_arg(0), bea_arg(0), bea_arg(local_13c), bea_arg(&local_14c), bea_arg(1), bea_arg(0), bea_arg(1));
      if (*(int *)((int)this_ + 0x120) == 0) {
        puVar5 = local_13c;
        puVar7 = (undefined4 *)(*(int *)((int)this_ + 0x108) + local_150);
        for (iVar4 = 0xc; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      if (*(int *)((int)this_ + 0x11c) == 0) {
        puVar5 = (undefined4 *)(*(int *)((int)this_ + 0x104) + local_154);
        *puVar5 = local_14c;
        puVar5[1] = local_148;
        puVar5[2] = local_144;
        puVar5[3] = local_140;
      }
      iVar3 = iVar3 + 1;
      local_150 = local_150 + 0x30;
      local_154 = local_154 + 0x10;
    } while (((iVar3 < *(int *)((int)this_ + 0x118))));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b1a40, ap_004b1a40));
