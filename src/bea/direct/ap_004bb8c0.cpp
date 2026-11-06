// auto-ported from 004bb8c0_FUN_004bb8c0.c (FUN_004bb8c0, 313 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (15 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_00679ec1 GLOBAL_AT(char, 0x00679ec1)
#define s_Playing_Track___d_00630a68 ((char*)0x00630a68)
#define s_data_music_BEA_08_Master__wma_006309e4 ((char*)0x006309e4)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_THISCALL ap_004bb8c0(void * this_, uint param_1, int param_2)
{
  undefined4 a1;
  int iVar1;
  uint v0;
  char *a1_00;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_64)[100] = *reinterpret_cast<undefined1 (*)[100]>(bea_frame_ + 0x70 - 0x64);
  v0 = param_1;
  switch(param_1) {
  case 0:
    v0 = (-(uint)(DAT_0083d448 != 0) & 0xfffffff9) + 8;
    break;
  case 1:
    v0 = 7;
    break;
  case 2:
    v0 = 3;
    break;
  case 3:
  case 4:
    if (DAT_0083d448 == 0) {
      iVar1 = _rand();
      v0 = iVar1 >> 8 & 0x80000007;
      if ((int)v0 < 0) {
        v0 = (v0 - 1 | 0xfffffff8) + 1;
      }
      if (v0 == 7) {
        v0 = 9;
      }
    }
    else {
      v0 = 0;
    }
  }
  FUN_0055de9b(local_64,s_Playing_Track___d_00630a68,v0);
  CRenderThing__vslot3(local_64);
  a1_00 = *(char **)((int)this_ + 0xc);
  for (; BEA_LOOP_GUARD((v0 != 0)); v0 = v0 - 1) {
    if (a1_00 == (char *)0x0) goto LAB_004bb968;
    a1_00 = *(char **)(a1_00 + 0x104);
  }
  if (a1_00 == (char *)0x0) {
LAB_004bb968:
    a1_00 = *(char **)((int)this_ + 0xc);
  }
  if ((*(char *)((int)this_ + 8) == '\0') || (param_2 == 0)) {
    a1 = *(undefined4 *)((int)this_ + 0x2c);
    *(char **)((int)this_ + 0x10) = a1_00;
    *(undefined4 *)((int)this_ + 0x28) = a1;
    *(undefined4 *)((int)this_ + 4) = 3;
    *(uint *)((int)this_ + 0x3c) = param_1;
    if (a1_00 != (char *)0x0) {
      if ((DAT_00662df4 != 0) || (DAT_00679ec1 != '\0')) {
        a1_00 = s_data_music_BEA_08_Master__wma_006309e4;
      }
      if (*(char *)((int)this_ + 8) != '\0') {
        bea_vcall<uint32_t>(this_, 0x1c, a1_00);
        return;
      }
      *(undefined4 *)((int)this_ + 0x34) = a1;
      *(undefined4 *)((int)this_ + 0x28) = a1;
      bea_vcall<uint32_t>(this_, 0x14, a1);
      bea_vcall<uint32_t>(this_, 0x8, a1_00);
      *(undefined1 *)((int)this_ + 8) = 1;
    }
  }
  else if (a1_00 != *(char **)((int)this_ + 0x10)) {
    *(char **)((int)this_ + 0x30) = a1_00;
    *(undefined4 *)((int)this_ + 0x28) = 0;
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bb8c0, ap_004bb8c0));
