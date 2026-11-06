// auto-ported from 004a1810_FUN_004a1810.c (FUN_004a1810, 1046 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__Out_of_memory_____t_0062f5c4 ((char*)0x0062f5c4)
#define s_Out_of_memory_0062f5b4 ((char*)0x0062f5b4)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef BOOL (BEA_THISCALL* FUN_004a1640_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1640_t> FUN_004a1640 = {(FUN_004a1640_t)0x004a1640};
typedef undefined4 * (BEA_THISCALL* FUN_004a1810_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a1810_t> FUN_004a1810 = {(FUN_004a1810_t)0x004a1810};
typedef uint32_t (BEA_THISCALL* FUN_004a1d60_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1d60_t> FUN_004a1d60 = {(FUN_004a1d60_t)0x004a1d60};
typedef uint (BEA_THISCALL* FUN_004a2460_t)(uint32_t);
static const bea_guard<FUN_004a2460_t> FUN_004a2460 = {(FUN_004a2460_t)0x004a2460};
typedef uint32_t (BEA_STDCALL* FUN_004a2a80_t)(uint32_t);
static const bea_guard<FUN_004a2a80_t> FUN_004a2a80 = {(FUN_004a2a80_t)0x004a2a80};
typedef uint32_t (BEA_THISCALL* FUN_004a2ff0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a2ff0_t> FUN_004a2ff0 = {(FUN_004a2ff0_t)0x004a2ff0};

static undefined4 * BEA_THISCALL ap_004a1810(void * this_, int param_1, int param_2, undefined4 param_3, undefined4 param_4)
{
  uint uVar1;
  HANDLE hHandle;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint v0;
  undefined4 *puVar10;
  undefined1 *puStack_8;
  undefined4 local_4;
  hHandle = *(HANDLE *)((int)this_ + 0x8bc);
  WaitForSingleObject(hHandle,0xffffffff);
  v0 = param_1 + 0xfU & 0xfffffff0;
  if ((v0 < 0x11) && (puVar10 = *(undefined4 **)((int)this_ + 0x8c4), puVar10 != (undefined4 *)0x0))
  {
    *(undefined4 *)((int)this_ + 0x8c4) = *puVar10;
    ReleaseMutex(hHandle);
    return (undefined4 *)(puVar10);
  }
  uVar1 = v0 + 0x10;
  if ((v0 < 0x100) && (*(int *)((int)this_ + 0x8b8) != 0)) {
    uVar3 = param_1 + 0xfU >> 4;
    uVar6 = uVar3 + 1;
    if (0x10 < uVar6) {
      uVar6 = 0x10;
    }
    if (uVar3 < uVar6) {
      piVar8 = (int *)((int)this_ + uVar3 * 4 + 0xc);
      do {
        if (*piVar8 != 0) {
          iVar9 = *(int *)((int)this_ + uVar3 * 4 + 0xc);
          *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) | 1;
          iVar7 = *(int *)((int)this_ + uVar3 * 4 + 0xc);
          *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) & 0xfffffffd;
          *(int *)(*(int *)((int)this_ + uVar3 * 4 + 0xc) + 8) = param_2;
          *(undefined4 *)((int)this_ + uVar3 * 4 + 0xc) =
               *(undefined4 *)(*(int *)((int)this_ + uVar3 * 4 + 0xc) + 0xc);
          *(uint *)((int)this_ + 0x54) =
               *(int *)((int)this_ + 0x54) + (-0x10 - (*(uint *)(iVar9 + 4) & 0xfffffff0));
          *(uint *)((int)this_ + 0x50) =
               *(int *)((int)this_ + 0x50) + (*(uint *)(iVar9 + 4) & 0xfffffff0) + 0x10;
          *(uint *)((int)this_ + param_2 * 4 + 0x58) =
               *(int *)((int)this_ + param_2 * 4 + 0x58) + (*(uint *)(iVar9 + 4) & 0xfffffff0) + 0x10
          ;
          *(int *)((int)this_ + 0x668) = *(int *)((int)this_ + 0x668) + 1;
          *(int *)((int)this_ + 0x66c) = *(int *)((int)this_ + 0x66c) + -1;
          *(int *)((int)this_ + param_2 * 4 + 0x670) = *(int *)((int)this_ + param_2 * 4 + 0x670) + 1;
          ReleaseMutex(hHandle);
          return (undefined4 *)((undefined4 *)(iVar9 + 0x10));
        }
        uVar3 = uVar3 + 1;
        piVar8 = piVar8 + 1;
      } while (BEA_LOOP_GUARD(((int)uVar3 < (int)uVar6)));
    }
  }
  puVar2 = *(undefined4 **)((int)this_ + 0x4c);
  puVar10 = (undefined4 *)0x0;
  while (BEA_LOOP_GUARD((puVar5 = puVar2, puVar5 != (undefined4 *)0x0))) {
    if (v0 <= (puVar5[1] & 0xfffffff0)) {
      if (puVar10 == (undefined4 *)0x0) {
        *(undefined4 *)((int)this_ + 0x4c) = puVar5[3];
      }
      else {
        puVar10[3] = puVar5[3];
      }
      puVar5[3] = 0;
      if (puVar5 != (undefined4 *)0x0) goto LAB_004a1a58;
      break;
    }
    puVar10 = puVar5;
    puVar2 = (undefined4 *)puVar5[3];
  }
  iVar7 = *(int *)((int)this_ + 0x4c);
  iVar9 = 0;
  while (BEA_LOOP_GUARD((iVar4 = iVar7, iVar4 != 0))) {
    if (v0 <= (*(uint *)(iVar4 + 4) & 0xfffffff0)) {
      if (iVar9 == 0) {
        *(undefined4 *)((int)this_ + 0x4c) = *(undefined4 *)(iVar4 + 0xc);
      }
      else {
        *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
      }
      *(undefined4 *)(iVar4 + 0xc) = 0;
      break;
    }
    iVar9 = iVar4;
    iVar7 = *(int *)(iVar4 + 0xc);
  }
  FUN_004a1640(bea_arg(this_), bea_arg(0));
  puVar2 = *(undefined4 **)((int)this_ + 0x4c);
  puVar10 = (undefined4 *)0x0;
  do {
    puVar5 = puVar2;
    if (puVar5 == (undefined4 *)0x0) {
LAB_004a1a1d:
      FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Out_of_memory_____t_0062f5c4,v0);
      FUN_004a2460(bea_arg(this_));
      FUN_004a2a80(bea_arg(s_Out_of_memory_0062f5b4));
      ReleaseMutex(hHandle);
      return (undefined4 *)((undefined4 *)0x0);
    }
    if (v0 <= (puVar5[1] & 0xfffffff0)) {
      if (puVar10 == (undefined4 *)0x0) {
        *(undefined4 *)((int)this_ + 0x4c) = puVar5[3];
      }
      else {
        puVar10[3] = puVar5[3];
      }
      puVar5[3] = 0;
      if (puVar5 != (undefined4 *)0x0) break;
      goto LAB_004a1a1d;
    }
    puVar2 = (undefined4 *)puVar5[3];
    puVar10 = puVar5;
  } while(BEA_LOOP_GUARD(( true )));
LAB_004a1a58:
  uVar6 = puVar5[1] & 0xfffffff0;
  if (uVar1 < uVar6) {
    puVar10 = (undefined4 *)((int)puVar5 + uVar1);
    *puVar10 = 0x4f69ea21;
    puVar10[1] = uVar6 - uVar1;
    FUN_004a2ff0(bea_arg(puVar10), bea_arg(0));
    puVar10[2] = param_2;
    puVar10[3] = 0;
    FUN_004a1d60(bea_arg(this_), bea_arg(puVar10));
    *puVar5 = 0x4f69ea21;
    puVar5[1] = v0 | 1;
    FUN_004a2ff0(bea_arg(puVar5), bea_arg(0));
    puVar5[2] = param_2;
    puVar5[3] = 0;
    iVar9 = *(int *)((int)this_ + 0x50) + uVar1;
    *(uint *)((int)this_ + 0x54) = *(int *)((int)this_ + 0x54) - uVar1;
    *(int *)((int)this_ + 0x50) = iVar9;
    if (*(int *)((int)this_ + 0x25c) < iVar9) {
      *(int *)((int)this_ + 0x25c) = iVar9;
    }
    *(uint *)((int)this_ + param_2 * 4 + 0x58) = *(int *)((int)this_ + param_2 * 4 + 0x58) + uVar1;
    *(int *)((int)this_ + 0x668) = *(int *)((int)this_ + 0x668) + 1;
    *(int *)((int)this_ + param_2 * 4 + 0x670) = *(int *)((int)this_ + param_2 * 4 + 0x670) + 1;
    ReleaseMutex(hHandle);
    puVar5 = puVar5 + 4;
  }
  else if (uVar6 < v0) {
    FUN_004a1640(bea_arg(this_), bea_arg(0));
    iVar9 = *(int *)((int)this_ + 0x4c);
    iVar7 = 0;
    if (*(int *)((int)this_ + 0x4c) == 0) {
LAB_004a1bdc:
      ReleaseMutex(hHandle);
      puVar5 = (undefined4 *)0x0;
    }
    else {
      do {
        iVar4 = iVar9;
        if (v0 <= (*(uint *)(iVar4 + 4) & 0xfffffff0)) {
          if (iVar7 == 0) {
            *(undefined4 *)((int)this_ + 0x4c) = *(undefined4 *)(iVar4 + 0xc);
          }
          else {
            *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
          }
          *(undefined4 *)(iVar4 + 0xc) = 0;
          if (iVar4 != 0) {
            puVar10 = (undefined4 *)FUN_004a1810(bea_arg(this_), bea_arg(v0), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
            ReleaseMutex(hHandle);
            return (undefined4 *)(puVar10);
          }
          goto LAB_004a1bdc;
        }
        iVar9 = *(int *)(iVar4 + 0xc);
        iVar7 = iVar4;
      } while (BEA_LOOP_GUARD((*(int *)(iVar4 + 0xc) != 0)));
      ReleaseMutex(hHandle);
      puVar5 = (undefined4 *)0x0;
    }
  }
  else {
    iVar9 = uVar6 + 0x10;
    puVar5[1] = puVar5[1] & 0xfffffffd | 1;
    puVar5[2] = param_2;
    *(int *)((int)this_ + 0x54) = *(int *)((int)this_ + 0x54) - iVar9;
    *(int *)((int)this_ + 0x50) = *(int *)((int)this_ + 0x50) + iVar9;
    *(int *)((int)this_ + param_2 * 4 + 0x58) = *(int *)((int)this_ + param_2 * 4 + 0x58) + iVar9;
    *(int *)((int)this_ + 0x668) = *(int *)((int)this_ + 0x668) + 1;
    *(int *)((int)this_ + 0x66c) = *(int *)((int)this_ + 0x66c) + -1;
    *(int *)((int)this_ + param_2 * 4 + 0x670) = *(int *)((int)this_ + param_2 * 4 + 0x670) + 1;
    ReleaseMutex(hHandle);
    puVar5 = puVar5 + 4;
  }
  return (undefined4 *)(puVar5);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a1810, ap_004a1810));
