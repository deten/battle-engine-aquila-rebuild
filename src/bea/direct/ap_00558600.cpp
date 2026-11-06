// auto-ported from 00558600_vslot4.c (CDXTexture::vslot4, 136 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char CDXTexture;
#define s_Texture__s_refcount__d_00652660 ((char*)0x00652660)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_THISCALL ap_00558600(CDXTexture * this_)
{
  int v1;
  int iVar1;
  CDXTexture *pCVar2;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  iVar1 = 0;
  if (0 < *(int *)(this_ + 0x138)) {
    pCVar2 = this_ + 0xb8;
    do {
      if (*(int *)pCVar2 != 0) {
        CFEPBEConfig__vslot7(bea_arg(this_));
        v1 = bea_vcall<uint32_t>(*(int **)pCVar2, 0x8, *(int **)pCVar2);
        if (0 < v1) {
          FUN_0055de9b(auStack_100,s_Texture__s_refcount__d_00652660,(char *)(this_ + 8),v1);
          CRenderThing__vslot3(auStack_100);
        }
        *(int *)pCVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = pCVar2 + 4;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)(this_ + 0x138))));
    return 0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00558600, ap_00558600));
