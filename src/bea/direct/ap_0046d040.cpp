// auto-ported from 0046d040_FUN_0046d040.c (FUN_0046d040, 549 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008aa4e8 GLOBAL_AT(int, 0x008aa4e8)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_00855108 GLOBAL_AT(undefined4*, 0x00855108)
#define DAT_00855100 GLOBAL_AT(undefined4*, 0x00855100)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00662f36 GLOBAL_AT(char, 0x00662f36)
#define DAT_00662f4c GLOBAL_AT(int, 0x00662f4c)
#define DAT_00662f34 GLOBAL_AT(char, 0x00662f34)
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define s_No_start_position_for_player___c_0062c008 ((char*)0x0062c008)
typedef uint32_t (BEA_CDECL* FUN_00404a00_t)(void);
static const bea_guard<FUN_00404a00_t> FUN_00404a00 = {(FUN_00404a00_t)0x00404a00};
typedef uint32_t (BEA_CDECL* FUN_00404b90_t)(void);
static const bea_guard<FUN_00404b90_t> FUN_00404b90 = {(FUN_00404b90_t)0x00404b90};
typedef uint32_t (BEA_THISCALL* FUN_0042cf70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042cf70_t> FUN_0042cf70 = {(FUN_0042cf70_t)0x0042cf70};
typedef uint32_t (BEA_THISCALL* FUN_0042d8a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042d8a0_t> FUN_0042d8a0 = {(FUN_0042d8a0_t)0x0042d8a0};
typedef uint32_t (BEA_THISCALL* FUN_0042d8c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042d8c0_t> FUN_0042d8c0 = {(FUN_0042d8c0_t)0x0042d8c0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_00481af0_t)(uint32_t);
static const bea_guard<FUN_00481af0_t> FUN_00481af0 = {(FUN_00481af0_t)0x00481af0};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef uint32_t (BEA_THISCALL* FUN_00490e30_t)(uint32_t);
static const bea_guard<FUN_00490e30_t> FUN_00490e30 = {(FUN_00490e30_t)0x00490e30};
typedef uint32_t (BEA_THISCALL* FUN_004926e0_t)(uint32_t);
static const bea_guard<FUN_004926e0_t> FUN_004926e0 = {(FUN_004926e0_t)0x004926e0};
typedef undefined4 * (BEA_CDECL* FUN_004bf090_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_004bf090_t> FUN_004bf090 = {(FUN_004bf090_t)0x004bf090};
typedef uint32_t (BEA_THISCALL* FUN_004d28a0_t)(uint32_t);
static const bea_guard<FUN_004d28a0_t> FUN_004d28a0 = {(FUN_004d28a0_t)0x004d28a0};
typedef undefined4 (BEA_THISCALL* FUN_004d3080_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d3080_t> FUN_004d3080 = {(FUN_004d3080_t)0x004d3080};

static undefined4 BEA_THISCALL ap_0046d040(void * this_)
{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;

  alignas(16) uint8_t bea_frame_[0x3e0] = {};   // the original stack frame (emulate_frame)
  int &iStack_3dc = *reinterpret_cast<int *>(bea_frame_ + 0x3e0 - 0x3dc);
  undefined ** &ppuStack_3c4 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3e0 - 0x3c4);
  undefined4 &uStack_3c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3c0);
  undefined4 &uStack_3bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3bc);
  undefined4 &uStack_3b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3b8);
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x4);
  iVar2 = FUN_00481af0(bea_arg(&DAT_008aa4e8));
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3e4ccccd));
  FUN_00404a00();
  FUN_00404b90();
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3ecccccd));
  iStack_3dc = 0;
  if (0 < *(int *)((int)this_ + 0x29c)) {
    piVar4 = (int *)((int)this_ + 0x2a4);
    do {
      bVar1 = false;
      DAT_00855108 = DAT_00855100;
      if (DAT_00855100 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *DAT_00855100;
      }
      if (iVar2 == 0) {
LAB_0046d10a:
        FUN_00441740(&DAT_0066f580,s_No_start_position_for_player___c_0062c008);
        piVar3 = (int *)FUN_004bf090(0xf,0);
        if (piVar3 != (int *)0x0) {
          FUN_0048dcf0(bea_arg(&ppuStack_3c4));
          uStack_3c0 = 0x43800000;
          uStack_3bc = 0x43800000;
          ppuStack_3c4 = ((void*)0x005dbbd0);
          uStack_8 = 0;
          uStack_3b8 = 0;
          uStack_4 = *(undefined4 *)(*piVar4 + 0x2c);
          bea_vcall<uint32_t>(piVar3, 0x24, &ppuStack_3c4);
          FUN_004d3080(bea_arg((void *)*piVar4), bea_arg(piVar3[0x1f]));
        }
      }
      else {
        do {
          if (*(int *)(iVar2 + 0x80) == *(int *)(*piVar4 + 0x2c)) {
            bVar1 = true;
            FUN_004d3080(bea_arg((void *)*piVar4), bea_arg(*(undefined4 *)(iVar2 + 0x7c)));
          }
          DAT_00855108 = (int *)DAT_00855108[1];
          if (DAT_00855108 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *DAT_00855108;
          }
        } while (BEA_LOOP_GUARD((iVar2 != 0)));
        if (!bVar1) goto LAB_0046d10a;
      }
      FUN_004d28a0(bea_arg((void *)*piVar4));
      iStack_3dc = iStack_3dc + 1;
      piVar4 = piVar4 + 1;
    } while (BEA_LOOP_GUARD((iStack_3dc < *(int *)((int)this_ + 0x29c))));
  }
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f19999a));
  *(undefined4 *)((int)this_ + 0x290) = 2;
  *(undefined4 *)((int)this_ + 0x294) = 2;
  if (DAT_00662f36 != '\0') {
    FUN_0042d8c0(bea_arg(*(void **)((int)this_ + 0x2b4)), bea_arg(&DAT_00662f4c));
  }
  if (DAT_00662f34 != '\0') {
    FUN_0042d8a0(bea_arg(*(void **)((int)this_ + 0x2b4)), bea_arg(&DAT_00662f4c));
  }
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f4ccccd));
  FUN_004926e0(bea_arg(&DAT_00704200));
  FUN_00490e30(bea_arg(&DAT_006fadc8));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f800000));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046d040, ap_0046d040));
