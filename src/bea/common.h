// Common definitions for recovered Battle Engine Aquila code.
//
// Everything here exists so that functions re-implemented in GCC can be dropped
// into the original VC6 image one at a time: matching calling conventions,
// reaching the original's globals and still-original functions by address, and
// reproducing x87 arithmetic exactly.
#pragma once

#include <stdint.h>
#include <stddef.h>

// --- calling conventions ---------------------------------------------------
// VC6 defaults: member functions are __thiscall (this in ECX, callee cleans),
// free functions __cdecl, Win32 callbacks __stdcall.  GCC on i686 supports all
// three as attributes.
#define BEA_THISCALL __attribute__((thiscall))
#define BEA_STDCALL  __attribute__((stdcall))
#define BEA_CDECL    __attribute__((cdecl))
#define BEA_FASTCALL __attribute__((fastcall))

// --- image layout ----------------------------------------------------------
// BEA.exe has no relocations and DllCharacteristics == 0, so it always loads at
// its preferred base.  Absolute addresses from ghidra_out/ are therefore valid
// at run time.
#define BEA_IMAGE_BASE 0x00400000u

// A global variable living in the original image.
//   BEA_GLOBAL(int, g_frameCount, 0x00679ec4);
#define BEA_GLOBAL(type, name, addr) \
    static type& name = *reinterpret_cast<type*>(static_cast<uintptr_t>(addr))

// A pointer to a global array / struct living in the original image.
#define BEA_GLOBAL_PTR(type, name, addr) \
    static type* const name = reinterpret_cast<type*>(static_cast<uintptr_t>(addr))

// A function that still lives in the original image (not yet replaced).
//   BEA_ORIG(void, BEA_THISCALL, MemoryManager_Free, 0x00549220, void* self, void* p);
#define BEA_ORIG(ret, cc, name, addr, ...) \
    static ret (cc* const name)(__VA_ARGS__) = \
        reinterpret_cast<ret (cc*)(__VA_ARGS__)>(static_cast<uintptr_t>(addr))

// --- x87 helpers -----------------------------------------------------------
// VC6 keeps intermediates on the x87 stack at 80 bits and returns floating
// point results in ST(0).  A GCC function returning `long double` on i686 does
// exactly the same, so functions whose callers consume the full-precision
// result are declared to return `f80`.
typedef long double f80;

// Raw access helpers for not-yet-recovered structs.
template <typename T>
static inline T& at(void* base, size_t offset)
{
    return *reinterpret_cast<T*>(static_cast<char*>(base) + offset);
}
template <typename T>
static inline const T& at(const void* base, size_t offset)
{
    return *reinterpret_cast<const T*>(static_cast<const char*>(base) + offset);
}
