// auto-ported from 00556d90_FUN_00556d90.c (FUN_00556d90, 252 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00888c8c GLOBAL_AT(int, 0x00888c8c)
#define s_Texture__s_refcount__d_00652660 ((char*)0x00652660)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_004f2790_t)(uint32_t);
static const bea_guard<FUN_004f2790_t> FUN_004f2790 = {(FUN_004f2790_t)0x004f2790};
typedef uint32_t (BEA_STDCALL* FUN_00512cc0_t)(uint32_t);
static const bea_guard<FUN_00512cc0_t> FUN_00512cc0 = {(FUN_00512cc0_t)0x00512cc0};
typedef uint32_t (BEA_THISCALL* FUN_00512d50_t)(uint32_t);
static const bea_guard<FUN_00512d50_t> FUN_00512d50 = {(FUN_00512d50_t)0x00512d50};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_00556d90(void * this_)
{
  int v1;
  void *this_00;
  int iVar1;
  int *piVar2;
  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_10c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x110 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x110 - 0x8);
  uint &local_4 = *reinterpret_cast<uint *>(bea_frame_ + 0x110 - 0x4);
  *(undefined ***)this_ = ((void*)0x005e59a0);
  local_4 = 1;
  FUN_00512cc0(bea_arg(this_));
  if ((DAT_00888c8c != 0) && (iVar1 = 0, 0 < *(int *)((int)this_ + 0x138))) {
    piVar2 = (int *)((int)this_ + 0xb8);
    do {
      if (*piVar2 != 0) {
        CFEPBEConfig__vslot7(bea_arg(this_));
        v1 = bea_vcall<uint32_t>(*piVar2, 0x8, (int *)*piVar2);
        if (0 < v1) {
          FUN_0055de9b(auStack_10c,s_Texture__s_refcount__d_00652660,(char *)((int)this_ + 8),v1);
          CRenderThing__vslot3(auStack_10c);
        }
        *piVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0x138))));
  }
  CFEPBEConfig__vslot7(bea_arg(this_));
  local_4 = local_4 & 0xffffff00;
  FUN_00512d50(bea_arg(this_));
  local_4 = 0xffffffff;
  if (this_ == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)((int)this_ + 8);
  }
  return FUN_004f2790(bea_arg(this_00));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00556d90, ap_00556d90));
