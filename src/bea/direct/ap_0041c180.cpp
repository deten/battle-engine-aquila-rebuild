// auto-ported from 0041c180_FUN_0041c180.c (FUN_0041c180, 191 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit extraout_var: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00672e18 GLOBAL_AT(int, 0x00672e18)
#define DAT_00672e30 GLOBAL_AT(int, 0x00672e30)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Mechs_006242b0 ((char*)0x006242b0)
#define s_Infantry_006242b8 ((char*)0x006242b8)
#define s_Vehicles_006242d4 ((char*)0x006242d4)
#define s_Aircraft_006242e0 ((char*)0x006242e0)
#define s___15s_killed_this_level__d__Tota_00624288 ((char*)0x00624288)
#define s_Emplacements_006242c4 ((char*)0x006242c4)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static int BEA_THISCALL ap_0041c180(void * this_)
{
  undefined uVar1;
  undefined3 extraout_var = 0;
  int iVar3;
  char *pcVar4;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  char (&local_14)[20] = *reinterpret_cast<char (*)[20]>(bea_frame_ + 0x20 - 0x14);
  int iVar2;
  
  iVar2 = DAT_00672e18;
  if (DAT_00672e18 != 100) {
    iVar3 = 0;
    do {
      *(int *)((int)this_ + iVar3 * 4 + 0x23f4) =
           *(int *)((int)this_ + iVar3 * 4 + 0x23f4) + (&DAT_00672e30)[iVar3];
      if (iVar3 == 0) {
        pcVar4 = s_Aircraft_006242e0;
LAB_0041c1fb:
        FUN_0055de9b(local_14,pcVar4);
      }
      else {
        if (iVar3 == 1) {
          pcVar4 = s_Vehicles_006242d4;
          goto LAB_0041c1fb;
        }
        if (iVar3 == 2) {
          pcVar4 = s_Emplacements_006242c4;
          goto LAB_0041c1fb;
        }
        if (iVar3 == 3) {
          pcVar4 = s_Infantry_006242b8;
          goto LAB_0041c1fb;
        }
        if (iVar3 == 4) {
          pcVar4 = s_Mechs_006242b0;
          goto LAB_0041c1fb;
        }
      }
      uVar1 = FUN_00441740(&DAT_0066f580,s___15s_killed_this_level__d__Tota_00624288,local_14,
                           (&DAT_00672e30)[iVar3],
                           *(uint *)((int)this_ + iVar3 * 4 + 0x23f4) & 0xffffff);
      iVar2 = CONCAT31(extraout_var,uVar1);
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 < 5)));
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041c180, ap_0041c180));
