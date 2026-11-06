// auto-ported from 0048ef00_FUN_0048ef00.c (FUN_0048ef00, 637 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_006fabf0 GLOBAL_AT(int, 0x006fabf0)
#define DAT_006fabf4 GLOBAL_AT(int, 0x006fabf4)
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

static void BEA_THISCALL ap_0048ef00(void * this_, int param_1, int param_2, int param_3, int param_4)
{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  int local_2c;
  int local_18;
  undefined *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar8 = param_4;
  local_10 = param_1 * 8;
  local_8 = param_3 * 8 + 8;
  local_4 = param_4 * 8 + 8;
  local_c = param_2 * 8;
  if (DAT_006fabf0 == 0) {
    piVar4 = DAT_006fabf4;
    if (DAT_006fabcc != 0) {
      piVar4 = *(int **)((int)this_ + 8);
    }
    iVar5 = bea_vcall<uint32_t>(piVar4, 0x4c, piVar4,0,&local_18,&local_10,0);
    if (iVar5 < 0) {
      return;
    }
  }
  else {
    local_18 = 0x400;
    local_14 = &DAT_0067a7d8 + (param_2 * 0x1000 + local_10) * 2;
  }
  puVar3 = local_14;
  param_4 = 0;
  if (param_2 <= iVar8) {
    uVar9 = param_2 * 0x40 + param_1;
    local_2c = (iVar8 - param_2) + 1;
    iVar8 = local_18;
    do {
      if (param_1 <= param_3) {
        param_2 = 0;
        iVar5 = (param_3 - param_1) + 1;
        uVar11 = uVar9;
        do {
          FUN_0047eff0(bea_arg(&DAT_006fadc8), bea_arg(*(undefined4 *)((int)this_ + 0x34)), bea_arg(DAT_0089ce3c + *(int *)((int)this_ + 0x30) * 0x4c), bea_arg(puVar3 + iVar8 * param_4 + param_2), bea_arg(iVar8 / 2), bea_arg(uVar11), bea_arg(5), bea_arg(0), bea_arg(0), bea_arg(8), bea_arg(8));
          if ((*(ushort *)(&DAT_008be274 + (uVar11 & 0xffff) * 2) != 0) &&
             (puVar12 = &DAT_008aa9f4 + (uint)*(ushort *)(&DAT_008be274 + (uVar11 & 0xffff) * 2) * 8
             , puVar12 != (undefined *)0x0)) {
            iVar6 = local_18 / 2;
            iVar1 = *(int *)((int)this_ + 0x34);
            iVar10 = 4 - iVar1;
            do {
              iVar7 = (uint)(byte)puVar12[7] - iVar10;
              if (0 < iVar7) {
                bVar2 = (byte)iVar10;
                FUN_0048ee00(bea_arg(puVar3 + iVar8 * param_4 + param_2), bea_arg(iVar6), bea_arg(*(int *)(&DAT_00628298 + iVar7 * 4) + *DAT_008aa9f0), bea_arg((int)(char)puVar12[4] >> (bVar2 & 0x1f)), bea_arg((int)(char)puVar12[5] >> (bVar2 & 0x1f)), bea_arg(iVar7), bea_arg(1 << ((char)iVar1 + 3U & 0x1f)));
              }
            } while (BEA_LOOP_GUARD(((*(ushort *)(puVar12 + 2) != 0) &&
                    (puVar12 = &DAT_008aa9f4 + (uint)*(ushort *)(puVar12 + 2) * 8,
                    puVar12 != (undefined *)0x0))));
          }
          param_2 = param_2 + 0x10;
          uVar11 = uVar11 + 1;
          iVar5 = iVar5 + -1;
          iVar8 = local_18;
        } while (BEA_LOOP_GUARD((iVar5 != 0)));
      }
      param_4 = param_4 + 8;
      uVar9 = uVar9 + 0x40;
      local_2c = local_2c + -1;
    } while (BEA_LOOP_GUARD((local_2c != 0)));
  }
  FUN_0048e950(bea_arg(this_), bea_arg(&local_10));
  if (DAT_006fabcc == 0) {
    bea_vcall<uint32_t>(DAT_00888a50, 0x7c, DAT_00888a50,DAT_006fabf4,*(undefined4 *)((int)this_ + 8));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048ef00, ap_0048ef00));
