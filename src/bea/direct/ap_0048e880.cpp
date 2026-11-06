// auto-ported from 0048e880_FUN_0048e880.c (FUN_0048e880, 207 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_006fa7d8 GLOBAL_AT(int, 0x006fa7d8)
#define PTR_DAT_0062d868 GLOBAL_AT(void*, 0x0062d868)
typedef uint32_t (BEA_CDECL* FUN_0048e7c0_t)(void);
static const bea_guard<FUN_0048e7c0_t> FUN_0048e7c0 = {(FUN_0048e7c0_t)0x0048e7c0};

static void BEA_THISCALL ap_0048e880(void * this_, uint param_1, undefined4 param_2)
{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  bVar2 = (byte)*(undefined4 *)((int)this_ + 0x34);
  iVar1 = ((param_1 & 0xffff) >> 3 & *(uint *)((int)this_ + 0x3c) & 0xfffffff8) << (bVar2 & 0x1f);
  iVar4 = ((param_1 & 0x3f) << 3 & *(uint *)((int)this_ + 0x3c)) << (bVar2 & 0x1f);
  piVar6 = &DAT_006fa7d8;
  do {
    if (PTR_DAT_0062d868 <= piVar6) {
      if ((undefined *)0x6fabbf < PTR_DAT_0062d868) {
        FUN_0048e7c0();
      }
LAB_0048e8e5:
      *(undefined2 *)(PTR_DAT_0062d868 + 4) = (undefined2)param_1;
      *(void **)PTR_DAT_0062d868 = this_;
      *(int *)(PTR_DAT_0062d868 + 0xc) = iVar4;
      *(int *)(PTR_DAT_0062d868 + 0x10) = iVar1;
      *(undefined4 *)(PTR_DAT_0062d868 + 8) = param_2;
      PTR_DAT_0062d868 = PTR_DAT_0062d868 + 0x14;
      return;
    }
    if (((piVar6[3] == iVar4) && (piVar6[4] == iVar1)) && ((void *)*piVar6 == this_)) {
      if (piVar6[2] == 0) {
        param_2 = 0;
      }
      PTR_DAT_0062d868 = PTR_DAT_0062d868 + -0x14;
      piVar5 = (int *)PTR_DAT_0062d868;
      for (iVar3 = 5; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      goto LAB_0048e8e5;
    }
    piVar6 = piVar6 + 5;
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e880, ap_0048e880));
