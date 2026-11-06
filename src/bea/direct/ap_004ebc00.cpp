// auto-ported from 004ebc00_FUN_004ebc00.c (FUN_004ebc00, 262 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00855090 GLOBAL_AT(undefined4*, 0x00855090)
#define DAT_00855098 GLOBAL_AT(undefined4*, 0x00855098)
#define s_Warning___unattached_static_shad_006329b0 ((char*)0x006329b0)
#define s_Shadow_0x_x_has_thing__d___0x_x_006329d4 ((char*)0x006329d4)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_004ebfb0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ebfb0_t> FUN_004ebfb0 = {(FUN_004ebfb0_t)0x004ebfb0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_004ebc00(void * this_)
{
  int *v0;
  undefined4 *puVar1;
  int iVar2;
  int v2;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  for (v0 = *(int **)this_; BEA_LOOP_GUARD((v0 != (int *)0x0)); v0 = (int *)v0[8]) {
    if (v0[1] != -1) {
      if (DAT_00855090 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *DAT_00855090;
      }
      v2 = 0;
      DAT_00855098 = DAT_00855090;
      while (BEA_LOOP_GUARD((iVar2 != 0))) {
        if ((int)*(short *)(iVar2 + 0x2e) == v0[1]) {
          v2 = iVar2;
        }
        DAT_00855098 = (int *)DAT_00855098[1];
        if (DAT_00855098 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *DAT_00855098;
        }
      }
      *v0 = v2;
      FUN_0055de9b(local_100,s_Shadow_0x_x_has_thing__d___0x_x_006329d4,(int)v0,v0[1],v2);
      CRenderThing__vslot3(local_100);
      if ((int *)*v0 == (int *)0x0) {
        CRenderThing__vslot3(s_Warning___unattached_static_shad_006329b0);
      }
      else {
        bea_vcall<uint32_t>(*v0, 0x30, v0);
      }
    }
    iVar2 = v0[3];
    if (0 < iVar2) {
      do {
        iVar2 = iVar2 + -1;
      } while (BEA_LOOP_GUARD((iVar2 != 0)));
    }
  }
  for (puVar1 = *(undefined4 **)this_; BEA_LOOP_GUARD((puVar1 != (undefined4 *)0x0)); puVar1 = (undefined4 *)puVar1[8])
  {
    FUN_004ebfb0(bea_arg(this_), bea_arg(*puVar1), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ebc00, ap_004ebc00));
