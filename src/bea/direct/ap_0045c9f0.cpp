// auto-ported from 0045c9f0_FUN_0045c9f0.c (FUN_0045c9f0, 398 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x210: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00662dd4 GLOBAL_AT(int, 0x00662dd4)
#define s_Goodie__d__type__d_0062933c ((char*)0x0062933c)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_CDECL* FUN_0045cb80_t)(int, int, ...);
static const bea_guard<FUN_0045cb80_t> FUN_0045cb80 = {(FUN_0045cb80_t)0x0045cb80};
typedef undefined4 (BEA_CDECL* FUN_004d6f70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d6f70_t> FUN_004d6f70 = {(FUN_004d6f70_t)0x004d6f70};
typedef uint32_t (BEA_THISCALL* FUN_00539dc0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00539dc0_t> FUN_00539dc0 = {(FUN_00539dc0_t)0x00539dc0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_0045c9f0(void * this_)
{
  int iVar1;
  uint v1;

  alignas(16) uint8_t bea_frame_[0x210] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_204)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x210 - 0x204);
  undefined1 (&local_104)[260] = *reinterpret_cast<undefined1 (*)[260]>(bea_frame_ + 0x210 - 0x104);
  *(undefined4 *)((int)this_ + 0x198) = 0;
  *(undefined4 *)((int)this_ + 0x19c) = 0;
  iVar1 = FUN_0045cb80(*(undefined4 *)((int)this_ + 0x13c),*(undefined4 *)((int)this_ + 0x140));
  if ((iVar1 != -1) && (DAT_00662dd4 == 0)) {
    FUN_004d6f70(bea_arg(local_104), bea_arg(-1000 - iVar1), bea_arg(1));
    if (iVar1 < 8) {
      v1 = 0;
    }
    else if (iVar1 == 0xc) {
      v1 = 0;
    }
    else if (iVar1 == 0xd) {
      v1 = 0;
    }
    else if (iVar1 == 0x18) {
      v1 = 0;
    }
    else if (iVar1 == 0x21) {
      v1 = 0;
    }
    else if (iVar1 == 0x22) {
      v1 = 0;
    }
    else if (iVar1 == 0x23) {
      v1 = 0;
    }
    else if (iVar1 < 0x3a) {
      v1 = 1;
    }
    else if (iVar1 < 0x42) {
      v1 = 0;
    }
    else if (iVar1 < 0x47) {
      v1 = 3;
    }
    else if (iVar1 < 0x4a) {
      v1 = 0;
    }
    else if (iVar1 == 0x4a) {
      v1 = 0;
    }
    else if (iVar1 == 0x4b) {
      v1 = 2;
    }
    else if (iVar1 == 0x4c) {
      v1 = 1;
    }
    else if (iVar1 == 0x4d) {
      v1 = 2;
    }
    else {
      v1 = (iVar1 < 0xc9) - 1 & 2;
    }
    *(uint *)((int)this_ + 0x154) = v1;
    FUN_0055de9b(local_204,s_Goodie__d__type__d_0062933c,iVar1,v1);
    CRenderThing__vslot3(local_204);
    iVar1 = *(int *)((int)this_ + 0x154);
    if (((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) {
      *(undefined4 *)((int)this_ + 0x1d8) = 1;
      FUN_00539dc0(bea_arg((void *)((int)this_ + 0xc)), bea_arg(local_104), bea_arg(0x500000));
      return;
    }
    *(undefined4 *)((int)this_ + 0x1d8) = 2;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0045c9f0, ap_0045c9f0));
