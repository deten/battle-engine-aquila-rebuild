// auto-ported from 00512e40_vslot12.c (PCLTShell::vslot12, 384 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall window proc, 4 stack args (ret 0x10), returns 0 for WM_COMMAND 0x9c41 (0x512e5b) else 0x52aaf0's EAX (call at 0x512fb5, not a tail jump); the key handler at this+0x33458 is a cdecl function pointer with 2 pushes and add esp,8 (0x512ea2-0x512ead, 0x512efb-0x512f08, 0x512f53-0x512f64): (scan, 0) / (scan, 1) / (wparam, 2), where scan = movzx cx,cl over ecx = lparam sar 16 (upper 16 bits keep the sign of lparam); without a handler 0x42a4f0 (thiscall on 0x663498, ret 8) gets (wparam, 0/1); the scan byte is lparam>>16 low byte +0x80 when bit 24 is set (kept in the wparam arg slot by the asm, read back & 0xff); WM_CHAR stores the scan byte to word 0x855420 around the handler call; mouse range 0x200..0x20a calls 0x5234e0 (stdcall 3) and stores wparam, lparam&0xffff, lparam>>16
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef void (BEA_THISCALL* FUN_0042a4f0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042a4f0_t> FUN_0042a4f0 = {(FUN_0042a4f0_t)0x0042a4f0};
typedef uint32_t (BEA_STDCALL* FUN_005234e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005234e0_t> FUN_005234e0 = {(FUN_005234e0_t)0x005234e0};
typedef uint32_t (BEA_THISCALL* FUN_0052aaf0_t)(void *, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0052aaf0_t> FUN_0052aaf0 = {(FUN_0052aaf0_t)0x0052aaf0};
typedef uint32_t (BEA_CDECL* KeyHandler_t)(uint32_t, uint32_t);

static uint32_t BEA_THISCALL ap_00512e40(void * this_, uint32_t hwnd, uint32_t msg, uint32_t wparam, uint32_t lparam)
{
  uint8_t *s = (uint8_t *)this_;
  if ((msg == 0x111) && ((uint16_t)wparam == 0x9c41)) {
    return 0;
  }
  uint32_t ecxv = (uint32_t)((int32_t)lparam >> 0x10);       // sar ecx, 0x10
  uint8_t sc = (uint8_t)ecxv;
  if ((lparam & 0x1000000) != 0) {
    sc = (uint8_t)(sc + 0x80);
  }
  uint32_t scan = (ecxv & 0xffff0000u) | (uint32_t)sc;       // movzx cx, cl
  if (msg == 0x100) {
    if (GLOBAL_AT(int, 0x00662df4) == 0) {
      GLOBAL_AT(uint8_t, 0x0083d3f0) = 1;
      uint32_t h = *(uint32_t *)(s + 0x33458);
      if (h != 0) {
        const bea_guard<KeyHandler_t> H = {(KeyHandler_t)h};
        H(scan, 0u);
      }
      else {
        FUN_0042a4f0((uint32_t)0x00663498, wparam, 0u);
        s[sc + 0x330e4] = 1;
        s[sc + 0x331e4] = 1;
      }
    }
  }
  else if (msg == 0x101) {
    if (GLOBAL_AT(int, 0x00662df4) == 0) {
      uint32_t h = *(uint32_t *)(s + 0x33458);
      if (h != 0) {
        const bea_guard<KeyHandler_t> H = {(KeyHandler_t)h};
        H(scan, 1u);
      }
      else {
        FUN_0042a4f0((uint32_t)0x00663498, wparam, 1u);
      }
      s[sc + 0x330e4] = 0;
      s[sc + 0x332e4] = 1;
    }
  }
  else if (msg == 0x102) {
    if ((GLOBAL_AT(int, 0x00662df4) == 0) && (*(uint32_t *)(s + 0x33458) != 0)) {
      GLOBAL_AT(uint16_t, 0x00855420) = (uint16_t)sc;
      const bea_guard<KeyHandler_t> H = {(KeyHandler_t)*(uint32_t *)(s + 0x33458)};
      H(wparam, 2u);
      GLOBAL_AT(uint16_t, 0x00855420) = 0;
    }
  }
  else if ((msg >= 0x200) && (msg <= 0x20a)) {
    FUN_005234e0(msg, wparam, lparam);
    *(uint32_t *)(s + 0x33454) = wparam;
    *(uint32_t *)(s + 0x3344c) = lparam & 0xffff;
    *(uint32_t *)(s + 0x33450) = lparam >> 0x10;
  }
  return FUN_0052aaf0(this_, hwnd, msg, wparam, lparam);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512e40, ap_00512e40));
