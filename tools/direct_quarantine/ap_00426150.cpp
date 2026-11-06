// auto-ported from 00426150_vslot3.c (CCollisionSeekingThing::vslot3, 389 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit fStack_8: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit uStack_14: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCollisionSeekingThing;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_collisionseeki_006246d8 ((char*)0x006246d8)
typedef uint32_t (BEA_THISCALL* FUN_004f3ac0_t)(uint32_t, uint32_t);
static FUN_004f3ac0_t const FUN_004f3ac0 = (FUN_004f3ac0_t)0x004f3ac0;
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_005490e0_t const FUN_005490e0 = (FUN_005490e0_t)0x005490e0;

static void BEA_THISCALL ap_00426150(CCollisionSeekingThing * this_, undefined4 *param_1)
{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 uStack_14 = 0;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  *(undefined4 *)(this_ + 8) = *param_1;
  *(undefined4 *)(this_ + 0xc) = 0;
  uVar8 = param_1[4];
  *(uint *)(this_ + 0xc) = uVar8;
  uVar8 = param_1[5] << 2 | uVar8;
  *(uint *)(this_ + 0xc) = uVar8;
  uVar8 = param_1[6] << 4 | uVar8;
  *(uint *)(this_ + 0xc) = uVar8;
  uVar8 = (param_1[7] | 0x10) << 6 | uVar8;
  *(uint *)(this_ + 0xc) = uVar8;
  *(uint *)(this_ + 0xc) = param_1[10] << 9 | uVar8;
  *(undefined4 *)(this_ + 0x20) = param_1[1];
  uVar3 = param_1[2];
  *(undefined4 *)(this_ + 0x18) = 0;
  *(undefined4 *)(this_ + 0x10) = uVar3;
  fVar10 = (float10)bea_vcall<float10>(*(int **)(this_ + 8), 0x44);
  fVar1 = (float)fVar10;
  if (param_1[3] == 0) {
    puVar9 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1c), bea_arg(0x5c), bea_arg(s_C__dev_ONSLAUGHT2_collisionseeki_006246d8), bea_arg(0x28));
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(this_ + 0x14) = 0;
      *(float *)(this_ + 0x1c) = fVar1;
    }
    else {
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[5] = fVar1;
      puVar9[6] = fVar1 * fVar1;
      *puVar9 = ((void*)0x005d95e8);
      *(undefined4 **)(this_ + 0x14) = puVar9;
      *(float *)(this_ + 0x1c) = fVar1;
    }
  }
  else {
    *(undefined4 *)(this_ + 0x14) = param_1[3];
    *(float *)(this_ + 0x1c) = fVar1;
  }
  FUN_004f3ac0(bea_arg(*(void **)(this_ + 8)), bea_arg(&fStack_10));
  iVar4 = *(int *)(this_ + 8);
  iVar5 = *(int *)(this_ + 0x14);
  fVar1 = *(float *)(iVar4 + 0x20);
  fVar2 = *(float *)(iVar4 + 0x24);
  *(float *)(iVar5 + 4) = fStack_10 - *(float *)(iVar4 + 0x1c);
  *(float *)(iVar5 + 8) = fStack_c - fVar1;
  *(float *)(iVar5 + 0xc) = fStack_8 - fVar2;
  *(undefined4 *)(iVar5 + 0x10) = uStack_14;
  if (((byte)*(undefined4 *)(this_ + 0xc) & 0x30) == 0x20) {
    puVar9 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x28), bea_arg(0x5c), bea_arg(s_C__dev_ONSLAUGHT2_collisionseeki_006246d8), bea_arg(0x39));
    if (puVar9 != (undefined4 *)0x0) {
      uVar3 = param_1[0xc];
      uVar6 = param_1[9];
      uVar7 = *(undefined4 *)(*(int *)(this_ + 8) + 0x30);
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[5] = uVar7;
      puVar9[6] = 0;
      puVar9[7] = uVar3;
      puVar9[8] = uVar6;
      puVar9[9] = 0;
      *puVar9 = ((void*)0x005d95c8);
      *(undefined4 **)(this_ + 0x18) = puVar9;
      return;
    }
    *(undefined4 *)(this_ + 0x18) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00426150, ap_00426150));
