// auto-ported from 00528f80_FUN_00528f80.c (FUN_00528f80, 218 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_0089c0f4 GLOBAL_AT(int, 0x0089c0f4)
#define s_D3D8_Application_0064be60 ((char*)0x0064be60)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef char* (BEA_CDECL* FUN_004f7c70_t)(uint32_t);
static const bea_guard<FUN_004f7c70_t> FUN_004f7c70 = {(FUN_004f7c70_t)0x004f7c70};

static void * BEA_THISCALL ap_00528f80(void * this_)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 10;
  iVar3 = (int)this_ + 0x464;
  do {
    FUN_004011b0(bea_arg(iVar3), bea_arg(0xf68), bea_arg(5), bea_arg(((void*)0x0052c750)));
    iVar3 = iVar3 + 0x516c;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  *(undefined ***)this_ = ((void*)0x005e4ab4);
  DAT_0089c0f4 = this_;
  *(undefined4 *)((int)this_ + 0x32e3c) = 0;
  *(undefined4 *)((int)this_ + 0x32e40) = 0;
  *(undefined4 *)((int)this_ + 0x32e9c) = 0;
  *(undefined4 *)((int)this_ + 0x32ea0) = 0;
  *(undefined4 *)((int)this_ + 0x32e94) = 0;
  *(undefined4 *)((int)this_ + 0x32e98) = 0;
  *(undefined4 *)((int)this_ + 0x32e48) = 0;
  *(undefined4 *)((int)this_ + 0x32e4c) = 0;
  *(undefined4 *)((int)this_ + 0x32ff4) = 0;
  *(undefined4 *)((int)this_ + 0x32e50) = 1;
  *(undefined4 *)((int)this_ + 0x32e54) = 0;
  *(undefined4 *)((int)this_ + 0x33024) = 0;
  *(undefined1 *)((int)this_ + 0x33028) = 0;
  *(undefined1 *)((int)this_ + 0x33082) = 0;
  uVar1 = FUN_004f7c70(bea_arg(s_D3D8_Application_0064be60));
  *(undefined4 *)((int)this_ + 0x330ac) = uVar1;
  *(undefined4 *)((int)this_ + 0x330bc) = 0x280;
  *(undefined4 *)((int)this_ + 0x330c0) = 0x1e0;
  *(undefined4 *)((int)this_ + 0x330b0) = 0;
  *(undefined4 *)((int)this_ + 0x330b4) = 0x10;
  *(undefined4 *)((int)this_ + 0x330b8) = 0;
  *(undefined4 *)((int)this_ + 0x330c4) = 0;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528f80, ap_00528f80));
