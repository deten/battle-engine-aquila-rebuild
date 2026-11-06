// auto-ported from 004c05c0_vslot6.c (CPDSimpleSprite::vslot6, 462 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPDSimpleSprite;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_ParticleDescri_00630cd8 ((char*)0x00630cd8)
typedef uint32_t (BEA_THISCALL* FUN_004c0940_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c0940_t> FUN_004c0940 = {(FUN_004c0940_t)0x004c0940};
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

static undefined4 BEA_THISCALL ap_004c05c0(CPDSimpleSprite * this_, void *param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1000), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_ParticleDescri_00630cd8), bea_arg(0xcd));
  do {
    FUN_004f57b0(bea_arg(param_1), bea_arg(&local_4), bea_arg(&local_c), bea_arg(&local_8), bea_arg(uVar1));
    switch(local_4) {
    case 6:
      FUN_004f5b80(bea_arg(param_1), bea_arg(local_8), bea_arg(local_c), bea_arg(this_ + 0x5c));
      break;
    case 7:
      *(undefined4 *)(this_ + 100) = local_8;
      break;
    case 8:
      *(undefined4 *)(this_ + 0x68) = local_c;
      break;
    case 9:
      *(undefined4 *)(this_ + 0x78) = local_c;
      break;
    case 10:
      *(undefined4 *)(this_ + 0x7c) = local_c;
      break;
    case 0xb:
      uVar2 = FUN_0054fbc0(bea_arg(uVar1), bea_arg(*(int *)(this_ + 0x88) + 1));
      *(undefined4 *)(this_ + 0x6c) = uVar2;
      break;
    case 0xc:
      FUN_004f5b70(bea_arg(param_1), bea_arg(local_c), bea_arg(this_ + 0x80));
      break;
    case 0xd:
      *(undefined4 *)(this_ + 0x88) = local_c;
      break;
    case 0xe:
      *(undefined4 *)(this_ + 0x8c) = local_c;
      break;
    case 0xf:
      *(undefined4 *)(this_ + 0x90) = local_c;
      break;
    case 0x10:
      FUN_004f5b70(bea_arg(param_1), bea_arg(local_c), bea_arg(this_ + 0x84));
      break;
    case 0x11:
      *(undefined4 *)(this_ + 0xa4) = local_c;
      break;
    case 0x12:
      *(undefined4 *)(this_ + 0xa8) = local_c;
      break;
    case 0x13:
      *(undefined4 *)(this_ + 0xb0) = local_8;
      break;
    case 0x14:
      *(undefined4 *)(this_ + 0xac) = local_c;
      break;
    case 0x15:
      *(undefined4 *)(this_ + 0x94) = local_8;
      break;
    case 0x16:
      *(undefined4 *)(this_ + 0x74) = local_8;
      break;
    case 0x17:
      *(undefined4 *)(this_ + 0xb4) = local_c;
      break;
    case 0x18:
      FUN_004f5b80(bea_arg(param_1), bea_arg(local_8), bea_arg(local_c), bea_arg(this_ + 0x98));
      break;
    case 0x19:
      *(undefined4 *)(this_ + 0xa0) = local_c;
      break;
    case 0x1b:
      *(undefined4 *)(this_ + 0x70) = local_c;
    }
  } while (BEA_LOOP_GUARD((local_4 != 5)));
  FUN_004c0940(bea_arg(this_), bea_arg(*(undefined4 *)(this_ + 0x8c)), bea_arg(*(undefined4 *)(this_ + 0xac)));
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar1));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c05c0, ap_004c05c0));
