// auto-ported from 00500e70_FUN_00500e70.c (FUN_00500e70, 258 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (8 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c741c GLOBAL_AT(char, 0x009c741c)
#define _DAT_009c73d4 GLOBAL_AT(int, 0x009c73d4)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_00854e04 GLOBAL_AT(char, 0x00854e04)
typedef int (BEA_THISCALL* FUN_004883f0_t)(uint32_t);
static const bea_guard<FUN_004883f0_t> FUN_004883f0 = {(FUN_004883f0_t)0x004883f0};
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};
typedef int (BEA_THISCALL* FUN_00500c50_t)(uint32_t);
static const bea_guard<FUN_00500c50_t> FUN_00500c50 = {(FUN_00500c50_t)0x00500c50};
typedef uint32_t (BEA_THISCALL* FUN_00513c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513c70_t> FUN_00513c70 = {(FUN_00513c70_t)0x00513c70};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef undefined4 (BEA_THISCALL* FUN_005588f0_t)(uint32_t);
static const bea_guard<FUN_005588f0_t> FUN_005588f0 = {(FUN_005588f0_t)0x005588f0};
typedef uint32_t (BEA_THISCALL* FUN_00558fb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00558fb0_t> FUN_00558fb0 = {(FUN_00558fb0_t)0x00558fb0};

static void BEA_THISCALL ap_00500e70(void * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  
  if ((*(int *)((int)this_ + 0x1c) != 0) && (*(int *)((int)this_ + 0x34) != 0)) {
    if (*(char *)((int)this_ + 0x10) != '\0') {
      FUN_005001e0(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40)));
      *(undefined4 *)((int)this_ + 0x38) = 0;
      *(undefined1 *)((int)this_ + 0x10) = 0;
    }
    if (*(char *)((int)this_ + 0x2c) != '\0') {
      FUN_004883f0(bea_arg(*(void **)((int)this_ + 0x4c)));
      *(undefined4 *)((int)this_ + 0x3c) = 0;
      *(undefined1 *)((int)this_ + 0x2c) = 0;
    }
    iVar1 = *(int *)((int)this_ + 0x1c);
    iVar2 = *(int *)((int)this_ + 0x54);
    uVar3 = FUN_00500c50(bea_arg(this_));
    if (*(int **)this_ != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)this_, 0x20);
      FUN_005588f0(bea_arg(*(void **)this_));
    }
    if (*(int *)((int)this_ + 4) != 0) {
      DAT_009c741c = 1;
      _DAT_009c73d4 = *(int *)((int)this_ + 4);
    }
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    // hand fix (NOTES A1-14, bug class 14): the original tests the stack
    // argument here (`cmp %bl,0xc(%esp)` after its pushes), Ghidra printed
    // the constant 0, and the block below never ran: the stream state was
    // never cleared and level 211 lost its determinism (2026-10-20)
    cVar4 = (char)(uintptr_t)param_1;
    bea_vcall<uint32_t>(DAT_00888a50, 0x190, DAT_00888a50,0,
               *(undefined4 *)(*(int *)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40) + 8),0,
               *(undefined4 *)((int)this_ + 0x54));
    bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,*(undefined4 *)(*(int *)((int)this_ + 0x4c) + 8));
    FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)((int)this_ + 0x50)), bea_arg(0), bea_arg(iVar1 / iVar2), bea_arg(0), bea_arg(uVar3));
    if (*(void **)this_ != (void *)0x0) {
      FUN_00558fb0(bea_arg(*(void **)this_), bea_arg(0));
    }
    if (cVar4 != '\0') {
      if (*(int *)((int)this_ + 0x1c) != 0) {
        *(int *)((int)this_ + 100) = *(int *)((int)this_ + 0x1c);
      }
      *(undefined4 *)((int)this_ + 0x1c) = 0;
      *(undefined4 *)((int)this_ + 0x34) = 0;
      if (DAT_00854e04 != '\0') {
        *(uint *)((int)this_ + 0x48) = *(uint *)((int)this_ + 0x48) ^ 1;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500e70, ap_00500e70));
