// auto-ported from 004184c0_FUN_004184c0.c (FUN_004184c0, 604 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x160: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_data__s_raw_00623c3c ((char*)0x00623c3c)
#define s_C__dev_ONSLAUGHT2_bytesprite_cpp_00623c18 ((char*)0x00623c18)
typedef undefined4 (BEA_THISCALL* FUN_004189f0_t)(uint32_t);
static const bea_guard<FUN_004189f0_t> FUN_004189f0 = {(FUN_004189f0_t)0x004189f0};
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_THISCALL ap_004184c0(void * this_, char *param_1, int param_2, int param_3, int param_4, undefined4 param_5)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *this_00;
  undefined4 *puVar7;

  alignas(16) uint8_t bea_frame_[0x160] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_160)[32] = *reinterpret_cast<undefined1 (*)[32]>(bea_frame_ + 0x160 - 0x160);
  undefined1 (&local_140)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x160 - 0x140);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x160 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x160 - 0x4);
  local_4 = 0xffffffff;
  FUN_0055de9b(local_160,s_data__s_raw_00623c3c,param_1);
  FUN_00547d70(bea_arg(local_140));
  local_4 = 0;
  iVar1 = FUN_00547ec0(bea_arg(local_140), bea_arg(local_160), bea_arg(0x11), bea_arg(1), bea_arg(0));
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x24), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_bytesprite_cpp_00623c18), bea_arg(0x1d));
    (*(uint8_t*)((char*)&local_4 + 0)) = 1;
    this_00 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_2 * param_3), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_bytesprite_cpp_00623c18), bea_arg(0xbd));
      *puVar2 = uVar3;
      uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_4 * 4), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_bytesprite_cpp_00623c18), bea_arg(0xbe));
      puVar2[2] = uVar3;
      uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_2 * param_3 * param_4 * 2), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_bytesprite_cpp_00623c18), bea_arg(0xbf));
      puVar2[1] = uVar3;
      puVar2[4] = puVar2[2];
      puVar2[3] = uVar3;
      puVar2[7] = param_4;
      puVar2[5] = param_2;
      puVar2[6] = param_3;
      *(undefined1 *)(puVar2 + 8) = (undefined1)param_5;
      this_00 = puVar2;
    }
    iVar1 = 0;
    local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
    if (0 < (int)this_00[7]) {
      while(BEA_LOOP_GUARD(( true ))) {
        iVar4 = FUN_00548570(bea_arg(local_140), bea_arg(*this_00), bea_arg(this_00[5] * this_00[6]));
        if (iVar4 != this_00[5] * this_00[6]) break;
        iVar4 = FUN_004189f0(bea_arg(this_00));
        if ((iVar4 == 0) || (iVar1 = iVar1 + 1, (int)this_00[7] <= iVar1)) break;
      }
    }
    *(int *)((int)this_ + 8) = iVar1;
    if (iVar1 != 0) {
      uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(this_00[3] - this_00[1]), bea_arg(0x4d), bea_arg(s_C__dev_ONSLAUGHT2_bytesprite_cpp_00623c18), bea_arg(0x20));
      *(undefined4 *)this_ = uVar3;
      uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 8) << 2), bea_arg(0x4d), bea_arg(s_C__dev_ONSLAUGHT2_bytesprite_cpp_00623c18), bea_arg(0x21));
      *(undefined4 *)((int)this_ + 4) = uVar3;
      uVar5 = this_00[3] - (int)this_00[1];
      puVar2 = (undefined4 *)this_00[1];
      puVar7 = *(undefined4 **)this_;
      for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
        *puVar7 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar2 = (undefined4 *)this_00[2];
      puVar7 = *(undefined4 **)((int)this_ + 4);
      for (uVar6 = *(uint *)((int)this_ + 8) & 0x3fffffff; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
        *puVar7 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar1 = 0; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
    if (this_00 != (undefined4 *)0x0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00[1]));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00[2]));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*this_00));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    }
  }
  FUN_00548c00(bea_arg(local_140));
  uVar3 = *(undefined4 *)((int)this_ + 8);
  local_4 = 0xffffffff;
  FUN_00547d90(bea_arg(local_140));
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004184c0, ap_004184c0));
