// auto-ported from 00528c70_FUN_00528c70.c (FUN_00528c70, 146 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_00528c70(void * this_)
{
  HANDLE pvVar1;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  if (*(int *)((int)this_ + 4) == -1) {
    local_4 = this_;
    pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *(HANDLE *)((int)this_ + 8) = pvVar1;
    pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    *(HANDLE *)((int)this_ + 0xc) = pvVar1;
    pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    *(HANDLE *)((int)this_ + 0x10) = pvVar1;
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,((void*)0x00528b60),this_,0,(LPDWORD)&local_4);
    *(HANDLE *)((int)this_ + 4) = pvVar1;
  }
  if (((((*(int *)((int)this_ + 4) != -1) && (*(int *)((int)this_ + 4) != 0)) &&
       (*(int *)((int)this_ + 8) != -1)) &&
      ((*(int *)((int)this_ + 8) != 0 && (*(int *)((int)this_ + 0xc) != -1)))) &&
     ((*(int *)((int)this_ + 0xc) != 0 &&
      ((*(int *)((int)this_ + 0x10) != -1 && (*(int *)((int)this_ + 0x10) != 0)))))) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528c70, ap_00528c70));
