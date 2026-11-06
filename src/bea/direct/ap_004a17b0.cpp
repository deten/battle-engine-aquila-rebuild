// auto-ported from 004a17b0_FUN_004a17b0.c (FUN_004a17b0, 81 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_CDECL* FUN_0055f085_t)(uint32_t);
static const bea_guard<FUN_0055f085_t> FUN_0055f085 = {(FUN_0055f085_t)0x0055f085};

static void BEA_THISCALL ap_004a17b0(void * this_)
{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = DAT_009c3df0;
  piVar3 = (int *)0x0;
  if (DAT_009c3df0 != (int *)0x0) {
    do {
      piVar2 = piVar1;
      if (piVar2 == this_) break;
      piVar1 = (int *)*piVar2;
      piVar3 = piVar2;
    } while (BEA_LOOP_GUARD(((int *)*piVar2 != (int *)0x0)));
    if (piVar3 != (int *)0x0) {
      *piVar3 = *(int *)this_;
      goto LAB_004a17dc;
    }
  }
  DAT_009c3df0 = *(int **)this_;
LAB_004a17dc:
  FUN_0055f085(bea_arg(*(undefined4 *)((int)this_ + 4)));
  ReleaseMutex(*(HANDLE *)((int)this_ + 0x8bc));
  *(undefined4 *)((int)this_ + 0x8bc) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a17b0, ap_004a17b0));
