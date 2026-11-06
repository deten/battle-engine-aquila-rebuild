// auto-ported from 004e1800_FUN_004e1800.c (FUN_004e1800, 120 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_005179b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005179b0_t> FUN_005179b0 = {(FUN_005179b0_t)0x005179b0};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_004e1800(void * this_, undefined4 param_1, int param_2)
{
  int *this_00;
  int iVar1;
  
  if (*(char *)((int)this_ + 4) != '\0') {
    for (this_00 = *(int **)((int)this_ + 0xc); BEA_LOOP_GUARD((this_00 != (int *)0x0)); this_00 = (int *)this_00[0x1d]
        ) {
      if ((((char)this_00[2] != '\0') && (*this_00 == param_2)) &&
         (iVar1 = FUN_00568390(bea_arg(this_00[3] + 8), bea_arg(param_1)), iVar1 == 0)) {
        if ((this_00[0x1f] == 1) && ((int *)*this_00 != (int *)0x0)) {
          bea_vcall<uint32_t>(*this_00, 0x18, this_00);
        }
        if (-1 < this_00[1]) {
          FUN_005179b0(bea_arg(&DAT_00896988), bea_arg(this_00), bea_arg(0));
        }
        *(undefined1 *)(this_00 + 2) = 0;
        FUN_00401000(bea_arg(this_00), bea_arg(0));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e1800, ap_004e1800));
