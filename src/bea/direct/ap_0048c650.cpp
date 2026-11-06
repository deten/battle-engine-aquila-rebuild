// auto-ported from 0048c650_FUN_0048c650.c (FUN_0048c650, 1267 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0062d798 GLOBAL_AT(char, 0x0062d798)
#define s_DefaultTree0_0062d7a0 ((char*)0x0062d7a0)
#define s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0 ((char*)0x0062d7b0)
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_CDECL ap_0048c650(undefined4 param_1, undefined4 param_2)
{
  char cVar1;
  void *this_local;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puStack_8;
  undefined4 local_4;
  switch(param_1) {
  case 7:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x4c0), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x2b));
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0048dcf0(bea_arg(puVar2));
      uVar3 = 0xffffffff;
      *puVar2 = ((void*)0x005dc18c);
      puVar2[0xef] = 1;
      pcVar5 = s_DefaultTree0_0062d7a0;
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      pcVar6 = (char *)(puVar2 + 0xf0);
      for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      return puVar2;
    }
    break;
  case 8:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c0), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0xf));
    goto LAB_0048c6ac;
  default:
    this_local = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3bc), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x3f));
    if (this_local != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_0048dcf0(bea_arg(this_local));
      return puVar2;
    }
    break;
  case 0xf:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c4), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x23));
    goto LAB_0048c89a;
  case 0x13:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x5d0), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x1b));
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0048dcf0(bea_arg(puVar2));
      puVar2[0xef] = 0xffffffff;
      puVar2[0xf0] = 1;
      puVar2[0xf1] = 0;
      puVar2[0xf2] = 0;
      puVar2[0xf3] = 0;
      *puVar2 = ((void*)0x005dc1a4);
      *(undefined1 *)(puVar2 + 0xf4) = 0;
      *(undefined1 *)(puVar2 + 0x134) = 0;
      return puVar2;
    }
    break;
  case 0x19:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c0), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x13));
LAB_0048c6ac:
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0048dcf0(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dc1c0);
      puVar2[0xef] = 0;
      return puVar2;
    }
    break;
  case 0x1a:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x5bc), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x1f));
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0048dcf0(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dc198);
      *(undefined1 *)(puVar2 + 0xef) = 0;
      *(undefined1 *)(puVar2 + 0x12f) = 0;
      return puVar2;
    }
    break;
  case 0x1c:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x4c4), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x17));
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0048dcf0(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dc1b0);
      puVar2[0xef] = 0;
      *(undefined1 *)(puVar2 + 0xf0) = 0;
      puVar2[0x130] = 0;
      return puVar2;
    }
    break;
  case 0x21:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x4c4), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x2f));
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0048dcf0(bea_arg(puVar2));
      uVar3 = 0xffffffff;
      *puVar2 = ((void*)0x005dc180);
      puVar2[0xef] = 0;
      puVar2[0x130] = 0x42480000;
      pcVar5 = &DAT_0062d798;
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      pcVar6 = (char *)(puVar2 + 0xf0);
      for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      return puVar2;
    }
    break;
  case 0x23:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c0), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x33));
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0048dcf0(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dc174);
      puVar2[0xef] = 0;
      return puVar2;
    }
    break;
  case 0x24:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c0), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x3b));
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0048dcf0(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dc15c);
      puVar2[0xef] = 0;
      return puVar2;
    }
    break;
  case 0x27:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c0), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x37));
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0048dcf0(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dc168);
      puVar2[0xef] = 0;
      return puVar2;
    }
    break;
  case 0x29:
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c4), bea_arg(9), bea_arg(s_C__dev_ONSLAUGHT2_InitThing_cpp_0062d7b0), bea_arg(0x27));
LAB_0048c89a:
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0048dcf0(bea_arg(puVar2));
      *puVar2 = ((void*)0x005dbbd0);
      puVar2[0xef] = 0;
      puVar2[0xf0] = 1;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048c650, ap_0048c650));
