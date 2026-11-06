// auto-ported from 0041c240_FUN_0041c240.c (FUN_0041c240, 226 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00624184 GLOBAL_AT(int, 0x00624184)
#define DAT_00660624 GLOBAL_AT(undefined, 0x00660624)
#define DAT_00660620 GLOBAL_AT(undefined4, 0x00660620)
#define DAT_006782a8 GLOBAL_AT(int, 0x006782a8)
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static uint32_t BEA_CDECL ap_0041c240(int param_1)
{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  float10 fVar5;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  char (&local_1a)[2] = *reinterpret_cast<char (*)[2]>(bea_frame_ + 0x20 - 0x1a);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x18);
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  longlong &local_10 = *reinterpret_cast<longlong *>(bea_frame_ + 0x20 - 0x10);
  iVar2 = 0;
  local_14 = 0;
  if (0 < DAT_00624184) {
    puVar4 = &DAT_00660624;
    puVar3 = &DAT_00660620;
    do {
      local_18 = *(float *)((((int)puVar3 < 0x660620) - 1 & (uint)puVar4) + 0x3c);
      if (local_18 == 1.0f) {
        local_1a[0] = 'S';
      }
      else if (0.0f < local_18) {
        fVar5 = bea_fcast<float10>(FUN_0055dfe7(bea_fcast<double>((local_18 * 4.0f))));
        local_10 = (longlong)ROUND(fVar5);
        local_1a[0] = 'D' - (char)local_10;
      }
      else {
        local_1a[0] = 'E';
      }
      local_1a[1] = 0;
      pcVar1 = (char *)FUN_004f7bf0(bea_arg(local_1a));
      if (*pcVar1 == 'S') {
        local_14 = local_14 + 1;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x10;
      puVar4 = puVar4 + 0x40;
    } while (BEA_LOOP_GUARD((iVar2 < DAT_00624184)));
  }
  return *(int *)(((char *)&DAT_006782a8) + param_1 * 0x18) <= local_14;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041c240, ap_0041c240));
