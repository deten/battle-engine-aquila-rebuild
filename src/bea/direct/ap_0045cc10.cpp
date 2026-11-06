// auto-ported from 0045cc10_FUN_0045cc10.c (FUN_0045cc10, 241 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Goody_creation_took__f_s_00629350 ((char*)0x00629350)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_CDECL* FUN_0045cb80_t)(int, int, ...);
static const bea_guard<FUN_0045cb80_t> FUN_0045cb80 = {(FUN_0045cb80_t)0x0045cb80};
typedef uint32_t (BEA_CDECL* FUN_004d7200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d7200_t> FUN_004d7200 = {(FUN_004d7200_t)0x004d7200};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef int (BEA_THISCALL* FUN_00528d90_t)(uint32_t);
static const bea_guard<FUN_00528d90_t> FUN_00528d90 = {(FUN_00528d90_t)0x00528d90};
typedef uint32_t (BEA_THISCALL* FUN_00528da0_t)(uint32_t);
static const bea_guard<FUN_00528da0_t> FUN_00528da0 = {(FUN_00528da0_t)0x00528da0};
typedef uint32_t (BEA_THISCALL* FUN_00528dc0_t)(uint32_t);
static const bea_guard<FUN_00528dc0_t> FUN_00528dc0 = {(FUN_00528dc0_t)0x00528dc0};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_0045cc10(void * this_)
{
  void *this_00;
  void *this_01;
  int iVar1;
  float10 fVar2;
  float10 fVar3;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_64)[100] = *reinterpret_cast<undefined1 (*)[100]>(bea_frame_ + 0x70 - 0x64);
  if (*(int *)((int)this_ + 0x1d8) == 1) {
    this_00 = (void *)((int)this_ + 0xc);
    iVar1 = FUN_00528d90(bea_arg(this_00));
    if ((iVar1 == 0) && (*(int *)((int)this_ + 0x28) != 0)) {
      iVar1 = FUN_0045cb80(*(undefined4 *)((int)this_ + 0x13c),*(undefined4 *)((int)this_ + 0x140));
      if (iVar1 != -1) {
        fVar2 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
        FUN_00528da0(bea_arg(this_00));
        FUN_004d7200(bea_arg(-1000 - iVar1), bea_arg(*(undefined4 *)((int)this_ + 0x28)), bea_arg(0));
        FUN_00548c00(bea_arg(*(void **)((int)this_ + 0x28)));
        this_01 = *(void **)((int)this_ + 0x28);
        if (this_01 != (void *)0x0) {
          FUN_00547d90(bea_arg(this_01));
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_01));
        }
        *(undefined4 *)((int)this_ + 0x28) = 0;
        FUN_00528dc0(bea_arg(this_00));
        *(undefined4 *)((int)this_ + 0x1d8) = 2;
        fVar3 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
        FUN_0055de9b(local_64,s_Goody_creation_took__f_s_00629350,
                     (double)(fVar3 - (float10)(float)fVar2));
        CRenderThing__vslot3(local_64);
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0045cc10, ap_0045cc10));
