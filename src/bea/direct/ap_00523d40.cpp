// auto-ported from 00523d40_FUN_00523d40.c (FUN_00523d40, 111 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-28 compile: callback pointer 0x889008 typed as cdecl (int,int)->uint (push 4/push 0/call eax/add esp,8 at 0x523d49-0x523d4d); fVar1 kept as float10 since fild (0x523d40+0x28, +0x44) holds the int exactly
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef uint32_t (BEA_CDECL* DAT_00889008_t)(int, int);
#define DAT_00889008 GLOBAL_AT(DAT_00889008_t, 0x00889008)
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_0089bdf4 GLOBAL_AT(char, 0x0089bdf4)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)

static uint BEA_CDECL ap_00523d40(float param_1, float param_2, float param_3, float param_4)
{
  float10 fVar1;   // fild: the int is held exactly on the x87 stack
  uint uVar2;
  ushort uVar3;
  
  if (DAT_00889008 != (code *)0x0) {
    uVar2 = bea_guard<DAT_00889008_t>{DAT_00889008}(0,4);
    if ((char)uVar2 != '\0') goto LAB_00523dac;
  }
  uVar2 = DAT_00662df4;
  if ((DAT_00662df4 != 0) || (uVar2 = 0, DAT_0089bdf4 == '\0')) goto LAB_00523dac;
  fVar1 = (float10)DAT_0089bda8;
  uVar3 = (ushort)(fVar1 < param_1) << 8 | (ushort)(bea_isnan(fVar1) || bea_isnan(param_1)) << 10 |
          (ushort)(fVar1 == param_1) << 0xe;
  if (fVar1 >= param_1) {
    uVar2 = bea_piece32((ushort)((ushort)(fVar1 < param_3) << 8 |
                           (ushort)(bea_isnan(fVar1) || bea_isnan(param_3)) << 10 |
                          (ushort)(fVar1 == param_3) << 0xe));
    if (fVar1 >= param_3) goto LAB_00523dac;
    fVar1 = (float10)DAT_0089bda4;
    uVar3 = (ushort)(fVar1 < param_2) << 8 | (ushort)(bea_isnan(fVar1) || bea_isnan(param_2)) << 10 |
            (ushort)(fVar1 == param_2) << 0xe;
    if (fVar1 >= param_2) {
      uVar3 = (ushort)(fVar1 < param_4) << 8 | (ushort)(bea_isnan(fVar1) || bea_isnan(param_4)) << 10 |
              (ushort)(fVar1 == param_4) << 0xe;
      uVar2 = (uint)uVar3;
      if (fVar1 < param_4) {
        DAT_0089bdf4 = 0;
        return CONCAT31((uint3)(byte)(uVar3 >> 8),1);
      }
      goto LAB_00523dac;
    }
  }
  uVar2 = (uint)uVar3;
LAB_00523dac:
  return uVar2 & 0xffffff00;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00523d40, ap_00523d40));
