// auto-ported from 00472d50_vslot3.c (CGameInterface::vslot3, 218 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00679fbc GLOBAL_AT(char, 0x00679fbc)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef uint32_t (BEA_THISCALL* FUN_0042e6e0_t)(uint32_t);
static const bea_guard<FUN_0042e6e0_t> FUN_0042e6e0 = {(FUN_0042e6e0_t)0x0042e6e0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef uint32_t (BEA_THISCALL* FUN_0046fae0_t)(uint32_t);
static const bea_guard<FUN_0046fae0_t> FUN_0046fae0 = {(FUN_0046fae0_t)0x0046fae0};
typedef uint32_t (BEA_THISCALL* FUN_00472ad0_t)(uint32_t);
static const bea_guard<FUN_00472ad0_t> FUN_00472ad0 = {(FUN_00472ad0_t)0x00472ad0};
typedef uint32_t (BEA_THISCALL* FUN_00472b40_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00472b40_t> FUN_00472b40 = {(FUN_00472b40_t)0x00472b40};

static void BEA_THISCALL ap_00472d50(void * this_, void *param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  int iVar2;
  bool bVar3;

  switch(param_2) {
  case 0x2a:
    if ((*(char *)((int)this_ + 0x14) == '\0') && (*(char *)((int)this_ + 0x1c) != '\0')) {
      iVar1 = *(int *)((int)this_ + 0x20);
      *(int *)((int)this_ + 0x20) = iVar1 + -1;
      bVar3 = false;
      while (BEA_LOOP_GUARD(((iVar2 = *(int *)((int)this_ + 0x20), iVar2 < 0 ||
             ((*(int *)((int)this_ + iVar2 * 4 + 0x2c) == 0 && (!bVar3))))))) {
        *(int *)((int)this_ + 0x20) = iVar2 + -1;
        if (iVar2 + -1 < 0) {
          bVar3 = true;
          *(int *)((int)this_ + 0x20) = iVar1;
        }
      }
      if (*(int *)((int)this_ + 0x20) < 0) {
        *(undefined4 *)((int)this_ + 0x20) = 0;
      }
      if (*(int *)((int)this_ + 0x20) != iVar1) {
        FUN_00468770(0);
        return;
      }
    }
    break;
  case 0x2b:
    if (*(char *)((int)this_ + 0x14) == '\0') {
      FUN_00472ad0(bea_arg(this_));
      return;
    }
    break;
  case 0x33:
    if (*(char *)((int)this_ + 0x14) == '\0') {
      FUN_00472b40(bea_arg(this_), bea_arg(param_1));
      return;
    }
    break;
  case 0x39:
    if (*(char *)((int)this_ + 0x14) == '\x01') {
      FUN_0042e6e0(bea_arg(param_1));
      DAT_00679fbc = DAT_00679fbc == '\0';
      FUN_0046fae0(bea_arg(&DAT_008a9a98));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472d50, ap_00472d50));
