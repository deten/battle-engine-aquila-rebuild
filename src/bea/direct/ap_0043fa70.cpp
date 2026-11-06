// auto-ported from 0043fa70_FUN_0043fa70.c (FUN_0043fa70, 570 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define s_Cutscenes_Music__s__s_00628240 ((char*)0x00628240)
#define s_Cutscenes__s__s__s_0062822c ((char*)0x0062822c)
#define PTR_s_English_00628090 GLOBAL_AT(void*, 0x00628090)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef int (BEA_THISCALL* FUN_004aa680_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa680_t> FUN_004aa680 = {(FUN_004aa680_t)0x004aa680};
typedef uint32_t (BEA_THISCALL* FUN_004dbf70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004dbf70_t> FUN_004dbf70 = {(FUN_004dbf70_t)0x004dbf70};
typedef int (BEA_THISCALL* FUN_004e0a00_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0a00_t> FUN_004e0a00 = {(FUN_004e0a00_t)0x004e0a00};
typedef float10 (BEA_STDCALL* FUN_00517c60_t)(uint32_t);
static const bea_guard<FUN_00517c60_t> FUN_00517c60 = {(FUN_00517c60_t)0x00517c60};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_0043fa70(void * this_)
{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  int &local_110 = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x110);
  int &local_10c = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x10c);
  undefined4 &local_108 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x108);
  undefined1 (&auStack_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x110 - 0x100);
  local_10c = 0;
  local_110 = 0;
  piVar4 = *(int **)((int)this_ + 0x30);
  iVar6 = *(int *)((int)this_ + 0x7c);
  iVar3 = 0;
  if (0 < *(int *)((int)this_ + 0x6bc)) {
    do {
      if ((*(int *)(iVar6 + 0x128) == -1) && (iVar5 = 0, 0 < *(int *)((int)this_ + 0xd70))) {
        do {
          iVar1 = FUN_00568390(bea_arg(iVar6 + 8), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0xd6c) + iVar5 * 4)));
          if (iVar1 == 0) {
            *(int *)(iVar6 + 0x128) = iVar5;
            *(undefined1 *)(iVar6 + 300) = 1;
          }
          iVar5 = iVar5 + 1;
        } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)this_ + 0xd70))));
      }
      FUN_004dbf70(bea_arg(piVar4), bea_arg(*(undefined4 *)(iVar6 + 0x128)));
      iVar5 = iVar6 + 0x108;
      pvVar2 = (void *)bea_vcall<uint32_t>(piVar4, 0x24);
      iVar5 = FUN_004aa630(bea_arg(pvVar2), bea_arg(iVar5));
      if ((iVar5 != 0) && (iVar5 != -1)) {
        pvVar2 = (void *)bea_vcall<uint32_t>(piVar4, 0x24);
        iVar5 = FUN_004aa680(bea_arg(pvVar2), bea_arg(iVar5));
        if (*(int *)(iVar6 + 0x234) == -1) {
          *(int *)(iVar6 + 0x234) = *(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14);
        }
        *(int *)(iVar6 + 0x238) = *(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14);
        if (*(int *)(iVar6 + 0x23c) == -1) {
          *(int *)(iVar6 + 0x23c) = local_10c;
        }
        local_10c = local_10c + *(int *)(iVar6 + 0x234);
        local_110 = local_110 + *(int *)(iVar6 + 0x234);
      }
      iVar6 = *(int *)(iVar6 + 0x248);
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0x6bc))));
  }
  if (*(int *)((int)this_ + 0x848) == -1) {
    *(int *)((int)this_ + 0x848) = local_110;
  }
  if (*(int *)((int)this_ + 0x848) < 1) {
    *(undefined4 *)((int)this_ + 0x848) = 1;
  }
  iVar6 = 0;
  if (0 < *(int *)((int)this_ + 0xf4)) {
    piVar4 = (int *)((int)this_ + 0x530);
    do {
      if (piVar4[-0x10e] == 2) {
        for (iVar3 = piVar4[-0x12d]; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = *(int *)(iVar3 + 0x248)) {
          if (*piVar4 == -1) {
            FUN_0055de9b(auStack_100,s_Cutscenes_Music__s__s_00628240,(char *)((int)this_ + 0x5a8),
                         (char *)(iVar3 + 8));
          }
          else {
            FUN_0055de9b(auStack_100,s_Cutscenes__s__s__s_0062822c,
                         (&PTR_s_English_00628090)[*piVar4],(char *)((int)this_ + 0x5a8),
                         (char *)(iVar3 + 8));
          }
          iVar5 = FUN_004e0a00(bea_arg(&DAT_00896988), bea_arg(auStack_100), bea_arg(0), bea_arg(0));
          *(int *)(iVar3 + 0x244) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(iVar3 + 0x238) = 10;
          }
          else {
            fVar7 = (float10)FUN_00517c60(bea_arg(*(undefined4 *)(iVar3 + 0x244)));
            local_108 = (undefined4)(longlong)ROUND(fVar7 * (float10)20.0f);
            *(undefined4 *)(iVar3 + 0x238) = local_108;
          }
        }
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (BEA_LOOP_GUARD((iVar6 < *(int *)((int)this_ + 0xf4))));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043fa70, ap_0043fa70));
