// auto-ported from 00465f10_FUN_00465f10.c (FUN_00465f10, 518 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef void * (BEA_THISCALL* FUN_00459920_t)(uint32_t);
static const bea_guard<FUN_00459920_t> FUN_00459920 = {(FUN_00459920_t)0x00459920};
typedef void * (BEA_THISCALL* FUN_00460140_t)(uint32_t);
static const bea_guard<FUN_00460140_t> FUN_00460140 = {(FUN_00460140_t)0x00460140};
typedef uint32_t (BEA_THISCALL* FUN_00466120_t)(uint32_t);
static const bea_guard<FUN_00466120_t> FUN_00466120 = {(FUN_00466120_t)0x00466120};
typedef uint32_t (BEA_THISCALL* FUN_00466130_t)(uint32_t);
static const bea_guard<FUN_00466130_t> FUN_00466130 = {(FUN_00466130_t)0x00466130};
typedef uint32_t (BEA_THISCALL* FUN_004f2140_t)(uint32_t);
static const bea_guard<FUN_004f2140_t> FUN_004f2140 = {(FUN_004f2140_t)0x004f2140};
typedef void * (BEA_THISCALL* FUN_00505d00_t)(uint32_t);
static const bea_guard<FUN_00505d00_t> FUN_00505d00 = {(FUN_00505d00_t)0x00505d00};
typedef uint32_t (BEA_THISCALL* FUN_0051b600_t)(uint32_t);
static const bea_guard<FUN_0051b600_t> FUN_0051b600 = {(FUN_0051b600_t)0x0051b600};
typedef void * (BEA_THISCALL* FUN_00539c80_t)(uint32_t);
static const bea_guard<FUN_00539c80_t> FUN_00539c80 = {(FUN_00539c80_t)0x00539c80};
typedef uint32_t (BEA_THISCALL* FUN_00541200_t)(uint32_t);
static const bea_guard<FUN_00541200_t> FUN_00541200 = {(FUN_00541200_t)0x00541200};

static void * BEA_THISCALL ap_00465f10(void * this_)
{
  int iVar1;
  void *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  FUN_00466120(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005d9388);
  local_4 = 0;
  FUN_00466130(bea_arg((void *)((int)this_ + 8)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  FUN_00541200(bea_arg((void *)((int)this_ + 0x1c4)));
  *(undefined4 *)((int)this_ + 500) = 0xffffffff;
  *(undefined ***)((int)this_ + 0x278) = ((void*)0x005dbae4);
  *(undefined ***)((int)this_ + 0x29c) = ((void*)0x005dbabc);
  *(undefined ***)((int)this_ + 0x2b0) = ((void*)0x005dba68);
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  *(undefined ***)((int)this_ + 700) = ((void*)0x005dba94);
  FUN_00505d00(bea_arg((void *)((int)this_ + 0x2dc)));
  *(undefined ***)((int)this_ + 700) = ((void*)0x005dba3c);
  (*(uint8_t*)((char*)&local_4 + 0)) = 3;
  *(undefined ***)((int)this_ + 0x2ec) = ((void*)0x005dba94);
  FUN_00505d00(bea_arg((void *)((int)this_ + 0x314)));
  *(undefined ***)((int)this_ + 0x2ec) = ((void*)0x005dba10);
  *(undefined ***)((int)this_ + 0x324) = ((void*)0x005db9e8);
  (*(uint8_t*)((char*)&local_4 + 0)) = 4;
  *(undefined ***)((int)this_ + 0x338) = ((void*)0x005db9c0);
  FUN_00460140(bea_arg((void *)((int)this_ + 0x360)));
  *(undefined4 *)((int)this_ + 0x37dc) = ((void*)0x005dba94);
  FUN_00539c80(bea_arg((void *)((int)this_ + 0x37e8)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 5;
  FUN_004011b0(bea_arg((int)this_ + 0x397c), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
  *(undefined4 *)((int)this_ + 0x37dc) = ((void*)0x005db998);
  *(undefined ***)((int)this_ + 0x39b8) = ((void*)0x005db970);
  *(undefined ***)((int)this_ + 0x39d0) = ((void*)0x005db948);
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),6);
  *(undefined ***)((int)this_ + 0x3c1c) = ((void*)0x005db920);
  FUN_0051b600(bea_arg((void *)((int)this_ + 0x4034)));
  *(undefined ***)((int)this_ + 0x4050) = ((void*)0x005db8f8);
  *(undefined ***)((int)this_ + 0x40b8) = ((void*)0x005db8d0);
  *(undefined ***)((int)this_ + 0x40ec) = ((void*)0x005db8a8);
  *(undefined ***)((int)this_ + 0x4118) = ((void*)0x005db880);
  *(undefined ***)((int)this_ + 0x4124) = ((void*)0x005db858);
  *(undefined ***)((int)this_ + 0x413c) = ((void*)0x005db830);
  *(undefined ***)((int)this_ + 0x4834) = ((void*)0x005db808);
  FUN_00459920(bea_arg((void *)((int)this_ + 0x8848)));
  *(undefined ***)((int)this_ + 0xbcc8) = ((void*)0x005db7e0);
  *(undefined ***)((int)this_ + 0xbde0) = ((void*)0x005db7a8);
  *(undefined ***)((int)this_ + 0xbe04) = ((void*)0x005db780);
  *(undefined4 *)((int)this_ + 0xbe1c) = 1;
  *(undefined4 *)((int)this_ + 0xbe24) = 0;
  *(undefined4 *)((int)this_ + 0xbe2c) = 0;
  this_00 = (void *)((int)this_ + 0xbf40);
  iVar1 = 5;
  do {
    FUN_004f2140(bea_arg(this_00));
    this_00 = (void *)((int)this_00 + 0x30);
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  *(undefined ***)this_ = ((void*)0x005db75c);
  *(undefined1 *)((int)this_ + 0xbe30) = 0;
  *(undefined4 *)((int)this_ + 0x274) = 0xffffffff;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00465f10, ap_00465f10));
