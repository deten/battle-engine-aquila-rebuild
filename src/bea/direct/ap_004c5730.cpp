// auto-ported from 004c5730_vslot6.c (CPDPMesh::vslot6, 480 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPDPMesh;
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

static undefined4 BEA_THISCALL ap_004c5730(CPDPMesh * this_, void *param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  CPDPMesh *pCVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1000), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_ParticleDescri_00630cd8), bea_arg(0x83d));
  do {
    FUN_004f57b0(bea_arg(param_1), bea_arg(&local_4), bea_arg(&local_c), bea_arg(&local_8), bea_arg(uVar1));
    switch(local_4) {
    case 0xb:
      uVar2 = FUN_0054fbc0(bea_arg(uVar1), bea_arg(*(int *)(this_ + 0x68) + 1));
      *(undefined4 *)(this_ + 100) = uVar2;
    default:
      goto switchD_004c5788_caseD_c;
    case 0xd:
      *(undefined4 *)(this_ + 0x68) = local_c;
      goto switchD_004c5788_caseD_c;
    case 0x10:
      FUN_004f5b70(bea_arg(param_1), bea_arg(local_c), bea_arg(this_ + 0x6c));
      goto switchD_004c5788_caseD_c;
    case 0x1b:
      *(undefined4 *)(this_ + 0x60) = local_c;
      goto switchD_004c5788_caseD_c;
    case 0x3f:
      *(undefined4 *)(this_ + 0x5c) = local_c;
      goto switchD_004c5788_caseD_c;
    case 0x6b:
      pCVar3 = this_ + 0x74;
      break;
    case 0x6c:
      pCVar3 = this_ + 0x7c;
      break;
    case 0x6d:
      pCVar3 = this_ + 0x84;
      break;
    case 0x6e:
      pCVar3 = this_ + 0x8c;
      break;
    case 0x6f:
      *(undefined4 *)(this_ + 0x94) = local_c;
      goto switchD_004c5788_caseD_c;
    case 0x70:
      *(undefined4 *)(this_ + 0x98) = local_c;
      goto switchD_004c5788_caseD_c;
    case 0x71:
      pCVar3 = this_ + 0x9c;
      break;
    case 0x72:
      pCVar3 = this_ + 0xa4;
      break;
    case 0x73:
      pCVar3 = this_ + 0xac;
      break;
    case 0x74:
      FUN_004f5b70(bea_arg(param_1), bea_arg(local_c), bea_arg(this_ + 0x70));
      goto switchD_004c5788_caseD_c;
    case 0x75:
      *(undefined4 *)(this_ + 0xb4) = local_c;
      goto switchD_004c5788_caseD_c;
    case 0x76:
      *(undefined4 *)(this_ + 0xb8) = local_c;
      goto switchD_004c5788_caseD_c;
    case 0x77:
      pCVar3 = this_ + 0xdc;
      break;
    case 0x78:
      pCVar3 = this_ + 0xbc;
      break;
    case 0x79:
      pCVar3 = this_ + 0xc4;
      break;
    case 0x7a:
      pCVar3 = this_ + 0xcc;
      break;
    case 0x7b:
      pCVar3 = this_ + 0xd4;
    }
    FUN_004f5b80(bea_arg(param_1), bea_arg(local_8), bea_arg(local_c), bea_arg(pCVar3));
switchD_004c5788_caseD_c:
    if (local_4 == 5) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar1));
      return 1;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c5730, ap_004c5730));
