// auto-ported from 00465c10_FUN_00465c10.c (FUN_00465c10, 221 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 cdecl with no arguments (push ecx at 00465c10 only reserves a byte slot; ECX is never read, ret 0); the two table heads Ghidra folded to constants (0x20, 0x24) are read from 0x5db5fc / 0x5db738 as the asm does (00465c13, 00465c84); written from the disassembly
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

// builds the 256-byte character -> glyph index map at 0x6799f4 (default: the
// index of character 0x1f, kept in the byte at 0x679af4) and the 8-entry table
// of characters >= 0x100 at 0x6799d4, from the character list at 0x5db5fc,
// skipping the characters listed at 0x5db738
static void BEA_CDECL ap_00465c10(void)
{
  const uint16_t *chars = reinterpret_cast<const uint16_t *>(0x005db5fc);
  const uint16_t *skip = reinterpret_cast<const uint16_t *>(0x005db738);
  uint16_t first = chars[0];                       // esi (00465c13)
  uint8_t idx = 0;
  if (first != 0) {
    uint16_t c = first;
    for (;;) {
      if (c == 0x1f) {                             // 00465c23
        GLOBAL_AT(uint8_t, 0x00679af4) = idx;      // 00465c47
        break;
      }
      idx = idx + 1;
      c = chars[idx];
      if (c == 0) break;
    }
  }
  uint8_t def = GLOBAL_AT(uint8_t, 0x00679af4);
  uint32_t fill = def * 0x01010101u;
  volatile uint32_t *map = reinterpret_cast<volatile uint32_t *>(0x006799f4);
  for (int i = 0; i < 0x40; i++) map[i] = fill;    // rep stosd (00465c6f)
  volatile uint32_t *wide = reinterpret_cast<volatile uint32_t *>(0x006799d4);
  for (int i = 0; i < 8; i++) wide[i] = 0;         // rep stosd (00465c80)
  if (first == 0) return;
  uint16_t skip0 = skip[0];                        // edi (00465c84)
  uint8_t *out = reinterpret_cast<uint8_t *>(0x006799d6);
  uint8_t n = 0;                                   // bl
  uint16_t c = first;                              // cx
  for (;;) {
    bool skipped = false;
    if (skip0 != 0) {
      const uint16_t *p = skip;
      uint16_t s = skip0;
      for (;;) {
        if (s == c) { skipped = true; break; }     // 00465c9d
        p = p + 1;
        s = *p;
        if (s == 0) break;
      }
    }
    if (!skipped) {
      if (c >= 0x100) {                            // 00465cae
        *reinterpret_cast<uint16_t *>(out - 2) = c;
        *out = n;
        out = out + 4;
      } else {
        reinterpret_cast<uint8_t *>(0x006799f4)[c] = n;
      }
    }
    n = n + 1;                                     // 00465ccc
    c = chars[n];
    if (c == 0) return;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00465c10, ap_00465c10));
