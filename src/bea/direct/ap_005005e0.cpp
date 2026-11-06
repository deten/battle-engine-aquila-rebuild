// auto-ported from 005005e0_FUN_005005e0.c (FUN_005005e0, 522 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define s_C__dev_ONSLAUGHT2_vbuftexture_cp_00633d5c ((char*)0x00633d5c)
#define s_EnsureLockV_failed_for__s_00633d40 ((char*)0x00633d40)
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef void * (BEA_THISCALL* FUN_004fff00_t)(uint32_t);
static const bea_guard<FUN_004fff00_t> FUN_004fff00 = {(FUN_004fff00_t)0x004fff00};
typedef int (BEA_THISCALL* FUN_00500020_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500020_t> FUN_00500020 = {(FUN_00500020_t)0x00500020};
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};
typedef uint32_t (BEA_THISCALL* FUN_005002e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005002e0_t> FUN_005002e0 = {(FUN_005002e0_t)0x005002e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef const char * (BEA_STDCALL* FUN_005be628_t)(uint32_t);
static const bea_guard<FUN_005be628_t> FUN_005be628 = {(FUN_005be628_t)0x005be628};

static void BEA_THISCALL ap_005005e0(void * this_, int param_1)
{
  int iVar1;
  char *v0;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  void * &local_14 = *reinterpret_cast<void * *>(bea_frame_ + 0x20 - 0x14);
  undefined4 * &local_10 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x20 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  if (param_1 != 0) {
    iVar4 = 0x400;
    if (0x400 < param_1) {
      do {
        iVar4 = iVar4 * 2;
      } while (BEA_LOOP_GUARD((iVar4 < param_1)));
    }
    if (iVar4 != 0) {
      local_10 = (undefined4 *)
                 FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x2c), bea_arg(s_C__dev_ONSLAUGHT2_vbuftexture_cp_00633d5c), bea_arg(0xb6));
      if (local_10 == (undefined4 *)0x0) {
        local_14 = (void *)0x0;
      }
      else {
        local_14 = (void *)FUN_004fff00(bea_arg(local_10));
      }
      uVar8 = 3;
      uVar7 = 0xd2;
      iVar1 = FUN_00500020(bea_arg(local_14), bea_arg(iVar4), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(*(undefined4 *)((int)this_ + 4)), bea_arg(*(undefined4 *)((int)this_ + 0xc)));
      FUN_0042d080(bea_arg(CONCAT31((int3)((uint)iVar1 >> 8),-1 < iVar1)), bea_arg(uVar7), bea_arg(uVar8));
      *(undefined1 *)((int)this_ + 0x10) = 0;
      if (0 < *(int *)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x14)) {
        if (*(int *)((int)this_ + 0x1c) != 0) {
          iVar1 = FUN_005002e0(bea_arg(local_14), bea_arg(&local_10));
          if (iVar1 < 0) {
            FUN_0042d080(bea_arg(0), bea_arg(0xd2), bea_arg(4));
          }
          else {
            if (*(char *)((int)this_ + 0x10) == '\0') {
              iVar1 = FUN_005002e0(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40)), bea_arg((int)this_ + 0x38));
              if (iVar1 < 0) {
                v0 = (char *)FUN_005be628(bea_arg(iVar1));
                FUN_00441740(&DAT_0066eb90,s_EnsureLockV_failed_for__s_00633d40,v0);
                FUN_0042d080(bea_arg(0), bea_arg(0xd2), bea_arg(0x3e9));
              }
              *(undefined1 *)((int)this_ + 0x10) = 1;
            }
            uVar3 = *(uint *)((int)this_ + 0x1c);
            puVar5 = *(undefined4 **)((int)this_ + 0x38);
            puVar6 = local_10;
            for (uVar2 = uVar3 >> 2; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
            if (*(char *)((int)this_ + 0x10) != '\0') {
              FUN_005001e0(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40)));
              *(undefined4 *)((int)this_ + 0x38) = 0;
              *(undefined1 *)((int)this_ + 0x10) = 0;
            }
            *(undefined4 **)((int)this_ + 0x38) = local_10;
            *(undefined1 *)((int)this_ + 0x10) = 1;
          }
        }
        puVar5 = *(undefined4 **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40);
        if (puVar5 != (undefined4 *)0x0) {
          bea_vcall<uint32_t>(puVar5, 0x0, 1);
        }
      }
      *(void **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40) = local_14;
      *(int *)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x14) = iVar4;
      return;
    }
  }
  puVar5 = *(undefined4 **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40);
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x14) = 0;
    return;
  }
  bea_vcall<uint32_t>(puVar5, 0x0, 1);
  *(undefined4 *)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40) = 0;
  *(undefined4 *)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x14) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005005e0, ap_005005e0));
