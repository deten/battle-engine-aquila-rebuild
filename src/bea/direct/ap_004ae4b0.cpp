// auto-ported from 004ae4b0_FUN_004ae4b0.c (FUN_004ae4b0, 400 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00704d90 GLOBAL_AT(int, 0x00704d90)
#define DAT_00704d94 GLOBAL_AT(int, 0x00704d94)
#define DAT_00704d98 GLOBAL_AT(int, 0x00704d98)
#define DAT_00704d9c GLOBAL_AT(int, 0x00704d9c)
#define DAT_00704d60 GLOBAL_AT(undefined4, 0x00704d60)
#define DAT_00704d5c GLOBAL_AT(int, 0x00704d5c)
#define DAT_00704d58 GLOBAL_AT(int, 0x00704d58)
#define DAT_00704da0 GLOBAL_AT(int, 0x00704da0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef void * (BEA_THISCALL* FUN_0054bf80_t)(uint32_t);
static const bea_guard<FUN_0054bf80_t> FUN_0054bf80 = {(FUN_0054bf80_t)0x0054bf80};

static void * BEA_THISCALL ap_004ae4b0(void * this_)
{
  undefined4 uVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 0x134) = 0;
  *(undefined4 *)((int)this_ + 0x84) = 0;
  *(undefined4 *)((int)this_ + 0x80) = 0;
  *(undefined4 *)((int)this_ + 0xd0) = 0;
  *(undefined4 *)((int)this_ + 0xd8) = 0;
  *(undefined4 *)((int)this_ + 0xd4) = 0;
  *(undefined4 *)((int)this_ + 0xc4) = 0;
  *(undefined4 *)((int)this_ + 200) = 0;
  *(undefined4 *)((int)this_ + 0x108) = 0;
  *(undefined4 *)((int)this_ + 0x10c) = 0;
  *(undefined4 *)((int)this_ + 0xcc) = 0;
  *(undefined4 *)((int)this_ + 0x9c) = 0;
  *(undefined4 *)((int)this_ + 0xa0) = 0;
  *(undefined4 *)((int)this_ + 0xa4) = 0;
  *(undefined4 *)((int)this_ + 0xb0) = 0;
  *(undefined4 *)((int)this_ + 0xa8) = 0;
  *(undefined4 *)((int)this_ + 0xac) = 0;
  *(undefined4 *)((int)this_ + 0xb8) = 0;
  *(undefined4 *)((int)this_ + 0xb4) = 0;
  *(undefined4 *)((int)this_ + 0x60) = DAT_00704d90;
  *(undefined4 *)((int)this_ + 100) = DAT_00704d94;
  *(undefined4 *)((int)this_ + 0x68) = DAT_00704d98;
  *(undefined4 *)((int)this_ + 0x6c) = DAT_00704d9c;
  puVar3 = &DAT_00704d60;
  puVar4 = this_;
  for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this_ + 300) = 0x3f000000;
  *(undefined4 *)((int)this_ + 0x90) = 0;
  *(undefined4 *)((int)this_ + 0x98) = 0;
  *(undefined4 *)((int)this_ + 0xc0) = 0;
  *(undefined4 *)((int)this_ + 0x88) = 0;
  *(undefined4 *)((int)this_ + 0x100) = 0;
  *(undefined4 *)((int)this_ + 0x124) = 0;
  DAT_00704d5c = 99999;
  DAT_00704d58 = 99999;
  DAT_00704da0 = 0;
  *(undefined4 *)((int)this_ + 0x118) = 0;
  *(undefined4 *)((int)this_ + 0x104) = 0;
  *(undefined4 *)((int)this_ + 0x11c) = 0;
  *(undefined4 *)((int)this_ + 0x120) = 0;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x28), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x15c));
  *(undefined4 *)((int)this_ + 0xfc) = uVar1;
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x128), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x15f));
  if (this_00 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0054bf80(bea_arg(this_00));
  }
  *(int *)((int)this_ + 0x138) = iVar2;
  *(void **)(iVar2 + 0x10c) = this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ae4b0, ap_004ae4b0));
