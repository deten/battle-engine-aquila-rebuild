// Compatibility layer that lets Ghidra's decompiler output compile with GCC
// (used by tools/autoport.py for mechanically ported functions).
#pragma once
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <mmsystem.h>
#undef small
#undef near
#undef far
#include "bea/common.h"
#include <stdint.h>
#include <string.h>
#include <type_traits>

typedef uint8_t  undefined;
typedef uint8_t  undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t  byte;
typedef uint32_t uint;
typedef uint16_t ushort;
typedef uint32_t ulong;
typedef int64_t  longlong;
typedef uint64_t ulonglong;
typedef long double float10;
typedef void     code;
typedef int8_t   sbyte;
typedef uint16_t wchar16;

// x87 intrinsics, emitted as the exact instructions the original used
static inline float10 fsin(float10 x) { __asm__("fsin" : "+t"(x)); return x; }
static inline float10 fcos(float10 x) { __asm__("fcos" : "+t"(x)); return x; }
static inline float10 fpatan(float10 y, float10 x) { __asm__("fpatan" : "+t"(x) : "u"(y) : "st(1)"); return x; }
// x87 intrinsics Ghidra prints as calls (0x4c10c0, 0x4c7950: exp via f2xm1/fscale;
// 0x4d3110, 0x4dd7b0: fptan), each the one instruction (2026-10-27)
static inline float10 f2xm1(float10 x) { __asm__("f2xm1" : "+t"(x)); return x; }
static inline float10 fscale(float10 x, float10 e) { __asm__("fscale" : "+t"(x) : "u"(e)); return x; }
static inline float10 fptan(float10 x) { __asm__("fptan\n\tfstp %%st(0)" : "+t"(x)); return x; }
// log2 as Ghidra prints fld1; fxch; fyl2x (0x4c10c0 case 6); float10 only, beside the libm overloads
static inline float10 log2(float10 x) { float10 one = 1.0L; __asm__("fyl2x" : "+t"(x) : "u"(one) : "st(1)"); return x; }
static inline float10 SQRT(float10 x) { return __builtin_sqrtl(x); }
static inline float10 ROUND(float10 x) { return __builtin_rintl(x); }
static inline float10 ABS(float10 x) { return __builtin_fabsl(x); }
// x87-operand CRT intrinsics (_CIfmod 0x55e3ea, _CIasin 0x55dcb0; tools/x87_intrinsics.csv):
// the operands travel on the FPU stack, x1 in ST0 and x2 in ST1 as the Ghidra signatures
// declare them; the original consumes them and leaves the result in ST0
static inline float10 bea_x87call1(uint32_t f, float10 x1)
{
    float10 r;
    __asm__ volatile("fldt %[x1]\n\tcall *%[f]"
                     : "=t"(r)
                     : [x1] "m"(x1), [f] "r"(f)
                     : "eax", "ecx", "edx", "memory", "cc", "st(1)", "st(2)", "st(3)", "st(4)", "st(5)", "st(6)", "st(7)");
    return r;
}
static inline float10 bea_x87call2(uint32_t f, float10 x1, float10 x2)
{
    float10 r;
    __asm__ volatile("fldt %[x2]\n\tfldt %[x1]\n\tcall *%[f]"
                     : "=t"(r)
                     : [x1] "m"(x1), [x2] "m"(x2), [f] "r"(f)
                     : "eax", "ecx", "edx", "memory", "cc", "st(1)", "st(2)", "st(3)", "st(4)", "st(5)", "st(6)", "st(7)");
    return r;
}
static inline long double fabsl_(long double x) { return __builtin_fabsl(x); }

// bit-concatenation helpers the decompiler uses for partial registers
static inline uint32_t CONCAT31(uint32_t hi3, uint8_t lo) { return (hi3 << 8) | lo; }
static inline uint32_t CONCAT22(uint16_t hi, uint16_t lo) { return ((uint32_t)hi << 16) | lo; }
// CONCAT44 pieces are 4-byte register/stack halves: a float piece keeps its
// bits (the original stored it with fstp), it is not converted to an integer.
// Converting by value made 0x506010 schedule its event at "time 47" read as
// float bits (~0), so it fired at once, every frame: level 211 played out
// differently and ran out of vertex buffers (2026-10-20).
template<class T> static inline uint32_t bea_piece32(T v)
{
    if constexpr (std::is_floating_point<T>::value) {
        float f = (float)v;
        uint32_t u;
        __builtin_memcpy(&u, &f, 4);
        return u;
    } else if constexpr (std::is_pointer<T>::value) {
        return (uint32_t)(uintptr_t)v;
    } else {
        return (uint32_t)v;
    }
}
// Ghidra's `(float)x` on an integer-typed x where the original loads x with
// fld (a reinterpretation, not a conversion: tools/fix_fcast.py rewrites the
// casts of functions whose original has no integer x87 instruction).
template<class To, class T> static inline To bea_fcast(T v)
{
    if constexpr (std::is_floating_point<T>::value) {
        return (To)v;
    } else if constexpr (sizeof(T) == 8) {
        double d;
        __builtin_memcpy(&d, &v, 8);
        return (To)d;
    } else {
        static_assert(sizeof(T) == 4, "bea_fcast: only 4- and 8-byte slots are loaded with fld");
        float f;
        __builtin_memcpy(&f, &v, 4);
        return (To)f;
    }
}
template<class H, class L> static inline uint64_t CONCAT44(H hi, L lo)
{
    return ((uint64_t)bea_piece32(hi) << 32) | bea_piece32(lo);
}
static inline uint16_t CONCAT11(uint8_t hi, uint8_t lo) { return (uint16_t)((hi << 8) | lo); }
// the other widths Ghidra uses in the remaining game functions (2026-10-21):
// CONCATxy = x high bytes above y low bytes, as the smallest integer that holds them
static inline uint32_t CONCAT13(uint8_t hi, uint32_t lo3) { return ((uint32_t)hi << 24) | (lo3 & 0xffffffu); }
static inline uint32_t CONCAT21(uint16_t hi, uint8_t lo) { return ((uint32_t)hi << 8) | lo; }
static inline uint32_t CONCAT12(uint8_t hi, uint16_t lo) { return ((uint32_t)hi << 16) | lo; }
static inline uint64_t CONCAT24(uint16_t hi, uint32_t lo) { return ((uint64_t)hi << 32) | lo; }
static inline uint64_t CONCAT26(uint16_t hi, uint64_t lo6) { return ((uint64_t)hi << 48) | (lo6 & 0xffffffffffffull); }
static inline uint64_t CONCAT62(uint64_t hi6, uint16_t lo) { return (hi6 << 16) | lo; }
// the time-stamp counter, as the rdtsc instruction leaves it in EDX:EAX
static inline uint64_t rdtsc(void) { return __builtin_ia32_rdtsc(); }
static inline bool CARRY4(uint32_t a, uint32_t b) { return (uint32_t)(a + b) < a; }
static inline bool SBORROW4(int32_t a, int32_t b) { int32_t r; return __builtin_sub_overflow(a, b, &r); }
static inline uint32_t SUB41(uint32_t v, int off) { return (v >> (off * 8)) & 0xff; }
static inline uint32_t SUB42(uint32_t v, int off) { return (v >> (off * 8)) & 0xffff; }

// A typed view of an absolute address, for DAT_xxxxxxxx globals.
#define GLOBAL_AT(type, addr) (*reinterpret_cast<type*>(static_cast<uintptr_t>(addr)))

// --- added for direct ports (NOTES A1-10) ----------------------------------
// Virtual call through slot `off` of the receiver's vtable, as VC6 thiscall.
// Argument types follow the decompiled expressions (float stays a 4-byte
// float on the stack, pointers and ints are 4 bytes), which is what the
// original pushed.
// x87 balance at non-float calls.  When the original discards a callee's
// float result it pops it (`fstp st(0)`), which Ghidra does not show: the
// port then calls the callee as returning an integer and the value stays on
// the x87 stack; eight such calls fill it and every later load is a NaN
// (2026-10-20, 0x4e7cf0's first virtual call to slot 0x138; found by the
// BEA_FPTRAP entry check in hooks.cpp).  Calls whose declared return is not
// a float note the x87 TOP before the call and pop the one value a callee
// left behind.  GCC keeps nothing on the x87 stack across a call, so the
// pop cannot take one of the port's own values.
// The expected TOP after the call (one below the current one, i.e. where a
// leaked push would leave it) is computed before the call; afterwards one asm
// block compares and pops using only EAX, saved to and restored from memory.
// ECX and EDX are left alone: some ports call a callee Ghidra typed cdecl that
// really reads ECX, and they rely on the value the previous callee left there
// (2026-10-20: a guard that used ECX broke 0x409f70 -> 0x4145f0 -> 0x414030).
// No push either, so memory operands stay valid even when ESP-relative.
__attribute__((always_inline)) static inline unsigned short bea_x87_expect()
{
    unsigned short sw;     // the raw status word; the arithmetic is done after the call, in EAX
    __asm__ volatile("fnstsw %0" : "=m"(sw));
    return sw;
}
__attribute__((always_inline)) static inline void bea_x87_rebalance(unsigned short before)
{
    unsigned saved, want;
    __asm__ volatile("movl %%eax, %[sv]\n\t"
                     "movzwl %[bs], %%eax\n\t"      // TOP before the call ...
                     "shrl $11, %%eax\n\t"
                     "addl $7, %%eax\n\t"           // ... minus one: where a leaked push leaves it
                     "andl $7, %%eax\n\t"
                     "movl %%eax, %[wt]\n\t"
                     "fnstsw %%ax\n\t"              // TOP now
                     "shrl $11, %%eax\n\t"
                     "andl $7, %%eax\n\t"
                     "cmpl %[wt], %%eax\n\t"
                     "jne 1f\n\t"
                     "fstp %%st(0)\n"
                     "1:\n\t"
                     "movl %[sv], %%eax"
                     : [sv] "=m"(saved), [wt] "=m"(want) : [bs] "m"(before) : "cc");
}
// A float argument for a callee whose typedef says uint32_t/int (autoport
// types most parameters as 4-byte integers): the original pushed the float's
// 4 bytes, so pass its bits.  Plain f(a...) converted it by value: 0x4505b0
// handed 0x5563d0 a truncated x position (2026-10-20, -Wfloat-conversion).
struct bea_fpass {
    float v;
    operator uint32_t() const { uint32_t u; __builtin_memcpy(&u, &v, 4); return u; }
    operator int() const { return (int)(uint32_t)*this; }
    operator float() const { return v; }
    operator double() const { return v; }
};
// The mirror case: a 4-byte integer (often bea_arg(fVar)'s bits) for a
// parameter the callee typedef declares float: the callee reads the pushed 4
// bytes as a float (0x482210 -> 0x555be0 was compiled as fild).
struct bea_ipass {
    uint32_t v;
    template <class T, class = typename std::enable_if<std::is_integral<T>::value || std::is_enum<T>::value>::type>
    operator T() const { return (T)v; }
    template <class T> operator T*() const { return (T*)(uintptr_t)v; }
    operator float() const { float f; __builtin_memcpy(&f, &v, 4); return f; }
    operator double() const { return (float)*this; }
};
template <class T> static inline T bea_pass(T v) { return v; }
static inline bea_ipass bea_pass(int v) { return {(uint32_t)v}; }
static inline bea_ipass bea_pass(unsigned v) { return {v}; }
static inline bea_ipass bea_pass(long v) { return {(uint32_t)v}; }
static inline bea_ipass bea_pass(unsigned long v) { return {(uint32_t)v}; }
static inline bea_fpass bea_pass(float v) { return {v}; }
// A double keeps its precision for a callee that takes a double (floor
// 0x55dfe7 got the value rounded to float: a value just below an integer
// can round up to it, 20 live ports, found 2026-10-29) and gives a 4-byte
// slot the float's bits as before.
struct bea_dpass {
    double d;
    operator uint32_t() const { return (uint32_t)bea_fpass{(float)d}; }
    operator int() const { return (int)(uint32_t)*this; }
    operator float() const { return (float)d; }
    operator double() const { return d; }
};
static inline bea_dpass bea_pass(double v) { return {v}; }
// BEA_PARITY (defined before this header): the port keeps stack parity
// (bea/parity.h): from its body a call goes through bea_par_jmp to the game
// stack at the original's depth.  Other ports compile as before (BEA_PAR_G is f).
#ifdef BEA_PARITY
#include "bea/parity.h"
#define BEA_PAR_G g
#else
#define BEA_PAR_G f
#endif
template <class F> struct bea_guard {
    F f;
    // decltype(auto) rather than a trailing decltype(f(a...)): -fpermissive
    // conversions (a pointer passed as int) fail in a SFINAE context
    template <class... A> __attribute__((always_inline)) decltype(auto) operator()(A... a) const
    {
        typedef decltype(f(bea_pass(a)...)) R;
#ifdef BEA_PARITY
        F g = f;
        if (bea_par_body()) {
            bea_par_prepare(BEA_PAR_DIRECT, (uint32_t)(uintptr_t)f, (uint32_t)(uintptr_t)f,
                            bea_par_bytes<F, decltype(bea_pass(a))...>());
            g = reinterpret_cast<F>(&bea_par_jmp);
        }
#endif
        if constexpr (std::is_floating_point<R>::value) {
            return BEA_PAR_G(bea_pass(a)...);
        } else {
            unsigned short expect = bea_x87_expect();
            if constexpr (std::is_void<R>::value) {
                BEA_PAR_G(bea_pass(a)...);
                bea_x87_rebalance(expect);
            } else {
                R r = BEA_PAR_G(bea_pass(a)...);
                bea_x87_rebalance(expect);
                return r;
            }
        }
    }
};
template <class T> static inline const void* bea_objp(T* p) { return p; }
static inline const void* bea_objp(uintptr_t p) { return reinterpret_cast<const void*>(p); }
static inline const void* bea_objp(int p) { return reinterpret_cast<const void*>((uintptr_t)p); }
static inline const void* bea_objp(long p) { return reinterpret_cast<const void*>((uintptr_t)p); }
template <class R, class O, class... A>
static inline R bea_vcall(O objx, unsigned off, A... a)
{
    const void* obj = bea_objp(objx);
    typedef R (BEA_THISCALL* Fn)(const void*, A...);
    Fn fn = reinterpret_cast<Fn>((*reinterpret_cast<void* const* const*>(obj))[off / 4]);
#ifdef BEA_PARITY
    if (bea_par_body()) {
        bea_par_prepare(BEA_PAR_VCALL, off, (uint32_t)(uintptr_t)fn, bea_par_bytes<Fn, A...>());
        fn = reinterpret_cast<Fn>(&bea_par_jmp);
    }
#endif
    if constexpr (std::is_floating_point<R>::value) {
        return fn(obj, a...);
    } else {
        unsigned short expect = bea_x87_expect();     // see bea_guard
        R r = fn(obj, a...);
        bea_x87_rebalance(expect);
        return r;
    }
}
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
// Ghidra's `NAN(x)` (the unordered flag in its model of the x87 status word,
// `(ushort)(NAN(a) || NAN(b)) << 10`); tools/autoport.py rewrites it to this,
// because NAN is the <math.h> constant.  Valid with -fno-fast-math.
template <class T> static inline bool bea_isnan(T x) { return x != x; }
typedef uint32_t int3;        // Ghidra 3-byte integers (only used inside CONCAT/SUB casts)
typedef uint32_t uint3;
typedef uint32_t undefined3;
// SUBxy of a double is a piece of its bits, as the original read the 8-byte
// slot (0x4015e0 prints doubles through varargs in 4-byte halves): a
// floating-point value is not converted to an integer first (2026-10-27)
template<class T> static inline uint64_t bea_bits64(T v)
{
    if constexpr (std::is_floating_point<T>::value) {
        double d = (double)v;
        uint64_t u;
        __builtin_memcpy(&u, &d, 8);
        return u;
    } else if constexpr (std::is_pointer<T>::value) {
        return (uint64_t)(uintptr_t)v;
    } else {
        return (uint64_t)v;
    }
}
#define SUB84(x, n) ((uint32_t)(bea_bits64(x) >> ((n) * 8)))
#define SUB82(x, n) ((uint16_t)(bea_bits64(x) >> ((n) * 8)))
#define SUB81(x, n) ((uint8_t)(bea_bits64(x) >> ((n) * 8)))
// Raw 4-byte call argument, as the original pushed it: float keeps its bits,
// integers and pointers pass through, long double is refused (push size
// unknown: the port would need the original's fstp width).
static inline uint32_t bea_arg(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
static inline uint32_t bea_arg(double d) { float f = (float)d; uint32_t u; memcpy(&u, &f, 4); return u; }
static inline uint32_t bea_arg(long double) = delete;
template <class T> static inline uint32_t bea_arg(T* p) { return (uint32_t)(uintptr_t)p; }
static inline uint32_t bea_arg(int v) { return (uint32_t)v; }
static inline uint32_t bea_arg(unsigned v) { return v; }
static inline uint32_t bea_arg(long v) { return (uint32_t)v; }
static inline uint32_t bea_arg(unsigned long v) { return (uint32_t)v; }
static inline uint32_t bea_arg(short v) { return (uint32_t)(int)v; }
static inline uint32_t bea_arg(unsigned short v) { return v; }
static inline uint32_t bea_arg(char v) { return (uint32_t)(int)v; }
static inline uint32_t bea_arg(signed char v) { return (uint32_t)(int)v; }
static inline uint32_t bea_arg(unsigned char v) { return v; }
static inline uint32_t bea_arg(bool v) { return v; }
static inline uint32_t bea_arg(long long v) = delete;
// a callee passed as a value (0x5449a0 hands 0x48e450 to the vector ctor
// iterator): its address
template <class F> static inline uint32_t bea_arg(const bea_guard<F>& g) { return (uint32_t)(uintptr_t)g.f; }
static inline uint32_t bea_arg(unsigned long long v) = delete;

// Windows calls the test harness replaces in the game's import table
// (test_harness.cpp: the fixed clock, the recorded cursor and client size)
// go through that table, as the original's calls do.  Called by name they
// bound to the DLL's own imports and bypassed the harness: the ported window
// procedure 0x52aaf0 read the real cursor in a level-523 replay, the pause
// menu saw it, and the replay stuck there (2026-10-27).
#define GetCursorPos (*reinterpret_cast<decltype(&::GetCursorPos)*>(0x005d8248))
#define GetClientRect (*reinterpret_cast<decltype(&::GetClientRect)*>(0x005d8284))
#define QueryPerformanceCounter (*reinterpret_cast<decltype(&::QueryPerformanceCounter)*>(0x005d81ec))
#define timeGetTime (*reinterpret_cast<decltype(&::timeGetTime)*>(0x005d830c))
