// auto-ported from 004e2c50_FUN_004e2c50.c (FUN_004e2c50, 285 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(char, 0x0083d960)
#define DAT_0066308c GLOBAL_AT(int, 0x0066308c)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Loading_XAP_00632628 ((char*)0x00632628)
#define PTR_s__s_data_sounds_sounds__s_pc_xap_0063e2ac_4_0063e2a8 GLOBAL_AT(void*, 0x0063e2a8)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef char * (BEA_THISCALL* FUN_004f2190_t)(uint32_t);
static const bea_guard<FUN_004f2190_t> FUN_004f2190 = {(FUN_004f2190_t)0x004f2190};
typedef uint32_t (BEA_THISCALL* FUN_00517260_t)(uint32_t);
static const bea_guard<FUN_00517260_t> FUN_00517260 = {(FUN_00517260_t)0x00517260};
typedef uint32_t (BEA_THISCALL* FUN_00517d00_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00517d00_t> FUN_00517d00 = {(FUN_00517d00_t)0x00517d00};
typedef uint32_t (BEA_THISCALL* FUN_00549270_t)(uint32_t);
static const bea_guard<FUN_00549270_t> FUN_00549270 = {(FUN_00549270_t)0x00549270};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_004e2c50(void * this_)
{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;

  alignas(16) uint8_t bea_frame_[0xd0] = {};   // the original stack frame (emulate_frame)
  char (&local_c8)[200] = *reinterpret_cast<char (*)[200]>(bea_frame_ + 0xd0 - 0xc8);
  pcVar10 = (char *)((int)this_ + 0x88);
  if (*(char *)((int)this_ + 4) != '\0') {
    pcVar5 = (char *)FUN_004f2190(bea_arg(&DAT_0083d960));
    FUN_0055de9b(local_c8,PTR_s__s_data_sounds_sounds__s_pc_xap_0063e2ac_4_0063e2a8,&DAT_0066308c,
                 pcVar5);
    iVar6 = FUN_00568390(bea_arg(local_c8), bea_arg(pcVar10));
    if (iVar6 != 0) {
      if (pcVar10 != (char *)0x0) {
        uVar7 = 0xffffffff;
        pcVar5 = local_c8;
        do {
          pcVar9 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar9 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar9;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        uVar7 = ~uVar7;
        pcVar5 = pcVar9 + -uVar7;
        for (uVar8 = uVar7 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar7 = uVar7 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
          *pcVar10 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
      CRenderThing__vslot3(s_Loading_XAP_00632628);
      iVar6 = *(int *)((int)this_ + 0xc);
      while (BEA_LOOP_GUARD((iVar6 != 0))) {
        iVar2 = *(int *)(iVar6 + 0x74);
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(iVar6 + 0x78);
        }
        if (*(int *)(iVar6 + 0x78) == 0) {
          *(undefined4 *)((int)this_ + 0xc) = *(undefined4 *)(iVar6 + 0x74);
        }
        else {
          *(undefined4 *)(*(int *)(iVar6 + 0x78) + 0x74) = *(undefined4 *)(iVar6 + 0x74);
        }
        *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + -1;
        *(undefined4 *)(iVar6 + 0x74) = *(undefined4 *)((int)this_ + 0x34);
        *(undefined4 *)(iVar6 + 0x78) = 0;
        if (*(int *)((int)this_ + 0x34) != 0) {
          *(int *)(*(int *)((int)this_ + 0x34) + 0x78) = iVar6;
        }
        *(int *)((int)this_ + 0x34) = iVar6;
        iVar6 = iVar2;
      }
      *(undefined4 *)((int)this_ + 0xc) = 0;
      FUN_00517260(bea_arg(&DAT_00896988));
      puVar3 = *(undefined4 **)this_;
      while (BEA_LOOP_GUARD((puVar4 = puVar3, puVar4 != (undefined4 *)0x0))) {
        puVar3 = (undefined4 *)puVar4[0x1d];
        if (puVar4 != (undefined4 *)0x0) {
          bea_vcall<uint32_t>(puVar4, 0x0, 1);
        }
      }
      *(undefined4 *)this_ = 0;
      FUN_00549270(bea_arg(&DAT_009c3df0));
      FUN_00517d00(bea_arg(&DAT_00896988), bea_arg(0));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e2c50, ap_004e2c50));
