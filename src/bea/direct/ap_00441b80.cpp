// auto-ported from 00441b80_FUN_00441b80.c (FUN_00441b80, 672 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_0066ff74 GLOBAL_AT(char, 0x0066ff74)
#define DAT_00662dfc GLOBAL_AT(int, 0x00662dfc)
#define DAT_0066ff78 GLOBAL_AT(int, 0x0066ff78)
#define DAT_0066eb84 GLOBAL_AT(int, 0x0066eb84)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define DAT_0066ff75 GLOBAL_AT(char, 0x0066ff75)
#define s__s_04d_bmp_0062851c ((char*)0x0062851c)
#define s_Screen_dump__Couldn_t_write__s_006284d0 ((char*)0x006284d0)
#define s_Screen_dump__Couldn_t_save_small_00628454 ((char*)0x00628454)
#define s_Screen_dump__Couldn_t_get_back_b_00628528 ((char*)0x00628528)
#define s_Screen_dump__Couldn_t_save_raw_s_006284f0 ((char*)0x006284f0)
#define s_Screen_dump__saved__s__fullsize__00628430 ((char*)0x00628430)
#define s__s_04d_dds_00628554 ((char*)0x00628554)
#define s_Screen_dump__Couldn_t_get_surfac_006284a4 ((char*)0x006284a4)
#define s_Screen_dump__Couldn_t_reload__s_00628484 ((char*)0x00628484)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_STDCALL* FUN_00574645_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00574645_t> FUN_00574645 = {(FUN_00574645_t)0x00574645};
typedef int (BEA_STDCALL* FUN_0057511b_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0057511b_t> FUN_0057511b = {(FUN_0057511b_t)0x0057511b};

static void BEA_CDECL ap_00441b80(void)
{
  int iVar1;
  uint uVar2;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  int * &piStack_110 = *reinterpret_cast<int * *>(bea_frame_ + 0x110 - 0x110);
  int * &piStack_10c = *reinterpret_cast<int * *>(bea_frame_ + 0x110 - 0x10c);
  undefined4 &local_108 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x108);
  char (&local_104)[260] = *reinterpret_cast<char (*)[260]>(bea_frame_ + 0x110 - 0x104);
  if (DAT_0066ff74 != '\0') {
    FUN_0055de9b(local_104,s__s_04d_dds_00628554,&DAT_00662dfc,DAT_0066ff78);
    uVar2 = -(uint)(DAT_0066eb84 != -1) & 0x66eb80;
    iVar1 = bea_vcall<uint32_t>(DAT_00888a50, 0x48, DAT_00888a50,0,0,0,&local_108);
    if (iVar1 < 0) {
      FUN_00441740(&DAT_0066eb90,s_Screen_dump__Couldn_t_get_back_b_00628528,local_104);
      return;
    }
    if (DAT_0066ff75 == 0) {
      iVar1 = FUN_00574645(bea_arg(local_104), bea_arg(4), bea_arg(local_108), bea_arg(0), bea_arg(uVar2));
    }
    else {
      FUN_0055de9b(local_104,s__s_04d_bmp_0062851c,&DAT_00662dfc,DAT_0066ff78);
      iVar1 = FUN_00574645(bea_arg(local_104), bea_arg(0), bea_arg(local_108), bea_arg(0), bea_arg(uVar2));
    }
    if (iVar1 < 0) {
      FUN_00441740(&DAT_0066eb90,s_Screen_dump__Couldn_t_save_raw_s_006284f0,local_104);
      return;
    }
    if (DAT_0066ff75 == 0) {
      iVar1 = bea_vcall<uint32_t>(DAT_00888a50, 0x5c, DAT_00888a50,0x100,0x100,1,0,0x31545844,2,&piStack_110,0);
      if ((iVar1 < 0) &&
         (iVar1 = bea_vcall<uint32_t>(DAT_00888a50, 0x5c, DAT_00888a50,0x80,0x80,1,0,0x17,2,&piStack_110,0), iVar1 < 0)) {
        FUN_00441740(&DAT_0066eb90,s_Screen_dump__Couldn_t_write__s_006284d0,local_104);
        return;
      }
      iVar1 = bea_vcall<uint32_t>(piStack_110, 0x48, piStack_110,0,&piStack_10c);
      if (iVar1 < 0) {
        FUN_00441740(&DAT_0066eb90,s_Screen_dump__Couldn_t_get_surfac_006284a4,local_104);
        bea_vcall<uint32_t>(piStack_110, 0x8, piStack_110);
        return;
      }
      iVar1 = FUN_0057511b(bea_arg(piStack_10c), bea_arg(0), bea_arg(0), bea_arg(local_104), bea_arg(0), bea_arg(0xffffffff), bea_arg(0), bea_arg(0));
      if (iVar1 < 0) {
        FUN_00441740(&DAT_0066eb90,s_Screen_dump__Couldn_t_reload__s_00628484,local_104);
        bea_vcall<uint32_t>(piStack_10c, 0x8, piStack_10c);
        bea_vcall<uint32_t>(piStack_110, 0x8, piStack_110);
        return;
      }
      iVar1 = FUN_00574645(bea_arg(local_104), bea_arg(4), bea_arg(piStack_10c), bea_arg(0), bea_arg(0));
      if (iVar1 < 0) {
        FUN_00441740(&DAT_0066eb90,s_Screen_dump__Couldn_t_save_small_00628454,local_104);
        bea_vcall<uint32_t>(piStack_10c, 0x8, piStack_10c);
        bea_vcall<uint32_t>(piStack_110, 0x8, piStack_110);
        return;
      }
      bea_vcall<uint32_t>(piStack_10c, 0x8, piStack_10c);
      bea_vcall<uint32_t>(piStack_110, 0x8, piStack_110);
    }
    FUN_00441740(&DAT_0066eb90,s_Screen_dump__saved__s__fullsize__00628430,local_104,
                 (uint)DAT_0066ff75);
    DAT_0066ff78 = DAT_0066ff78 + 1;
    DAT_0066ff74 = '\0';
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00441b80, ap_00441b80));
