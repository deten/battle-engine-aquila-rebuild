// auto-ported from 00472b40_FUN_00472b40.c (FUN_00472b40, 519 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_008a9d88 GLOBAL_AT(int, 0x008a9d88)
#define DAT_008a9d94 GLOBAL_AT(int, 0x008a9d94)
#define _DAT_008a9acc GLOBAL_AT(int, 0x008a9acc)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_008a9d3c GLOBAL_AT(int, 0x008a9d3c)
#define DAT_008a9ab8 GLOBAL_AT(int, 0x008a9ab8)
typedef int (BEA_CDECL* FUN_0042d310_t)(void);
static const bea_guard<FUN_0042d310_t> FUN_0042d310 = {(FUN_0042d310_t)0x0042d310};
typedef undefined4 (BEA_CDECL* FUN_0042d3b0_t)(void);
static const bea_guard<FUN_0042d3b0_t> FUN_0042d3b0 = {(FUN_0042d3b0_t)0x0042d3b0};
typedef uint32_t (BEA_THISCALL* FUN_0042e610_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042e610_t> FUN_0042e610 = {(FUN_0042e610_t)0x0042e610};
typedef uint32_t (BEA_THISCALL* FUN_0042e6e0_t)(uint32_t);
static const bea_guard<FUN_0042e6e0_t> FUN_0042e6e0 = {(FUN_0042e6e0_t)0x0042e6e0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef uint32_t (BEA_THISCALL* FUN_0046fae0_t)(uint32_t);
static const bea_guard<FUN_0046fae0_t> FUN_0046fae0 = {(FUN_0046fae0_t)0x0046fae0};
typedef uint32_t (BEA_THISCALL* FUN_0048ff90_t)(uint32_t);
static const bea_guard<FUN_0048ff90_t> FUN_0048ff90 = {(FUN_0048ff90_t)0x0048ff90};
typedef uint32_t (BEA_THISCALL* FUN_004b9ea0_t)(uint32_t);
static const bea_guard<FUN_004b9ea0_t> FUN_004b9ea0 = {(FUN_004b9ea0_t)0x004b9ea0};
typedef uint32_t (BEA_THISCALL* FUN_004d3020_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d3020_t> FUN_004d3020 = {(FUN_004d3020_t)0x004d3020};

static void BEA_THISCALL ap_00472b40(void * this_, void *param_1)
{
  int iVar1;
  bool bVar2;
  
  if (*(char *)((int)this_ + 0x1c) != '\0') {
    if (*(int *)((int)this_ + 0x44) == 1) {
      if (*(int *)((int)this_ + 0x20) == 0) {
        FUN_0042e6e0(bea_arg(param_1));
        FUN_0046fae0(bea_arg(&DAT_008a9a98));
        bVar2 = *(char *)((int)this_ + 0x1c) == '\0';
        *(bool *)((int)this_ + 0x1c) = bVar2;
        if (bVar2) {
          *(undefined4 *)((int)this_ + 0x20) = 0;
          iVar1 = *(int *)((int)this_ + 0x2c);
          while (BEA_LOOP_GUARD(((iVar1 == 0 && (*(int *)((int)this_ + 0x20) < 6))))) {
            iVar1 = *(int *)((int)this_ + 0x20) + 1;
            *(int *)((int)this_ + 0x20) = iVar1;
            iVar1 = *(int *)((int)this_ + iVar1 * 4 + 0x2c);
          }
          *(undefined1 *)((int)this_ + 0x14) = 0;
          FUN_0042d3b0();
        }
        else {
          FUN_0042d310();
        }
      }
      if (*(int *)((int)this_ + 0x20) == 1) {
        bVar2 = *(char *)((int)this_ + 0x1c) == '\0';
        *(bool *)((int)this_ + 0x1c) = bVar2;
        if (bVar2) {
          *(undefined4 *)((int)this_ + 0x20) = 0;
          iVar1 = *(int *)((int)this_ + 0x2c);
          while (BEA_LOOP_GUARD(((iVar1 == 0 && (*(int *)((int)this_ + 0x20) < 6))))) {
            iVar1 = *(int *)((int)this_ + 0x20) + 1;
            *(int *)((int)this_ + 0x20) = iVar1;
            iVar1 = *(int *)((int)this_ + iVar1 * 4 + 0x2c);
          }
          *(undefined1 *)((int)this_ + 0x14) = 0;
          FUN_0042d3b0();
        }
        else {
          FUN_0042d310();
        }
        FUN_0042e610(bea_arg(param_1), bea_arg(DAT_008a9d88));
        FUN_004b9ea0(bea_arg(DAT_008a9d88));
      }
      if (*(int *)((int)this_ + 0x20) == 2) {
        bVar2 = *(char *)((int)this_ + 0x1c) == '\0';
        *(bool *)((int)this_ + 0x1c) = bVar2;
        if (bVar2) {
          *(undefined4 *)((int)this_ + 0x20) = 0;
          iVar1 = *(int *)((int)this_ + 0x2c);
          while (BEA_LOOP_GUARD(((iVar1 == 0 && (*(int *)((int)this_ + 0x20) < 6))))) {
            iVar1 = *(int *)((int)this_ + 0x20) + 1;
            *(int *)((int)this_ + 0x20) = iVar1;
            iVar1 = *(int *)((int)this_ + iVar1 * 4 + 0x2c);
          }
          *(undefined1 *)((int)this_ + 0x14) = 0;
          FUN_0042d3b0();
        }
        else {
          FUN_0042d310();
        }
        FUN_0042e610(bea_arg(param_1), bea_arg(DAT_008a9d94));
        FUN_0048ff90(bea_arg(DAT_008a9d94));
      }
      if (*(int *)((int)this_ + 0x20) == 3) {
        FUN_00468770(1);
        _DAT_008a9acc = 4;
        if (DAT_008a9ac0 < 4) {
          DAT_008a9ac0 = 9;
        }
      }
      if (*(int *)((int)this_ + 0x20) == 4) {
        FUN_00468770(1);
        _DAT_008a9acc = 6;
        if (DAT_008a9ac0 < 4) {
          DAT_008a9ac0 = 9;
        }
      }
      if (*(int *)((int)this_ + 0x20) == 5) {
        *(undefined4 *)((int)this_ + 0x44) = 2;
        *(undefined4 *)((int)this_ + 0x20) = 0;
        return;
      }
    }
    if (*(int *)((int)this_ + 0x44) == 2) {
      if (*(int *)((int)this_ + 0x20) == 0) {
        FUN_004d3020(bea_arg(DAT_008a9d3c), bea_arg((uint)(*(int *)((int)DAT_008a9d3c + 0x20) == 0)));
      }
      if (*(int *)((int)this_ + 0x20) == 1) {
        if (DAT_008a9ab8 == 1) {
          DAT_008a9ab8 = 0;
        }
        else if (*(int *)((int)DAT_008a9d3c + 0x28) != 2) {
          DAT_008a9ab8 = 1;
        }
      }
      if (*(int *)((int)this_ + 0x20) == 2) {
        *(undefined4 *)((int)this_ + 0x44) = 1;
        *(undefined4 *)((int)this_ + 0x20) = 0;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472b40, ap_00472b40));
