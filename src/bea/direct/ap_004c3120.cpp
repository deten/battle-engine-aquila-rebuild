// auto-ported from 004c3120_vslot6.c (CPDTrail::vslot6, 593 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPDTrail;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_ParticleDescri_00630cd8 ((char*)0x00630cd8)
typedef undefined4 (BEA_THISCALL* FUN_004f57b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f57b0_t> FUN_004f57b0 = {(FUN_004f57b0_t)0x004f57b0};
typedef uint32_t (BEA_THISCALL* FUN_004f5b70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f5b70_t> FUN_004f5b70 = {(FUN_004f5b70_t)0x004f5b70};
typedef uint32_t (BEA_THISCALL* FUN_004f5b80_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f5b80_t> FUN_004f5b80 = {(FUN_004f5b80_t)0x004f5b80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef char * (BEA_CDECL* FUN_0054fbc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0054fbc0_t> FUN_0054fbc0 = {(FUN_0054fbc0_t)0x0054fbc0};

static undefined4 BEA_THISCALL ap_004c3120(CPDTrail * this_, void *param_1)
{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CPDTrail *pCVar5;
  uint uVar6;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1000), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_ParticleDescri_00630cd8), bea_arg(0x4ea));
  do {
    FUN_004f57b0(bea_arg(param_1), bea_arg(&local_4), bea_arg(&local_c), bea_arg(&local_8), bea_arg(uVar3));
    switch(local_4) {
    case 8:
      *(undefined4 *)(this_ + 0x80) = local_c;
      break;
    case 0xb:
      uVar4 = FUN_0054fbc0(bea_arg(uVar3), bea_arg(*(int *)(this_ + 100) + 1));
      *(undefined4 *)(this_ + 0x5c) = uVar4;
      break;
    case 0xd:
      *(undefined4 *)(this_ + 100) = local_c;
      break;
    case 0xe:
      *(undefined4 *)(this_ + 0x60) = local_c;
      break;
    case 0x10:
      FUN_004f5b70(bea_arg(param_1), bea_arg(local_c), bea_arg(this_ + 0x74));
      break;
    case 0x1b:
      *(undefined4 *)(this_ + 0x84) = local_c;
      break;
    case 0x22:
      *(undefined4 *)(this_ + 0x98) = local_c;
      break;
    case 0x3f:
      *(undefined4 *)(this_ + 0x90) = local_c;
      break;
    case 0x47:
      *(undefined4 *)(this_ + 0x6c) = local_8;
      break;
    case 0x48:
      *(undefined4 *)(this_ + 0x68) = local_c;
      break;
    case 0x49:
      *(undefined4 *)(this_ + 0x70) = local_8;
      break;
    case 0x4a:
      *(undefined4 *)(this_ + 0x78) = local_8;
      break;
    case 0x4b:
      *(undefined4 *)(this_ + 0x7c) = local_8;
      break;
    case 0x4c:
      *(undefined4 *)(this_ + 0x88) = local_c;
      break;
    case 0x4d:
      *(undefined4 *)(this_ + 0x8c) = local_c;
      break;
    case 0x4e:
      *(undefined4 *)(this_ + 0x9c) = local_c;
      break;
    case 0x4f:
      *(undefined4 *)(this_ + 0xa0) = local_c;
      break;
    case 0x50:
      *(undefined4 *)(this_ + 0xa4) = local_8;
      break;
    case 0x51:
      *(undefined4 *)(this_ + 0xa8) = local_c;
      break;
    case 0x52:
      pCVar5 = this_ + 0xac;
      goto LAB_004c329d;
    case 0x53:
      pCVar5 = this_ + 0xb4;
LAB_004c329d:
      FUN_004f5b80(bea_arg(param_1), bea_arg(local_8), bea_arg(local_c), bea_arg(pCVar5));
      break;
    case 0x54:
      *(undefined4 *)(this_ + 0xbc) = local_c;
      break;
    case 0x67:
      FUN_004f5b70(bea_arg(param_1), bea_arg(local_c), bea_arg(this_ + 0x94));
    }
    if (local_4 == 5) {
      if ((*(int *)(this_ + 0x5c) == 0) || (uVar1 = *(uint *)(this_ + 0x60), uVar1 == 0xffffffff)) {
        *(undefined4 *)(this_ + 0xc4) = 0;
        *(undefined4 *)(this_ + 0xc0) = 0;
        *(undefined4 *)(this_ + 0xcc) = 0x3f800000;
        *(undefined4 *)(this_ + 200) = 0x3f800000;
      }
      else {
        uVar6 = uVar1 & 0x80000003;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
        }
        *(float *)(this_ + 0xc0) = (float)(int)uVar6 * 0.25f;
        fVar2 = (float)((int)uVar1 >> 2) * 0.25f;
        *(float *)(this_ + 0xc4) = fVar2;
        *(float *)(this_ + 200) = (float)(int)uVar6 * 0.25f + 0.25f;
        *(float *)(this_ + 0xcc) = fVar2 + 0.25f;
      }
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar3));
      return 1;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c3120, ap_004c3120));
