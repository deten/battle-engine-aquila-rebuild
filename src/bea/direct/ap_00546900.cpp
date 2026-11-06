// auto-ported from 00546900_FUN_00546900.c (FUN_00546900, 515 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_009c64dc GLOBAL_AT(int, 0x009c64dc)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define _DAT_009c73d4 GLOBAL_AT(int, 0x009c73d4)
#define DAT_009c741c GLOBAL_AT(char, 0x009c741c)
#define DAT_00854e6c GLOBAL_AT(char, 0x00854e6c)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_009c7c58 GLOBAL_AT(int, 0x009c7c58)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_THISCALL* FUN_00500360_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500360_t> FUN_00500360 = {(FUN_00500360_t)0x00500360};
typedef uint32_t (BEA_THISCALL* FUN_00513c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513c70_t> FUN_00513c70 = {(FUN_00513c70_t)0x00513c70};
typedef undefined4 (BEA_THISCALL* FUN_00513ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513ca0_t> FUN_00513ca0 = {(FUN_00513ca0_t)0x00513ca0};
typedef undefined4 (BEA_THISCALL* FUN_00527d20_t)(uint32_t);
static const bea_guard<FUN_00527d20_t> FUN_00527d20 = {(FUN_00527d20_t)0x00527d20};
typedef uint32_t (BEA_THISCALL* FUN_00527da0_t)(uint32_t);
static const bea_guard<FUN_00527da0_t> FUN_00527da0 = {(FUN_00527da0_t)0x00527da0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};

static void BEA_THISCALL ap_00546900(void * this_, int param_1, int param_2, int param_3, int param_4)
{
  int iVar1;
  void *this_00;
  int iVar2;
  char cVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x18);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x20 - 0x10);
  iVar1 = *(int *)((int)this_ + 0x24);
  local_20 = ((float)param_1 + (float)param_2) * 0.5f;
  local_1c = ((float)param_3 + (float)param_4) * 0.5f;
  fVar9 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_20));
  local_18 = (float)fVar9;
  pfVar4 = (float *)bea_vcall<uint32_t>(*(undefined4 **)(iVar1 + 0x10), 0x0, local_10);
  local_20 = local_20 - *pfVar4;
  local_1c = local_1c - pfVar4[1];
  local_18 = local_18 - pfVar4[2];
  iVar5 = param_2 + (param_2 >> 0x1f & 7U);
  param_2 = (int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3;
  param_1 = (int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3;
  iVar5 = iVar5 >> 3;
  param_4 = (int)((param_4 >> 0x1f & 7U) + param_4) >> 3;
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (0x3f < iVar5) {
    iVar5 = 0x3f;
  }
  if (0x3f < param_4) {
    param_4 = 0x3f;
  }
  if (param_2 <= param_4) {
    iVar6 = (param_2 * 0x40 + param_1) * 0x14;
    iVar2 = param_1;
    iVar7 = iVar6;
    do {
      for (; BEA_LOOP_GUARD((iVar2 <= iVar5)); iVar2 = iVar2 + 1) {
        iVar8 = *(int *)(iVar1 + 4) + iVar6;
        if (-1 < *(char *)(iVar8 + 0x10)) {
          this_00 = *(void **)(iVar8 + 0xc);
          iVar8 = DAT_009c64dc +
                  (*(char *)(iVar8 + 0x10) * 0x10 + (uint)*(byte *)(iVar8 + 0x11)) * 0x34;
          FUN_00500360(bea_arg(this_00), bea_arg(0));
          bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,*(undefined4 *)(iVar8 + 8));
          _DAT_009c73d4 = 0x102;
          DAT_009c741c = 1;
          if (DAT_00854e6c != '\0') {
            FUN_00513ca0(bea_arg(&DAT_00855bb0), bea_arg(0));
          }
          FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(1));
          cVar3 = FUN_00527d20(bea_arg(&DAT_009c7c58));
          if (cVar3 == '\0') {
            return;
          }
          FUN_00527da0(bea_arg(&DAT_009c7c58));
          FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(5), bea_arg(0), bea_arg(*(undefined4 *)((int)this_00 + 0x38)), bea_arg(0), bea_arg(*(undefined4 *)(iVar8 + 0x30)));
        }
        iVar6 = iVar6 + 0x14;
      }
      iVar6 = iVar7 + 0x500;
      param_2 = param_2 + 1;
      iVar2 = param_1;
      iVar7 = iVar6;
    } while (BEA_LOOP_GUARD((param_2 <= param_4)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00546900, ap_00546900));
