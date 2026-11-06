// auto-ported from 00488090_FUN_00488090.c (FUN_00488090, 336 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_0067a5e8 GLOBAL_AT(undefined4, 0x0067a5e8)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0067a618 GLOBAL_AT(int, 0x0067a618)
#define DAT_0067a61c GLOBAL_AT(int, 0x0067a61c)
#define DAT_0067a620 GLOBAL_AT(int, 0x0067a620)
#define DAT_0067a624 GLOBAL_AT(int, 0x0067a624)
typedef uint32_t (BEA_CDECL* FUN_0044a650_t)(void);
static const bea_guard<FUN_0044a650_t> FUN_0044a650 = {(FUN_0044a650_t)0x0044a650};
typedef uint32_t (BEA_THISCALL* FUN_004de860_t)(uint32_t);
static const bea_guard<FUN_004de860_t> FUN_004de860 = {(FUN_004de860_t)0x004de860};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};

static void BEA_THISCALL ap_00488090(void * this_)
{
  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x14);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x18);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x1c);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x20);
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x24);
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)((int)this_ + 0x1fc) != 0) {
    FUN_0044a650();
    DAT_009c68ac = 0;
    DAT_009c690d = 1;
    DAT_009c68ad = 0;
    DAT_009c6910 = 1;
    FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
    uVar4 = 0x4880ec;
    FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
    FUN_00513bc0(bea_arg(0x17), bea_arg(8));
    uVar7 = 0;
    uVar6 = 0xe;
    uVar5 = 0x488108;
    FUN_00513bc0(bea_arg(0xe), bea_arg(0));
    puVar2 = &DAT_0067a5e8;
    puVar3 = (undefined4 *)&local_40;
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(DAT_0067a618), bea_arg(DAT_0067a61c), bea_arg(DAT_0067a620), bea_arg(DAT_0067a624), bea_arg(local_40), bea_arg(local_3c), bea_arg(local_38), bea_arg(local_34), bea_arg(local_30), bea_arg(local_2c), bea_arg(local_28), bea_arg(local_24), bea_arg(local_20), bea_arg(local_1c), bea_arg(local_18), bea_arg(local_14));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    FUN_004de860(bea_arg(*(void **)((int)this_ + 0x1fc)));
    iVar1 = *(int *)((int)this_ + 0x1fc);
    if (*(char *)(iVar1 + 100) != '\0') {
      if (iVar1 != 0) {
        bea_vcall<uint32_t>(iVar1 + 4, 0x4, 1);
      }
      *(undefined4 *)((int)this_ + 0x1fc) = 0;
    }
    DAT_009c68ac = 1;
    DAT_009c690d = 1;
    DAT_009c68ad = 1;
    DAT_009c6910 = 1;
    FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
    FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
    FUN_00513bc0(bea_arg(0x17), bea_arg(4));
    FUN_00513bc0(bea_arg(0xe), bea_arg(1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488090, ap_00488090));
