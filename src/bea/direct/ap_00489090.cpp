// auto-ported from 00489090_vslot60.c (CInfantryUnit::vslot60, 546 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CInfantryUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define s_die_left_0062d53c ((char*)0x0062d53c)
#define s_die_back_0062d530 ((char*)0x0062d530)
#define s_dead_left_0062d500 ((char*)0x0062d500)
#define s_dead_forward_0062d518 ((char*)0x0062d518)
#define s_dead_right_0062d50c ((char*)0x0062d50c)
#define s_dead_back_0062d4f4 ((char*)0x0062d4f4)
#define s_die_right_0062d548 ((char*)0x0062d548)
#define s_dead_up_0062d528 ((char*)0x0062d528)
#define s_ateam_0062d4ec ((char*)0x0062d4ec)
#define s_die_forward_0062d554 ((char*)0x0062d554)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot60_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot60_t> CComplexThing__vslot60 = {(CComplexThing__vslot60_t)0x004f44a0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static undefined4 BEA_THISCALL ap_00489090(CInfantryUnit * this_, int param_1, undefined4 param_2, undefined4 param_3)
{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x10 - 0x10);
  if (*(int *)(this_ + 0x110) == 0) {
    return 0;
  }
  if ((((byte)this_[0x2c] & 4) == 0) && (*(int *)(this_ + 0x26c) == 0)) {
    if ((DAT_00672fd0 - *(float *)(this_ + 0xcc) < 2.0f) ||
       (*(int *)(*(int *)(this_ + 0x13c) + 0x20) == 2)) {
      pfVar2 = (float *)bea_vcall<uint32_t>(this_, 0x6c, local_10);
      fVar1 = pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2;
      if (((param_1 == 1) || (param_1 == 3)) || (param_1 == 2)) {
        if (fVar1 <= 0.000529f) {
          if (fVar1 <= 6.400001e-05f) {
            param_1 = 3;
          }
          else {
            param_1 = 1;
          }
        }
        else {
          param_1 = 2;
        }
      }
      else if ((((param_1 == 5) || (param_1 == 6)) || (param_1 == 4)) && (6.400001e-05f < fVar1)) {
        param_1 = 7;
      }
    }
    else {
      param_1 = 8;
    }
    uVar3 = CComplexThing__vslot60(bea_arg((CComplexThing *)this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3));
    return uVar3;
  }
  pcVar6 = s_die_forward_0062d554;
  pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar6));
  if (param_1 != iVar5) {
    pcVar6 = s_die_right_0062d548;
    pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    iVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar6));
    if (param_1 != iVar5) {
      pcVar6 = s_die_left_0062d53c;
      pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
      iVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar6));
      if (param_1 != iVar5) {
        pcVar6 = s_die_back_0062d530;
        pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
        iVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar6));
        if (param_1 != iVar5) {
          pcVar6 = s_dead_up_0062d528;
          pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
          iVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar6));
          if (param_1 != iVar5) {
            pcVar6 = s_dead_forward_0062d518;
            pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
            iVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar6));
            if (param_1 != iVar5) {
              pcVar6 = s_dead_right_0062d50c;
              pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
              iVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar6));
              if (param_1 != iVar5) {
                pcVar6 = s_dead_left_0062d500;
                pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
                iVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar6));
                if (param_1 != iVar5) {
                  pcVar6 = s_dead_back_0062d4f4;
                  pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
                  iVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar6));
                  if (param_1 != iVar5) {
                    pcVar6 = s_ateam_0062d4ec;
                    pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
                    iVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar6));
                    if (param_1 != iVar5) {
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  CComplexThing__vslot60(bea_arg((CComplexThing *)this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3));
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00489090, ap_00489090));
