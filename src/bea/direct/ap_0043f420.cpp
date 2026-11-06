// auto-ported from 0043f420_vslot64.c (CCutscene::vslot64, 239 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CCutscene;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
#define DAT_0066ea20 GLOBAL_AT(int, 0x0066ea20)
#define DAT_006281b8 GLOBAL_AT(int, 0x006281b8)
#define DAT_008aa4e8 GLOBAL_AT(int, 0x008aa4e8)
typedef uint32_t (BEA_THISCALL* FUN_0044a110_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a110_t> FUN_0044a110 = {(FUN_0044a110_t)0x0044a110};
typedef uint32_t (BEA_THISCALL* FUN_0046f2d0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046f2d0_t> FUN_0046f2d0 = {(FUN_0046f2d0_t)0x0046f2d0};
typedef uint32_t (BEA_THISCALL* FUN_00481f40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00481f40_t> FUN_00481f40 = {(FUN_00481f40_t)0x00481f40};
typedef uint32_t (BEA_THISCALL* FUN_0053f010_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053f010_t> FUN_0053f010 = {(FUN_0053f010_t)0x0053f010};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_0043f420(CCutscene * this_)
{
  CCutscene CVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  CCutscene *pCVar5;
  CCutscene *pCVar6;
  undefined4 uVar7;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x28);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x30 - 0x20);
  undefined1 (&auStack_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x30 - 0x10);
  if (this_[0x6b8] != (CCutscene)0x0) {
    if (this_[0x840] != (CCutscene)0x0) {
      FUN_0046f2d0(bea_arg(&DAT_008a9a98), bea_arg(0), bea_arg(*(undefined4 *)(this_ + 0x738)));
      if (*(int **)(this_ + 0x734) != (int *)0x0) {
        bea_vcall<uint32_t>(*(int **)(this_ + 0x734), 0x20, 1);
      }
      puVar2 = *(undefined4 **)(this_ + 0x738);
      iVar3 = bea_vcall<uint32_t>(puVar2, 0x0, local_20);
      local_28 = (undefined4)(longlong)ROUND(*(float *)(iVar3 + 4));
      uVar7 = local_28;
      pfVar4 = (float *)bea_vcall<uint32_t>(puVar2, 0x0, auStack_10);
      local_28 = (undefined4)(longlong)ROUND(*pfVar4);
      FUN_0044a110(bea_arg(&DAT_0089c9a0), bea_arg(local_28), bea_arg(uVar7));
      this_[0x2c] = (CCutscene)((byte)this_[0x2c] | 8);
      this_[0x840] = (CCutscene)0x0;
    }
    this_[0x6b8] = (CCutscene)0x0;
    pCVar5 = this_ + 0x73c;
    iVar3 = -1;
    DAT_0066ea20 = 0;
    pCVar6 = pCVar5;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      CVar1 = *pCVar6;
      pCVar6 = pCVar6 + 1;
    } while (BEA_LOOP_GUARD((CVar1 != (CCutscene)0x0)));
    if (iVar3 != -2) {
      iVar3 = FUN_00568390(bea_arg(pCVar5), bea_arg(&DAT_006281b8));
      if (iVar3 == 0) {
        FUN_0053f010(bea_arg(&DAT_0089c9a0), bea_arg(0xff), bea_arg(1));
        return;
      }
      FUN_00481f40(bea_arg(&DAT_008aa4e8), bea_arg(pCVar5), bea_arg(1));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043f420, ap_0043f420));
