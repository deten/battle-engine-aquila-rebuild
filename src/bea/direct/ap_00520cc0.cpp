// auto-ported from 00520cc0_FUN_00520cc0.c (FUN_00520cc0, 605 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008a1388 GLOBAL_AT(int, 0x008a1388)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
#define DAT_008a9584 GLOBAL_AT(int, 0x008a9584)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define _DAT_0089bcb8 GLOBAL_AT(float, 0x0089bcb8)
typedef bool (BEA_THISCALL* FUN_00465dd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00465dd0_t> FUN_00465dd0 = {(FUN_00465dd0_t)0x00465dd0};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef int (BEA_CDECL* FUN_0055e607_t)(uint32_t);
static const bea_guard<FUN_0055e607_t> FUN_0055e607 = {(FUN_0055e607_t)0x0055e607};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static void BEA_THISCALL ap_00520cc0(void * this_, uint param_1)
{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  short *psVar8;
  undefined2 *puVar9;
  int *piVar10;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int (&local_8)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x10 - 0x8);
  if ((ushort)param_1 < 0x20) {
    switch(param_1 & 0xffff) {
    case 1:
      if (*(char *)((int)this_ + 0x48) != '\0') {
        *(undefined1 *)((int)this_ + 0x48) = 0;
      }
      if (0 < *(int *)((int)this_ + 0x44)) {
        *(int *)((int)this_ + 0x44) = *(int *)((int)this_ + 0x44) + -1;
        return;
      }
      break;
    case 2:
      if (*(char *)((int)this_ + 0x48) != '\0') {
        *(undefined1 *)((int)this_ + 0x48) = 0;
      }
      iVar7 = *(int *)((int)this_ + 0x44);
      iVar5 = FUN_0055e607(bea_arg((int)this_ + 4));
      if ((iVar7 < iVar5) && (iVar7 < 0x1f)) {
        *(int *)((int)this_ + 0x44) = iVar7 + 1;
        return;
      }
      break;
    case 3:
      if (*(char *)((int)this_ + 0x48) != '\0') {
        *(undefined2 *)((int)this_ + 4) = 0;
        *(undefined4 *)((int)this_ + 0x44) = 0;
        *(undefined1 *)((int)this_ + 0x48) = 0;
        return;
      }
      if (0 < *(int *)((int)this_ + 0x44)) {
        iVar7 = *(int *)((int)this_ + 0x44) + -1;
        *(int *)((int)this_ + 0x44) = iVar7;
        psVar8 = (short *)((int)this_ + iVar7 * 2 + 4);
        if (*(short *)((int)this_ + iVar7 * 2 + 4) != 0) {
          do {
            *psVar8 = psVar8[1];
            psVar8 = psVar8 + 1;
          } while (BEA_LOOP_GUARD((*psVar8 != 0)));
          return;
        }
      }
      break;
    case 4:
      *(uint *)((int)this_ + 0x50) = (uint)(*(int *)((int)this_ + 0x50) == 0);
      return;
    case 5:
      *(uint *)((int)this_ + 0x4c) = (uint)(*(int *)((int)this_ + 0x4c) == 0);
      return;
    case 6:
      *(undefined4 *)((int)this_ + 0x6e4) = 0;
      return;
    case 7:
      *(undefined4 *)((int)this_ + 0x6e4) = 1;
      return;
    case 8:
      *(undefined4 *)((int)this_ + 0x6e4) = 2;
      return;
    case 9:
      FUN_0055e64e(bea_arg(&DAT_008a1388), bea_arg((int)this_ + 4));
      DAT_008a9580 = 1;
      DAT_008a9584 = 0;
      FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0xb), bea_arg(0x14));
    }
  }
  else {
    puVar9 = (undefined2 *)((int)this_ + 4);
    uVar3 = FUN_0055e607(bea_arg(puVar9));
    if (uVar3 < 0x1f) {
      if (*(char *)((int)this_ + 0x48) != '\0') {
        *puVar9 = 0;
        *(undefined4 *)((int)this_ + 0x44) = 0;
        *(undefined1 *)((int)this_ + 0x48) = 0;
      }
      uVar3 = FUN_0055e607(bea_arg(puVar9));
      if (uVar3 < 0x20) {
        piVar10 = local_8;
        pvVar4 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
        FUN_00540680(bea_arg(pvVar4), bea_arg(puVar9), bea_arg(piVar10));
        if ((float)local_8[0] < _DAT_0089bcb8) {
          iVar7 = *(int *)((int)this_ + 0x44);
          uVar3 = param_1;
          pvVar4 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
          iVar5 = FUN_00465dd0(bea_arg(pvVar4), bea_arg(uVar3));
          if (iVar5 == 0) {
            switch(param_1 & 0xffff) {
            case 0xca:
            case 0xcb:
              param_1 = 0x45;
              break;
            case 0xce:
            case 0xcf:
              param_1 = 0x49;
              break;
            case 0xd4:
              param_1 = 0x4f;
              break;
            case 0xdb:
              param_1 = 0x55;
            }
          }
          puVar6 = (ushort *)((int)this_ + iVar7 * 2 + 4);
          do {
            uVar1 = *puVar6;
            *puVar6 = (ushort)param_1;
            uVar2 = *puVar6;
            puVar6 = puVar6 + 1;
            param_1 = (uint)uVar1;
          } while (BEA_LOOP_GUARD((uVar2 != 0)));
          *(int *)((int)this_ + 0x44) = *(int *)((int)this_ + 0x44) + 1;
        }
      }
      *(undefined4 *)((int)this_ + 0x50) = 0;
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00520cc0, ap_00520cc0));
