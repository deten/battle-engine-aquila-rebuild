// auto-ported from 0043e8e0_FUN_0043e8e0.c (FUN_0043e8e0, 220 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* CCutscene__vslot64_t)(uint32_t);
static const bea_guard<CCutscene__vslot64_t> CCutscene__vslot64 = {(CCutscene__vslot64_t)0x0043f420};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004f3f00_t)(uint32_t);
static const bea_guard<FUN_004f3f00_t> FUN_004f3f00 = {(FUN_004f3f00_t)0x004f3f00};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_0043e8e0(void * this_)
{
  int iVar1;
  void *this_00;
  int iVar2;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005dad88);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005dad10);
  local_4 = 2;
  CCutscene__vslot64(bea_arg(this_));
  iVar2 = 0;
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  if (0 < *(int *)((int)this_ + 0xd70)) {
    do {
      iVar1 = *(int *)(*(int *)((int)this_ + 0xd6c) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
        *(undefined4 *)(*(int *)((int)this_ + 0xd6c) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0xd70))));
  }
  if (*(int *)((int)this_ + 0xd6c) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xd6c)));
    *(undefined4 *)((int)this_ + 0xd6c) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if ((*(int *)((int)this_ + 0x854) != 0) &&
     (this_00 = *(void **)(*(int *)((int)this_ + 0x854) + 4), this_00 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(this_00), bea_arg((int)this_ + 0x854));
  }
  local_4 = 0xffffffff;
  return FUN_004f3f00(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043e8e0, ap_0043e8e0));
