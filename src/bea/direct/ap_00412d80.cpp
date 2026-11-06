// auto-ported from 00412d80_FUN_00412d80.c (FUN_00412d80, 487 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char _DAT_006236ac;
typedef char _DAT_006236c0;
typedef char fStack_1c;
typedef char fStack_2c;
typedef char fStack_38;
typedef char fStack_3c;
typedef char fStack_40;
typedef char fStack_c;
#define _DAT_006236b0 GLOBAL_AT(float, 0x006236b0)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define _DAT_006236b4 GLOBAL_AT(float, 0x006236b4)
#define _DAT_006236ac GLOBAL_AT(float, 0x006236ac)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define _DAT_006236c0 GLOBAL_AT(float, 0x006236c0)
#define DAT_006236b8 GLOBAL_AT(int, 0x006236b8)
#define s_do_dash_Forward_00623910 ((char*)0x00623910)
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};

static void BEA_THISCALL ap_00412d80(void * this_, float param_1)
{
  int iVar1;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x44);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x38);
  undefined1 (&auStack_30)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x50 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x2c);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x1c);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0xc);
  local_44 = -(*(float *)((*(int **)((int)this_ + 0x20))[300] + 0x10) * 0.02f * param_1);
  iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x10c);
  if ((iVar1 != 0) && (iVar1 = *(int *)((int)this_ + 0x44), iVar1 < 1)) {
    if ((-_DAT_006236b0 < *(float *)((int)this_ + 0x40)) &&
       ((param_1 < -_DAT_006236b0 && (iVar1 == 0)))) {
      *(float *)((int)this_ + 0x34) = DAT_00672fd0;
    }
    if ((((-_DAT_006236b4 < *(float *)((int)this_ + 0x40)) && (param_1 < -_DAT_006236b4)) &&
        (iVar1 == 0)) &&
       ((DAT_00672fd0 - _DAT_006236ac < *(float *)((int)this_ + 0x38) &&
        (*(float *)((int)this_ + 0x38) < DAT_00672fd0 - _DAT_006236ac * 0.5f)))) {
      FUN_00441740(&DAT_0066f580,s_do_dash_Forward_00623910);
      FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x5b4)), bea_arg(*(int *)((int)this_ + 0x20)), bea_arg(0x3f800000), bea_arg(2), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
      iVar1 = FUN_00414030(bea_arg(this_));
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x60) = 0;
      }
      *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x2ec) = 0;
      local_44 = _DAT_006236c0 * local_44;
      *(undefined4 *)((int)this_ + 0x44) = DAT_006236b8;
    }
    *(float *)((int)this_ + 0x40) = param_1;
    FUN_004062d0(bea_arg(auStack_30), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x114)), bea_arg(0), bea_arg(0));
    fStack_40 = fStack_2c * local_44;
    fStack_3c = fStack_1c * local_44;
    fStack_38 = fStack_c * local_44;
    if ((*(int **)((int)this_ + 0x20))[0x162] != 0) {
      fStack_40 = fStack_40 * 0.25f;
      fStack_3c = fStack_3c * 0.25f;
      fStack_38 = fStack_38 * 0.25f;
    }
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x74, &fStack_40);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00412d80, ap_00412d80));
