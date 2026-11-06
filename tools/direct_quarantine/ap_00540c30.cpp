// auto-ported from 00540c30_FUN_00540c30.c (FUN_00540c30, 831 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xc0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9788 GLOBAL_AT(undefined4, 0x008a9788)
#define DAT_009c65c0 GLOBAL_AT(undefined4, 0x009c65c0)
#define DAT_008a97b8 GLOBAL_AT(int, 0x008a97b8)
#define DAT_008a97bc GLOBAL_AT(int, 0x008a97bc)
#define DAT_008a97c0 GLOBAL_AT(int, 0x008a97c0)
#define DAT_008a97c4 GLOBAL_AT(int, 0x008a97c4)
#define DAT_009c68a8 GLOBAL_AT(int, 0x009c68a8)
#define DAT_009c690c GLOBAL_AT(char, 0x009c690c)
#define DAT_009c68fc GLOBAL_AT(char, 0x009c68fc)
#define DAT_009c68a0 GLOBAL_AT(char, 0x009c68a0)
#define DAT_009c6904 GLOBAL_AT(char, 0x009c6904)
#define DAT_009c661c GLOBAL_AT(undefined4, 0x009c661c)
#define DAT_009c68fd GLOBAL_AT(char, 0x009c68fd)
#define DAT_009c68a1 GLOBAL_AT(char, 0x009c68a1)
#define DAT_009c6905 GLOBAL_AT(char, 0x009c6905)
#define DAT_009c6678 GLOBAL_AT(undefined4, 0x009c6678)
#define DAT_009c68fe GLOBAL_AT(char, 0x009c68fe)
#define DAT_009c68a2 GLOBAL_AT(char, 0x009c68a2)
#define DAT_009c6906 GLOBAL_AT(char, 0x009c6906)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_0083d248 GLOBAL_AT(int, 0x0083d248)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
typedef uint32_t (BEA_THISCALL* FUN_0044a5f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a5f0_t> FUN_0044a5f0 = {(FUN_0044a5f0_t)0x0044a5f0};
typedef uint32_t (BEA_THISCALL* FUN_004901e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004901e0_t> FUN_004901e0 = {(FUN_004901e0_t)0x004901e0};
typedef uint32_t (BEA_CDECL* FUN_004cb300_t)(void);
static const bea_guard<FUN_004cb300_t> FUN_004cb300 = {(FUN_004cb300_t)0x004cb300};
typedef uint32_t (BEA_CDECL* FUN_004cbc60_t)(void);
static const bea_guard<FUN_004cbc60_t> FUN_004cbc60 = {(FUN_004cbc60_t)0x004cbc60};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_0054f7e0_t)(uint32_t);
static const bea_guard<FUN_0054f7e0_t> FUN_0054f7e0 = {(FUN_0054f7e0_t)0x0054f7e0};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};

static uint32_t BEA_CDECL ap_00540c30(void)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  alignas(16) uint8_t bea_frame_[0xc0] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xbc);
  undefined4 &local_b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xb8);
  undefined4 &local_b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xb4);
  undefined4 &local_b0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xb0);
  undefined4 uVar4;
  undefined4 &local_ac = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xac);
  undefined4 uVar5;
  undefined4 &local_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xa8);
  undefined4 uVar6;
  undefined4 &local_a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xa4);
  undefined4 uVar7;
  undefined4 &local_a0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xa0);
  undefined4 uVar8;
  undefined4 &local_9c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x9c);
  undefined4 &local_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x98);
  undefined4 uVar9;
  undefined4 &local_94 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x94);
  undefined4 uVar10;
  undefined4 &local_90 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x90);
  undefined4 uVar11;
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x70);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x5c);
  undefined1 (&local_58)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xc0 - 0x58);
  undefined1 (&local_48)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xc0 - 0x48);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x14);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xc0 - 0x10);
  puVar2 = &DAT_008a9788;
  puVar3 = (undefined4 *)&local_bc;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(DAT_008a97b8), bea_arg(DAT_008a97bc), bea_arg(DAT_008a97c0), bea_arg(DAT_008a97c4), bea_arg(local_bc), bea_arg(local_b8), bea_arg(local_b4), bea_arg(local_b0), bea_arg(local_ac), bea_arg(local_a8), bea_arg(local_a4), bea_arg(local_a0), bea_arg(local_9c), bea_arg(local_98), bea_arg(local_94), bea_arg(local_90));
  local_5c = 0;
  FUN_0044a5f0(bea_arg(local_48), bea_arg(0), bea_arg(0), bea_arg(0));
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  FUN_0044a5f0(bea_arg(local_58), bea_arg(0), bea_arg(0), bea_arg(0));
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_0044a5f0(bea_arg(local_10), bea_arg(0), bea_arg(0), bea_arg(0));
  DAT_009c68a8 = 0;
  DAT_009c690c = 1;
  FUN_004901e0(bea_arg(&local_5c), bea_arg(0), bea_arg(0xbf311433), bea_arg(0x3f311433), bea_arg(0x3e547ea3), bea_arg(local_70), bea_arg(0x3ef5c290), bea_arg(0x3e75c290), bea_arg(0x3df5c290));
  puVar2 = &local_5c;
  puVar3 = &DAT_009c65c0;
  for (iVar1 = 0x17; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_009c68fc = 1;
  DAT_009c68a0 = 1;
  DAT_009c6904 = 1;
  FUN_004901e0(bea_arg(&local_5c), bea_arg(0), bea_arg(0x3f311433), bea_arg(0x3f311433), bea_arg(0x3e547ea3), bea_arg(local_70), bea_arg(0x3df5c290), bea_arg(0x3e75c290), bea_arg(0x3ef5c290));
  puVar2 = &local_5c;
  puVar3 = &DAT_009c661c;
  for (iVar1 = 0x17; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_009c68fd = 1;
  DAT_009c68a1 = 1;
  DAT_009c6905 = 1;
  uVar7 = 0x3f7b0756;
  uVar8 = 0x3e48d2ab;
  uVar10 = 0x3e75c290;
  uVar9 = 0x3e75c290;
  uVar5 = 0;
  uVar6 = 0;
  uVar4 = 0x540e9f;
  FUN_004901e0(bea_arg(&local_5c), bea_arg(0), bea_arg(0), bea_arg(0x3f7b0756), bea_arg(0x3e48d2ab), bea_arg(local_60), bea_arg(0x3e75c290), bea_arg(0x3e75c290), bea_arg(0x3e75c290));
  puVar2 = &local_5c;
  puVar3 = &DAT_009c6678;
  for (iVar1 = 0x17; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_009c68fe = 1;
  DAT_009c68a2 = 1;
  DAT_009c6906 = 1;
  DAT_009c68ad = 1;
  DAT_009c6910 = 1;
  FUN_004cb300();
  uVar11 = 0x540ee1;
  FUN_004cbc60();
  puVar2 = &DAT_008a9788;
  puVar3 = (undefined4 *)&local_bc;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(DAT_008a97b8), bea_arg(DAT_008a97bc), bea_arg(DAT_008a97c0), bea_arg(DAT_008a97c4), bea_arg(local_bc), bea_arg(local_b8), bea_arg(local_b4), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(local_60), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11));
  bea_vcall<uint32_t>(DAT_00888a50, 0xc4, DAT_00888a50,&DAT_0083d248);
  DAT_009c68ad = 0;
  DAT_009c6910 = 1;
  FUN_00513bc0(bea_arg(0xf), bea_arg(0));
  FUN_0054f7e0(bea_arg(&DAT_009c63e8));
  return FUN_00513bc0(bea_arg(0xf), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00540c30, ap_00540c30));
