// auto-ported from 0052b760_FUN_0052b760.c (FUN_0052b760, 213 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef int (BEA_CDECL* FUN_0052c8d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052c8d0_t> FUN_0052c8d0 = {(FUN_0052c8d0_t)0x0052c8d0};
typedef float10 (BEA_STDCALL* FUN_0052cd20_t)(uint32_t);
static const bea_guard<FUN_0052cd20_t> FUN_0052cd20 = {(FUN_0052cd20_t)0x0052cd20};

static int BEA_THISCALL ap_0052b760(void * this_)
{
  int iVar1;
  DWORD DVar2;
  int *piVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &iStack_c = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0xc);
  iStack_c = 0x52b769;
  iVar1 = bea_vcall<uint32_t>(this_, 0x14);
  if (-1 < iVar1) {
    iStack_c = (int)this_ + 0x32e58;
    iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x40, *(int **)((int)this_ + 0x32ea0));
    if (-1 < iVar1) {
      piVar3 = (int *)0x0;
      bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x48, *(int **)((int)this_ + 0x32ea0),0,0,0,&iStack_c);
      bea_vcall<uint32_t>(piVar3, 0x30, piVar3);
      bea_vcall<uint32_t>((int)this_ + 0x32fd4, 0x8, (int *)((int)this_ + 0x32fd4));
      if ((*(int *)((int)this_ + 0x330c4) != 0) && (*(int *)((int)this_ + 0x32e44) == 0)) {
        DVar2 = GetClassLongA(*(HWND *)((int)this_ + 0x32e94),-0xc);
        FUN_0052c8d0(bea_arg(*(undefined4 *)((int)this_ + 0x32ea0)), bea_arg(DVar2));
        bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x30, *(int **)((int)this_ + 0x32ea0),1);
      }
      iVar1 = bea_vcall<uint32_t>(this_, 0x24);
      if (-1 < iVar1) {
        if (*(int *)((int)this_ + 0x32e50) == 0) {
          *(undefined4 *)((int)this_ + 0x32e54) = 1;
          FUN_0052cd20(bea_arg(1));
          FUN_0052cd20(bea_arg(2));
        }
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052b760, ap_0052b760));
