// auto-ported from 004aa410_FUN_004aa410.c (FUN_004aa410, 201 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062fc04 GLOBAL_AT(int, 0x0062fc04)
#define DAT_0062fc00 GLOBAL_AT(int, 0x0062fc00)
#define s_Warning__Mesh_contains_a_null_te_0062fc50 ((char*)0x0062fc50)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static undefined4 BEA_CDECL ap_004aa410(int param_1)
{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  iVar4 = -1;
  pcVar1 = (char *)(param_1 + 8);
  pcVar5 = pcVar1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (BEA_LOOP_GUARD((cVar2 != '\0')));
  if (iVar4 == -2) {
    FUN_0055de9b(local_100,s_Warning__Mesh_contains_a_null_te_0062fc50);
    CRenderThing__vslot3(local_100);
    return 0;
  }
  iVar4 = FUN_0056e170(bea_arg(pcVar1), bea_arg(&DAT_0062fc04), bea_arg(2));
  if (iVar4 == 0) {
    uVar3 = FUN_004f27f0(param_1,4,0,0xffffffff,1,1);
    return uVar3;
  }
  iVar4 = FUN_0056e170(bea_arg(pcVar1), bea_arg(&DAT_0062fc00), bea_arg(2));
  if (iVar4 == 0) {
    uVar3 = FUN_004f27f0(param_1,2,0,0xffffffff,1,1);
    return uVar3;
  }
  uVar3 = FUN_004f27f0(param_1,1,0,0xffffffff,1,1);
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004aa410, ap_004aa410));
