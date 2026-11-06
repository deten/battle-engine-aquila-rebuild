// auto-ported from 004d3a00_FUN_004d3a00.c (FUN_004d3a00, 233 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_005447d0_t)(uint32_t);
static const bea_guard<FUN_005447d0_t> FUN_005447d0 = {(FUN_005447d0_t)0x005447d0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static void BEA_THISCALL ap_004d3a00(void * this_)
{
  undefined4 *puVar1;
  void *this_00;
  int iVar2;
  
  if (*(int *)((int)this_ + 0x60) != 0) {
    if (*(int *)((int)this_ + 0x7c) == 0) {
      iVar2 = 0;
      if (0 < *(int *)((int)this_ + 0x68) * *(int *)((int)this_ + 0x6c)) {
        do {
          puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x60) + iVar2 * 4);
          if (puVar1 != (undefined4 *)0x0) {
            if (puVar1[3] == 0) {
              FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*puVar1));
            }
            FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar1));
          }
          iVar2 = iVar2 + 1;
        } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0x68) * *(int *)((int)this_ + 0x6c))));
      }
    }
    else {
      iVar2 = *(int *)((int)this_ + 0x80);
      if (iVar2 != 0) {
        FUN_0055db0a(bea_arg(iVar2), bea_arg(0x10), bea_arg(*(undefined4 *)(iVar2 + -4)), bea_arg(((void*)0x004d3af0)));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2 + -4));
        *(undefined4 *)((int)this_ + 0x80) = 0;
      }
      if (*(int *)((int)this_ + 0x84) != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x84)));
        *(undefined4 *)((int)this_ + 0x84) = 0;
      }
    }
  }
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x60)));
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 100)));
  this_00 = *(void **)((int)this_ + 0x98);
  if (this_00 != (void *)0x0) {
    FUN_005447d0(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d3a00, ap_004d3a00));
