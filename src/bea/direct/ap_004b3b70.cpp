// auto-ported from 004b3b70_FUN_004b3b70.c (FUN_004b3b70, 1751 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef void * (BEA_THISCALL* FUN_004ae4b0_t)(uint32_t);
static const bea_guard<FUN_004ae4b0_t> FUN_004ae4b0 = {(FUN_004ae4b0_t)0x004ae4b0};
typedef undefined4 (BEA_THISCALL* FUN_004ae860_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ae860_t> FUN_004ae860 = {(FUN_004ae860_t)0x004ae860};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_004b3b70(void * this_)
{
  char cVar1;
  void *this_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void *this_01;
  char *pcVar10;
  char *pcVar11;
  int local_10;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x13c), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xc28));
  this_01 = (void *)0x0;
  if (this_00 != (void *)0x0) {
    this_01 = (void *)FUN_004ae4b0(bea_arg(this_00));
  }
  *(undefined4 *)((int)this_01 + 0x88) = *(undefined4 *)((int)this_ + 0x88);
  *(undefined4 *)((int)this_01 + 0x8c) = *(undefined4 *)((int)this_ + 0x8c);
  *(undefined4 *)((int)this_01 + 300) = *(undefined4 *)((int)this_ + 300);
  *(undefined4 *)((int)this_01 + 0x130) = *(undefined4 *)((int)this_ + 0x130);
  *(undefined4 *)((int)this_01 + 0x128) = *(undefined4 *)((int)this_ + 0x128);
  puVar3 = (undefined4 *)((int)this_ + 0x30);
  puVar4 = (undefined4 *)((int)this_01 + 0x30);
  for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this_01 + 0x70) = *(undefined4 *)((int)this_ + 0x70);
  *(undefined4 *)((int)this_01 + 0x74) = *(undefined4 *)((int)this_ + 0x74);
  *(undefined4 *)((int)this_01 + 0x78) = *(undefined4 *)((int)this_ + 0x78);
  *(undefined4 *)((int)this_01 + 0x7c) = *(undefined4 *)((int)this_ + 0x7c);
  iVar5 = *(int *)((int)this_01 + 0xfc);
  *(undefined4 *)((int)this_01 + 0x124) = *(undefined4 *)((int)this_ + 0x124);
  iVar8 = *(int *)((int)this_ + 0xfc);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar8 + 0x10);
  *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar8 + 0x14);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar8 + 0x18);
  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar8 + 0x1c);
  puVar3 = *(undefined4 **)((int)this_ + 0xfc);
  puVar4 = *(undefined4 **)((int)this_01 + 0xfc);
  *puVar4 = *puVar3;
  puVar4[1] = puVar3[1];
  puVar4[2] = puVar3[2];
  puVar4[3] = puVar3[3];
  *(undefined4 *)(*(int *)((int)this_01 + 0xfc) + 0x24) =
       *(undefined4 *)(*(int *)((int)this_ + 0xfc) + 0x24);
  *(undefined4 *)(*(int *)((int)this_01 + 0xfc) + 0x20) =
       *(undefined4 *)(*(int *)((int)this_ + 0xfc) + 0x20);
  *(undefined4 *)((int)this_01 + 0x130) = *(undefined4 *)((int)this_ + 0x130);
  *(undefined4 *)((int)this_01 + 0xa4) = *(undefined4 *)((int)this_ + 0xa4);
  uVar6 = 0xffffffff;
  *(undefined4 *)((int)this_01 + 0x9c) = *(undefined4 *)((int)this_ + 0x9c);
  pcVar10 = (char *)((int)this_ + 0xdc);
  do {
    pcVar11 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar6 = ~uVar6;
  pcVar10 = pcVar11 + -uVar6;
  pcVar11 = (char *)((int)this_01 + 0xdc);
  for (uVar7 = uVar6 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  *(undefined4 *)((int)this_01 + 0x90) = *(undefined4 *)((int)this_ + 0x90);
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x90) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xc3f));
  *(undefined4 *)((int)this_01 + 0x94) = uVar2;
  iVar5 = 0;
  if (0 < *(int *)((int)this_ + 0x90)) {
    do {
      *(undefined4 *)(*(int *)((int)this_01 + 0x94) + iVar5 * 4) =
           *(undefined4 *)(*(int *)((int)this_ + 0x94) + iVar5 * 4);
      iVar5 = iVar5 + 1;
    } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)this_ + 0x90))));
  }
  FUN_004ae860(bea_arg(this_01), bea_arg(*(undefined4 *)((int)this_ + 0xa8)), bea_arg(*(undefined4 *)((int)this_ + 0xac)), bea_arg(*(undefined4 *)((int)this_ + 0xb0)), bea_arg(*(undefined4 *)((int)this_ + 0xb8)), bea_arg(*(undefined4 *)((int)this_ + 0xb4)));
  iVar5 = 0;
  puVar3 = *(undefined4 **)((int)this_ + 0x134);
  puVar4 = *(undefined4 **)((int)this_01 + 0x134);
  for (iVar8 = (*(int *)((int)this_ + 0xa8) * 3 & 0x7ffffffU) << 3; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar8 = 0; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if (0 < *(int *)((int)this_ + 0xb4)) {
    do {
      puVar3 = *(undefined4 **)(*(int *)((int)this_ + 0x84) + iVar5 * 4);
      puVar4 = *(undefined4 **)(*(int *)((int)this_01 + 0x84) + iVar5 * 4);
      for (iVar8 = (*(uint *)((int)this_ + 0xac) & 0xfffffff) << 2; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      iVar5 = iVar5 + 1;
      for (iVar8 = 0; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)this_ + 0xb4))));
  }
  iVar5 = 0;
  if (0 < *(int *)((int)this_ + 0xb0)) {
    iVar8 = 0;
    do {
      iVar9 = iVar8 + 0xc;
      *(int *)(*(int *)((int)this_01 + 0x80) + -0xc + iVar9) =
           ((*(int *)(iVar8 + *(int *)((int)this_ + 0x80)) - *(int *)((int)this_ + 0x134)) / 0x60) *
           0x60 + *(int *)((int)this_01 + 0x134);
      *(int *)(*(int *)((int)this_01 + 0x80) + -8 + iVar9) =
           ((*(int *)(iVar8 + 4 + *(int *)((int)this_ + 0x80)) - *(int *)((int)this_ + 0x134)) / 0x60)
           * 0x60 + *(int *)((int)this_01 + 0x134);
      iVar5 = iVar5 + 1;
      *(int *)(*(int *)((int)this_01 + 0x80) + -4 + iVar9) =
           ((*(int *)(iVar8 + 8 + *(int *)((int)this_ + 0x80)) - *(int *)((int)this_ + 0x134)) / 0x60)
           * 0x60 + *(int *)((int)this_01 + 0x134);
      iVar8 = iVar9;
    } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)this_ + 0xb0))));
  }
  iVar5 = *(int *)((int)this_ + 0xbc);
  *(int *)((int)this_01 + 0xbc) = iVar5;
  if (0 < *(int *)((int)this_ + 0xbc)) {
    if (*(int *)((int)this_ + 0x10c) != 0) {
      puVar3 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar5 * 0x30), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xc58));
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar4 = puVar3;
        if (-1 < iVar5 + -1) {
          do {
            FUN_004011b0(bea_arg(puVar4), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
            iVar5 = iVar5 + -1;
            puVar4 = puVar4 + 0xc;
          } while (BEA_LOOP_GUARD((iVar5 != 0)));
        }
      }
      *(undefined4 **)((int)this_01 + 0x10c) = puVar3;
      puVar4 = *(undefined4 **)((int)this_ + 0x10c);
      for (iVar5 = (*(int *)((int)this_ + 0xbc) * 3 & 0xfffffffU) << 2; BEA_LOOP_GUARD((iVar5 != 0));
          iVar5 = iVar5 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (iVar5 = 0; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    if (*(int *)((int)this_ + 200) != 0) {
      puVar3 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_01 + 0xbc) << 4), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xc5f));
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      *(undefined4 **)((int)this_01 + 200) = puVar3;
      puVar4 = *(undefined4 **)((int)this_ + 200);
      for (iVar5 = (*(uint *)((int)this_ + 0xbc) & 0xfffffff) << 2; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (iVar5 = 0; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    if (*(int *)((int)this_ + 0xcc) != 0) {
      puVar4 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_01 + 0xbc) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xc65));
      *(undefined4 **)((int)this_01 + 0xcc) = puVar4;
      puVar3 = *(undefined4 **)((int)this_ + 0xcc);
      for (uVar6 = *(uint *)((int)this_ + 0xbc) & 0x3fffffff; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar5 = 0; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
  }
  if (0 < *(int *)((int)this_ + 0xb8)) {
    puVar4 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xb8)), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xc6c));
    *(undefined4 **)((int)this_01 + 0xc4) = puVar4;
    uVar6 = *(uint *)((int)this_ + 0xb8);
    puVar3 = *(undefined4 **)((int)this_ + 0xc4);
    for (uVar7 = uVar6 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar6 = uVar6 & 3; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  iVar5 = *(int *)((int)this_ + 0xc0);
  *(int *)((int)this_01 + 0xc0) = iVar5;
  if (*(int *)((int)this_ + 0xd0) == 0) {
    *(undefined4 *)((int)this_01 + 0xd0) = 0;
    *(undefined4 *)((int)this_01 + 0xd4) = 0;
    *(undefined4 *)((int)this_01 + 0xd8) = 0;
  }
  else {
    uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar5 << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xc74))
    ;
    *(undefined4 *)((int)this_01 + 0xd0) = uVar2;
    iVar5 = 0;
    if (0 < *(int *)((int)this_ + 0xc0)) {
      do {
        *(undefined4 *)(*(int *)((int)this_01 + 0xd0) + iVar5 * 4) =
             *(undefined4 *)(*(int *)((int)this_ + 0xd0) + iVar5 * 4);
        iVar5 = iVar5 + 1;
      } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)this_ + 0xc0))));
    }
    if (0 < *(int *)((int)this_ + 0xac)) {
      if (*(int *)((int)this_ + 0xd4) != 0) {
        puVar4 = (undefined4 *)
                 FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xac) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xc7f));
        *(undefined4 **)((int)this_01 + 0xd4) = puVar4;
        puVar3 = *(undefined4 **)((int)this_ + 0xd4);
        for (uVar6 = *(uint *)((int)this_ + 0xac) & 0x3fffffff; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        for (iVar5 = 0; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
      if (*(int *)((int)this_ + 0xd8) != 0) {
        puVar4 = (undefined4 *)
                 FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xac) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xc85));
        *(undefined4 **)((int)this_01 + 0xd8) = puVar4;
        puVar3 = *(undefined4 **)((int)this_ + 0xd8);
        for (uVar6 = *(uint *)((int)this_ + 0xac) & 0x3fffffff; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        for (iVar5 = 0; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
      local_10 = 0;
      if (0 < *(int *)((int)this_ + 0xac)) {
        do {
          uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_01 + 0xc0) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xc8b));
          *(undefined4 *)(*(int *)((int)this_01 + 0xd4) + local_10 * 4) = uVar2;
          uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xc8c));
          *(undefined4 *)(*(int *)((int)this_01 + 0xd8) + local_10 * 4) = uVar2;
          puVar3 = *(undefined4 **)(*(int *)((int)this_ + 0xd4) + local_10 * 4);
          puVar4 = *(undefined4 **)(*(int *)((int)this_01 + 0xd4) + local_10 * 4);
          for (uVar6 = *(uint *)((int)this_ + 0xc0) & 0x3fffffff; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          local_10 = local_10 + 1;
          for (iVar5 = 0; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
            *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          puVar3 = *(undefined4 **)(*(int *)((int)this_ + 0xd8) + -4 + local_10 * 4);
          puVar4 = *(undefined4 **)(*(int *)((int)this_01 + 0xd8) + -4 + local_10 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = puVar3[1];
          puVar4[2] = puVar3[2];
        } while (BEA_LOOP_GUARD((local_10 < *(int *)((int)this_ + 0xac))));
      }
    }
  }
  return this_01;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b3b70, ap_004b3b70));
