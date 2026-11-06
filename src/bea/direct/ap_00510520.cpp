// auto-ported from 00510520_FUN_00510520.c (FUN_00510520, 538 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)
#define DAT_008553f0 GLOBAL_AT(undefined4*, 0x008553f0)
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
#define DAT_00855400 GLOBAL_AT(undefined4*, 0x00855400)
#define DAT_00855404 GLOBAL_AT(undefined4*, 0x00855404)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_00855408 GLOBAL_AT(undefined4*, 0x00855408)
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};
typedef undefined4 (BEA_THISCALL* FUN_004e1910_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1910_t> FUN_004e1910 = {(FUN_004e1910_t)0x004e1910};
typedef uint32_t (BEA_THISCALL* FUN_00511ca0_t)(uint32_t);
static const bea_guard<FUN_00511ca0_t> FUN_00511ca0 = {(FUN_00511ca0_t)0x00511ca0};
typedef uint32_t (BEA_THISCALL* FUN_00511d20_t)(uint32_t);
static const bea_guard<FUN_00511d20_t> FUN_00511d20 = {(FUN_00511d20_t)0x00511d20};
typedef uint32_t (BEA_THISCALL* FUN_00511db0_t)(uint32_t);
static const bea_guard<FUN_00511db0_t> FUN_00511db0 = {(FUN_00511db0_t)0x00511db0};

static void BEA_CDECL ap_00510520(void)
{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)*DAT_008553ec;
  DAT_008553ec[2] = (int)puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)*puVar5;
  }
  while (BEA_LOOP_GUARD((pvVar3 != (void *)0x0))) {
    FUN_00511ca0(bea_arg(pvVar3));
    puVar5 = *(undefined4 **)(DAT_008553ec[2] + 4);
    DAT_008553ec[2] = (int)puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)*puVar5;
    }
  }
  piVar1 = (int *)*DAT_008553f0;
  DAT_008553f0[2] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)*piVar1;
  }
  while (BEA_LOOP_GUARD((puVar5 != (undefined4 *)0x0))) {
    if (puVar5[4] != 0) {
      uVar2 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(puVar5[4]));
      *puVar5 = uVar2;
    }
    if (puVar5[5] != 0) {
      uVar2 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(puVar5[5]));
      puVar5[1] = uVar2;
    }
    piVar1 = *(int **)(DAT_008553f0[2] + 4);
    DAT_008553f0[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*piVar1;
    }
  }
  puVar5 = (undefined4 *)*DAT_008553f8;
  DAT_008553f8[2] = (int)puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)*puVar5;
  }
  while (BEA_LOOP_GUARD((pvVar3 != (void *)0x0))) {
    FUN_00511d20(bea_arg(pvVar3));
    puVar5 = *(undefined4 **)(DAT_008553f8[2] + 4);
    DAT_008553f8[2] = (int)puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)*puVar5;
    }
  }
  puVar5 = (undefined4 *)*DAT_008553fc;
  DAT_008553fc[2] = (int)puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)*puVar5;
  }
  while (BEA_LOOP_GUARD((pvVar3 != (void *)0x0))) {
    FUN_00511db0(bea_arg(pvVar3));
    puVar5 = *(undefined4 **)(DAT_008553fc[2] + 4);
    DAT_008553fc[2] = (int)puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)*puVar5;
    }
  }
  puVar5 = (undefined4 *)*DAT_00855400;
  DAT_00855400[2] = (int)puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)*puVar5;
  }
  while (BEA_LOOP_GUARD((pvVar3 != (void *)0x0))) {
    FUN_00511db0(bea_arg(pvVar3));
    puVar5 = *(undefined4 **)(DAT_00855400[2] + 4);
    DAT_00855400[2] = (int)puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)*puVar5;
    }
  }
  piVar1 = (int *)*DAT_00855404;
  DAT_00855404[2] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  while (BEA_LOOP_GUARD((iVar4 != 0))) {
    if (*(int *)(iVar4 + 0xc) != 0) {
      uVar2 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(*(int *)(iVar4 + 0xc)), bea_arg(0));
      *(undefined4 *)(iVar4 + 4) = uVar2;
    }
    piVar1 = *(int **)(DAT_00855404[2] + 4);
    DAT_00855404[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
  }
  piVar1 = (int *)*DAT_00855408;
  DAT_00855408[2] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)*piVar1;
  }
  while (BEA_LOOP_GUARD((puVar5 != (undefined4 *)0x0))) {
    if (puVar5[2] != 0) {
      uVar2 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(puVar5[2]));
      *puVar5 = uVar2;
    }
    if (puVar5[3] != 0) {
      uVar2 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(puVar5[3]), bea_arg(0));
      puVar5[1] = uVar2;
    }
    piVar1 = *(int **)(DAT_00855408[2] + 4);
    DAT_00855408[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*piVar1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00510520, ap_00510520));
