// auto-ported from 00500d60_FUN_00500d60.c (FUN_00500d60, 260 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00854e00 GLOBAL_AT(int, 0x00854e00)
#define s_WARNING___CVBufTexture__s_has__d_00633e2c ((char*)0x00633e2c)
#define s_WARNING___CVBufTexture__s_has__d_00633dbc ((char*)0x00633dbc)
#define s_WARNING___CVBufTexture__no_textu_00633df0 ((char*)0x00633df0)
#define s_WARNING___CVBufTexture__no_textu_00633d80 ((char*)0x00633d80)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_THISCALL* FUN_004883f0_t)(uint32_t);
static const bea_guard<FUN_004883f0_t> FUN_004883f0 = {(FUN_004883f0_t)0x004883f0};
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_CDECL ap_00500d60(void)
{
  int iVar1;
  int *piVar2;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  for (piVar2 = DAT_00854e00; BEA_LOOP_GUARD((piVar2 != (int *)0x0)); piVar2 = (int *)piVar2[0x16]) {
    if (((void *)piVar2[0x13] != (void *)0x0) && ((char)piVar2[0x17] == '\0')) {
      if ((char)piVar2[0xb] != '\0') {
        FUN_004883f0(bea_arg((void *)piVar2[0x13]));
        piVar2[0xf] = 0;
        *(undefined1 *)(piVar2 + 0xb) = 0;
      }
      iVar1 = piVar2[0xd];
      if (iVar1 != 0) {
        if (*piVar2 == 0) {
          FUN_0055de9b(local_100,s_WARNING___CVBufTexture__no_textu_00633df0,iVar1);
        }
        else {
          FUN_0055de9b(local_100,s_WARNING___CVBufTexture__s_has__d_00633e2c,(char *)(*piVar2 + 8),
                       iVar1);
        }
        CRenderThing__vslot3(local_100);
      }
      piVar2[0xd] = 0;
    }
    if (((void *)piVar2[piVar2[0x12] + 0x10] != (void *)0x0) && ((char)piVar2[0x17] == '\0')) {
      if ((char)piVar2[4] != '\0') {
        FUN_005001e0(bea_arg((void *)piVar2[piVar2[0x12] + 0x10]));
        piVar2[0xe] = 0;
        *(undefined1 *)(piVar2 + 4) = 0;
      }
      iVar1 = piVar2[7];
      if (iVar1 != 0) {
        if (*piVar2 == 0) {
          FUN_0055de9b(local_100,s_WARNING___CVBufTexture__no_textu_00633d80,iVar1);
        }
        else {
          FUN_0055de9b(local_100,s_WARNING___CVBufTexture__s_has__d_00633dbc,(char *)(*piVar2 + 8),
                       iVar1);
        }
        CRenderThing__vslot3(local_100);
      }
      if (piVar2[7] != 0) {
        piVar2[0x19] = piVar2[7];
      }
      piVar2[7] = 0;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500d60, ap_00500d60));
