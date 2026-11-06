// auto-ported from 00541430_FUN_00541430.c (FUN_00541430, 541 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CTweakSLONG;
typedef char IAT;
#define DAT_008a9810 GLOBAL_AT(int, 0x008a9810)
#define DAT_008a9830 GLOBAL_AT(int, 0x008a9830)
#define DAT_008a982c GLOBAL_AT(char, 0x008a982c)
#define DAT_00663050 GLOBAL_AT(int, 0x00663050)
#define DAT_008a9938 GLOBAL_AT(int, 0x008a9938)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00888aac GLOBAL_AT(int, 0x00888aac)
#define DAT_00888ab0 GLOBAL_AT(int, 0x00888ab0)
#define DAT_008a9a54 GLOBAL_AT(int, 0x008a9a54)
#define DAT_008a9a48 GLOBAL_AT(int, 0x008a9a48)
#define s_couldn_t_create_UMTex__d_00650728 ((char*)0x00650728)
#define s_failed_to_find_file_0065076c ((char*)0x0065076c)
#define s_C__dev_ONSLAUGHT2_DXFrontEndVide_00650744 ((char*)0x00650744)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* CTweakSLONG__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakSLONG__vslot0_t> CTweakSLONG__vslot0 = {(CTweakSLONG__vslot0_t)0x00528ad0};
typedef uint32_t (BEA_STDCALL* FUN_0042c750_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042c750_t> FUN_0042c750 = {(FUN_0042c750_t)0x0042c750};
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef void * (BEA_THISCALL* FUN_004f79d0_t)(uint32_t);
static const bea_guard<FUN_004f79d0_t> FUN_004f79d0 = {(FUN_004f79d0_t)0x004f79d0};
typedef uint32_t (BEA_THISCALL* FUN_004f7ab0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f7ab0_t> FUN_004f7ab0 = {(FUN_004f7ab0_t)0x004f7ab0};
typedef uint32_t (BEA_THISCALL* FUN_00528da0_t)(uint32_t);
static const bea_guard<FUN_00528da0_t> FUN_00528da0 = {(FUN_00528da0_t)0x00528da0};
typedef uint32_t (BEA_THISCALL* FUN_00528dc0_t)(uint32_t);
static const bea_guard<FUN_00528dc0_t> FUN_00528dc0 = {(FUN_00528dc0_t)0x00528dc0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_STDCALL* _BinkDoFrame_4_t)(uint32_t);
#define _BinkDoFrame_4 (*(_BinkDoFrame_4_t*)0x005d8328)   /* BINKW32.DLL import, via the IAT */
typedef uint32_t (BEA_STDCALL* _BinkNextFrame_4_t)(uint32_t);
#define _BinkNextFrame_4 (*(_BinkNextFrame_4_t*)0x005d8324)   /* BINKW32.DLL import, via the IAT */

static void BEA_THISCALL ap_00541430(void * this_)
{
  void *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  FUN_00528da0(bea_arg(&DAT_008a9810));
  *(undefined4 *)((int)this_ + 8) = DAT_008a9830;
  DAT_008a982c = 0;
  if (*(int *)((int)this_ + 8) == 0) {
    CRenderThing__vslot3(s_failed_to_find_file_0065076c);
    if (DAT_00663050 == 0) {
      FUN_0042c750(bea_arg(&DAT_008a9938), bea_arg(0xffffffff));
    }
    *(undefined4 *)((int)this_ + 0x1c) = 0;
    *(undefined4 *)((int)this_ + 0x18) = 0;
    *(undefined4 *)((int)this_ + 0x2c) = 0;
    FUN_00528dc0(bea_arg(&DAT_008a9810));
    return;
  }
  _BinkDoFrame_4(bea_arg(*(int *)((int)this_ + 8)));
  _BinkNextFrame_4(bea_arg(*(undefined4 *)((int)this_ + 8)));
  *(undefined4 *)((int)this_ + 0x18) = 1;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  iVar2 = 0;
  piVar4 = (int *)((int)this_ + 0xc);
  while(BEA_LOOP_GUARD(( true ))) {
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(*piVar4, 0x0, 1);
      *piVar4 = 0;
    }
    this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x60), bea_arg(s_C__dev_ONSLAUGHT2_DXFrontEndVide_00650744), bea_arg(0x100));
    if (this_00 == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004f79d0(bea_arg(this_00));
    }
    *piVar4 = iVar1;
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
    if (1 < iVar2) {
      *(undefined4 *)((int)this_ + 0x24) = 0x80;
      *(undefined4 *)((int)this_ + 0x20) = 0x80;
      while (BEA_LOOP_GUARD(((*(uint *)((int)this_ + 0x20) < **(uint **)((int)this_ + 8) ||
             (*(uint *)((int)this_ + 0x24) < (*(uint **)((int)this_ + 8))[1]))))) {
        *(uint *)((int)this_ + 0x20) = *(uint *)((int)this_ + 0x20) * 2;
        *(int *)((int)this_ + 0x24) = *(int *)((int)this_ + 0x24) << 1;
      }
      if (DAT_00888aac < *(uint *)((int)this_ + 0x20)) {
        do {
          uVar3 = *(int *)((int)this_ + 0x20) >> 1;
          *(uint *)((int)this_ + 0x20) = uVar3;
        } while (BEA_LOOP_GUARD((DAT_00888aac < uVar3)));
      }
      if (DAT_00888ab0 < *(uint *)((int)this_ + 0x24)) {
        do {
          uVar3 = *(int *)((int)this_ + 0x24) >> 1;
          *(uint *)((int)this_ + 0x24) = uVar3;
        } while (BEA_LOOP_GUARD((DAT_00888ab0 < uVar3)));
      }
      FUN_0042d080(bea_arg(CONCAT31((int3)((uint)*(int *)((int)this_ + 0x20) >> 8),
                            0x7f < *(int *)((int)this_ + 0x20))), bea_arg(0xc5), bea_arg(0xffffffff));
      do {
        iVar2 = 0;
        piVar4 = (int *)((int)this_ + 0xc);
        while(BEA_LOOP_GUARD(( true ))) {
          if (1 < iVar2) {
            FUN_00528dc0(bea_arg(&DAT_008a9810));
            *(undefined4 *)((int)this_ + 0x2c) = 0;
            return;
          }
          FUN_004f7ab0(bea_arg((void *)*piVar4), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(5 - (uint)(DAT_008a9a54 != 0)), bea_arg(1));
          if ((*(int *)(*piVar4 + 8) == 0) && (DAT_008a9a54 != 0)) break;
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 1;
        }
        CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_008a9a48), bea_arg(0));
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  CRenderThing__vslot3(s_couldn_t_create_UMTex__d_00650728);
  FUN_00528dc0(bea_arg(&DAT_008a9810));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00541430, ap_00541430));
