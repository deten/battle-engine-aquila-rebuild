// auto-ported from 004ba4d0_vslot66.c (CMine::vslot66, 799 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CMine;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_00807450 GLOBAL_AT(int, 0x00807450)
#define DAT_00807454 GLOBAL_AT(int, 0x00807454)
#define DAT_00807458 GLOBAL_AT(int, 0x00807458)
#define DAT_0080745c GLOBAL_AT(int, 0x0080745c)
#define s_C__dev_ONSLAUGHT2_Mine_cpp_006309a4 ((char*)0x006309a4)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot66_t)(uint32_t);
static const bea_guard<CGroundUnit__vslot66_t> CGroundUnit__vslot66 = {(CGroundUnit__vslot66_t)0x0047c970};
typedef int (BEA_THISCALL* FUN_00491ea0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00491ea0_t> FUN_00491ea0 = {(FUN_00491ea0_t)0x00491ea0};
typedef int (BEA_THISCALL* FUN_00492020_t)(uint32_t);
static const bea_guard<FUN_00492020_t> FUN_00492020 = {(FUN_00492020_t)0x00492020};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_004ba4d0(CMine * this_)
{
  float *pfVar1;
  float fVar2;
  void *pvVar3;
  CMine *pCVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x48);
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x44);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x40);
  undefined4 (&local_3c)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x50 - 0x3c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  if (*(float *)(this_ + 0x260) <= 0.0f) {
    pvVar3 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*(float *)(this_ + 0x1c)), bea_arg(*(undefined4 *)(this_ + 0x20)), bea_arg(*(undefined4 *)(this_ + 0x24)), bea_arg(*(undefined4 *)(this_ + 0x28)), bea_arg(0x3f800000));
    while (BEA_LOOP_GUARD((pvVar3 != (void *)0x0))) {
      pCVar4 = (CMine *)FUN_00492c90(bea_arg(pvVar3));
      if ((((pCVar4 != (CMine *)0x0) && (pCVar4 != this_)) &&
          ((*(uint *)(pCVar4 + 0x34) & 0x200) != 0)) &&
         ((iVar5 = FUN_004fd3d0(bea_arg(this_), bea_arg(*(undefined4 *)(pCVar4 + 0x138))), iVar5 != 0 &&
          (fVar2 = *(float *)(this_ + 0x1c) - *(float *)(pCVar4 + 0x1c),
          SQRT((*(float *)(this_ + 0x20) - *(float *)(pCVar4 + 0x20)) *
               (*(float *)(this_ + 0x20) - *(float *)(pCVar4 + 0x20)) + fVar2 * fVar2) < 1.5f)))) {
        *(float *)(this_ + 0x260) = DAT_00672fd0 + *(float *)(*(int *)(this_ + 0x164) + 0x184);
        if ((*(int *)(*(int *)(this_ + 0x164) + 4) != 0) &&
           (((bea_vcall<uint32_t>(this_, 0x160, 0x1c,1,&local_4c,local_3c), local_4c != 0.0f ||
             (fStack_48 != 0.0f)) || (fStack_44 != 0.0f)))) {
          pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x10), bea_arg(s_C__dev_ONSLAUGHT2_Mine_cpp_006309a4), bea_arg(0x58));
          if (pvVar3 == (void *)0x0) {
            pvVar3 = (void *)0x0;
          }
          else {
            *(undefined4 *)((int)pvVar3 + 4) = 0;
            FUN_004cb040(bea_arg(pvVar3));
          }
          *(void **)(this_ + 0x264) = pvVar3;
          *(undefined4 *)((int)pvVar3 + 4) = 0;
          FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 4)), bea_arg(*(undefined4 *)(this_ + 0x264)), bea_arg(DAT_00807450), bea_arg(DAT_00807454), bea_arg(DAT_00807458), bea_arg(DAT_0080745c), bea_arg(0), bea_arg(0));
          pfVar1 = *(float **)(*(int *)(this_ + 0x264) + 4);
          if (pfVar1 != (float *)0x0) {
            if (pfVar1[0x12] == 10000.0) {
              pfVar1[0x20] = local_4c;
              pfVar1[0x21] = fStack_48;
              pfVar1[0x22] = fStack_44;
              pfVar1[0x23] = fStack_40;
              pfVar1[0x10] = local_4c;
              pfVar1[0x11] = fStack_48;
              pfVar1[0x12] = fStack_44;
              pfVar1[0x13] = fStack_40;
              *pfVar1 = local_4c;
              pfVar1[1] = fStack_48;
              pfVar1[2] = fStack_44;
              pfVar1[3] = fStack_40;
              if (pfVar1[0x2b] != -1.0) {
                pfVar1[0x2b] = DAT_00672fd0;
              }
            }
            else {
              pfVar1[0x10] = *pfVar1;
              pfVar1[0x11] = pfVar1[1];
              pfVar1[0x12] = pfVar1[2];
              pfVar1[0x13] = pfVar1[3];
              *pfVar1 = local_4c;
              pfVar1[1] = fStack_48;
              pfVar1[2] = fStack_44;
              pfVar1[3] = fStack_40;
              if (pfVar1[0x2b] != -1.0) {
                pfVar1[0x2b] = DAT_00672fd0;
              }
            }
          }
          iVar5 = *(int *)(*(int *)(this_ + 0x264) + 4);
          if (iVar5 != 0) {
            puVar7 = local_3c;
            puVar8 = (undefined4 *)(iVar5 + 0x10);
            for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            *(undefined4 *)(iVar5 + 0xa0) = 1;
          }
        }
        break;
      }
      pvVar3 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
    }
  }
  else {
    if (*(float *)(this_ + 0x260) < DAT_00672fd0) {
      bea_vcall<uint32_t>(this_, 0xc8);
    }
  }
  return CGroundUnit__vslot66(bea_arg((CGroundUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ba4d0, ap_004ba4d0));
