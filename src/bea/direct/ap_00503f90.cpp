// auto-ported from 00503f90_FUN_00503f90.c (FUN_00503f90, 862 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0xe0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00854e74 GLOBAL_AT(int, 0x00854e74)
#define DAT_00662f35 GLOBAL_AT(char, 0x00662f35)
#define DAT_00629038 GLOBAL_AT(int, 0x00629038)
#define s_shader_03d_i_0063d100 ((char*)0x0063d100)
#define s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78 ((char*)0x0063cf78)
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef void * (BEA_THISCALL* FUN_00501800_t)(uint32_t);
static const bea_guard<FUN_00501800_t> FUN_00501800 = {(FUN_00501800_t)0x00501800};
typedef uint32_t (BEA_THISCALL* FUN_00502420_t)(uint32_t);
static const bea_guard<FUN_00502420_t> FUN_00502420 = {(FUN_00502420_t)0x00502420};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};
typedef unsigned int (BEA_CDECL* FUN_0055f4d7_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055f4d7_t> FUN_0055f4d7 = {(FUN_0055f4d7_t)0x0055f4d7};

static int * BEA_CDECL ap_00503f90(void *param_1, int param_2)
{
  void *this_local;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *this_00;

  alignas(16) uint8_t bea_frame_[0xe0] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_d4)[200] = *reinterpret_cast<undefined1 (*)[200]>(bea_frame_ + 0xe0 - 0xd4);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0xe0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x4);
  this_local = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x5c), bea_arg(0x50), bea_arg(s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78), bea_arg(0x99a));
  this_00 = (int *)0x0;
  if (this_local != (void *)0x0) {
    this_00 = (int *)FUN_00501800(bea_arg(this_local));
  }
  iVar1 = *this_00;
  iVar5 = this_00[1];
  iVar3 = this_00[0x16];
  FUN_00423910(bea_arg(param_1));
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(param_1), bea_arg(this_00), bea_arg(0x5c), bea_arg(1));
  this_00[1] = iVar5;
  this_00[0x16] = iVar3;
  *this_00 = iVar1;
  if (this_00[0xe] != 0) {
    iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(this_00[0xf] & 0xfffffffc), bea_arg(0x50), bea_arg(s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78), bea_arg(0x9c6));
    this_00[0xe] = iVar1;
    FUN_00423910(bea_arg(param_1));
    FUN_00423960(bea_arg(param_1), bea_arg(this_00[0xe]), bea_arg(this_00[0xf]), bea_arg(1));
  }
  if (this_00[0x11] != 0) {
    iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(DAT_00854e74 * 4), bea_arg(0x50), bea_arg(s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78), bea_arg(0x9d2));
    this_00[0x11] = iVar1;
    FUN_00423910(bea_arg(param_1));
    FUN_00423960(bea_arg(param_1), bea_arg(this_00[0x11]), bea_arg(4), bea_arg(DAT_00854e74));
  }
  if (this_00[0x10] != 0) {
    FUN_00423910(bea_arg(param_1));
    iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(DAT_00854e74 * 4), bea_arg(0x50), bea_arg(s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78), bea_arg(0x9e3));
    this_00[0x10] = iVar1;
    iVar1 = 0;
    if (0 < DAT_00854e74) {
      piVar4 = (int *)this_00[0x11];
      iVar5 = DAT_00854e74;
      do {
        iVar3 = *piVar4;
        piVar4 = piVar4 + 1;
        iVar1 = iVar1 + iVar3;
        iVar5 = iVar5 + -1;
      } while (BEA_LOOP_GUARD((iVar5 != 0)));
    }
    uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar1 * 4), bea_arg(0x50), bea_arg(s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78), bea_arg(0x9ef));
    iVar5 = 0;
    *(undefined4 *)this_00[0x10] = uVar2;
    iVar1 = *(int *)this_00[0x10];
    if (0 < DAT_00854e74) {
      do {
        *(int *)(this_00[0x10] + iVar5 * 4) = iVar1;
        FUN_00423960(bea_arg(param_1), bea_arg(*(undefined4 *)(this_00[0x10] + iVar5 * 4)), bea_arg(4), bea_arg(*(undefined4 *)(this_00[0x11] + iVar5 * 4)));
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + *(int *)(this_00[0x11] + -4 + iVar5 * 4) * 4;
      } while (BEA_LOOP_GUARD((iVar5 < DAT_00854e74)));
    }
  }
  if (this_00[0x11] != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00[0x11]));
    this_00[0x11] = 0;
  }
  if (this_00[0x14] != 0) {
    FUN_00423910(bea_arg(param_1));
    iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(this_00[0x15]), bea_arg(0x50), bea_arg(s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78), bea_arg(0xa0b));
    this_00[0x14] = iVar1;
    FUN_00423960(bea_arg(param_1), bea_arg(iVar1), bea_arg(this_00[0x15]), bea_arg(1));
  }
  if (this_00[0x12] != 0) {
    FUN_00423910(bea_arg(param_1));
    if (DAT_00662f35 == '\0') {
      iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(this_00[0x13] + 1), bea_arg(0x50), bea_arg(s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78), bea_arg(0xa3d));
      this_00[0x12] = iVar1;
      FUN_00423960(bea_arg(param_1), bea_arg(iVar1), bea_arg(this_00[0x13]), bea_arg(1));
      *(undefined1 *)(this_00[0x13] + this_00[0x12]) = 0;
    }
    else {
      iVar1 = this_00[0x13] * 2 + 10000;
      iVar5 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar1), bea_arg(0x50), bea_arg(s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78), bea_arg(0xa1e));
      this_00[0x12] = iVar5;
      FUN_00423960(bea_arg(param_1), bea_arg(iVar5), bea_arg(this_00[0x13]), bea_arg(1));
      FUN_0055de9b(local_d4,s_shader_03d_i_0063d100,param_2);
      iVar5 = FUN_0055e490(bea_arg(local_d4), bea_arg(&DAT_00629038));
      if (iVar5 != 0) {
        iVar3 = FUN_0055f4d7(bea_arg(this_00[0x12]), bea_arg(1), bea_arg(iVar1), bea_arg(iVar5));
        if (iVar3 == iVar1) {
          FUN_0042d080(bea_arg(0), bea_arg(0xd2), bea_arg(0xc9));
        }
        *(undefined1 *)(this_00[0x12] + iVar3) = 0;
        this_00[0x13] = iVar3;
        FUN_0055e4a3(bea_arg(iVar5));
      }
    }
  }
  FUN_00502420(bea_arg(this_00));
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00[0x12]));
  this_00[0x12] = 0;
  this_00[0x13] = 0;
  bea_vcall<uint32_t>(this_00, 0x8);
  return (int *)(this_00);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00503f90, ap_00503f90));
