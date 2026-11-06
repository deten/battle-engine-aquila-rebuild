// auto-ported from 004e0bd0_FUN_004e0bd0.c (FUN_004e0bd0, 917 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-28 compile: unkbyte10 -> float10; sin stored to the param_8 slot and reloaded as a float (fst [esp+0x40], 0x4e0d1c/0x4e0d3b), squared as (s*10)^2 (0x4e0d3b-0x4e0d47) not ((s*10)*s)*10; distance sum (z^2+y^2)+x^2 (0x4e0da9); x87 branch conditions keep the unordered cases (0x4e0c95, 0x4e0d28, 0x4e0dd1, 0x4e0de8); fild of param_8 at full precision (0x4e0ee7)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef undefined4 (BEA_THISCALL* FUN_0046f2c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046f2c0_t> FUN_0046f2c0 = {(FUN_0046f2c0_t)0x0046f2c0};
typedef int (BEA_THISCALL* FUN_004e0fb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e0fb0_t> FUN_004e0fb0 = {(FUN_004e0fb0_t)0x004e0fb0};
typedef uint32_t (BEA_STDCALL* FUN_004e1360_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e1360_t> FUN_004e1360 = {(FUN_004e1360_t)0x004e1360};
typedef uint32_t (BEA_THISCALL* FUN_00517790_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00517790_t> FUN_00517790 = {(FUN_00517790_t)0x00517790};
typedef int (BEA_THISCALL* FUN_00517cb0_t)(uint32_t);
static const bea_guard<FUN_00517cb0_t> FUN_00517cb0 = {(FUN_00517cb0_t)0x00517cb0};

static void * BEA_THISCALL ap_004e0bd0(void * this_, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, float param_5, undefined4 param_6, undefined4 param_7, int param_8, undefined4 param_9, uint param_10, undefined4 param_11, undefined4 param_12)
{
  float fVar1;
  float fVar2;
  float fVar3;
  void *this_00;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 Var7;
  undefined4 uVar8;
  int local_10;
  
  FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(0));
  if ((param_1 == 0) || ((byte)param_11 != 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  this_00 = (void *)FUN_004e0fb0(bea_arg(this_), bea_arg(uVar8));
  if (this_00 != (void *)0x0) {
    FUN_00401000(bea_arg(this_00), bea_arg(param_1));
    *(undefined4 *)((int)this_00 + 0x1c) = param_4;
    *(undefined4 *)((int)this_00 + 0xc) = param_2;
    *(undefined4 *)((int)this_00 + 0x2c) = 0;
    uVar8 = FUN_00517cb0(bea_arg(&DAT_00896988));
    *(undefined4 *)((int)this_00 + 4) = uVar8;
    *(undefined1 *)((int)this_00 + 0x18) = (undefined1)param_8;
    *(undefined4 *)((int)this_00 + 0x3c) = param_9;
    *(undefined4 *)((int)this_00 + 0x38) = param_9;
    *(uint *)((int)this_00 + 0x7c) = param_10 & 0xff;
    *(undefined4 *)((int)this_00 + 0x40) = 0;
    *(uint *)((int)this_00 + 0x80) = (uint)(byte)param_11;
    *(undefined4 *)((int)this_00 + 0x84) = 0;
    *(undefined4 *)((int)this_00 + 0x14) = param_12;
    *(undefined1 *)((int)this_00 + 8) = 1;
    if (param_1 == 0) {
      *(undefined4 *)((int)this_00 + 0x10) = 0;
    }
    else {
      *(undefined4 *)((int)this_00 + 0x10) = param_3;
    }
    if (param_5 == 0.0f || bea_isnan(param_5)) {   // test ah,0x40: equal or unordered (0x4e0c95)
      *(undefined4 *)((int)this_00 + 0x24) = 0;
      *(undefined4 *)((int)this_00 + 0x20) = 0x3f800000;
    }
    else if (0.0f <= param_5) {
      *(undefined4 *)((int)this_00 + 0x20) = 0;
      *(float *)((int)this_00 + 0x24) = param_5;
      *(undefined4 *)((int)this_00 + 0x28) = 0x3f800000;
    }
    else {
      *(undefined4 *)((int)this_00 + 0x20) = 0x3f800000;
      *(float *)((int)this_00 + 0x24) = param_5;
      *(undefined4 *)((int)this_00 + 0x28) = 0;
    }
    *(undefined4 *)((int)this_00 + 0x30) = param_6;
    *(undefined4 *)((int)this_00 + 0x6c) = param_7;
    if ((param_1 == 0) || ((byte)param_11 != 0)) {
      *(undefined4 *)((int)this_00 + 0x34) = 0;
    }
    else {
      Var7 = fpatan((float10)*(float *)((int)this_00 + 0x44),
                    (float10)*(float *)((int)this_00 + 0x48));
      fVar6 = (float10)fsin(Var7);
      // fst [esp+0x40] (the param_8 slot) then test ah,0x41: <= 0 or unordered (0x4e0d1c-0x4e0d2b)
      param_8 = (int)bea_piece32((float)fVar6);
      if (!(fVar6 > (float10)0.0f)) {
        fVar1 = -1.0f;
      }
      else {
        fVar1 = 1.0f;
      }
      fVar2 = bea_fcast<float>(param_8) * 10.0f;
      fVar2 = fVar2 * fVar2;   // fld st(0); fmulp (0x4e0d45)
      local_10 = (int)(longlong)ROUND(fVar2 * fVar2 * fVar1);
      *(int *)((int)this_00 + 0x34) = local_10;
    }
    FUN_004e1360(bea_arg(this_00), bea_arg(1));
    fVar1 = *(float *)((int)this_00 + 0x44);
    fVar2 = *(float *)((int)this_00 + 0x48);
    fVar3 = *(float *)((int)this_00 + 0x4c);
    FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(0));
    fVar1 = SQRT((-fVar3 * -fVar3 + -fVar2 * -fVar2) + -fVar1 * -fVar1);   // (z^2+y^2)+x^2 (0x4e0da9-0x4e0db7)
    fVar2 = 50.0f - fVar1;
    if (fVar2 > 50.0f) {          // test ah,0x41 (0x4e0dd1)
      fVar2 = 50.0f;
    }
    else if (!(fVar2 >= 0.0f)) {  // test ah,1: below or unordered (0x4e0de8)
      fVar2 = 0.0f;
    }
    local_10 = (int)(longlong)ROUND(fVar2 * 100.0f * 0.02f);
    param_8 = local_10;
    if ((50.0f <= fVar1) && (*(char *)((int)this_00 + 0x18) == '\0')) {
      if (*(int *)((int)this_00 + 0x74) != 0) {
        *(undefined4 *)(*(int *)((int)this_00 + 0x74) + 0x78) = *(undefined4 *)((int)this_00 + 0x78)
        ;
      }
      if (*(int *)((int)this_00 + 0x78) == 0) {
        *(undefined4 *)((int)this_ + 0xc) = *(undefined4 *)((int)this_00 + 0x74);
      }
      else {
        *(undefined4 *)(*(int *)((int)this_00 + 0x78) + 0x74) = *(undefined4 *)((int)this_00 + 0x74)
        ;
      }
      *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + -1;
      *(undefined4 *)((int)this_00 + 0x74) = *(undefined4 *)((int)this_ + 0x34);
      *(undefined4 *)((int)this_00 + 0x78) = 0;
      if (*(int *)((int)this_ + 0x34) != 0) {
        *(void **)(*(int *)((int)this_ + 0x34) + 0x78) = this_00;
      }
      *(void **)((int)this_ + 0x34) = this_00;
      return (void *)((void *)0x0);
    }
    if (*(int *)((int)this_00 + 0x10) == 0) {
      param_8 = 0x7f;
    }
    fVar1 = *(float *)((int)this_00 + 0x20) * *(float *)((int)this_00 + 0x1c);
    if (*(int *)((int)this_00 + 0x14) == 1) {
      local_10 = (int)(longlong)
                      ROUND(fVar1 * *(float *)((int)this_ + 0x24) * *(float *)((int)this_ + 0x20) *
                            127.0f);
    }
    else {
      local_10 = (int)(longlong)
                      ROUND(fVar1 * *(float *)((int)this_ + 0x28) * *(float *)((int)this_ + 0x20) *
                            127.0f);
    }
    local_10 = local_10 * 200;
    if (10000 < local_10) {
      local_10 = 10000;
    }
    iVar5 = (local_10 + -10000) / 2;
    if (iVar5 < -10000) {
      iVar5 = -10000;
    }
    if (*(int *)((int)this_00 + 0x14) == 1) {
      local_10 = (int)(longlong)
                      ROUND((float10)param_8 * *(float *)((int)this_ + 0x24) * fVar1 *
                            *(float *)((int)this_ + 0x20));
    }
    else {
      local_10 = (int)(longlong)
                      ROUND((float10)param_8 * *(float *)((int)this_ + 0x28) * fVar1 *
                            *(float *)((int)this_ + 0x20));
    }
    local_10 = local_10 * 200;
    if (10000 < local_10) {
      local_10 = 10000;
    }
    iVar4 = (local_10 + -10000) / 2;
    if (iVar4 < -10000) {
      iVar4 = -10000;
    }
    *(int *)((int)this_00 + 0x68) = iVar4;
    *(int *)((int)this_00 + 100) = iVar5;
    if (-1 < *(int *)((int)this_00 + 4)) {
      FUN_00517790(bea_arg(&DAT_00896988), bea_arg(this_00));
    }
  }
  return (void *)(this_00);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e0bd0, ap_004e0bd0));
