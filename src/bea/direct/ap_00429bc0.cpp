// auto-ported from 00429bc0_FUN_00429bc0.c (FUN_00429bc0, 622 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00662f30 GLOBAL_AT(int, 0x00662f30)
#define DAT_00662b2c GLOBAL_AT(char, 0x00662b2c)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_console_cpp_00624d0c ((char*)0x00624d0c)
#define s_Console_Line__d_00624d2c ((char*)0x00624d2c)
#define s_Battle_Engine_Aquila_console_OK___00624cd4 ((char*)0x00624cd4)
typedef uint32_t (BEA_CDECL* FUN_0042b840_t)(int, undefined4, ...);
static const bea_guard<FUN_0042b840_t> FUN_0042b840 = {(FUN_0042b840_t)0x0042b840};
typedef uint32_t (BEA_THISCALL* FUN_0042bcf0_t)(uint32_t);
static const bea_guard<FUN_0042bcf0_t> FUN_0042bcf0 = {(FUN_0042bcf0_t)0x0042bcf0};
typedef uint32_t (BEA_STDCALL* FUN_005159c0_t)(uint32_t);
static const bea_guard<FUN_005159c0_t> FUN_005159c0 = {(FUN_005159c0_t)0x005159c0};
typedef uint32_t (BEA_STDCALL* FUN_00515db0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515db0_t> FUN_00515db0 = {(FUN_00515db0_t)0x00515db0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_00429bc0(void * this_)
{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  *(undefined4 *)((int)this_ + 0x2394) = 0;
  *(undefined4 *)((int)this_ + 0x2398) = 0;
  *(undefined4 *)((int)this_ + 0x2390) = 200;
  *(undefined4 *)((int)this_ + 0x23b4) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x23b8) = 1;
  *(undefined4 *)((int)this_ + 0xb3c0) = 0xffffffff;
  *(undefined1 *)((int)this_ + 0xb3c4) = 0;
  *(undefined1 *)((int)this_ + 0xb3c6) = 0;
  *(undefined4 *)((int)this_ + 0xb3c8) = 0;
  *(undefined1 *)((int)this_ + 0x238d) = 0;
  *(undefined4 *)((int)this_ + 0xb3d0) = 0;
  *(undefined4 *)((int)this_ + 0xb3dc) = 0;
  *(undefined4 *)((int)this_ + 0xb3d8) = 0;
  *(undefined4 *)((int)this_ + 0xb3e0) = 0;
  if (DAT_00662f30 != 0) {
    iVar6 = 0;
    do {
      FUN_0055de9b(local_100,s_Console_Line__d_00624d2c,iVar6);
      FUN_00515db0(bea_arg(local_100), bea_arg(&DAT_00662b2c));
      iVar6 = iVar6 + 1;
    } while (BEA_LOOP_GUARD((iVar6 < 0x14)));
  }
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x4e), bea_arg(s_C__dev_ONSLAUGHT2_console_cpp_00624d0c), bea_arg(0xf2));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    *puVar2 = ((void*)0x005d972c);
  }
  *(undefined4 **)((int)this_ + 0x23b0) = puVar2;
  *(undefined4 **)((int)this_ + 0x239c) = puVar2;
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x4e), bea_arg(s_C__dev_ONSLAUGHT2_console_cpp_00624d0c), bea_arg(0xf7));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    *puVar2 = ((void*)0x005d970c);
  }
  *(undefined4 **)((int)this_ + 0x23a0) = puVar2;
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x4e), bea_arg(s_C__dev_ONSLAUGHT2_console_cpp_00624d0c), bea_arg(0xf8));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    *puVar2 = ((void*)0x005d96ec);
  }
  *(undefined4 **)((int)this_ + 0x23a4) = puVar2;
  bea_vcall<uint32_t>(*(int **)((int)this_ + 0x23b0), 0x14, *(undefined4 *)((int)this_ + 0x23a0));
  bea_vcall<uint32_t>(*(int **)((int)this_ + 0x23b0), 0x14, *(undefined4 *)((int)this_ + 0x23a4));
  FUN_0042bcf0(bea_arg(this_));
  iVar6 = 0x100;
  pcVar5 = (char *)((int)this_ + 0x23bc);
  do {
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_00662b2c;
    do {
      pcVar8 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar3 = ~uVar3;
    pcVar7 = pcVar8 + -uVar3;
    pcVar8 = pcVar5;
    for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    iVar6 = iVar6 + -1;
    for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcVar5 = pcVar5 + 0x80;
  } while (BEA_LOOP_GUARD((iVar6 != 0)));
  iVar6 = 0x3c;
  pcVar5 = (char *)((int)this_ + 4);
  do {
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_00662b2c;
    do {
      pcVar8 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar3 = ~uVar3;
    pcVar7 = pcVar8 + -uVar3;
    pcVar8 = pcVar5;
    for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    iVar6 = iVar6 + -1;
    for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcVar5 = pcVar5 + 0x80;
  } while (BEA_LOOP_GUARD((iVar6 != 0)));
  iVar6 = 10;
  pcVar5 = (char *)((int)this_ + 0x1e84);
  do {
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_00662b2c;
    do {
      pcVar8 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar3 = ~uVar3;
    pcVar7 = pcVar8 + -uVar3;
    pcVar8 = pcVar5;
    for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    iVar6 = iVar6 + -1;
    for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcVar5 = pcVar5 + 0x80;
    if (iVar6 == 0) {
      *(undefined1 *)((int)this_ + 0x238c) = 0;
      FUN_005159c0(bea_arg(0));
      *(undefined1 *)((int)this_ + 0xb3c5) = 1;
      FUN_0042b840(this_,s_Battle_Engine_Aquila_console_OK___00624cd4);
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00429bc0, ap_00429bc0));
