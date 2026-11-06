// auto-ported from 004cb3d0_FUN_004cb3d0.c (FUN_004cb3d0, 485 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (40 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089ce58 GLOBAL_AT(int, 0x0089ce58)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0082b3d0 GLOBAL_AT(int, 0x0082b3d0)
#define DAT_0082b3d4 GLOBAL_AT(int, 0x0082b3d4)
#define DAT_0082b3d8 GLOBAL_AT(int, 0x0082b3d8)
#define DAT_0082b3dc GLOBAL_AT(int, 0x0082b3dc)
#define DAT_0082b3a0 GLOBAL_AT(undefined4, 0x0082b3a0)
#define DAT_0082b3e4 GLOBAL_AT(int, 0x0082b3e4)
#define s_C__dev_ONSLAUGHT2_ParticleManage_00630e60 ((char*)0x00630e60)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef undefined4 * (BEA_THISCALL* FUN_004cb5c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb5c0_t> FUN_004cb5c0 = {(FUN_004cb5c0_t)0x004cb5c0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004cb3d0(void * this_, undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int param_7, int param_8)
{
  ushort *puVar1;
  undefined4 uVar2;
  int a1;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (DAT_0089ce58 == 0) {
    a1 = FUN_004cb5c0(bea_arg(this_), bea_arg(param_1), bea_arg(param_8));
    if (a1 == 0) {
      if (param_2 != 0) {
        *(undefined4 *)(param_2 + 4) = 0;
      }
    }
    else {
      *(undefined4 *)(a1 + 0x38) = param_3;
      *(undefined4 *)(a1 + 0x3c) = param_4;
      *(undefined4 *)(a1 + 0x40) = param_5;
      *(undefined4 *)(a1 + 0x44) = param_6;
      if (param_2 == 0) {
        bea_vcall<uint32_t>(*(int **)(a1 + 0x5c), 0x3c, a1);
      }
      else {
        puVar3 = (undefined4 *)
                 FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xb8), bea_arg(0x10), bea_arg(s_C__dev_ONSLAUGHT2_ParticleManage_00630e60), bea_arg(0x2c0));
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          FUN_004011b0(bea_arg(puVar3 + 4), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
          FUN_004011b0(bea_arg(puVar3 + 0x14), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
          *puVar3 = DAT_0082b3d0;
          puVar3[1] = DAT_0082b3d4;
          puVar3[2] = DAT_0082b3d8;
          uVar2 = DAT_0082b3dc;
          puVar3[0x12] = 0x461c4000;
          puVar3[3] = uVar2;
          puVar3[0x24] = DAT_0082b3d0;
          puVar3[0x25] = DAT_0082b3d4;
          puVar3[0x26] = DAT_0082b3d8;
          puVar3[0x27] = DAT_0082b3dc;
          puVar5 = &DAT_0082b3a0;
          puVar6 = puVar3 + 4;
          for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar3[0x28] = 0;
          puVar3[0x29] = 0;
          puVar3[0x2a] = 0;
          puVar3[0x2b] = 0xbf800000;
          *(undefined2 *)(puVar3 + 0x2d) = 0;
          *(undefined2 *)((int)puVar3 + 0xb6) = 0;
        }
        *(undefined4 **)(a1 + 0x58) = puVar3;
        *(undefined4 **)(param_2 + 4) = puVar3;
        iVar4 = *(int *)(a1 + 0x58);
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0xb0) = DAT_0082b3e4;
          DAT_0082b3e4 = iVar4;
          *(undefined4 *)(*(int *)(a1 + 0x58) + 0xa4) = 1;
          *(int *)(*(int *)(a1 + 0x58) + 0xa8) = a1;
          if (param_7 == 0) {
            uVar2 = 0xbf800000;
          }
          else {
            uVar2 = 0;
          }
          *(undefined4 *)(*(int *)(a1 + 0x58) + 0xac) = uVar2;
          if (param_8 != 0) {
            puVar1 = (ushort *)(*(int *)(a1 + 0x58) + 0xb6);
            *puVar1 = *puVar1 | 1;
          }
        }
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cb3d0, ap_004cb3d0));
