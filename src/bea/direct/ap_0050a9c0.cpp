// auto-ported from 0050a9c0_FUN_0050a9c0.c (FUN_0050a9c0, 415 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};

static void * BEA_THISCALL ap_0050a9c0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  FUN_004e5840(bea_arg(this_));
  local_4 = 0;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x10)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x20)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x30)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 3;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x40)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 4;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x50)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 5;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x60)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 6;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x70)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 7;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x80)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 8;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x90)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 9;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0xa0)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 10;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0xb0)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 0xb;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0xc0)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 0xc;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0xd0)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 0xd;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0xe0)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 0xe;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0xf0)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 0xf;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x100)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 0x10;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x110)));
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),0x11);
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x120)));
  *(undefined4 *)((int)this_ + 0x200) = 0;
  *(undefined4 *)((int)this_ + 0x204) = 0;
  *(undefined4 *)((int)this_ + 0x208) = 0;
  iVar2 = 0x1a;
  *(undefined4 *)((int)this_ + 0x26c) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x270) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x274) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x278) = 0xffffffff;
  puVar1 = (undefined4 *)((int)this_ + 0x198);
  do {
    puVar1[-0x1a] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  *(undefined4 *)((int)this_ + 0x20c) = 0;
  *(undefined4 *)((int)this_ + 0x210) = 0;
  *(undefined4 *)((int)this_ + 0x214) = 0;
  *(undefined4 *)((int)this_ + 0x218) = 0;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050a9c0, ap_0050a9c0));
