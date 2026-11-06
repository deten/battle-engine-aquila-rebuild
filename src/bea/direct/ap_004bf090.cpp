// auto-ported from 004bf090_FUN_004bf090.c (FUN_004bf090, 2203 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_oids_cpp_00630c20 ((char*)0x00630c20)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef uint32_t (BEA_THISCALL* FUN_00403f40_t)(uint32_t);
static const bea_guard<FUN_00403f40_t> FUN_00403f40 = {(FUN_00403f40_t)0x00403f40};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef void * (BEA_THISCALL* FUN_004bf9e0_t)(uint32_t);
static const bea_guard<FUN_004bf9e0_t> FUN_004bf9e0 = {(FUN_004bf9e0_t)0x004bf9e0};
typedef uint32_t (BEA_THISCALL* FUN_004bfa60_t)(uint32_t);
static const bea_guard<FUN_004bfa60_t> FUN_004bfa60 = {(FUN_004bfa60_t)0x004bfa60};
typedef void * (BEA_THISCALL* FUN_004bfd20_t)(uint32_t);
static const bea_guard<FUN_004bfd20_t> FUN_004bfd20 = {(FUN_004bfd20_t)0x004bfd20};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef void * (BEA_THISCALL* FUN_004df4c0_t)(uint32_t);
static const bea_guard<FUN_004df4c0_t> FUN_004df4c0 = {(FUN_004df4c0_t)0x004df4c0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef void * (BEA_THISCALL* FUN_004eacc0_t)(uint32_t);
static const bea_guard<FUN_004eacc0_t> FUN_004eacc0 = {(FUN_004eacc0_t)0x004eacc0};
typedef void * (BEA_THISCALL* FUN_004f33e0_t)(uint32_t);
static const bea_guard<FUN_004f33e0_t> FUN_004f33e0 = {(FUN_004f33e0_t)0x004f33e0};
typedef void * (BEA_THISCALL* FUN_004f3e10_t)(uint32_t);
static const bea_guard<FUN_004f3e10_t> FUN_004f3e10 = {(FUN_004f3e10_t)0x004f3e10};
typedef void * (BEA_THISCALL* FUN_004f7e90_t)(uint32_t);
static const bea_guard<FUN_004f7e90_t> FUN_004f7e90 = {(FUN_004f7e90_t)0x004f7e90};
typedef void * (BEA_THISCALL* FUN_00505d00_t)(uint32_t);
static const bea_guard<FUN_00505d00_t> FUN_00505d00 = {(FUN_00505d00_t)0x00505d00};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00551fd0_t)(uint32_t);
static const bea_guard<FUN_00551fd0_t> FUN_00551fd0 = {(FUN_00551fd0_t)0x00551fd0};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static undefined4 * BEA_CDECL ap_004bf090(undefined4 param_1, undefined4 param_2)
{
  void *pvVar1;
  undefined4 *puVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  switch(param_1) {
  case 3:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x63c), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x28));
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f7e90(bea_arg(puVar2));
      (*(uint8_t*)((char*)&local_4 + 0)) = 1;
      FUN_004e5840(bea_arg(puVar2 + 0x94));
      (*(uint8_t*)((char*)&local_4 + 0)) = 2;
      FUN_00551fd0(bea_arg(puVar2 + 0x99));
      (*(uint8_t*)((char*)&local_4 + 0)) = 3;
      FUN_00505d00(bea_arg(puVar2 + 0xa1));
      (*(uint8_t*)((char*)&local_4 + 0)) = 4;
      FUN_00505d00(bea_arg(puVar2 + 0xa5));
      (*(uint8_t*)((char*)&local_4 + 0)) = 5;
      FUN_00505d00(bea_arg(puVar2 + 0xa9));
      (*(uint8_t*)((char*)&local_4 + 0)) = 6;
      FUN_004011b0(bea_arg(puVar2 + 0xc6), bea_arg(0x10), bea_arg(0x14), bea_arg(((void*)0x00402d20)));
      FUN_00551fd0(bea_arg(puVar2 + 0x132));
      (*(uint8_t*)((char*)&local_4 + 0)) = 7;
      FUN_00551fd0(bea_arg(puVar2 + 0x133));
      (*(uint8_t*)((char*)&local_4 + 0)) = 8;
      FUN_004bfa60(bea_arg(puVar2 + 0x134));
      FUN_00551fd0(bea_arg(puVar2 + 0x138));
      (*(uint8_t*)((char*)&local_4 + 0)) = 9;
      FUN_00551fd0(bea_arg(puVar2 + 0x15d));
      (*(uint8_t*)((char*)&local_4 + 0)) = 10;
      FUN_00551fd0(bea_arg(puVar2 + 0x17a));
      (*(uint8_t*)((char*)&local_4 + 0)) = 0xb;
      puVar2[0x17f] = 0;
      FUN_004cb040(bea_arg(puVar2 + 0x17e));
      local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),0xc);
      FUN_00505d00(bea_arg(puVar2 + 0x188));
      *puVar2 = ((void*)0x005d89c4);
      puVar2[2] = ((void*)0x005d894c);
      return (undefined4 *)(puVar2);
    }
    break;
  case 7:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x4c), bea_arg(7), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x2b));
    local_4 = 0xd;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f33e0(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dd9d8);
      puVar2[2] = ((void*)0x005dd960);
      return (undefined4 *)(puVar2);
    }
    break;
  case 10:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x284), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x2d));
    local_4 = 0xe;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f7e90(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dd788);
      puVar2[2] = ((void*)0x005dd710);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0xb:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xe4), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x2e));
    local_4 = 0xf;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004bfd20(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dd5f0);
      puVar2[2] = ((void*)0x005dd578);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0xf:
    pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x44c), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x32));
    local_4 = 0x10;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_004eacc0(bea_arg(pvVar1));
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x10:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10c), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x33));
    local_4 = 0x11;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004bfd20(bea_arg(puVar2));
      local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),0x12);
      FUN_0055dc20(bea_arg(puVar2 + 0x3b), bea_arg(8), bea_arg(4), bea_arg(((void*)0x00456830)), bea_arg(((void*)0x004cb050)));
      *puVar2 = ((void*)0x005dd458);
      puVar2[2] = ((void*)0x005dd3e0);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x11:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xe4), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x34));
    local_4 = 0x13;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004bfd20(bea_arg(puVar2));
      *puVar2 = ((void*)0x005d910c);
      puVar2[2] = ((void*)0x005d9094);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x12:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x40), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x35));
    local_4 = 0x14;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f33e0(bea_arg(puVar2));
      puVar2[0xf] = 0;
      *puVar2 = ((void*)0x005dd2f0);
      puVar2[2] = ((void*)0x005dd278);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x13:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x46c), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x36));
    local_4 = 0x15;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f3e10(bea_arg(puVar2));
      puVar2[0x1f] = 0;
      local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),0x17);
      FUN_004bf9e0(bea_arg(puVar2 + 0x2a));
      *puVar2 = ((void*)0x005dd16c);
      puVar2[2] = ((void*)0x005dd0f4);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x15:
    pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x210), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x38));
    local_4 = 0x18;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_004df4c0(bea_arg(pvVar1));
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x19:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x26c), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x3b));
    local_4 = 0x19;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f7e90(bea_arg(puVar2));
      *puVar2 = ((void*)0x005d8eb4);
      puVar2[2] = ((void*)0x005d8e3c);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x1a:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xd74), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x3c));
    local_4 = 0x1a;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f3e10(bea_arg(puVar2));
      puVar2[0x215] = 0;
      local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),0x1c);
      FUN_00403f40(bea_arg(puVar2 + 0x256));
      *puVar2 = ((void*)0x005dad88);
      puVar2[2] = ((void*)0x005dad10);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x1b:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x7c), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x3d));
    local_4 = 0x1d;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f3e10(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dcfe8);
      puVar2[2] = ((void*)0x005dcf70);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x1d:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xe0), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x3f));
    local_4 = 0x1e;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f3e10(bea_arg(puVar2));
      *puVar2 = ((void*)0x005d8698);
      puVar2[2] = ((void*)0x005d8620);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x1f:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x84), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x40));
    local_4 = 0x1f;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f3e10(bea_arg(puVar2));
      *puVar2 = ((void*)0x005daf10);
      puVar2[2] = ((void*)0x005dae98);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x24:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x9c), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x44));
    local_4 = 0x20;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f3e10(bea_arg(puVar2));
      (*(uint8_t*)((char*)&local_4 + 0)) = 0x21;
      puVar2[0x20] = 0;
      FUN_004cb040(bea_arg(puVar2 + 0x1f));
      local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),0x22);
      FUN_004e5840(bea_arg(puVar2 + 0x23));
      *puVar2 = ((void*)0x005dce64);
      puVar2[2] = ((void*)0x005dcdec);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x25:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x80), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x45));
    local_4 = 0x23;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f3e10(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dccdc);
      puVar2[2] = ((void*)0x005dcc64);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x26:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x440), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x46));
    local_4 = 0x24;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f3e10(bea_arg(puVar2));
      puVar2[0x1f] = 0;
      local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),0x26);
      FUN_0048dcf0(bea_arg(puVar2 + 0x20));
      puVar2[0x20] = ((void*)0x005dc1c0);
      puVar2[0x10f] = 0;
      *puVar2 = ((void*)0x005dcb58);
      puVar2[2] = ((void*)0x005dcae0);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x29:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x44c), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x47));
    local_4 = 0x27;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f3e10(bea_arg(puVar2));
      local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),0x28);
      FUN_0048dcf0(bea_arg(puVar2 + 0x20));
      puVar2[0x10f] = 0;
      puVar2[0x20] = ((void*)0x005dcad4);
      puVar2[0x110] = 0;
      puVar2[0x111] = 0;
      *puVar2 = ((void*)0x005dc9c8);
      puVar2[2] = ((void*)0x005dc950);
      return (undefined4 *)(puVar2);
    }
    break;
  case 0x2b:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xe8), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_oids_cpp_00630c20), bea_arg(0x48));
    local_4 = 0x29;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004f3e10(bea_arg(puVar2));
      *puVar2 = ((void*)0x005d844c);
      puVar2[2] = ((void*)0x005d83d4);
      local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),0x2a);
      puVar2[0x39] = 0;
      FUN_004cb040(bea_arg(puVar2 + 0x38));
      *puVar2 = ((void*)0x005dc830);
      puVar2[2] = ((void*)0x005dc7b8);
      return (undefined4 *)(puVar2);
    }
  }
  return (undefined4 *)((undefined4 *)0x0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bf090, ap_004bf090));
