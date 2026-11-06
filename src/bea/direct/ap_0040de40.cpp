// auto-ported from 0040de40_FUN_0040de40.c (FUN_0040de40, 316 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define _DAT_008969b8 GLOBAL_AT(float, 0x008969b8)
#define s_hud__s_00623314 ((char*)0x00623314)
#define s_hud_weapon_augmented_00623540 ((char*)0x00623540)
typedef uint32_t (BEA_THISCALL* FUN_00412000_t)(uint32_t);
static const bea_guard<FUN_00412000_t> FUN_00412000 = {(FUN_00412000_t)0x00412000};
typedef uint32_t (BEA_THISCALL* FUN_00414010_t)(uint32_t);
static const bea_guard<FUN_00414010_t> FUN_00414010 = {(FUN_00414010_t)0x00414010};
typedef undefined4 (BEA_THISCALL* FUN_004e1910_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1910_t> FUN_004e1910 = {(FUN_004e1910_t)0x004e1910};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_0040de40(void * this_)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  iVar2 = *(int *)(*(int *)((int)this_ + 0x578) + 0x18);
  iVar1 = *(int *)(*(int *)(iVar2 + 0xa4) + 0x24);
  if ((*(int *)((int)this_ + iVar1 * 4 + 0x55c) != 0) ||
     (0.0f < *(float *)((int)this_ + iVar1 * 4 + 0x52c))) {
    iVar1 = bea_vcall<uint32_t>(this_, 0x1d4);
    if (iVar2 == iVar1) {
      iVar2 = bea_vcall<uint32_t>(this_, 0x1d4);
      iVar2 = *(int *)(*(int *)(iVar2 + 0xa4) + 0x34);
      *(undefined4 *)((int)this_ + 0x588) = 0;
      if (*(int *)((int)this_ + 0x260) == 2) {
        FUN_00414010(bea_arg(*(void **)((int)this_ + 0x578)));
      }
      else if (*(int *)((int)this_ + 0x260) == 3) {
        FUN_00412000(bea_arg(*(void **)((int)this_ + 0x57c)));
      }
      iVar1 = bea_vcall<uint32_t>(this_, 0x1d4);
      if (iVar2 != *(int *)(*(int *)(iVar1 + 0xa4) + 0x34)) {
        *(undefined4 *)((int)this_ + 0x2cc) = 0x3f800000;
      }
    }
    *(undefined4 *)((int)this_ + 0x300) = DAT_00672fd0;
    *(undefined4 *)((int)this_ + 0x2f8) = 0x41200000;
    *(undefined4 *)((int)this_ + 0x2fc) = 1;
    FUN_0055de9b(auStack_100,s_hud__s_00623314,s_hud_weapon_augmented_00623540);
    uVar3 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(auStack_100), bea_arg(0));
    FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(uVar3), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
    *(undefined4 *)((int)this_ + 0x30c) = DAT_00672fd0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040de40, ap_0040de40));
