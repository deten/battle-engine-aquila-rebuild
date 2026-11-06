// auto-ported from 004ee8f0_FUN_004ee8f0.c (FUN_004ee8f0, 662 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_009c8010 GLOBAL_AT(int, 0x009c8010)
#define s_C__dev_ONSLAUGHT2_StaticShadows__006329f8 ((char*)0x006329f8)
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void BEA_CDECL ap_004ee8f0(int *param_1)
{
  int *piVar1;
  int *this_local;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_10;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_local = param_1;
  FUN_00423910(bea_arg(param_1));
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x24), bea_arg(0x70), bea_arg(s_C__dev_ONSLAUGHT2_StaticShadows__006329f8), bea_arg(0x432));
  puVar6 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[8] = DAT_009c8010;
    DAT_009c8010 = puVar2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar6 = puVar2;
  }
  FUN_00423960(bea_arg(this_local), bea_arg(puVar6 + 4), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(this_local), bea_arg(puVar6 + 5), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(this_local), bea_arg(puVar6 + 6), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(this_local), bea_arg(puVar6 + 7), bea_arg(4), bea_arg(1));
  piVar1 = puVar6 + 3;
  FUN_00423960(bea_arg(this_local), bea_arg(piVar1), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(this_local), bea_arg(puVar6 + 1), bea_arg(4), bea_arg(1));
  iVar7 = *piVar1;
  piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar7 * 0x1c + 4), bea_arg(0x70), bea_arg(s_C__dev_ONSLAUGHT2_StaticShadows__006329f8), bea_arg(0x43d));
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = iVar7;
    param_1 = piVar3 + 1;
    FUN_0055dc20(bea_arg(param_1), bea_arg(0x1c), bea_arg(iVar7), bea_arg(((void*)0x004ee0c0)), bea_arg(((void*)0x004ebdf0)));
    piVar3 = param_1;
  }
  puVar6[2] = piVar3;
  iVar7 = 0;
  local_10 = 0;
  if (0 < *piVar1) {
    do {
      FUN_00423910(bea_arg(this_local));
      FUN_00423960(bea_arg(this_local), bea_arg(puVar6[2] + iVar7), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_local), bea_arg(puVar6[2] + 4 + iVar7), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_local), bea_arg(puVar6[2] + 8 + iVar7), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_local), bea_arg(puVar6[2] + 0xc + iVar7), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_local), bea_arg(puVar6[2] + 0x14 + iVar7), bea_arg(4), bea_arg(1));
      iVar5 = puVar6[2] + iVar7;
      if (*(int *)(puVar6[2] + 0x14 + iVar7) != 0) {
        uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)(iVar5 + 0xc) * *(int *)(iVar5 + 8) * 4), bea_arg(0x70), bea_arg(s_C__dev_ONSLAUGHT2_StaticShadows__006329f8), bea_arg(0x44d));
        *(undefined4 *)(puVar6[2] + 0x10 + iVar7) = uVar4;
        FUN_00423910(bea_arg(this_local));
        iVar5 = 0;
        if (0 < *(int *)(puVar6[2] + 0xc + iVar7) * *(int *)(puVar6[2] + iVar7 + 8)) {
          do {
            param_1 = (int *)0x0;
            FUN_00423960(bea_arg(this_local), bea_arg(&param_1), bea_arg(4), bea_arg(1));
            if (param_1 == (int *)0x1) {
              uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x200), bea_arg(0x70), bea_arg(s_C__dev_ONSLAUGHT2_StaticShadows__006329f8), bea_arg(0x462));
              *(undefined4 *)(*(int *)(puVar6[2] + 0x10 + iVar7) + iVar5 * 4) = uVar4;
              FUN_00423960(bea_arg(this_local), bea_arg(*(undefined4 *)(*(int *)(puVar6[2] + 0x10 + iVar7) + iVar5 * 4)), bea_arg(0x200), bea_arg(1));
            }
            else {
              *(undefined4 *)(*(int *)(puVar6[2] + 0x10 + iVar7) + iVar5 * 4) = 0;
            }
            iVar5 = iVar5 + 1;
          } while (BEA_LOOP_GUARD((iVar5 < *(int *)(puVar6[2] + 0xc + iVar7) * *(int *)(puVar6[2] + iVar7 + 8))));
        }
      }
      local_10 = local_10 + 1;
      iVar7 = iVar7 + 0x1c;
    } while (BEA_LOOP_GUARD((local_10 < (int)puVar6[3])));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ee8f0, ap_004ee8f0));
