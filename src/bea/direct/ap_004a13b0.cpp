// auto-ported from 004a13b0_FUN_004a13b0.c (FUN_004a13b0, 446 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MemoryManager__0062f590 ((char*)0x0062f590)
typedef undefined4 * (BEA_THISCALL* FUN_004a1810_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a1810_t> FUN_004a1810 = {(FUN_004a1810_t)0x004a1810};
typedef void * (BEA_CDECL* _malloc_t)(uint32_t);
static const bea_guard<_malloc_t> _malloc = {(_malloc_t)0x0055ec0c};

static undefined4 BEA_THISCALL ap_004a13b0(void * this_, uint param_1, int param_2, char *param_3, undefined4 param_4)
{
  char cVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint _Size;
  char *pcVar8;
  char *pcVar9;
  
  *(undefined4 *)((int)this_ + 0x8b8) = param_4;
  *(undefined4 *)((int)this_ + 0x54) = 0;
  *(undefined4 *)((int)this_ + 0x50) = 0;
  *(undefined4 *)((int)this_ + 0x25c) = 0;
  puVar3 = (undefined4 *)((int)this_ + 0x260);
  iVar7 = 0x81;
  do {
    puVar3[-0x82] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar7 = iVar7 + -1;
  } while (BEA_LOOP_GUARD((iVar7 != 0)));
  *(undefined4 *)((int)this_ + 0x66c) = 0;
  *(undefined4 *)((int)this_ + 0x668) = 0;
  puVar3 = (undefined4 *)((int)this_ + 0x464);
  iVar7 = 0x81;
  do {
    puVar3[0x83] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar7 = iVar7 + -1;
  } while (BEA_LOOP_GUARD((iVar7 != 0)));
  puVar3 = (undefined4 *)((int)this_ + 0xc);
  for (iVar7 = 0x10; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if ((param_1 & 0xf) != 0) {
    param_1 = param_1 + 0x10;
  }
  uVar5 = 0xffffffff;
  _Size = param_1 & 0xfffffff0;
  *(undefined4 *)((int)this_ + 0x874) = 1;
  do {
    pcVar8 = param_3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar8 + -uVar5;
  pcVar9 = (char *)((int)this_ + 0x878);
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  *(void **)this_ = DAT_009c3df0;
  DAT_009c3df0 = this_;
  *(uint *)((int)this_ + 8) = _Size;
  pvVar2 = _malloc(bea_arg(_Size));
  *(void **)((int)this_ + 4) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    while (BEA_LOOP_GUARD((((uint)pvVar2 & 0xf) != 0))) {
      pvVar2 = (void *)(*(int *)((int)this_ + 4) + 1);
      *(void **)((int)this_ + 4) = pvVar2;
      *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + -1;
    }
    puVar3 = *(undefined4 **)((int)this_ + 4);
    uVar5 = *(uint *)((int)this_ + 8) & 0xfffffff0;
    *(undefined4 **)((int)this_ + 0x4c) = puVar3;
    *(uint *)((int)this_ + 8) = uVar5;
    *puVar3 = 0x4f69ea21;
    puVar3[2] = 0;
    puVar3[1] = uVar5 - 0x10;
    puVar3[3] = 0;
    *(uint *)(*(int *)((int)this_ + 0x4c) + 4) =
         *(uint *)(*(int *)((int)this_ + 0x4c) + 4) & 0xfffffffe;
    *(uint *)(*(int *)((int)this_ + 0x4c) + 4) =
         *(uint *)(*(int *)((int)this_ + 0x4c) + 4) & 0xfffffffd;
    *(uint *)((int)this_ + 0x54) = _Size;
    *(int *)((int)this_ + 0x66c) = *(int *)((int)this_ + 0x66c) + 1;
    if (param_2 != 0) {
      puVar3 = (undefined4 *)
               FUN_004a1810(bea_arg(this_), bea_arg(param_2), bea_arg(0x7e), bea_arg(s_C__dev_ONSLAUGHT2_MemoryManager__0062f590), bea_arg(0x17b));
      *(undefined4 **)((int)this_ + 0x8c0) = puVar3;
      puVar4 = puVar3;
      if (puVar3 < (undefined4 *)((int)puVar3 + param_2 + -0x10)) {
        do {
          puVar3 = puVar4 + 4;
          *puVar4 = puVar3;
          puVar4 = puVar3;
        } while (BEA_LOOP_GUARD((puVar3 < (undefined4 *)(*(int *)((int)this_ + 0x8c0) + -0x10 + param_2))));
      }
      *puVar3 = 0;
      *(int *)((int)this_ + 0x8c4) = *(int *)((int)this_ + 0x8c0);
      *(int *)((int)this_ + 0x8c8) = *(int *)((int)this_ + 0x8c0) + param_2;
      return 1;
    }
    *(undefined4 *)((int)this_ + 0x8c0) = 0;
    *(undefined4 *)((int)this_ + 0x8c8) = 0;
    *(undefined4 *)((int)this_ + 0x8c4) = 0;
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a13b0, ap_004a13b0));
