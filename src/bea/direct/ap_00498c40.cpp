// auto-ported from 00498c40_FUN_00498c40.c (FUN_00498c40, 3958 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x160: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_00704650 GLOBAL_AT(int, 0x00704650)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0062dcbc GLOBAL_AT(int, 0x0062dcbc)
#define DAT_0062df34 GLOBAL_AT(int, 0x0062df34)
#define DAT_0062dd20 GLOBAL_AT(int, 0x0062dd20)
#define s_Footbase_0062df54 ((char*)0x0062df54)
#define s_toestop_0062df4c ((char*)0x0062df4c)
#define s_Toestop_0062df28 ((char*)0x0062df28)
#define s_LegMotion_00623074 ((char*)0x00623074)
#define s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60 ((char*)0x0062df60)
#define s_ToeMotion_0062df40 ((char*)0x0062df40)
#define PTR_DAT_0062df30 GLOBAL_AT(void*, 0x0062df30)
#define PTR_DAT_0062df3c GLOBAL_AT(void*, 0x0062df3c)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef int (BEA_THISCALL* FUN_004aa680_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa680_t> FUN_004aa680 = {(FUN_004aa680_t)0x004aa680};
typedef undefined4 (BEA_THISCALL* FUN_004aa820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004aa820_t> FUN_004aa820 = {(FUN_004aa820_t)0x004aa820};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055e2a6_t)(uint32_t);
static const bea_guard<FUN_0055e2a6_t> FUN_0055e2a6 = {(FUN_0055e2a6_t)0x0055e2a6};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

// The original reads stack slots it never writes; the hook enters through a stub that
// copies the real stack below the entry esp, and bea_frame_ starts from it
// (tools: frame_mirror, 2026-10-30)
extern "C" uint8_t g_frame_in_00498c40[0x160] __asm__("g_frame_in_00498c40");
alignas(16) uint8_t g_frame_in_00498c40[0x160];
extern "C" void BEA_THISCALL ap_00498c40_body(void * this_, void *param_1) __asm__("ap_00498c40_body");

void BEA_THISCALL ap_00498c40_body(void * this_, void *param_1)
{
  void *this_00;
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;

  alignas(16) uint8_t bea_frame_[0x160];   // the original stack frame (emulate_frame)
  memcpy(bea_frame_, g_frame_in_00498c40, sizeof bea_frame_);   // the real stack at entry (stub below)
  int &local_160 = *reinterpret_cast<int *>(bea_frame_ + 0x160 - 0x160);
  int &local_15c = *reinterpret_cast<int *>(bea_frame_ + 0x160 - 0x15c);
  int &local_158 = *reinterpret_cast<int *>(bea_frame_ + 0x160 - 0x158);
  float &local_150 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x150);
  float &local_14c = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x14c);
  float &local_148 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x148);
  float &local_144 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x144);
  float &local_140 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x140);
  float &local_13c = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x13c);
  float &local_138 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x138);
  float &local_134 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x134);
  float &local_12c = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x12c);
  float &local_128 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x128);
  float &local_124 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x124);
  float &local_11c = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x11c);
  float &local_118 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x118);
  float &local_114 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x114);
  float &local_10c = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x10c);
  float &local_108 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x108);
  float &local_104 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x104);
  float &local_fc = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xfc);
  float &local_f8 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xf8);
  float &local_f4 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xf4);
  float &local_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xf0);
  float (&local_ec)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x160 - 0xec);
  float &local_dc = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xdc);
  float &local_d8 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xd8);
  float &local_d4 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xd4);
  float &local_cc = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xcc);
  float &local_c8 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xc8);
  float &local_c4 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xc4);
  float (&local_bc)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x160 - 0xbc);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xac);
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xa8);
  float &local_a4 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0xa4);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x9c);
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x98);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x94);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x84);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x74);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x68);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x64);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x58);
  float &local_54 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x54);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x48);
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0x160 - 0x44);
  undefined1 (&local_3c)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x160 - 0x3c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x160 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x160 - 0x4);
  *(void **)((int)this_ + 0xe8) = param_1;
  for (pvVar6 = DAT_00704650; BEA_LOOP_GUARD((pvVar6 != (void *)0x0)); pvVar6 = *(void **)((int)pvVar6 + 0xec)) {
    if ((*(void **)((int)pvVar6 + 0xe8) == param_1) && (pvVar6 != this_)) {
      *(undefined4 *)((int)this_ + 0xe4) = *(undefined4 *)((int)pvVar6 + 0xe4);
    }
  }
  if (*(int *)((int)this_ + 0xe4) == 0) {
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0xf9));
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
    }
    *(undefined4 **)((int)this_ + 0xe4) = puVar2;
  }
  *(undefined4 *)((int)this_ + 0xa8) = 1;
  for (iVar3 = FUN_004aa820(bea_arg(param_1), bea_arg(s_Footbase_0062df54), bea_arg(1)); BEA_LOOP_GUARD((iVar3 != 0));
      iVar3 = FUN_004aa820(bea_arg(param_1), bea_arg(s_Footbase_0062df54), bea_arg(iVar3))) {
    iVar3 = *(int *)((int)this_ + 0xa8) + 1;
    *(int *)((int)this_ + 0xa8) = iVar3;
  }
  *(int *)((int)this_ + 0xa8) = *(int *)((int)this_ + 0xa8) + -1;
  *(undefined4 *)((int)this_ + 0xc0) = 1;
  for (iVar3 = FUN_004aa820(bea_arg(param_1), bea_arg(s_toestop_0062df4c), bea_arg(1)); BEA_LOOP_GUARD((iVar3 != 0));
      iVar3 = FUN_004aa820(bea_arg(param_1), bea_arg(s_toestop_0062df4c), bea_arg(iVar3))) {
    iVar3 = *(int *)((int)this_ + 0xc0) + 1;
    *(int *)((int)this_ + 0xc0) = iVar3;
  }
  iVar3 = (*(int *)((int)this_ + 0xc0) + -1) / *(int *)((int)this_ + 0xa8);
  *(int *)((int)this_ + 0xc0) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((int)this_ + 0xc0) = 1;
  }
  iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xa8) << 4), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x10b));
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  *(int *)((int)this_ + 0x14) = iVar3;
  uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xa8) << 2), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x10c));
  *(undefined4 *)((int)this_ + 0x18) = uVar4;
  uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xa8) << 2), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x10d));
  *(undefined4 *)((int)this_ + 0x1c) = uVar4;
  uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xa8) << 2), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x10e));
  *(undefined4 *)((int)this_ + 0x20) = uVar4;
  iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xa8) << 4), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x10f));
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  *(int *)((int)this_ + 0x24) = iVar3;
  uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xa8) * *(int *)((int)this_ + 0xc0) * 4), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x111));
  *(undefined4 *)((int)this_ + 0xbc) = uVar4;
  uVar4 = FUN_004aa630(bea_arg(param_1), bea_arg(s_ToeMotion_0062df40));
  iVar3 = FUN_004aa680(bea_arg(param_1), bea_arg(uVar4));
  if (iVar3 != 0) {
    *(undefined4 *)((int)this_ + 0xb4) = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)((int)this_ + 0xb8) = *(undefined4 *)(iVar3 + 0x18);
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this_ + 0xa8)) {
    local_160 = 0;
    do {
      iVar8 = 0;
      *(undefined4 *)(*(int *)((int)this_ + 0x1c) + iVar3 * 4) = 0;
      puVar2 = (undefined4 *)(local_160 + *(int *)((int)this_ + 0x14));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined4 *)(*(int *)((int)this_ + 0x20) + iVar3 * 4) = 0;
      puVar2 = (undefined4 *)(local_160 + *(int *)((int)this_ + 0x24));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      iVar5 = *(int *)((int)this_ + 0xc0);
      if (0 < iVar5) {
        do {
          iVar5 = iVar5 * iVar3 + iVar8;
          iVar8 = iVar8 + 1;
          *(undefined4 *)(*(int *)((int)this_ + 0xbc) + iVar5 * 4) =
               *(undefined4 *)((int)this_ + 0xb4);
          iVar5 = *(int *)((int)this_ + 0xc0);
        } while (BEA_LOOP_GUARD((iVar8 < iVar5)));
      }
      iVar3 = iVar3 + 1;
      local_160 = local_160 + 0x10;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0xa8))));
  }
  iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)param_1 + 0x15c) << 4), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x130));
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  *(int *)((int)this_ + 0x34) = iVar3;
  iVar3 = *(int *)((int)param_1 + 0x15c);
  iVar5 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 * 0x30), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x131));
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar8 = iVar5;
    if (-1 < iVar3 + -1) {
      do {
        FUN_004011b0(bea_arg(iVar8), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
        iVar3 = iVar3 + -1;
        iVar8 = iVar8 + 0x30;
      } while (BEA_LOOP_GUARD((iVar3 != 0)));
    }
  }
  *(int *)((int)this_ + 0x30) = iVar5;
  uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)param_1 + 0x15c) << 2), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x132));
  *(undefined4 *)((int)this_ + 0x38) = uVar4;
  iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)param_1 + 0x15c) << 4), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x134));
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  *(int *)((int)this_ + 0x40) = iVar3;
  iVar3 = *(int *)((int)param_1 + 0x15c);
  iVar5 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 * 0x30), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x135));
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar8 = iVar5;
    if (-1 < iVar3 + -1) {
      do {
        FUN_004011b0(bea_arg(iVar8), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
        iVar3 = iVar3 + -1;
        iVar8 = iVar8 + 0x30;
      } while (BEA_LOOP_GUARD((iVar3 != 0)));
    }
  }
  *(int *)((int)this_ + 0x3c) = iVar5;
  uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)param_1 + 0x15c) << 2), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x136));
  *(undefined4 *)((int)this_ + 0x44) = uVar4;
  if (*(int *)(*(int *)((int)this_ + 0xe4) + 0xc) == 0) {
    uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)param_1 + 0x15c) * 4), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x139));
    *(undefined4 *)(*(int *)((int)this_ + 0xe4) + 0xc) = uVar4;
  }
  if (*(int *)(*(int *)((int)this_ + 0xe4) + 0x10) == 0) {
    uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)param_1 + 0x15c) << 2), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x13b));
    *(undefined4 *)(*(int *)((int)this_ + 0xe4) + 0x10) = uVar4;
  }
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0x15c)) {
    local_fc = 0.0f;
    local_f8 = 0.0f;
    local_f4 = 0.0f;
    local_160 = 0;
    do {
      *(undefined4 *)(*(int *)((int)this_ + 0x38) + iVar3 * 4) = 0xbf800000;
      *(undefined4 *)(*(int *)((int)this_ + 0x44) + iVar3 * 4) = 0xbf800000;
      pfVar7 = (float *)(local_160 + *(int *)((int)this_ + 0x40));
      *pfVar7 = local_fc;
      pfVar7[1] = local_f8;
      pfVar7[2] = local_f4;
      pfVar7[3] = local_f0;
      iVar5 = *(int *)(*(int *)((int)param_1 + 0x160) + iVar3 * 4);
      iVar9 = iVar5 + 0xdc;
      iVar8 = FUN_00568390(bea_arg(iVar9), bea_arg(&DAT_0062dcbc));
      if (iVar8 == 0) {
        *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 0xc) + iVar3 * 4) = 1;
      }
      else {
        iVar8 = FUN_0056e170(bea_arg(iVar9), bea_arg(&PTR_DAT_0062df3c), bea_arg(3));
        if (iVar8 == 0) {
          *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 0xc) + iVar3 * 4) = 2;
          uVar4 = FUN_0055e2a6(bea_arg(iVar5 + 0xdf));
          *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 0x10) + iVar3 * 4) = uVar4;
        }
        else {
          iVar8 = FUN_0056e170(bea_arg(iVar9), bea_arg(&DAT_0062df34), bea_arg(4));
          if (iVar8 == 0) {
            *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 0xc) + iVar3 * 4) = 3;
          }
          else {
            iVar8 = FUN_0056e170(bea_arg(iVar9), bea_arg(&PTR_DAT_0062df30), bea_arg(3));
            if (iVar8 == 0) {
              *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 0xc) + iVar3 * 4) = 4;
              iVar5 = FUN_0055e2a6(bea_arg(iVar5 + 0xdf));
              *(int *)(*(int *)(*(int *)((int)this_ + 0xe4) + 0x10) + iVar3 * 4) = iVar5 + -1;
            }
            else {
              iVar5 = FUN_00568390(bea_arg(iVar9), bea_arg(&DAT_0062dd20));
              if (iVar5 == 0) {
                *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 0xc) + iVar3 * 4) = 5;
              }
              else {
                *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 0xc) + iVar3 * 4) = 0;
              }
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
      local_160 = local_160 + 0x10;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)param_1 + 0x15c))));
  }
  uVar4 = FUN_004aa630(bea_arg(param_1), bea_arg(s_LegMotion_00623074));
  iVar5 = FUN_004aa680(bea_arg(param_1), bea_arg(uVar4));
  iVar3 = *(int *)(iVar5 + 0x14);
  iVar5 = *(int *)(iVar5 + 0x18);
  *(int *)((int)this_ + 0xb0) = iVar3;
  iVar3 = (iVar5 - iVar3) + 1;
  *(int *)((int)this_ + 0xac) = iVar3;
  if (**(int **)((int)this_ + 0xe4) == 0) {
    uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 * 4), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x16d))
    ;
    **(undefined4 **)((int)this_ + 0xe4) = uVar4;
    iVar3 = 0;
    if (0 < *(int *)((int)this_ + 0xac)) {
      do {
        iVar3 = iVar3 + 1;
        *(undefined4 *)(**(int **)((int)this_ + 0xe4) + -4 + iVar3 * 4) = 0;
      } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0xac))));
    }
  }
  if (*(int *)(*(int *)((int)this_ + 0xe4) + 4) == 0) {
    uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xac) << 2), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x173));
    *(undefined4 *)(*(int *)((int)this_ + 0xe4) + 4) = uVar4;
    iVar3 = 0;
    if (0 < *(int *)((int)this_ + 0xac)) {
      do {
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 4) + -4 + iVar3 * 4) = 0;
      } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0xac))));
    }
  }
  local_158 = 0;
  if (0 < *(int *)((int)this_ + 0xac)) {
    local_15c = 0;
    do {
      if (*(int *)(**(int **)((int)this_ + 0xe4) + local_15c) == 0) {
        uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xa8) << 2), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x17b));
        *(undefined4 *)(**(int **)((int)this_ + 0xe4) + local_15c) = uVar4;
      }
      if (*(int *)(*(int *)(*(int *)((int)this_ + 0xe4) + 4) + local_15c) == 0) {
        iVar3 = *(int *)((int)this_ + 0xa8);
        iVar5 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 * 0x30), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x17d));
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar8 = iVar5;
          if (-1 < iVar3 + -1) {
            do {
              FUN_004011b0(bea_arg(iVar8), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
              iVar3 = iVar3 + -1;
              iVar8 = iVar8 + 0x30;
            } while (BEA_LOOP_GUARD((iVar3 != 0)));
          }
        }
        *(int *)(*(int *)(*(int *)((int)this_ + 0xe4) + 4) + local_15c) = iVar5;
      }
      local_160 = 0;
      if (0 < *(int *)((int)this_ + 0xa8)) {
        do {
          iVar3 = local_160 + 1;
          pvVar6 = (void *)FUN_004aa820(bea_arg(param_1), bea_arg(s_Footbase_0062df54), bea_arg(iVar3));
          FUN_004aa630(bea_arg(param_1), bea_arg(s_LegMotion_00623074));
          FUN_004b0fb0(bea_arg(pvVar6), bea_arg(*(int *)((int)this_ + 0xb0) + local_158), bea_arg(0), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(local_bc), bea_arg(&local_5c), bea_arg(1), bea_arg(0), bea_arg(0));
          iVar5 = 0;
          local_150 = 0.0f;
          if (0 < *(int *)((int)param_1 + 0x15c)) {
            do {
              iVar8 = FUN_0056e170(bea_arg(*(int *)(*(int *)((int)param_1 + 0x160) + iVar5 * 4) + 0xdc), bea_arg(&PTR_DAT_0062df3c), bea_arg(3));
              if ((iVar8 == 0) &&
                 (iVar8 = FUN_0055e2a6(bea_arg(*(int *)(*(int *)((int)param_1 + 0x160) + iVar5 * 4) + 0xdf)),
                 iVar8 == iVar3)) {
                FUN_004b0fb0(bea_arg(*(void **)(*(int *)((int)param_1 + 0x160) + iVar5 * 4)), bea_arg(*(int *)((int)this_ + 0xb0) + local_158), bea_arg(0), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(local_ec), bea_arg(&local_6c), bea_arg(1), bea_arg(0), bea_arg(0));
                local_10c = local_6c - local_5c;
                local_88 = local_68 - local_58;
                local_84 = local_64 - local_54;
                pfVar7 = (float *)(*(int *)(*(int *)(*(int *)((int)this_ + 0xe4) + 4) + local_15c) +
                                  local_160 * 0x30);
                local_150 = SQRT(local_88 * local_88 + local_84 * local_84 + local_10c * local_10c);
                local_10c = -local_10c;
                local_108 = -local_88;
                local_104 = -local_84;
                FUN_00401ec0(bea_arg(&local_14c), bea_arg(0.0f - local_104 * -1.0f), bea_arg(0), bea_arg(local_10c * -1.0f - 0.0f));
                FUN_00401ec0(bea_arg(&local_7c), bea_arg(local_144 * local_108 - local_104 * local_148), bea_arg(local_104 * local_14c - local_144 * local_10c), bea_arg(local_148 * local_10c - local_108 * local_14c));
                FUN_00406d50(bea_arg(&local_14c));
                FUN_00406d50(bea_arg(&local_7c));
                FUN_00406d50(bea_arg(&local_10c));
                *pfVar7 = local_14c;
                pfVar7[1] = local_7c;
                pfVar7[2] = local_10c;
                pfVar7[4] = local_148;
                pfVar7[5] = local_78;
                pfVar7[6] = local_108;
                pfVar7[8] = local_144;
                pfVar7[9] = local_74;
                pfVar7[10] = local_104;
              }
              iVar5 = iVar5 + 1;
            } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)param_1 + 0x15c))));
          }
          *(float *)(*(int *)(**(int **)((int)this_ + 0xe4) + local_15c) + local_160 * 4) = local_150
          ;
          local_160 = iVar3;
        } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0xa8))));
      }
      local_158 = local_158 + 1;
      local_15c = local_15c + 4;
    } while (BEA_LOOP_GUARD((local_158 < *(int *)((int)this_ + 0xac))));
  }
  if (*(int *)(*(int *)((int)this_ + 0xe4) + 8) == 0) {
    uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xa8) * *(int *)((int)this_ + 0xc0) * 4), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x1b7));
    *(undefined4 *)(*(int *)((int)this_ + 0xe4) + 8) = uVar4;
    iVar3 = 0;
    if (0 < *(int *)((int)this_ + 0xa8) * *(int *)((int)this_ + 0xc0)) {
      do {
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 8) + -4 + iVar3 * 4) = 0;
      } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0xa8) * *(int *)((int)this_ + 0xc0))));
    }
  }
  local_158 = 0;
  if (0 < *(int *)((int)this_ + 0xa8) * *(int *)((int)this_ + 0xc0)) {
    do {
      iVar3 = local_158 + 1;
      pvVar6 = (void *)FUN_004aa820(bea_arg(param_1), bea_arg(s_Toestop_0062df28), bea_arg(iVar3));
      if (pvVar6 == (void *)0x0) {
        *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 8) + local_158 * 4) = 0;
      }
      else {
        if (*(int *)(*(int *)(*(int *)((int)this_ + 0xe4) + 8) + local_158 * 4) == 0) {
          iVar5 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(((*(int *)((int)this_ + 0xb8) - *(int *)((int)this_ + 0xb4)) + 1) *
                               0x10), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_MCMech_cpp_0062df60), bea_arg(0x1c4));
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          *(int *)(*(int *)(*(int *)((int)this_ + 0xe4) + 8) + local_158 * 4) = iVar5;
        }
        iVar5 = *(int *)((int)this_ + 0xb4);
        if (iVar5 <= *(int *)((int)this_ + 0xb8)) {
          do {
            this_00 = *(void **)(*(int *)((int)pvVar6 + 0x98) + 0x98);
            FUN_004b0fb0(bea_arg(pvVar6), bea_arg(iVar5), bea_arg(iVar5), bea_arg(0), bea_arg(0), bea_arg(local_3c), bea_arg(&local_fc), bea_arg(1), bea_arg(0), bea_arg(0));
            FUN_004b0fb0(bea_arg(this_00), bea_arg(iVar5), bea_arg(iVar5), bea_arg(0), bea_arg(0), bea_arg(&local_13c), bea_arg(&local_4c), bea_arg(1), bea_arg(0), bea_arg(0));
            local_fc = local_fc - local_4c;
            local_f8 = local_f8 - local_48;
            local_f4 = local_f4 - local_44;
            local_bc[0] = local_114 * local_128 - local_124 * local_118;
            local_bc[1] = -(local_114 * local_12c - local_124 * local_11c);
            local_bc[2] = local_12c * local_118 - local_128 * local_11c;
            local_ac = -(local_138 * local_114 - local_134 * local_118);
            local_a8 = local_114 * local_13c - local_134 * local_11c;
            local_a4 = -(local_118 * local_13c - local_138 * local_11c);
            local_9c = local_138 * local_124 - local_134 * local_128;
            local_98 = -(local_124 * local_13c - local_134 * local_12c);
            local_94 = local_128 * local_13c - local_138 * local_12c;
            pfVar7 = local_bc;
            pfVar10 = local_ec;
            for (iVar8 = 0xc; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
              *pfVar10 = *pfVar7;
              pfVar7 = pfVar7 + 1;
              pfVar10 = pfVar10 + 1;
            }
            fVar1 = (local_12c * local_118 - local_128 * local_11c) * local_134 +
                    ((local_114 * local_128 - local_124 * local_118) * local_13c -
                    (local_114 * local_12c - local_124 * local_11c) * local_138);
            local_ec[0] = local_bc[0] / fVar1;
            local_ec[1] = local_ac / fVar1;
            local_ec[2] = local_9c / fVar1;
            local_dc = local_bc[1] / fVar1;
            local_d8 = local_d8 / fVar1;
            local_d4 = local_c8 / fVar1;
            local_cc = local_bc[2] / fVar1;
            local_c8 = local_a4 / fVar1;
            local_c4 = local_c4 / fVar1;
            // the asm's grouping, (m0*dx + m2*dz) + m1*dy (bug class 19; dx..dz stay in x87
            // registers, which check_fp_order cannot name: the 522 cheat win parted at 72 s)
            local_14c = local_ec[0] * local_fc + local_ec[2] * local_f4 + local_ec[1] * local_f8;
            local_148 = local_dc * local_fc + local_d4 * local_f4 + local_d8 * local_f8;
            local_144 = local_cc * local_fc + local_c4 * local_f4 + local_c8 * local_f8;
            local_f0 = local_140;
            pfVar7 = (float *)(*(int *)(*(int *)(*(int *)((int)this_ + 0xe4) + 8) + local_158 * 4) +
                              (iVar5 - *(int *)((int)this_ + 0xb4)) * 0x10);
            *pfVar7 = local_14c;
            pfVar7[1] = local_148;
            pfVar7[2] = local_144;
            iVar5 = iVar5 + 1;
            pfVar7[3] = local_140;
            local_fc = local_14c;
            local_f8 = local_148;
            local_f4 = local_144;
          } while (BEA_LOOP_GUARD((iVar5 <= *(int *)((int)this_ + 0xb8))));
        }
      }
      local_158 = iVar3;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0xa8) * *(int *)((int)this_ + 0xc0))));
  }
  return;
}

__attribute__((naked)) static void ap_00498c40()
{
    __asm__ volatile(
        "movl -0x4(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x15c\n\t"
        "movl -0x8(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x158\n\t"
        "movl -0xc(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x154\n\t"
        "movl -0x10(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x150\n\t"
        "movl -0x14(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x14c\n\t"
        "movl -0x18(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x148\n\t"
        "movl -0x1c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x144\n\t"
        "movl -0x20(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x140\n\t"
        "movl -0x24(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x13c\n\t"
        "movl -0x28(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x138\n\t"
        "movl -0x2c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x134\n\t"
        "movl -0x30(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x130\n\t"
        "movl -0x34(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x12c\n\t"
        "movl -0x38(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x128\n\t"
        "movl -0x3c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x124\n\t"
        "movl -0x40(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x120\n\t"
        "movl -0x44(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x11c\n\t"
        "movl -0x48(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x118\n\t"
        "movl -0x4c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x114\n\t"
        "movl -0x50(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x110\n\t"
        "movl -0x54(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x10c\n\t"
        "movl -0x58(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x108\n\t"
        "movl -0x5c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x104\n\t"
        "movl -0x60(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x100\n\t"
        "movl -0x64(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xfc\n\t"
        "movl -0x68(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xf8\n\t"
        "movl -0x6c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xf4\n\t"
        "movl -0x70(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xf0\n\t"
        "movl -0x74(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xec\n\t"
        "movl -0x78(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xe8\n\t"
        "movl -0x7c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xe4\n\t"
        "movl -0x80(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xe0\n\t"
        "movl -0x84(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xdc\n\t"
        "movl -0x88(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xd8\n\t"
        "movl -0x8c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xd4\n\t"
        "movl -0x90(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xd0\n\t"
        "movl -0x94(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xcc\n\t"
        "movl -0x98(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xc8\n\t"
        "movl -0x9c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xc4\n\t"
        "movl -0xa0(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xc0\n\t"
        "movl -0xa4(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xbc\n\t"
        "movl -0xa8(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xb8\n\t"
        "movl -0xac(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xb4\n\t"
        "movl -0xb0(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xb0\n\t"
        "movl -0xb4(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xac\n\t"
        "movl -0xb8(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xa8\n\t"
        "movl -0xbc(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xa4\n\t"
        "movl -0xc0(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xa0\n\t"
        "movl -0xc4(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x9c\n\t"
        "movl -0xc8(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x98\n\t"
        "movl -0xcc(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x94\n\t"
        "movl -0xd0(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x90\n\t"
        "movl -0xd4(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x8c\n\t"
        "movl -0xd8(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x88\n\t"
        "movl -0xdc(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x84\n\t"
        "movl -0xe0(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x80\n\t"
        "movl -0xe4(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x7c\n\t"
        "movl -0xe8(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x78\n\t"
        "movl -0xec(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x74\n\t"
        "movl -0xf0(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x70\n\t"
        "movl -0xf4(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x6c\n\t"
        "movl -0xf8(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x68\n\t"
        "movl -0xfc(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x64\n\t"
        "movl -0x100(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x60\n\t"
        "movl -0x104(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x5c\n\t"
        "movl -0x108(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x58\n\t"
        "movl -0x10c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x54\n\t"
        "movl -0x110(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x50\n\t"
        "movl -0x114(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x4c\n\t"
        "movl -0x118(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x48\n\t"
        "movl -0x11c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x44\n\t"
        "movl -0x120(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x40\n\t"
        "movl -0x124(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x3c\n\t"
        "movl -0x128(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x38\n\t"
        "movl -0x12c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x34\n\t"
        "movl -0x130(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x30\n\t"
        "movl -0x134(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x2c\n\t"
        "movl -0x138(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x28\n\t"
        "movl -0x13c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x24\n\t"
        "movl -0x140(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x20\n\t"
        "movl -0x144(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x1c\n\t"
        "movl -0x148(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x18\n\t"
        "movl -0x14c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x14\n\t"
        "movl -0x150(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x10\n\t"
        "movl -0x154(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0xc\n\t"
        "movl -0x158(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x8\n\t"
        "movl -0x15c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x4\n\t"
        "movl -0x160(%esp), %eax\n\t"
        "movl %eax, g_frame_in_00498c40+0x0\n\t"
        "jmp ap_00498c40_body\n\t"
    );
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00498c40, ap_00498c40));
