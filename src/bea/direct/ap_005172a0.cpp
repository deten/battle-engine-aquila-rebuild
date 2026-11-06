// auto-ported from 005172a0_FUN_005172a0.c (FUN_005172a0, 411 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00663080 GLOBAL_AT(int, 0x00663080)
#define s_C__dev_ONSLAUGHT2_pcsoundmanager_0063e46c ((char*)0x0063e46c)
typedef int (BEA_CDECL* FUN_00517440_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00517440_t> FUN_00517440 = {(FUN_00517440_t)0x00517440};
typedef uint32_t (BEA_CDECL* FUN_00517600_t)(void *, void *, uint, ...);
static const bea_guard<FUN_00517600_t> FUN_00517600 = {(FUN_00517600_t)0x00517600};
typedef uint32_t (BEA_CDECL* FUN_00517fa0_t)(void *, void *, uint, void *, ...);
static const bea_guard<FUN_00517fa0_t> FUN_00517fa0 = {(FUN_00517fa0_t)0x00517fa0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 * BEA_STDCALL ap_005172a0(void *param_1, undefined4 param_2, undefined4 *param_3)
{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  FUN_00548570(bea_arg(param_1), bea_arg(&local_4), bea_arg(4));
  puVar2 = param_3;
  if (param_3 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x84), bea_arg(0x4b), bea_arg(s_C__dev_ONSLAUGHT2_pcsoundmanager_0063e46c), bea_arg(0x2a7))
    ;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 0;
      puVar2[0x1d] = 0;
      *puVar2 = ((void*)0x005e4988);
      puVar2[0x1e] = 0;
      puVar2[0x20] = 0;
    }
  }
  else {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(param_3[0x1e]));
    piVar1 = (int *)puVar2[0x20];
    puVar2[0x1e] = 0;
    if (piVar1 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
      puVar2[0x20] = 0;
    }
  }
  uVar6 = local_4 + 3U >> 2;
  uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar6), bea_arg(0x4b), bea_arg(s_C__dev_ONSLAUGHT2_pcsoundmanager_0063e46c), bea_arg(0x2ac));
  iVar4 = FUN_00548570(bea_arg(param_1), bea_arg(uVar3), bea_arg(uVar6));
  if (iVar4 != 0) {
    puVar2[0x1f] = local_4;
    iVar4 = FUN_00517440(bea_arg(puVar2 + 0x20), bea_arg(local_4));
    if (iVar4 != 0) {
      if (DAT_00663080 == 0) {
        param_1 = (void *)0x0;
        FUN_00517fa0(uVar3,iVar4,(uint)puVar2[0x1f] >> 1,&param_1);
      }
      else {
        uVar5 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(puVar2[0x1f]), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_pcsoundmanager_0063e46c), bea_arg(0x2ca));
        param_1 = (void *)0x0;
        FUN_00517fa0(uVar3,uVar5,(uint)puVar2[0x1f] >> 1,&param_1);
        FUN_00517600(iVar4,uVar5,puVar2[0x1f]);
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar5));
      }
      bea_vcall<uint32_t>(puVar2[0x20], 0x4c, (int *)puVar2[0x20],iVar4,puVar2[0x1f],0,0);
    }
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar3));
    return (undefined4 *)(puVar2);
  }
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar3));
  if (puVar2 != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(puVar2, 0x0, 1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}

// @autoport-registration
// superseded by src/bea/lifted/lift_005172a0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
