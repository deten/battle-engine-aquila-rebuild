// auto-ported from 004914b0_FUN_004914b0.c (FUN_004914b0, 275 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x140: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_data_textures_mixers__s__2d_tga_0062dae4 ((char*)0x0062dae4)
#define s_C__dev_ONSLAUGHT2_maptex_cpp_0062db04 ((char*)0x0062db04)
#define s_Warning___Loading_mixer_texture_s_0062db24 ((char*)0x0062db24)
#define PTR_s_grass_0062da98 GLOBAL_AT(void*, 0x0062da98)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef undefined4 (BEA_THISCALL* FUN_004911c0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004911c0_t> FUN_004911c0 = {(FUN_004911c0_t)0x004911c0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_THISCALL ap_004914b0(void * this_, int param_1, int param_2, int param_3)
{
  int iVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x140] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_134)[52] = *reinterpret_cast<undefined1 (*)[52]>(bea_frame_ + 0x140 - 0x134);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x140 - 0x100);
  if (*(short *)((int)this_ + 0xc) != param_1) {
    FUN_0055de9b(local_100,s_Warning___Loading_mixer_texture_s_0062db24,param_1);
    CRenderThing__vslot3(local_100);
    iVar4 = 0;
    if (*(int *)this_ != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)this_));
      *(undefined4 *)this_ = 0;
    }
    if (*(int *)((int)this_ + 8) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 8)));
      *(undefined4 *)((int)this_ + 8) = 0;
    }
    *(short *)((int)this_ + 0xc) = (short)param_1;
    iVar1 = param_3 * param_3 * 4;
    *(int *)((int)this_ + 0x10) = iVar1;
    *(int *)((int)this_ + 0x14) = param_2;
    *(undefined4 *)((int)this_ + 4) = 0;
    *(int *)((int)this_ + 0x18) = param_3;
    uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar1 * param_2), bea_arg(0x30), bea_arg(s_C__dev_ONSLAUGHT2_maptex_cpp_0062db04), bea_arg(0x97));
    *(undefined4 *)this_ = uVar2;
    if (0 < *(int *)((int)this_ + 0x14)) {
      ppuVar3 = &PTR_s_grass_0062da98;
      do {
        FUN_0055de9b(local_134,s_data_textures_mixers__s__2d_tga_0062dae4,*ppuVar3,param_1);
        iVar1 = FUN_004911c0(bea_arg(this_), bea_arg(local_134), bea_arg(param_3), bea_arg(iVar4));
        if (iVar1 == 0) {
          return 0;
        }
        iVar4 = iVar4 + 1;
        ppuVar3 = ppuVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar4 < *(int *)((int)this_ + 0x14))));
    }
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004914b0, ap_004914b0));
