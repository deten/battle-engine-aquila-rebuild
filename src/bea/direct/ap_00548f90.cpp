// auto-ported from 00548f90_FUN_00548f90.c (FUN_00548f90, 303 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c6334 GLOBAL_AT(int, 0x009c6334)
#define DAT_009c5a68 GLOBAL_AT(int, 0x009c5a68)
#define DAT_009c519c GLOBAL_AT(int, 0x009c519c)
#define s_Dump_memory_heap_00651078 ((char*)0x00651078)
#define s_Thing_memory_heap_00651050 ((char*)0x00651050)
#define s_Default_heap_0065108c ((char*)0x0065108c)
#define s_Sound_memory_heap_00651064 ((char*)0x00651064)
typedef undefined4 (BEA_THISCALL* FUN_004a13b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a13b0_t> FUN_004a13b0 = {(FUN_004a13b0_t)0x004a13b0};

static uint BEA_THISCALL ap_00548f90(void * this_, undefined4 param_1)
{
  uint uVar1;
  int iVar2;
  
  DAT_009c6334 = 1;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  uVar1 = FUN_004a13b0(bea_arg((void *)((int)this_ + 0x214)), bea_arg(param_1), bea_arg(0x4b000), bea_arg(s_Default_heap_0065108c), bea_arg(1));
  DAT_009c6334 = DAT_009c6334 & uVar1;
  iVar2 = FUN_004a13b0(bea_arg((void *)((int)this_ + 0xae0)), bea_arg(0x23f000), bea_arg(0), bea_arg(s_Dump_memory_heap_00651078), bea_arg(1));
  if (iVar2 == 0) {
    return 0;
  }
  *(void **)((int)this_ + 0x1a0) = (void *)((int)this_ + 0xae0);
  iVar2 = FUN_004a13b0(bea_arg((void *)((int)this_ + 0x1c78)), bea_arg(0x1e87800), bea_arg(0), bea_arg(s_Sound_memory_heap_00651064), bea_arg(0));
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined **)((int)this_ + 0x13c) = (undefined*)&DAT_009c5a68;
  iVar2 = FUN_004a13b0(bea_arg((void *)((int)this_ + 0x13ac)), bea_arg(0x36b000), bea_arg(0x32000), bea_arg(s_Thing_memory_heap_00651050), bea_arg(0))
  ;
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined **)((int)this_ + 0x2c) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x28) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x24) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x44) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x104) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x100) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x68) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x174) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x30) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x4c) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x40) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x34) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x48) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0xa4) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x10c) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x6c) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x1c0) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x188) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x180) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0xfc) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x3c) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x7c) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x1fc) = (undefined*)&DAT_009c519c;
  *(undefined **)((int)this_ + 0x38) = (undefined*)&DAT_009c519c;
  return DAT_009c6334;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00548f90, ap_00548f90));
