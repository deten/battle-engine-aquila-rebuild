// auto-ported from 0044d560_FUN_0044d560.c (FUN_0044d560, 389 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char _DAT_00679af8;
#define _DAT_00679af8 GLOBAL_AT(float, 0x00679af8)

static void BEA_THISCALL ap_0044d560(void * this_)
{
  int iVar1;
  float fVar2;
  int local_8;
  
  if (*(int *)((int)this_ + 0x1f8c) != 0) {
    iVar1 = *(int *)((int)this_ + 0x1f80);
    if (iVar1 == 0) {
      fVar2 = _DAT_00679af8 * 50.0f + *(float *)((int)this_ + 0x1f7c);
      *(float *)((int)this_ + 0x1f7c) = fVar2;
      if (*(float *)((int)this_ + 0x1f78) <= fVar2) {
        *(undefined4 *)((int)this_ + 0x1f80) = 1;
      }
      local_8 = (int)(longlong)
                     ROUND((*(float *)((int)this_ + 0x1f7c) / *(float *)((int)this_ + 0x1f78)) * 255.0f
                          );
      if (local_8 < 0) {
        *(undefined4 *)((int)this_ + 0x18) = 0;
        return;
      }
      if (0xff < local_8) {
        local_8 = 0xff;
      }
    }
    else {
      if (iVar1 == 1) {
        if (*(int *)((int)this_ + 0x1f90) == 0) {
          if ((*(int *)((int)this_ + 0x1f98) == 0) &&
             (fVar2 = _DAT_00679af8 * 50.0f + *(float *)((int)this_ + 0x1f88),
             *(float *)((int)this_ + 0x1f88) = fVar2, *(float *)((int)this_ + 0x1f84) <= fVar2)) {
            *(undefined4 *)((int)this_ + 0x1f7c) = 0;
            *(undefined4 *)((int)this_ + 0x1f80) = 2;
            *(undefined4 *)((int)this_ + 0x1fa8) = 0xfffffffe;
          }
        }
        else if (1.0f <= *(float *)((int)this_ + 0x1f94)) {
          *(undefined4 *)((int)this_ + 0x1f80) = 2;
          *(undefined4 *)((int)this_ + 0x18) = 0xff;
          return;
        }
        *(undefined4 *)((int)this_ + 0x18) = 0xff;
        return;
      }
      if (iVar1 != 2) {
        return;
      }
      fVar2 = *(float *)((int)this_ + 0x1f7c) + 1.0f;
      *(float *)((int)this_ + 0x1f7c) = fVar2;
      if (*(float *)((int)this_ + 0x1f78) <= fVar2) {
        *(undefined4 *)((int)this_ + 0x1f80) = 0;
        *(undefined4 *)((int)this_ + 0x1f8c) = 0;
        return;
      }
      local_8 = (int)(longlong)ROUND((1.0f - fVar2 / *(float *)((int)this_ + 0x1f78)) * 255.0f);
      if (local_8 < 0) {
        *(undefined4 *)((int)this_ + 0x18) = 0;
        return;
      }
      if (0xff < local_8) {
        *(undefined4 *)((int)this_ + 0x18) = 0xff;
        return;
      }
    }
    *(int *)((int)this_ + 0x18) = local_8;
  }
  return;
}

// @autoport-registration (verified: 62681 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0044d560, ap_0044d560));
