// auto-ported from 00456080_FUN_00456080.c (FUN_00456080, 259 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-21: the virtual calls below return a float in ST0 (fstp follows the call);
// the generator had typed them uint32_t under a bea_fcast cast (12-character cast lookback)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00662ac4 GLOBAL_AT(int, 0x00662ac4)
#define DAT_006290b4 GLOBAL_AT(char, 0x006290b4)
#define DAT_00677d74 GLOBAL_AT(char, 0x00677d74)
#define DAT_00888ff8 GLOBAL_AT(int, 0x00888ff8)
#define DAT_00677810 GLOBAL_AT(float, 0x00677810)
#define DAT_008a9564 GLOBAL_AT(int, 0x008a9564)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_00677868 GLOBAL_AT(int, 0x00677868)
#define DAT_00677874 GLOBAL_AT(short, 0x00677874)
#define DAT_0067786c GLOBAL_AT(int, 0x0067786c)
#define DAT_00662abc GLOBAL_AT(int, 0x00662abc)
typedef undefined4 (BEA_THISCALL* FUN_004705d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004705d0_t> FUN_004705d0 = {(FUN_004705d0_t)0x004705d0};
typedef uint32_t (BEA_STDCALL* FUN_005159c0_t)(uint32_t);
static const bea_guard<FUN_005159c0_t> FUN_005159c0 = {(FUN_005159c0_t)0x005159c0};

static void BEA_THISCALL ap_00456080(void * this_)
{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  
  iVar2 = *(int *)((int)this_ + 0x28) + 0x37;
  if (iVar2 == 0x38) {
    *(uint *)(((uint8_t *)&DAT_00662ac4) + *(int *)((int)this_ + 0x24) * 4) =
         (uint)(*(int *)(((uint8_t *)&DAT_00662ac4) + *(int *)((int)this_ + 0x24) * 4) == 0);
    return;
  }
  if (iVar2 != 0x39) {
    iVar4 = 0;
    DAT_006290b4 = 0;
    DAT_00677d74 = 0;
    if (0 < DAT_00888ff8) {
      pfVar3 = (float *)&DAT_00677810;
      do {
        piVar1 = DAT_008a9564;
        if (DAT_008a9564 == (int *)0x0) {
          piVar1 = (int *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(0));
        }
        fVar5 = bea_fcast<float10>(bea_vcall<float10>(piVar1, 0x24, iVar4));
        pfVar3[-2] = bea_fcast<float>(fVar5);
        fVar5 = bea_fcast<float10>(bea_vcall<float10>(piVar1, 0x28, iVar4));
        pfVar3[-1] = bea_fcast<float>(fVar5);
        fVar5 = bea_fcast<float10>(bea_vcall<float10>(piVar1, 0x2c, iVar4));
        *pfVar3 = bea_fcast<float>(fVar5);
        fVar5 = bea_fcast<float10>(bea_vcall<float10>(piVar1, 0x30, iVar4));
        pfVar3[1] = bea_fcast<float>(fVar5);
        fVar5 = bea_fcast<float10>(bea_vcall<float10>(piVar1, 0x34, iVar4));
        pfVar3[2] = bea_fcast<float>(fVar5);
        fVar5 = bea_fcast<float10>(bea_vcall<float10>(piVar1, 0x38, iVar4));
        pfVar3[3] = bea_fcast<float>(fVar5);
        iVar4 = iVar4 + 1;
        pfVar3 = pfVar3 + 6;
      } while (BEA_LOOP_GUARD((iVar4 < DAT_00888ff8)));
    }
    DAT_00677868 = *(undefined4 *)((int)this_ + 0x24);
    (*(uint16_t*)((char*)&DAT_00677874 + 0)) = 0;
    DAT_0067786c = iVar2;
    FUN_005159c0(bea_arg(((void*)0x00456190)));
    return;
  }
  *(uint *)(((uint8_t *)&DAT_00662abc) + *(int *)((int)this_ + 0x24) * 4) =
       (uint)(*(int *)(((uint8_t *)&DAT_00662abc) + *(int *)((int)this_ + 0x24) * 4) == 0);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00456080, ap_00456080));
