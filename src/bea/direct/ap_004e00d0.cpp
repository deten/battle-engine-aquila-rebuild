// auto-ported from 004e00d0_FUN_004e00d0.c (FUN_004e00d0, 503 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00662aac GLOBAL_AT(int, 0x00662aac)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00665848 GLOBAL_AT(undefined4*, 0x00665848)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define s_Are_sounds_frozen__00632414 ((char*)0x00632414)
#define s_playsound_00632358 ((char*)0x00632358)
#define s_snd_radiomessagevolume_006323b4 ((char*)0x006323b4)
#define s_snd_frozen_00632408 ((char*)0x00632408)
#define s_Are_sounds_visible__006323f4 ((char*)0x006323f4)
#define s_C__dev_ONSLAUGHT2_SoundManager_c_00632428 ((char*)0x00632428)
#define s_The_radio_message_volume_006323cc ((char*)0x006323cc)
#define s_The_HUD_message_volume_0063239c ((char*)0x0063239c)
#define s_sound_master_volume____2_8f_00632464 ((char*)0x00632464)
#define s_Play_the_named_sample_or_stream_00632364 ((char*)0x00632364)
#define s_snd_visible_006323e8 ((char*)0x006323e8)
#define s_data_sounds_sounds_sfx_0063244c ((char*)0x0063244c)
#define s_snd_hudmessagevolume_00632384 ((char*)0x00632384)
typedef undefined4 (BEA_THISCALL* FUN_0042af80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042af80_t> FUN_0042af80 = {(FUN_0042af80_t)0x0042af80};
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef uint32_t (BEA_THISCALL* FUN_0042c420_t)(uint32_t);
static const bea_guard<FUN_0042c420_t> FUN_0042c420 = {(FUN_0042c420_t)0x0042c420};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004e0300_t)(uint32_t);
static const bea_guard<FUN_004e0300_t> FUN_004e0300 = {(FUN_004e0300_t)0x004e0300};
typedef uint32_t (BEA_CDECL* FUN_004e2530_t)(uint32_t);
static const bea_guard<FUN_004e2530_t> FUN_004e2530 = {(FUN_004e2530_t)0x004e2530};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef undefined4 (BEA_THISCALL* FUN_005169b0_t)(uint32_t);
static const bea_guard<FUN_005169b0_t> FUN_005169b0 = {(FUN_005169b0_t)0x005169b0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_004e00d0(void * this_)
{
  double v0;
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x28) = 0x3f800000;
  fVar2 = bea_fcast<float>(DAT_00662aac);
  v0 = bea_fcast<double>(DAT_00662aac);
  *(float *)((int)this_ + 0x20) = bea_fcast<float>(DAT_00662aac);
  FUN_00441740(&DAT_0066f580,s_sound_master_volume____2_8f_00632464,v0);
  DAT_00662aac = bea_piece32(fVar2);
  FUN_004e0300(bea_arg(this_));
  FUN_004e2530(bea_arg(s_data_sounds_sounds_sfx_0063244c));
  *(undefined4 *)((int)this_ + 0x34) = 0;
  iVar5 = 0x100;
  do {
    puVar4 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x88), bea_arg(0x4a), bea_arg(s_C__dev_ONSLAUGHT2_SoundManager_c_00632428), bea_arg(0x51));
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[0x1c] = 0;
    }
    uVar1 = *(undefined4 *)((int)this_ + 0x34);
    puVar4[0x1e] = 0;
    puVar4[0x1d] = uVar1;
    if (*(int *)((int)this_ + 0x34) != 0) {
      *(undefined4 **)(*(int *)((int)this_ + 0x34) + 0x78) = puVar4;
    }
    iVar5 = iVar5 + -1;
    *(undefined4 **)((int)this_ + 0x34) = puVar4;
  } while (((iVar5 != 0)));
  puVar4 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x4a), bea_arg(s_C__dev_ONSLAUGHT2_SoundManager_c_00632428), bea_arg(0x5a));
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_0042c420(bea_arg(puVar4));
    *puVar4 = ((void*)0x005dee74);
  }
  *(undefined4 **)((int)this_ + 0x10) = puVar4;
  bea_vcall<uint32_t>(DAT_00665848, 0x14, puVar4);
  fVar6 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
  *(float *)((int)this_ + 0x14) = bea_fcast<float>(fVar6);
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined1 *)((int)this_ + 4) = 1;
  *(undefined4 *)((int)this_ + 0x2c) = 0x3ed70a3d;
  *(undefined4 *)((int)this_ + 0x30) = 0x3ee66666;
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_snd_frozen_00632408), bea_arg(s_Are_sounds_frozen__00632414), bea_arg(3), bea_arg((undefined4 *)((int)this_ + 0x1c)), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_snd_visible_006323e8), bea_arg(s_Are_sounds_visible__006323f4), bea_arg(3), bea_arg((undefined4 *)((int)this_ + 0x18)), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_snd_radiomessagevolume_006323b4), bea_arg(s_The_radio_message_volume_006323cc), bea_arg(4), bea_arg((undefined4 *)((int)this_ + 0x2c)), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_snd_hudmessagevolume_00632384), bea_arg(s_The_HUD_message_volume_0063239c), bea_arg(4), bea_arg((undefined4 *)((int)this_ + 0x30)), bea_arg(0), bea_arg(0));
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_playsound_00632358), bea_arg(s_Play_the_named_sample_or_stream_00632364), bea_arg(((void*)0x004e0040)), bea_arg(0));
  cVar3 = FUN_005169b0(bea_arg(&DAT_00896988));
  if (cVar3 == '\0') {
    *(undefined1 *)((int)this_ + 4) = 0;
    return 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e00d0, ap_004e00d0));
