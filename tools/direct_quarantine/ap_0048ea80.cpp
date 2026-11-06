// auto-ported from 0048ea80_FUN_0048ea80.c (FUN_0048ea80, 883 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_006fabf0 GLOBAL_AT(int, 0x006fabf0)
#define DAT_006fabf4 GLOBAL_AT(undefined4*, 0x006fabf4)
#define DAT_006fabcc GLOBAL_AT(int, 0x006fabcc)
#define DAT_0067a7d8 GLOBAL_AT(undefined, 0x0067a7d8)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_0089ce3c GLOBAL_AT(int, 0x0089ce3c)
#define DAT_008be274 GLOBAL_AT(int, 0x008be274)
#define DAT_008aa9f4 GLOBAL_AT(undefined, 0x008aa9f4)
#define DAT_00628298 GLOBAL_AT(int, 0x00628298)
#define DAT_008aa9f0 GLOBAL_AT(undefined4*, 0x008aa9f0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
typedef uint32_t (BEA_THISCALL* FUN_0047eff0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_0047eff0_t const FUN_0047eff0 = (FUN_0047eff0_t)0x0047eff0;
typedef uint32_t (BEA_THISCALL* FUN_0048e950_t)(uint32_t, uint32_t);
static FUN_0048e950_t const FUN_0048e950 = (FUN_0048e950_t)0x0048e950;
typedef int (BEA_STDCALL* FUN_0048ee00_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_0048ee00_t const FUN_0048ee00 = (FUN_0048ee00_t)0x0048ee00;

static void BEA_THISCALL ap_0048ea80(void * this_, uint param_1)
{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  int local_18;
  undefined *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar10 = DAT_006fabf0;
  uVar1 = *(uint *)((int)this_ + 0x3c);
  *(undefined4 *)((int)this_ + 0x2c) = 1;
  iVar10 = *(int *)((int)this_ + 0x34) - iVar10;
  uVar8 = (param_1 & 0x3f) << 3;
  uVar3 = CONCAT31((uint3)((param_1 & 0xffff) >> 0xb),(char)((param_1 & 0xffff) >> 3)) & 0xfffffff8;
  if (iVar10 < 0) {
    bVar7 = (byte)*(int *)((int)this_ + 0x34);
    local_10 = (uVar1 & uVar8) << (bVar7 & 0x1f);
    local_4 = 8 << (bVar7 & 0x1f);
    local_c = (uVar1 & uVar3) << (bVar7 & 0x1f);
    local_8 = local_4 + local_10;
    local_4 = local_4 + local_c;
    if (DAT_006fabf0 == 0) {
      piVar4 = DAT_006fabf4;
      if (DAT_006fabcc != 0) {
        piVar4 = *(int **)((int)this_ + 8);
      }
      iVar10 = bea_vcall<uint32_t>(piVar4, 0x4c, piVar4,0,&local_18,&local_10,0);
      if (iVar10 < 0) {
        return;
      }
    }
    else {
      local_18 = 0x400;
      local_14 = &DAT_0067a7d8 + (local_c * 0x200 + local_10) * 2;
    }
    FUN_0047eff0(bea_arg(&DAT_006fadc8), bea_arg(*(undefined4 *)((int)this_ + 0x34)), bea_arg(DAT_0089ce3c + *(int *)((int)this_ + 0x30) * 0x4c), bea_arg(local_14), bea_arg(local_18 / 2), bea_arg(param_1 & 0xffff), bea_arg(5), bea_arg(0), bea_arg(0), bea_arg(8), bea_arg(8));
    puVar2 = local_14;
    if ((*(ushort *)(&DAT_008be274 + (param_1 & 0xffff) * 2) != 0) &&
       (puVar11 = &DAT_008aa9f4 + (uint)*(ushort *)(&DAT_008be274 + (param_1 & 0xffff) * 2) * 8,
       puVar11 != (undefined *)0x0)) {
      iVar5 = local_18 / 2;
      iVar10 = *(int *)((int)this_ + 0x34);
      iVar9 = 4 - iVar10;
      do {
        iVar6 = (uint)(byte)puVar11[7] - iVar9;
        if (0 < iVar6) {
          bVar7 = (byte)iVar9;
          FUN_0048ee00(bea_arg(puVar2), bea_arg(iVar5), bea_arg(*(int *)(&DAT_00628298 + iVar6 * 4) + *DAT_008aa9f0), bea_arg((int)(char)puVar11[4] >> (bVar7 & 0x1f)), bea_arg((int)(char)puVar11[5] >> (bVar7 & 0x1f)), bea_arg(iVar6), bea_arg(1 << ((char)iVar10 + 3U & 0x1f)));
        }
      } while (BEA_LOOP_GUARD(((*(ushort *)(puVar11 + 2) != 0) &&
              (puVar11 = &DAT_008aa9f4 + (uint)*(ushort *)(puVar11 + 2) * 8,
              puVar11 != (undefined *)0x0))));
    }
    FUN_0048e950(bea_arg(this_), bea_arg(&local_10));
  }
  else {
    bVar7 = (byte)iVar10;
    local_10 = (uVar1 & uVar8) << (bVar7 & 0x1f);
    local_4 = 8 << (bVar7 & 0x1f);
    local_c = (uVar1 & uVar3) << (bVar7 & 0x1f);
    local_8 = local_10 + local_4;
    local_4 = local_4 + local_c;
    piVar4 = DAT_006fabf4;
    if (DAT_006fabcc != 0) {
      piVar4 = *(int **)((int)this_ + 8);
    }
    iVar5 = bea_vcall<uint32_t>(piVar4, 0x4c, piVar4,0,&local_18,&local_10,0);
    if (-1 < iVar5) {
      FUN_0047eff0(bea_arg(&DAT_006fadc8), bea_arg(iVar10), bea_arg(DAT_0089ce3c + *(int *)((int)this_ + 0x30) * 0x4c), bea_arg(local_14), bea_arg(local_18 / 2), bea_arg(param_1 & 0xffff), bea_arg(5), bea_arg(0), bea_arg(0), bea_arg(8), bea_arg(8));
      puVar2 = local_14;
      if ((*(ushort *)(&DAT_008be274 + (param_1 & 0xffff) * 2) != 0) &&
         (puVar11 = &DAT_008aa9f4 + (uint)*(ushort *)(&DAT_008be274 + (param_1 & 0xffff) * 2) * 8,
         puVar11 != (undefined *)0x0)) {
        iVar5 = local_18 / 2;
        iVar10 = *(int *)((int)this_ + 0x34);
        iVar9 = 4 - iVar10;
        do {
          iVar6 = (uint)(byte)puVar11[7] - iVar9;
          if (0 < iVar6) {
            bVar7 = (byte)iVar9;
            FUN_0048ee00(bea_arg(puVar2), bea_arg(iVar5), bea_arg(*(int *)(&DAT_00628298 + iVar6 * 4) + *DAT_008aa9f0), bea_arg((int)(char)puVar11[4] >> (bVar7 & 0x1f)), bea_arg((int)(char)puVar11[5] >> (bVar7 & 0x1f)), bea_arg(iVar6), bea_arg(1 << ((char)iVar10 + 3U & 0x1f)));
          }
        } while (BEA_LOOP_GUARD(((*(ushort *)(puVar11 + 2) != 0) &&
                (puVar11 = &DAT_008aa9f4 + (uint)*(ushort *)(puVar11 + 2) * 8,
                puVar11 != (undefined *)0x0))));
      }
      if (DAT_006fabcc == 0) {
        bea_vcall<uint32_t>(DAT_006fabf4, 0x50, DAT_006fabf4,0);
      }
      else {
        bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x50, *(int **)((int)this_ + 8),0);
      }
    }
  }
  if (DAT_006fabcc == 0) {
    bea_vcall<uint32_t>(DAT_00888a50, 0x7c, DAT_00888a50,DAT_006fabf4,*(undefined4 *)((int)this_ + 8));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048ea80, ap_0048ea80));
