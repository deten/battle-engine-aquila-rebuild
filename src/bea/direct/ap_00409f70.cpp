// auto-ported from 00409f70_FUN_00409f70.c (FUN_00409f70, 1509 bytes) by tools/autoport.py
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
#define s_Micro_Missile_00623408 ((char*)0x00623408)
#define s_hud_Vulcan_Cannon_0062348c ((char*)0x0062348c)
#define s_Grenade_00623484 ((char*)0x00623484)
#define s_hud_Rail_Gun_00623350 ((char*)0x00623350)
#define s_hud_Pulse_Cannon_augmented_00623360 ((char*)0x00623360)
#define s_hud_Flux_Missile_00623418 ((char*)0x00623418)
#define s_hud_Torpedo_launcher_0062344c ((char*)0x0062344c)
#define s_Beam_Laser_006233a8 ((char*)0x006233a8)
#define s_hud__s_00623314 ((char*)0x00623314)
#define s_hud_beam_laser_00623340 ((char*)0x00623340)
#define s_Rail_Gun_006233cc ((char*)0x006233cc)
#define s_hud_Micro_Missiles_006233f4 ((char*)0x006233f4)
#define s_hud_Spread_Bomb_006233d8 ((char*)0x006233d8)
#define s_hud_Pulse_Cannon_0062332c ((char*)0x0062332c)
#define s_hud_Blaster_00623438 ((char*)0x00623438)
#define s_Plasma_Cannon_0062337c ((char*)0x0062337c)
#define s_hud_Grenade_launcher_0062346c ((char*)0x0062346c)
#define s_Flux_Pod_0062342c ((char*)0x0062342c)
#define s_hud_beam_laser_augmented_0062338c ((char*)0x0062338c)
#define s_Spread_Bomb_006233e8 ((char*)0x006233e8)
#define s_Torpedo_00623464 ((char*)0x00623464)
#define s_Blaster_00623444 ((char*)0x00623444)
#define s_Vulcan_Cannon_006234a0 ((char*)0x006234a0)
#define s_hud_Rail_Gun_augmented_006233b4 ((char*)0x006233b4)
typedef uint32_t (BEA_THISCALL* FUN_0040d5f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d5f0_t> FUN_0040d5f0 = {(FUN_0040d5f0_t)0x0040d5f0};
typedef uint32_t (BEA_THISCALL* FUN_00411e70_t)(uint32_t);
static const bea_guard<FUN_00411e70_t> FUN_00411e70 = {(FUN_00411e70_t)0x00411e70};
typedef undefined4 (BEA_THISCALL* FUN_004124d0_t)(uint32_t);
static const bea_guard<FUN_004124d0_t> FUN_004124d0 = {(FUN_004124d0_t)0x004124d0};
typedef int (BEA_THISCALL* FUN_004129a0_t)(uint32_t);
static const bea_guard<FUN_004129a0_t> FUN_004129a0 = {(FUN_004129a0_t)0x004129a0};
typedef int (BEA_THISCALL* FUN_00413eb0_t)(uint32_t);
static const bea_guard<FUN_00413eb0_t> FUN_00413eb0 = {(FUN_00413eb0_t)0x00413eb0};
typedef undefined4 (BEA_THISCALL* FUN_004145f0_t)(uint32_t);
static const bea_guard<FUN_004145f0_t> FUN_004145f0 = {(FUN_004145f0_t)0x004145f0};
typedef int (BEA_THISCALL* FUN_00414b70_t)(uint32_t);
static const bea_guard<FUN_00414b70_t> FUN_00414b70 = {(FUN_00414b70_t)0x00414b70};
typedef undefined4 (BEA_THISCALL* FUN_004e1910_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1910_t> FUN_004e1910 = {(FUN_004e1910_t)0x004e1910};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_00409f70(void * this_)
{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  if (*(int *)((int)this_ + 0x260) == 3) {
    iVar2 = FUN_004129a0(bea_arg(*(void **)((int)this_ + 0x57c)));
  }
  else {
    iVar2 = FUN_00414b70(bea_arg(*(void **)((int)this_ + 0x578)));
  }
  if (iVar2 < 2) {
    return;
  }
  *(undefined4 *)((int)this_ + 0x588) = 0;
  if (*(int *)((int)this_ + 0x260) == 2) {
    FUN_00413eb0(bea_arg(*(void **)((int)this_ + 0x578)));
  }
  else if (*(int *)((int)this_ + 0x260) == 3) {
    FUN_00411e70(bea_arg(*(void **)((int)this_ + 0x57c)));
  }
  *(undefined4 *)((int)this_ + 0x584) = DAT_00672fd0;
  if (*(int *)((int)this_ + 0x260) == 3) {
    iVar2 = FUN_004124d0(bea_arg(*(void **)((int)this_ + 0x57c)));
  }
  else {
    iVar2 = FUN_004145f0(bea_arg(*(void **)((int)this_ + 0x578)));
  }
  if (iVar2 == 0) {
    return;
  }
  pbVar5 = (byte *)(iVar2 + 7);
  pcVar3 = s_Vulcan_Cannon_006234a0;
  pbVar6 = pbVar5;
  do {
    bVar1 = *pcVar3;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_0040a03e:
      iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_0040a043;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar3[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_0040a03e;
    pcVar3 = pcVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (BEA_LOOP_GUARD((bVar1 != 0)));
  iVar2 = 0;
LAB_0040a043:
  if (iVar2 == 0) {
    FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_Vulcan_Cannon_0062348c);
  }
  else {
    pcVar3 = s_Grenade_00623484;
    pbVar6 = pbVar5;
    do {
      bVar1 = *pcVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0040a094:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0040a099;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0040a094;
      pcVar3 = pcVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar2 = 0;
LAB_0040a099:
    if (iVar2 == 0) {
      FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_Grenade_launcher_0062346c);
    }
    else {
      pcVar3 = s_Torpedo_00623464;
      pbVar6 = pbVar5;
      do {
        bVar1 = *pcVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0040a0ea:
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0040a0ef;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0040a0ea;
        pcVar3 = pcVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar2 = 0;
LAB_0040a0ef:
      if (iVar2 == 0) {
        FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_Torpedo_launcher_0062344c);
      }
      else {
        pcVar3 = s_Blaster_00623444;
        pbVar6 = pbVar5;
        do {
          bVar1 = *pcVar3;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0040a140:
            iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_0040a145;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar3[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0040a140;
          pcVar3 = pcVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar2 = 0;
LAB_0040a145:
        if (iVar2 == 0) {
          FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_Blaster_00623438);
        }
        else {
          pcVar3 = s_Flux_Pod_0062342c;
          pbVar6 = pbVar5;
          do {
            bVar1 = *pcVar3;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_0040a196:
              iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_0040a19b;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar3[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_0040a196;
            pcVar3 = pcVar3 + 2;
            pbVar6 = pbVar6 + 2;
          } while (BEA_LOOP_GUARD((bVar1 != 0)));
          iVar2 = 0;
LAB_0040a19b:
          if (iVar2 == 0) {
            FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_Flux_Missile_00623418);
          }
          else {
            pcVar3 = s_Micro_Missile_00623408;
            pbVar6 = pbVar5;
            do {
              bVar1 = *pcVar3;
              bVar7 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) {
LAB_0040a1ec:
                iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                goto LAB_0040a1f1;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar3[1];
              bVar7 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_0040a1ec;
              pcVar3 = pcVar3 + 2;
              pbVar6 = pbVar6 + 2;
            } while (BEA_LOOP_GUARD((bVar1 != 0)));
            iVar2 = 0;
LAB_0040a1f1:
            if (iVar2 == 0) {
              FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_Micro_Missiles_006233f4);
            }
            else {
              pcVar3 = s_Spread_Bomb_006233e8;
              pbVar6 = pbVar5;
              do {
                bVar1 = *pcVar3;
                bVar7 = bVar1 < *pbVar6;
                if (bVar1 != *pbVar6) {
LAB_0040a23f:
                  iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                  goto LAB_0040a244;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar3[1];
                bVar7 = bVar1 < pbVar6[1];
                if (bVar1 != pbVar6[1]) goto LAB_0040a23f;
                pcVar3 = pcVar3 + 2;
                pbVar6 = pbVar6 + 2;
              } while (BEA_LOOP_GUARD((bVar1 != 0)));
              iVar2 = 0;
LAB_0040a244:
              if (iVar2 != 0) goto LAB_0040a29e;
              FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_Spread_Bomb_006233d8);
            }
          }
        }
      }
    }
  }
  uVar4 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(local_100), bea_arg(0));
  FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(uVar4), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
LAB_0040a29e:
  pcVar3 = s_Rail_Gun_006233cc;
  pbVar6 = pbVar5;
  if (*(int *)((int)this_ + 0x2fc) == 0) {
    do {
      bVar1 = *pcVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0040a497:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0040a49c;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0040a497;
      pcVar3 = pcVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar2 = 0;
LAB_0040a49c:
    if (iVar2 == 0) {
      FUN_0040d5f0(bea_arg(this_), bea_arg(s_hud_Rail_Gun_00623350));
      return;
    }
    pcVar3 = s_Beam_Laser_006233a8;
    pbVar6 = pbVar5;
    do {
      bVar1 = *pcVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0040a4e6:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0040a4eb;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0040a4e6;
      pcVar3 = pcVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar2 = 0;
LAB_0040a4eb:
    if (iVar2 == 0) {
      FUN_0040d5f0(bea_arg(this_), bea_arg(s_hud_beam_laser_00623340));
      return;
    }
    pcVar3 = s_Plasma_Cannon_0062337c;
    do {
      bVar1 = *pcVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0040a535:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0040a53a;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0040a535;
      pcVar3 = pcVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar2 = 0;
LAB_0040a53a:
    if (iVar2 == 0) {
      FUN_0040d5f0(bea_arg(this_), bea_arg(s_hud_Pulse_Cannon_0062332c));
    }
  }
  else {
    do {
      bVar1 = *pcVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0040a2d7:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0040a2dc;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0040a2d7;
      pcVar3 = pcVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar2 = 0;
LAB_0040a2dc:
    if (iVar2 == 0) {
      FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_Rail_Gun_augmented_006233b4);
      uVar4 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(local_100), bea_arg(0));
      FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(uVar4), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
      return;
    }
    pcVar3 = s_Beam_Laser_006233a8;
    pbVar6 = pbVar5;
    do {
      bVar1 = *pcVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0040a36c:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0040a371;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0040a36c;
      pcVar3 = pcVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar2 = 0;
LAB_0040a371:
    if (iVar2 == 0) {
      FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_beam_laser_augmented_0062338c);
      uVar4 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(local_100), bea_arg(0));
      FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(uVar4), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
      return;
    }
    pcVar3 = s_Plasma_Cannon_0062337c;
    do {
      bVar1 = *pcVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0040a401:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0040a406;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0040a401;
      pcVar3 = pcVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar2 = 0;
LAB_0040a406:
    if (iVar2 == 0) {
      FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_Pulse_Cannon_augmented_00623360);
      uVar4 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(local_100), bea_arg(0));
      FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(uVar4), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00409f70, ap_00409f70));
