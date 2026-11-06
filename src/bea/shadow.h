// Helpers for generated shadow stubs (tools/autoport.py).
//
// A shadow stub runs the auto-ported function on a *copy* of `this` and then
// the original on the real object, compares the results, records the
// outcome and returns the original's result, so the game keeps running on
// original code while the port is being validated.
#pragma once
#include "bea/common.h"
#include "bea/hooks.h"
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

namespace bea_shadow {

static const size_t kThisBytes = 0x200;

// Number of bytes from p that can be read without faulting.  Uses
// VirtualQuery rather than IsBadReadPtr: probing a stack object with
// IsBadReadPtr can trip the stack guard page and break later stack growth.
static inline size_t readable_span(const void* p, size_t want)
{
    MEMORY_BASIC_INFORMATION mbi;
    if (!p || VirtualQuery(p, &mbi, sizeof mbi) == 0) return 0;
    if (mbi.State != MEM_COMMIT) return 0;
    DWORD prot = mbi.Protect & 0xff;
    if ((mbi.Protect & PAGE_GUARD) || prot == PAGE_NOACCESS || prot == PAGE_EXECUTE) return 0;
    const char* region_end = static_cast<const char*>(mbi.BaseAddress) + mbi.RegionSize;
    size_t avail = (size_t)(region_end - static_cast<const char*>(p));
    return avail < want ? avail : want;
}

// Per-stub scratch buffer for the `this` copy: 64 KB committed followed by a
// reserved (no-access) page, so a port that writes past the object faults
// loudly in the port instead of corrupting the heap.  Allocated once.
static const size_t kGuardedBytes = 0x100000;
static inline char* guarded_buffer(char*& slot)
{
    if (!slot) slot = bea_shadow_buffer();   // shared: leaf functions never nest
    return slot;
}

// A pointer argument that points into the real object (out-parameter aliasing
// `this`, e.g. v.Negate(&v)) must be redirected into the copy, otherwise the
// port's write lands in the real object before the original runs on it.
static inline uint32_t redirect(uint32_t p, const void* self, size_t span, const char* copy)
{
    uintptr_t s = reinterpret_cast<uintptr_t>(self);
    if (p >= s && p < s + span) return (uint32_t)(reinterpret_cast<uintptr_t>(copy) + (p - s));
    return p;
}

// Map a pointer the port returned into its copy back onto the real object so
// "return this" / "return &this->field" compare equal.
static inline uint32_t translate_ret(uint32_t r, const char* copy, size_t span, const void* self)
{
    uintptr_t c = reinterpret_cast<uintptr_t>(copy);
    if (r >= c && r < c + span) return (uint32_t)(reinterpret_cast<uintptr_t>(self) + (r - c));
    return r;
}

// Loop guard inserted into every generated loop condition: a port that spins
// (e.g. searching a ring for a pointer that now lives in a sandbox window)
// exits the loop once the per-call budget is spent, and the stub reports it.
static inline bool tick()
{
    return --g_bea_shadow_budget > 0;
}
static const long kLoopBudget = 1000000;

// Bytes the original fills from uninitialised stack (the classic fourth
// vector component, NOTES A1-4/A1-6): the port stores 0, the original stores
// garbage, so the range is copied from the real object before comparing.
static inline void ignore(char* copy, const void* real, size_t span, size_t off, size_t len)
{
    if (real && off + len <= span) memcpy(copy + off, static_cast<const char*>(real) + off, len);
}

static inline bool same_f80(long double a, long double b)
{
    if (a == b) return true;
    return memcmp(&a, &b, 10) == 0;      // NaN patterns
}

static inline int first_diff(const void* a, const void* b, size_t n)
{
    const unsigned char* x = static_cast<const unsigned char*>(a);
    const unsigned char* y = static_cast<const unsigned char*>(b);
    for (size_t i = 0; i < n; ++i) if (x[i] != y[i]) return (int)i;
    return -1;
}

template <typename T>
static inline T bits(uint32_t v)
{
    static_assert(sizeof(T) == 4, "4-byte argument expected");
    T t;
    memcpy(&t, &v, 4);
    return t;
}

} // namespace bea_shadow
