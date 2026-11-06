// auto-ported from 0041bdf0_FUN_0041bdf0.c (FUN_0041bdf0, 872 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00624184 GLOBAL_AT(int, 0x00624184)
#define DAT_00672e18 GLOBAL_AT(int, 0x00672e18)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00661f24 GLOBAL_AT(int, 0x00661f24)
#define DAT_00623e38 GLOBAL_AT(int, 0x00623e38)
#define DAT_006728f8 GLOBAL_AT(undefined4, 0x006728f8)
#define s_Updating_base_things_list_in_wor_00624260 ((char*)0x00624260)
#define s_WARNING__Could_not_find_career_n_006241b4 ((char*)0x006241b4)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_0041b770_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0041b770_t> FUN_0041b770 = {(FUN_0041b770_t)0x0041b770};
typedef void * (BEA_THISCALL* FUN_0041b940_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041b940_t> FUN_0041b940 = {(FUN_0041b940_t)0x0041b940};
typedef void * (BEA_THISCALL* FUN_0041b9f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041b9f0_t> FUN_0041b9f0 = {(FUN_0041b9f0_t)0x0041b9f0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_THISCALL* FUN_004496e0_t)(uint32_t);
static const bea_guard<FUN_004496e0_t> FUN_004496e0 = {(FUN_004496e0_t)0x004496e0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static void BEA_THISCALL ap_0041bdf0(void * this_)
{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  void *pvVar9;
  undefined4 *puVar10;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  int * &local_40 = *reinterpret_cast<int * *>(bea_frame_ + 0x40 - 0x40);
  void * &local_3c = *reinterpret_cast<void * *>(bea_frame_ + 0x40 - 0x3c);
  int &local_34 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x34);
  undefined4 * (&local_2c)[2] = *reinterpret_cast<undefined4 * (*)[2]>(bea_frame_ + 0x40 - 0x2c);
  undefined4 * &local_24 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x40 - 0x24);
  undefined1 (&local_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x40 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x40 - 0x8);
  uint &local_4 = *reinterpret_cast<uint *>(bea_frame_ + 0x40 - 0x4);
  local_4 = 0xffffffff;
  iVar2 = 0;
  if (0 < DAT_00624184) {
    piVar6 = (int *)((int)this_ + 0x14);
    do {
      if (*piVar6 == DAT_00672e18) {
        local_3c = (void *)(iVar2 * 0x40 + 4 + (int)this_);
        goto LAB_0041be4e;
      }
      iVar2 = iVar2 + 1;
      piVar6 = piVar6 + 0x10;
    } while (BEA_LOOP_GUARD((iVar2 < DAT_00624184)));
  }
  FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,DAT_00672e18);
  local_3c = (void *)0x0;
LAB_0041be4e:
  FUN_0041b940(bea_arg(local_3c), bea_arg(local_2c));
  local_4 = 0;
  iVar2 = DAT_00624184;
  local_24 = local_2c[0];
  if (local_2c[0] == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)*local_2c[0];
  }
  do {
    if (piVar6 == (int *)0x0) {
      local_4 = 0xffffffff;
      FUN_004e5c60(bea_arg(local_2c));
      return;
    }
    if (*(int *)((int)local_3c + 0xc) < 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = &DAT_00661f24 + *(int *)((int)local_3c + 0xc) * 2;
    }
    local_34 = 0;
    if (0 < iVar2) {
      local_40 = (int *)((int)this_ + 0x14);
      piVar8 = &DAT_00623e38;
      do {
        if (*local_40 == DAT_00672e18) {
          iVar5 = piVar8[-1];
          if (iVar5 != -1) {
            iVar4 = 0;
            if (0 < iVar2) {
              piVar7 = (int *)((int)this_ + 0x14);
              do {
                if (*piVar7 == iVar5) {
                  pvVar9 = (void *)(iVar4 * 0x40 + 4 + (int)this_);
                  goto LAB_0041bf1c;
                }
                iVar4 = iVar4 + 1;
                piVar7 = piVar7 + 0x10;
              } while (BEA_LOOP_GUARD((iVar4 < iVar2)));
            }
            FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,iVar5);
            pvVar9 = (void *)0x0;
LAB_0041bf1c:
            FUN_00441740(&DAT_0066f580,s_Updating_base_things_list_in_wor_00624260,
                         *(int *)((int)pvVar9 + 0x10));
            iVar2 = 0;
            puVar10 = &DAT_006728f8;
            do {
              FUN_0041b770(bea_arg(pvVar9), bea_arg(iVar2), bea_arg(*puVar10));
              iVar2 = iVar2 + 1;
              puVar10 = puVar10 + 1;
            } while (BEA_LOOP_GUARD((iVar2 < 0x120)));
          }
          iVar5 = FUN_004496e0(bea_arg(&DAT_006728f8));
          iVar2 = DAT_00624184;
          if ((iVar5 != 0) && (iVar5 = *piVar8, iVar5 != -1)) {
            iVar2 = 0;
            if (0 < DAT_00624184) {
              piVar7 = (int *)((int)this_ + 0x14);
              do {
                if (*piVar7 == iVar5) {
                  pvVar9 = (void *)(iVar2 * 0x40 + 4 + (int)this_);
                  goto LAB_0041bfb9;
                }
                iVar2 = iVar2 + 1;
                piVar7 = piVar7 + 0x10;
              } while (BEA_LOOP_GUARD((iVar2 < DAT_00624184)));
            }
            FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,iVar5);
            pvVar9 = (void *)0x0;
LAB_0041bfb9:
            FUN_00441740(&DAT_0066f580,s_Updating_base_things_list_in_wor_00624260,
                         *(int *)((int)pvVar9 + 0x10));
            iVar5 = 0;
            puVar10 = &DAT_006728f8;
            do {
              FUN_0041b770(bea_arg(pvVar9), bea_arg(iVar5), bea_arg(*puVar10));
              iVar5 = iVar5 + 1;
              puVar10 = puVar10 + 1;
              iVar2 = DAT_00624184;
            } while (BEA_LOOP_GUARD((iVar5 < 0x120)));
          }
        }
        local_34 = local_34 + 1;
        local_40 = local_40 + 0x10;
        piVar8 = piVar8 + 5;
      } while (BEA_LOOP_GUARD((local_34 < iVar2)));
    }
    if (*piVar6 != 1) {
      bVar1 = false;
      if (DAT_00672e18 == 500) {
        if ((*(uint *)((int)this_ + 0x240c) >> 0x1d & 1) != 0) {
          if (*(int *)((int)local_3c + 0xc) < 0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = &DAT_00661f24 + *(int *)((int)local_3c + 0xc) * 2;
          }
          if (piVar6 == piVar3) {
            bVar1 = true;
          }
        }
        if ((*(uint *)((int)this_ + 0x240c) >> 0x1e & 1) != 0) {
          if (*(int *)((int)local_3c + 0xc) < 0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = &DAT_00661f24 + *(int *)((int)local_3c + 0xc) * 2;
          }
          if (piVar6 != piVar3) goto LAB_0041c08e;
        }
        if (bVar1) {
LAB_0041c08e:
          *piVar6 = 1;
          iVar2 = DAT_00624184;
          if ((-1 < piVar6[1]) &&
             (pvVar9 = (void *)(piVar6[1] * 0x40 + 4 + (int)this_), pvVar9 != (void *)0x0)) {
            FUN_0041b9f0(bea_arg(pvVar9), bea_arg(local_1c));
            local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
            piVar3 = (int *)FUN_00406d20(bea_arg(local_1c));
            while (BEA_LOOP_GUARD((piVar3 != (int *)0x0))) {
              if ((piVar3 != piVar6) && (*piVar3 == 1)) {
                *piVar3 = 2;
              }
              piVar3 = (int *)FUN_00406d30(bea_arg(local_1c));
            }
            local_4 = local_4 & 0xffffff00;
            FUN_004e5c60(bea_arg(local_1c));
            iVar2 = DAT_00624184;
          }
        }
      }
      else if ((piVar6 != piVar3) ||
              (iVar5 = FUN_004496e0(bea_arg(&DAT_006728f8)), iVar2 = DAT_00624184, iVar5 != 0))
      goto LAB_0041c08e;
    }
    local_24 = (undefined4 *)local_24[1];
    if (local_24 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*local_24;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041bdf0, ap_0041bdf0));
