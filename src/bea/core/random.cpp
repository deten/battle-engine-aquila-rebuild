// Park–Miller style multiplicative generator with Schrage's method.
//
// NOTE the constants are what the binary ships with: a = 48271 and
// m = 214783647 (NOT 2^31-1 = 2147483647 — a typo in the original source that
// changes the sequence).  Preserved exactly; see NOTES.md A1-1.
#include "bea/common.h"
#include "bea/hooks.h"

BEA_GLOBAL(const int32_t, g_rngMultiplier, 0x006321f0);   // 48271
BEA_GLOBAL(const int32_t, g_rngModulus, 0x006321f4);      // 214783647
BEA_GLOBAL(uint8_t, g_rngInitFlags, 0x0083ce38);          // bit0: quotient computed, bit1: remainder computed
BEA_GLOBAL(int32_t, g_rngQuotient, 0x0083ce34);           // m / a
BEA_GLOBAL(int32_t, g_rngRemainder, 0x0083ce30);          // m % a

// 0x004de8d0  Random::Next(): advances the 32-bit state at *this, returns |state|.
static int32_t BEA_THISCALL Random_Next(int32_t* state)
{
    BEA_TRACE_ONCE();
    if (!(g_rngInitFlags & 1)) {
        g_rngInitFlags |= 1;
        g_rngQuotient = g_rngModulus / g_rngMultiplier;
    }
    if (!(g_rngInitFlags & 2)) {
        g_rngInitFlags |= 2;
        g_rngRemainder = g_rngModulus % g_rngMultiplier;
    }
    int32_t s = *state;
    int32_t hi = s / g_rngQuotient;
    int32_t lo = s % g_rngQuotient;
    // 32-bit wrapping imul, as in the original
    int32_t t = (int32_t)((uint32_t)lo * (uint32_t)g_rngMultiplier - (uint32_t)hi * (uint32_t)g_rngRemainder);
    if (t > 0) *state = t;
    else *state = g_rngModulus + t;
    int32_t v = *state;
    return v < 0 ? -v : v;
}

BEA_HOOKS(
    BEA_HOOK(0x004de8d0, Random_Next));
