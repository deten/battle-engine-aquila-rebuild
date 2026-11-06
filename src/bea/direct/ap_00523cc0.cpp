// auto-ported from 00523cc0_FUN_00523cc0.c (FUN_00523cc0, 114 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-28 compile: callback pointer 0x889008 typed as cdecl (int,int)->uint (push 4/push 0/call eax/add esp,8 at 0x523cc9-0x523ccd); fVar1 kept as float10 since fild (0x523cc0+0x28, +0x44) holds the int exactly
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef uint32_t (BEA_CDECL* DAT_00889008_t)(int, int);
#define DAT_00889008 GLOBAL_AT(DAT_00889008_t, 0x00889008)
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_0089bdfc GLOBAL_AT(int, 0x0089bdfc)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)

static uint BEA_CDECL ap_00523cc0(float param_1, float param_2, float param_3, float param_4)
{
  float10 fVar1;   // fild: the int is held exactly on the x87 stack
  uint uVar2;
  undefined2 uVar3;
  ushort uVar4;
  
  if (DAT_00889008 != (code *)0x0) {
    uVar2 = bea_guard<DAT_00889008_t>{DAT_00889008}(0,4);
    if ((char)uVar2 != '\0') goto LAB_00523d2f;
  }
  uVar2 = DAT_00662df4;
  if ((DAT_00662df4 != 0) || (uVar2 = 0, DAT_0089bdfc == 0)) goto LAB_00523d2f;
  fVar1 = (float10)DAT_0089bda8;
  uVar4 = (ushort)(fVar1 < param_1) << 8 | (ushort)(bea_isnan(fVar1) || bea_isnan(param_1)) << 10 |
          (ushort)(fVar1 == param_1) << 0xe;
  uVar3 = (undefined2)((uint)DAT_0089bdfc >> 0x10);
  if (fVar1 >= param_1) {
    uVar2 = CONCAT22(uVar3,(ushort)(fVar1 < param_3) << 8 |
                           (ushort)(bea_isnan(fVar1) || bea_isnan(param_3)) << 10 |
                           (ushort)(fVar1 == param_3) << 0xe);
    if (fVar1 >= param_3) goto LAB_00523d2f;
    fVar1 = (float10)DAT_0089bda4;
    uVar4 = (ushort)(fVar1 < param_2) << 8 | (ushort)(bea_isnan(fVar1) || bea_isnan(param_2)) << 10 |
            (ushort)(fVar1 == param_2) << 0xe;
    if (fVar1 >= param_2) {
      uVar2 = CONCAT22(uVar3,(ushort)(fVar1 < param_4) << 8 |
                             (ushort)(bea_isnan(fVar1) || bea_isnan(param_4)) << 10 |
                             (ushort)(fVar1 == param_4) << 0xe);
      if (fVar1 < param_4) {
        DAT_0089bdfc = 0;
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      goto LAB_00523d2f;
    }
  }
  uVar2 = CONCAT22(uVar3,uVar4);
LAB_00523d2f:
  return uVar2 & 0xffffff00;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00523cc0, ap_00523cc0));
