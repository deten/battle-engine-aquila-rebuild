// auto-ported from 0047ef20_FUN_0047ef20.c (FUN_0047ef20, 203 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_0047ef20(void * this_)
{
  int iVar1;
  float *pfVar2;
  int iVar3;
  
  if (*(int *)((int)this_ + 0x10) != -0x355db510) {
    return this_;
  }
  pfVar2 = *(float **)((int)this_ + 0x20);
  iVar3 = 0;
  *(undefined4 *)this_ = 100000;
  *(undefined4 *)((int)this_ + 8) = 0xfffe7960;
  *(undefined4 *)((int)this_ + 4) = 100000;
  *(undefined4 *)((int)this_ + 0xc) = 0xfffe7960;
  *(undefined4 *)((int)this_ + 0x18) = 0xc7c35000;
  *(undefined4 *)((int)this_ + 0x1c) = 0x47c35000;
  if (0 < *(int *)((int)this_ + 0x10c0)) {
    do {
      iVar1 = 0;
      if (0 < *(int *)((int)this_ + 0x10bc)) {
        do {
          if (*pfVar2 < *(float *)((int)this_ + 0x1034)) {
            if (iVar1 < *(int *)this_) {
              *(int *)this_ = iVar1;
            }
            else if (*(int *)((int)this_ + 8) < iVar1) {
              *(int *)((int)this_ + 8) = iVar1;
            }
            if (iVar3 < *(int *)((int)this_ + 4)) {
              *(int *)((int)this_ + 4) = iVar3;
            }
            else if (*(int *)((int)this_ + 0xc) < iVar3) {
              *(int *)((int)this_ + 0xc) = iVar3;
            }
          }
          if (*pfVar2 < *(float *)((int)this_ + 0x1c)) {
            *(float *)((int)this_ + 0x1c) = *pfVar2;
          }
          if (*(float *)((int)this_ + 0x18) < *pfVar2) {
            *(float *)((int)this_ + 0x18) = *pfVar2;
          }
          pfVar2 = pfVar2 + 6;
          iVar1 = iVar1 + 1;
        } while (BEA_LOOP_GUARD(iVar1 < *(int *)((int)this_ + 0x10bc)));
      }
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD(iVar3 < *(int *)((int)this_ + 0x10c0)));
  }
  *(undefined4 *)((int)this_ + 0x14) = *(undefined4 *)((int)this_ + 0x20);
  *(undefined4 *)((int)this_ + 0x10) = *(undefined4 *)((int)this_ + 0x1034);
  return this_;
}

// @autoport-registration (verified: 28 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0047ef20, ap_0047ef20));
