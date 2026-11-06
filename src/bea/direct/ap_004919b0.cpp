// auto-ported from 004919b0_FUN_004919b0.c (FUN_004919b0, 667 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__Mapwho_construction_0062db5c ((char*)0x0062db5c)
#define s_C__dev_ONSLAUGHT2_mapwho_cpp_0062db88 ((char*)0x0062db88)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void BEA_THISCALL ap_004919b0(void * this_)
{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  short sVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint local_44;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_14;
  undefined1 *puStack_8;
  undefined4 local_4;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x45), bea_arg(s_C__dev_ONSLAUGHT2_mapwho_cpp_0062db88), bea_arg(0x3e));
  *(undefined4 *)((int)this_ + 0x90) = uVar1;
  iVar8 = 0x40;
  iVar11 = 0x40;
  local_44 = 3;
  piVar6 = (int *)((int)this_ + 0xb8);
  do {
    iVar9 = iVar11 * iVar8;
    piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar9 * 8 + 4), bea_arg(0x45), bea_arg(s_C__dev_ONSLAUGHT2_mapwho_cpp_0062db88), bea_arg(0x44));
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = iVar9;
      piVar2 = piVar2 + 1;
      FUN_0055dc20(bea_arg(piVar2), bea_arg(8), bea_arg(iVar9), bea_arg(((void*)0x00491900)), bea_arg(((void*)0x00491910)));
    }
    *(int **)((int)piVar6 + *(int *)((int)this_ + 0x90) + (-0xa8 - (int)this_)) = piVar2;
    piVar6[-5] = local_44;
    *piVar6 = iVar8;
    piVar6[5] = iVar11;
    iVar8 = iVar8 >> 1;
    iVar11 = iVar11 >> 1;
    local_44 = local_44 + 1;
    piVar6 = piVar6 + -1;
  } while (BEA_LOOP_GUARD(((int)local_44 < 8)));
  local_38 = 0x40;
  local_34 = 0x40;
  local_30 = 4;
  do {
    local_44 = 0;
    if (local_38 != 0) {
      do {
        uVar3 = local_44 & 0x80000001;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
        }
        uVar7 = 0;
        if (local_34 != 0) {
          local_14 = local_44 & 0xffff;
          do {
            uVar10 = uVar7 & 0x80000001;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
            }
            sVar5 = (short)uVar7;
            local_14 = CONCAT22(sVar5,(short)local_14);
            iVar8 = *(int *)(*(int *)((int)this_ + 0x90) + local_30 * 4);
            iVar9 = (0x40 >> (4U - ((char)local_30 + -1) & 0x1f)) * (int)(sVar5 >> 1) +
                    (int)((short)local_14 >> 1);
            iVar11 = *(int *)(*(int *)((int)this_ + 0x90) + -4 + local_30 * 4);
            piVar6 = (int *)(iVar11 + iVar9 * 8);
            if (*(int *)(iVar11 + iVar9 * 8) == 0) {
              puVar4 = (undefined4 *)
                       FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x45), bea_arg(s_C__dev_ONSLAUGHT2_mapwho_cpp_0062db88), bea_arg(100));
              *piVar6 = (int)puVar4;
              *puVar4 = 0;
              *(undefined4 *)(*piVar6 + 4) = 0;
              *(undefined4 *)(*piVar6 + 8) = 0;
              *(undefined4 *)(*piVar6 + 0xc) = 0;
            }
            iVar11 = (uVar10 * 2 + uVar3) * 4;
            if (*(int *)(*piVar6 + iVar11) != 0) {
              FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Mapwho_construction_0062db5c);
            }
            uVar7 = uVar7 + 1;
            *(int *)(*piVar6 + iVar11) =
                 iVar8 + ((int)sVar5 * (0x40 >> (4U - (char)local_30 & 0x1f)) + (int)(short)local_44
                         ) * 8;
          } while (BEA_LOOP_GUARD(((int)uVar7 < local_34)));
        }
        local_44 = local_44 + 1;
      } while (BEA_LOOP_GUARD(((int)local_44 < local_38)));
    }
    local_38 = local_38 >> 1;
    local_34 = local_34 >> 1;
    local_30 = local_30 + -1;
  } while (BEA_LOOP_GUARD((0 < local_30)));
  *(undefined4 *)((int)this_ + 100) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004919b0, ap_004919b0));
