// hand-ported 2026-10-27 from FUN_004b5250 (69 bytes): the auto-port returned
// nothing, but the original leaves its argument (wrapped) in ST(0) and every
// caller stores it (0x54b800: six `call; fstp dword [esp+..]`), so the port
// handed those callers an empty x87 register (NaN).
//   fld [esp+4]; while (x < 0 or NaN) x -= 1.0;  while (x > 1.0) x += 1.0;  ret
// (0x5d856c = 0.0, 0x5d8568 = 1.0; the loops only stop for inputs already in
// [0, 1], as in the original.)
// @autoport-mode direct (hand)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

static float10 BEA_CDECL ap_004b5250(float param_1)
{
    float10 x = param_1;
    // fcom 0.0; test ah, 1; je: the subtracting loop runs while C0 (x < 0 or unordered)
    if (!(x >= (float10)0.0f)) {
        do {
            x = x - (float10)1.0f;
        } while (!(x >= (float10)0.0f));
    }
    // fcom 1.0; test ah, 0x41; jne exit: the adding loop runs while neither C0 nor C3 (x > 1)
    while (x > (float10)1.0f) {
        x = x + (float10)1.0f;
    }
    return x;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b5250, ap_004b5250));
