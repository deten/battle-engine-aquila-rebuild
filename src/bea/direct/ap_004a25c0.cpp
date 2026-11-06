// auto-ported from 004a25c0_FUN_004a25c0.c (FUN_004a25c0, 159 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x190: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_009c2dd0 GLOBAL_AT(char, 0x009c2dd0)
#define s_Heap_Delta____32s____15d_bytes___0062f6d0 ((char*)0x0062f6d0)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_004a25c0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  char *v0;

  alignas(16) uint8_t bea_frame_[0x190] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_190)[400] = *reinterpret_cast<undefined1 (*)[400]>(bea_frame_ + 0x190 - 0x190);
  v0 = (char *)&DAT_009c2dd0;
  piVar3 = (int *)((int)this_ + 0x464);
  do {
    if ((piVar3[-0x103] != piVar3[-0x81]) || (piVar3[0x83] != *piVar3)) {
      FUN_0055de9b(local_190,s_Heap_Delta____32s____15d_bytes___0062f6d0,v0,
                   piVar3[-0x103] - piVar3[-0x81],piVar3[0x83] - *piVar3);
      CRenderThing__vslot3(local_190);
    }
    v0 = v0 + 0x20;
    piVar3 = piVar3 + 1;
  } while (BEA_LOOP_GUARD(((int)v0 < 0x9c3df0)));
  puVar1 = (undefined4 *)((int)this_ + 0x260);
  iVar2 = 0x81;
  do {
    *puVar1 = puVar1[-0x82];
    puVar1[0x81] = puVar1[0x104];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a25c0, ap_004a25c0));
