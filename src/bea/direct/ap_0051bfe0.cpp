// auto-ported from 0051bfe0_FUN_0051bfe0.c (FUN_0051bfe0, 172 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_008a969c GLOBAL_AT(int, 0x008a969c)
#define DAT_008a96a4 GLOBAL_AT(int, 0x008a96a4)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define s__s_messagebox__s_wav_0063fb94 ((char*)0x0063fb94)
typedef int (BEA_THISCALL* FUN_004e0a00_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0a00_t> FUN_004e0a00 = {(FUN_004e0a00_t)0x004e0a00};
typedef uint32_t (BEA_THISCALL* FUN_004e0a90_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0a90_t> FUN_004e0a90 = {(FUN_004e0a90_t)0x004e0a90};
typedef uint32_t (BEA_THISCALL* FUN_004e1800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1800_t> FUN_004e1800 = {(FUN_004e1800_t)0x004e1800};
typedef char * (BEA_THISCALL* FUN_004f2190_t)(uint32_t);
static const bea_guard<FUN_004f2190_t> FUN_004f2190 = {(FUN_004f2190_t)0x004f2190};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_0051bfe0(void * this_)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this_ + 0x14) != 0) {
    FUN_004e1800(bea_arg(&DAT_00896988), bea_arg((undefined1 *)((int)this_ + 0x18)), bea_arg(0));
    if (*(undefined4 **)((int)this_ + 0x14) != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x14), 0x0, 1);
    }
    *(undefined4 *)((int)this_ + 0x14) = 0;
    *(undefined1 *)((int)this_ + 0x18) = 0;
  }
  iVar2 = *(int *)(DAT_008a969c + 0x14 + *(int *)((int)this_ + 8) * 0xc);
  if (iVar2 != -1) {
    iVar2 = iVar2 + DAT_008a96a4;
    iVar1 = (int)this_ + 0x18;
    uVar3 = FUN_004f2190(bea_arg(&DAT_0083d960));
    FUN_0055de9b(iVar1,s__s_messagebox__s_wav_0063fb94,uVar3,iVar2);
    FUN_004e0a90(bea_arg(&DAT_00896988), bea_arg(iVar1), bea_arg(0), bea_arg(0x3f800000), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(1));
    uVar3 = FUN_004e0a00(bea_arg(&DAT_00896988), bea_arg(iVar1), bea_arg(0), bea_arg(0));
    *(undefined4 *)((int)this_ + 0x14) = uVar3;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051bfe0, ap_0051bfe0));
