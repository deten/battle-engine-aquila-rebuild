// auto-ported from 00513120_FUN_00513120.c (FUN_00513120, 587 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-28 compile: DirectInput8Create called through the BEA.exe import thunk 0x5d04e0 as stdcall(5) (0x51315a-0x513178); FUN_0042b840 gets its third pushed arg 0 (push edi at 0x5131b7)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00855424 GLOBAL_AT(int, 0x00855424)
#define DAT_0060c14c GLOBAL_AT(undefined, 0x0060c14c)
#define DAT_00662dd4 GLOBAL_AT(int, 0x00662dd4)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_0060c044 GLOBAL_AT(int, 0x0060c044)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define s_Found_no_joypads_0063de40 ((char*)0x0063de40)
#define s_Found__d_joypads_0063de2c ((char*)0x0063de2c)
#define PTR_DAT_0063dc1c GLOBAL_AT(void*, 0x0063dc1c)
typedef uint32_t (BEA_CDECL* FUN_0042b840_t)(int, undefined4, ...);
static const bea_guard<FUN_0042b840_t> FUN_0042b840 = {(FUN_0042b840_t)0x0042b840};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_STDCALL* DirectInput8Create_t)(HMODULE, uint32_t, void*, void*, void*);
static const bea_guard<DirectInput8Create_t> DirectInput8Create = {(DirectInput8Create_t)0x005d04e0};   // import thunk jmp [0x5d8020]

static int BEA_THISCALL ap_00513120(void * this_, undefined4 param_1)
{
  int iVar1;
  HMODULE pHVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  int a3;
  char *pcVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  
  PTR_DAT_0063dc1c = (undefined *)&DAT_00855424;
  a3 = 0;
  iVar1 = 0;
  puVar4 = (undefined4 *)((int)this_ + 0x330cc);
  do {
    *(undefined1 *)(iVar1 + 0x33444 + (int)this_) = 0;
    *puVar4 = 1;
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 1;
  } while (BEA_LOOP_GUARD((iVar1 < 4)));
  uVar10 = 0;
  puVar9 = &DAT_0060c14c;
  uVar8 = 0x800;
  *(undefined4 *)((int)this_ + 0x330e0) = 0x96;
  puVar4 = (undefined4 *)((int)this_ + 0x33478);
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  iVar1 = DirectInput8Create(pHVar2,uVar8,puVar9,puVar4,uVar10);
  if (-1 < iVar1) {
    piVar5 = *(int **)((int)this_ + 0x33478);
    *(undefined4 *)((int)this_ + 0x33448) = 0;
    iVar1 = bea_vcall<uint32_t>(piVar5, 0x10, piVar5,4,((void*)0x00512ff0),this_,1);
    if (-1 < iVar1) {
      if ((*(int *)((int)this_ + 0x33448) == 0) && (DAT_00662dd4 == 0)) {
        FUN_0042b840(&DAT_00663498,s_Found_no_joypads_0063de40,0);
        return 0;
      }
      if (4 < *(int *)((int)this_ + 0x33448)) {
        *(undefined4 *)((int)this_ + 0x33448) = 4;
      }
      if (0 < *(int *)((int)this_ + 0x33448)) {
        puVar4 = (undefined4 *)((int)this_ + 0x33408);
        do {
          iVar1 = bea_vcall<uint32_t>(*puVar4, 0x2c, (int *)*puVar4,&DAT_0060c044);
          if (iVar1 < 0) {
            return iVar1;
          }
          iVar1 = bea_vcall<uint32_t>(*puVar4, 0x34, (int *)*puVar4,param_1,5);
          if (iVar1 < 0) {
            return iVar1;
          }
          *(undefined4 *)((int)this_ + 0x33418) = 0x2c;
          iVar1 = bea_vcall<uint32_t>(*puVar4, 0xc, (int *)*puVar4,(undefined4 *)((int)this_ + 0x33418));
          if (iVar1 < 0) {
            return iVar1;
          }
          puVar4[0x17] = 0;
          iVar1 = bea_vcall<uint32_t>(*puVar4, 0x10, (int *)*puVar4,((void*)0x00513040),a3,3);
          if (iVar1 < 0) {
            return iVar1;
          }
          a3 = a3 + 1;
          puVar4 = puVar4 + 1;
        } while (BEA_LOOP_GUARD((a3 < *(int *)((int)this_ + 0x33448))));
      }
      iVar1 = *(int *)((int)this_ + 0x33448);
      if (0 < iVar1) {
        pcVar7 = (char *)((int)this_ + 0x33444);
        piVar5 = (int *)((int)this_ + 0x330cc);
        do {
          pcVar6 = pcVar7 + (-0x33443 - (int)this_);
          if ((int)pcVar6 < iVar1) {
            piVar3 = piVar5 + 0xd0;
            do {
              if (((pcVar6 + 0x33444)[(int)this_] != '\0') && (*pcVar7 == '\0')) {
                *pcVar7 = (pcVar6 + 0x33444)[(int)this_];
                (pcVar6 + 0x33444)[(int)this_] = '\0';
                iVar1 = *piVar5;
                *piVar5 = piVar3[-0xcf];
                piVar3[-0xcf] = (uint)(iVar1 != 0);
                iVar1 = piVar5[0xcf];
                piVar5[0xcf] = *piVar3;
                *piVar3 = iVar1;
                iVar1 = piVar5[0xe6];
                piVar5[0xe6] = piVar3[0x17];
                piVar3[0x17] = (uint)(iVar1 != 0);
              }
              pcVar6 = pcVar6 + 1;
              piVar3 = piVar3 + 1;
            } while (BEA_LOOP_GUARD(((int)pcVar6 < *(int *)((int)this_ + 0x33448))));
          }
          iVar1 = *(int *)((int)this_ + 0x33448);
          pcVar7 = pcVar7 + 1;
          piVar5 = piVar5 + 1;
        } while (BEA_LOOP_GUARD(((int)(pcVar7 + (-0x33444 - (int)this_)) < iVar1)));
      }
      FUN_00441740(&DAT_0066eb90,s_Found__d_joypads_0063de2c,*(int *)((int)this_ + 0x33448));
      iVar1 = 0;
    }
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513120, ap_00513120));
