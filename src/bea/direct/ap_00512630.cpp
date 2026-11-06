// auto-ported from 00512630_FUN_00512630.c (FUN_00512630, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_0082b5b0 GLOBAL_AT(char, 0x0082b5b0)

// Deliberate fix (2026-11-04, my decision): when Present reports the device lost,
// the original waits for TestCooperativeLevel to succeed and never calls Reset. Under
// Direct3D 9 a lost device answers D3DERR_DEVICENOTRESET until it is reset, so the
// original waits forever: a fullscreen start on Windows 11 is lost at its first Present
// (a white window with the game's File/Capture menu), and so is an Alt+Tab. Here
// D3DERR_DEVICENOTRESET calls the game's own reset (0x52b760, the D3D framework's
// Resize3DEnvironment: InvalidateDeviceObjects, Reset with the game's present parameters,
// RestoreDeviceObjects). BEA_ORIGINAL_DEVICELOST=1 keeps the original's wait.
typedef int (BEA_THISCALL *Reset3DEnvironment_t)(void*);

static bool original_devicelost()
{
  static int v = -1;
  if (v < 0) {
    char b[8];
    v = GetEnvironmentVariableA("BEA_ORIGINAL_DEVICELOST", b, sizeof b) && b[0] == '1';
  }
  return v == 1;
}

static void BEA_THISCALL ap_00512630(void * this_)
{
  int iVar1;

  iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x44, *(int **)((int)this_ + 0x32ea0),0,0,0,0);
  if (iVar1 == -0x7789f798) {
    while (BEA_LOOP_GUARD((iVar1 = bea_vcall<uint32_t>(DAT_00888a50, 0xc, DAT_00888a50), iVar1 < 0))) {
      if (iVar1 == (int)0x88760869 && !original_devicelost()) {   // D3DERR_DEVICENOTRESET
        int r = reinterpret_cast<Reset3DEnvironment_t>(0x0052b760)(this_);
        bea_log("device lost: reset %s (%08x)", r >= 0 ? "done" : "failed", (unsigned)r);
        if (r >= 0) break;
      }
      Sleep(100);
    }
    DAT_0082b5b0 = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512630, ap_00512630));
