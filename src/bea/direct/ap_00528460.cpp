// auto-ported from 00528460_FUN_00528460.c (FUN_00528460, 216 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089bec8 GLOBAL_AT(undefined4*, 0x0089bec8)
#define DAT_0089bebc GLOBAL_AT(int, 0x0089bebc)
#define DAT_0089beb4 GLOBAL_AT(int, 0x0089beb4)
#define DAT_0089bec4 GLOBAL_AT(int, 0x0089bec4)
#define DAT_0089bec0 GLOBAL_AT(int, 0x0089bec0)
#define DAT_0089beb8 GLOBAL_AT(int, 0x0089beb8)
#define DAT_0089bfd4 GLOBAL_AT(undefined4*, 0x0089bfd4)
#define DAT_0089bed4 GLOBAL_AT(undefined4, 0x0089bed4)
#define DAT_0089bed0 GLOBAL_AT(int, 0x0089bed0)

static void BEA_CDECL ap_00528460(void)
{
  int iVar1;
  undefined4 *puVar2;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  DWORD &local_4 = *reinterpret_cast<DWORD *>(bea_frame_ + 0x10 - 0x4);
  if (DAT_0089bec8 != (int *)0x0) {
    SetEvent(DAT_0089bebc);
    do {
      Sleep(10);
      GetExitCodeThread(DAT_0089beb4,&local_4);
    } while (BEA_LOOP_GUARD((local_4 == 0x103)));
    DAT_0089beb4 = (HANDLE)0x0;
    bea_vcall<uint32_t>(DAT_0089bec8, 0x48, DAT_0089bec8);
    bea_vcall<uint32_t>(DAT_0089bec8, 0x8, DAT_0089bec8);
    DAT_0089bec8 = (int *)0x0;
    CloseHandle(DAT_0089bec4);
    CloseHandle(DAT_0089bec0);
    CloseHandle(DAT_0089bebc);
    CloseHandle(DAT_0089beb8);
    DAT_0089bec4 = (HANDLE)0x0;
    DAT_0089bec0 = (HANDLE)0x0;
    DAT_0089bebc = (HANDLE)0x0;
    DAT_0089beb8 = (HANDLE)0x0;
    if (DAT_0089bfd4 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(DAT_0089bfd4, 0x0, 1);
    }
    DAT_0089bfd4 = (undefined4 *)0x0;
    puVar2 = &DAT_0089bed4;
    for (iVar1 = 0x40; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_0089bed0 = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528460, ap_00528460));
