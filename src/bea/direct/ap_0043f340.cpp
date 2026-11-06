// auto-ported from 0043f340_FUN_0043f340.c (FUN_0043f340, 211 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066ea20 GLOBAL_AT(int, 0x0066ea20)
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define DAT_006281b8 GLOBAL_AT(int, 0x006281b8)
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
#define DAT_008aa4e8 GLOBAL_AT(int, 0x008aa4e8)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_00481f40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00481f40_t> FUN_00481f40 = {(FUN_00481f40_t)0x00481f40};
typedef int * (BEA_THISCALL* FUN_0050af70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0050af70_t> FUN_0050af70 = {(FUN_0050af70_t)0x0050af70};
typedef uint32_t (BEA_THISCALL* FUN_0053f010_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053f010_t> FUN_0053f010 = {(FUN_0053f010_t)0x0053f010};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 BEA_THISCALL ap_0043f340(void * this_)
{
  char *pcVar1;
  char cVar2;
  uint32_t eax_in = 0;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  uVar3 = (uint)(byte)(*(char *)((int)this_ + 0x6b8));
  if (*(char *)((int)this_ + 0x6b8) == '\0') {
    *(undefined4 *)((int)this_ + 0x850) = 0xffffffff;
    *(undefined4 *)((int)this_ + 0x844) = 0;
    *(undefined1 *)((int)this_ + 0x6b8) = 1;
    *(undefined1 *)((int)this_ + 0x840) = 0;
    DAT_0066ea20 = this_;
    local_4 = this_;
    uVar3 = FUN_0050af70(bea_arg(&DAT_00855090), bea_arg((int)this_ + 0x858));
    FUN_00401000(bea_arg((void *)((int)this_ + 0x854)), bea_arg(uVar3));
    if (*(int *)((int)this_ + 0x7c) != 0) {
      pcVar1 = (char *)(*(int *)((int)this_ + 0x7c) + 0x12d);
      iVar4 = -1;
      pcVar5 = pcVar1;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (BEA_LOOP_GUARD((cVar2 != '\0')));
      if (iVar4 != -2) {
        iVar4 = FUN_00568390(bea_arg(pcVar1), bea_arg(&DAT_006281b8));
        if (iVar4 == 0) {
          FUN_0053f010(bea_arg(&DAT_0089c9a0), bea_arg(0xff), bea_arg(0));
        }
        else {
          FUN_00481f40(bea_arg(&DAT_008aa4e8), bea_arg(*(int *)((int)this_ + 0x7c) + 0x12d), bea_arg(0));
        }
      }
    }
    local_4 = (void *)0xbf800000;
    uVar3 = FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043f340, ap_0043f340));
