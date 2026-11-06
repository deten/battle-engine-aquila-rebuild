// Runtime of the lifted functions (tools/asmlift.py, 2026-10-30).
//
// A lifted function is the original's machine code translated instruction by
// instruction into C: the registers are locals, the flags are computed as the
// instructions define them, the x87 stack is an array of 80-bit long doubles
// (the hardware does the arithmetic, under the game's own control word), and
// every memory access - the stack included - is the original's.  ESP is the
// game's real stack pointer: pushes, locals, leftovers below ESP and the
// arguments of the calls the function makes are byte for byte the original's.
// The C body itself runs on a private stack (lift_enter switches to it) so it
// never touches the game stack; a call to other code (lift_call) switches
// back to the game stack with the registers and the x87 state of the moment.
//
// Nesting deeper than 60 lifted calls (a recursive one) runs the original: the
// private stacks and contexts are 64 deep.
//
// Only the main thread runs lifted bodies (the private stacks and contexts are
// static): on any other thread the thunk goes to the original through its
// trampoline.  The thunk tells threads apart by ESP inside the main thread's
// stack (g_lift_lo .. g_lift_hi, set by lift_init on the main thread).
#pragma once
#include <stdint.h>
#include <string.h>
#include "bea/hooks.h"

struct LiftCtx {                    // the offsets are used by lift_rt.cpp's asm
    uint32_t r[8];                  // 0: eax ecx edx ebx esp ebp esi edi
    void (*body)(LiftCtx*);         // 32
    uint32_t xmode;                 // 36: 0 the fnsave image; 1 the x87 stack empty (lift_x87_out); 2 after a call in mode 1
    uint32_t target;                // 40: where the exit jumps: the return address, or a tail jump's target
    uint32_t msw;                   // 44: mode 1, the model's condition bits and TOP (for the exit)
    uint32_t cstack;                // 48: the body's ESP while lift_call runs other code
    uint32_t call_esp;              // 52: the game ESP at the call
    uint32_t call_ra;               // 56: the original's return address of the call
    uint16_t sw_before, sw_after;   // 60, 62: mode 1, the hardware status word around the call
    uint8_t fpu[108];               // 64: fnsave image (in: at entry / after a call; out: at a call / the exit)
    uint8_t unused3[256 - 172];
};
static_assert(sizeof(LiftCtx) == 256, "LiftCtx layout");

extern "C" {
// ra: the original's return address, written after the call into the slot the
// call used, so the stack below ESP holds what the original's call leaves there
// (the callee itself returns to lift_call)
void lift_call(LiftCtx* c, uint32_t target, uint32_t ra);
void lift_call_nf(LiftCtx* c, uint32_t target, uint32_t ra);     // for a body without x87 instructions: the x87 state stays in the hardware
extern uint32_t g_lift_lo, g_lift_hi;
}
void lift_init();                   // main thread, at hook install: the stack bounds

// --- flags ----------------------------------------------------------------
struct LF { uint32_t cf, zf, sf, of; };

template <int N> struct LW {
    static constexpr uint32_t M = N == 8 ? 0xffu : N == 16 ? 0xffffu : 0xffffffffu;
    static constexpr uint32_t S = N == 8 ? 0x80u : N == 16 ? 0x8000u : 0x80000000u;
};
template <int N> static inline uint32_t lsz(uint32_t r, LF& f) { r &= LW<N>::M; f.zf = r == 0; f.sf = (r & LW<N>::S) != 0; return r; }
template <int N> static inline uint32_t ladd(uint32_t a, uint32_t b, LF& f)
{
    a &= LW<N>::M; b &= LW<N>::M;
    uint32_t r = (a + b) & LW<N>::M;
    f.cf = r < a; f.of = ((~(a ^ b) & (a ^ r)) & LW<N>::S) != 0;
    return lsz<N>(r, f);
}
template <int N> static inline uint32_t ladc(uint32_t a, uint32_t b, LF& f)
{
    a &= LW<N>::M; b &= LW<N>::M;
    uint64_t w = (uint64_t)a + b + (f.cf ? 1 : 0);
    uint32_t r = (uint32_t)w & LW<N>::M;
    f.cf = (w >> N) & 1; f.of = ((~(a ^ b) & (a ^ r)) & LW<N>::S) != 0;
    return lsz<N>(r, f);
}
template <int N> static inline uint32_t lsub(uint32_t a, uint32_t b, LF& f)
{
    a &= LW<N>::M; b &= LW<N>::M;
    uint32_t r = (a - b) & LW<N>::M;
    f.cf = a < b; f.of = (((a ^ b) & (a ^ r)) & LW<N>::S) != 0;
    return lsz<N>(r, f);
}
template <int N> static inline uint32_t lsbb(uint32_t a, uint32_t b, LF& f)
{
    a &= LW<N>::M; b &= LW<N>::M;
    uint32_t c = f.cf ? 1 : 0;
    uint32_t r = (a - b - c) & LW<N>::M;
    f.cf = (uint64_t)a < (uint64_t)b + c; f.of = (((a ^ b) & (a ^ r)) & LW<N>::S) != 0;
    return lsz<N>(r, f);
}
template <int N> static inline uint32_t llog(uint32_t r, LF& f) { f.cf = 0; f.of = 0; return lsz<N>(r, f); }
template <int N> static inline uint32_t linc(uint32_t a, LF& f)
{
    a &= LW<N>::M;
    uint32_t r = (a + 1) & LW<N>::M;
    f.of = r == LW<N>::S;
    return lsz<N>(r, f);
}
template <int N> static inline uint32_t ldec(uint32_t a, LF& f)
{
    a &= LW<N>::M;
    uint32_t r = (a - 1) & LW<N>::M;
    f.of = a == LW<N>::S;
    return lsz<N>(r, f);
}
template <int N> static inline uint32_t lneg(uint32_t a, LF& f)
{
    a &= LW<N>::M;
    uint32_t r = (0 - a) & LW<N>::M;
    f.cf = a != 0; f.of = a == LW<N>::S;
    return lsz<N>(r, f);
}
// shifts: a count of 0 (after & 31) changes nothing, flags included
template <int N> static inline uint32_t lshl(uint32_t a, uint32_t n, LF& f)
{
    n &= 31; a &= LW<N>::M;
    if (!n) return a;
    uint32_t r = n >= 32 ? 0 : (uint32_t)(((uint64_t)a << n) & LW<N>::M);
    f.cf = n <= (uint32_t)N ? (uint32_t)(((uint64_t)a >> (N - n)) & 1) : 0;
    r = lsz<N>(r, f);
    f.of = ((r & LW<N>::S) != 0) ^ f.cf;
    return r;
}
template <int N> static inline uint32_t lshr(uint32_t a, uint32_t n, LF& f)
{
    n &= 31; a &= LW<N>::M;
    if (!n) return a;
    uint32_t r = (uint32_t)(((uint64_t)a >> n) & LW<N>::M);
    f.cf = (uint32_t)(((uint64_t)a >> (n - 1)) & 1);
    f.of = (a & LW<N>::S) != 0;
    return lsz<N>(r, f);
}
template <int N> static inline uint32_t lsar(uint32_t a, uint32_t n, LF& f)
{
    n &= 31; a &= LW<N>::M;
    if (!n) return a;
    int64_t s = N == 8 ? (int8_t)a : N == 16 ? (int16_t)a : (int32_t)a;
    uint32_t r = (uint32_t)((s >> (n > 63 ? 63 : n))) & LW<N>::M;
    f.cf = (uint32_t)((s >> (n - 1)) & 1);
    f.of = 0;
    return lsz<N>(r, f);
}
static inline uint32_t limul32(uint32_t a, uint32_t b, LF& f)
{
    int64_t w = (int64_t)(int32_t)a * (int32_t)b;
    uint32_t r = (uint32_t)w;
    f.cf = f.of = w != (int64_t)(int32_t)r;
    return lsz<32>(r, f);
}

// --- memory ---------------------------------------------------------------
#define M8(a) (*reinterpret_cast<uint8_t*>((uintptr_t)(uint32_t)(a)))
#define M16(a) (*reinterpret_cast<uint16_t*>((uintptr_t)(uint32_t)(a)))
#define M32(a) (*reinterpret_cast<uint32_t*>((uintptr_t)(uint32_t)(a)))
#define M64(a) (*reinterpret_cast<uint64_t*>((uintptr_t)(uint32_t)(a)))
#define F32(a) (*reinterpret_cast<float*>((uintptr_t)(uint32_t)(a)))
#define F64(a) (*reinterpret_cast<double*>((uintptr_t)(uint32_t)(a)))
// fs: is the thread's TEB, as for the original (SEH frames: the records the
// lifted code links in live on the game stack where the original puts them, so
// an exception in a callee reaches the original's own handler and unwinds
// into the original's code)
static inline uint32_t lift_fsrd(uint32_t off) { uint32_t v; __asm__ volatile("movl %%fs:(%1), %0" : "=r"(v) : "r"(off)); return v; }
static inline void lift_fswr(uint32_t off, uint32_t v) { __asm__ volatile("movl %0, %%fs:(%1)" : : "r"(v), "r"(off) : "memory"); }
static inline long double lf80(uint32_t a) { long double v = 0; memcpy(&v, reinterpret_cast<const void*>((uintptr_t)a), 10); return v; }
static inline void lsf80(uint32_t a, long double v) { memcpy(reinterpret_cast<void*>((uintptr_t)a), &v, 10); }

// --- x87 ------------------------------------------------------------------
struct LX87 {
    long double r[8];               // physical registers
    int top;
    uint32_t valid;                 // bit per physical register
    int c0, c1, c2, c3;
};
#define ST(i) (x.r[(x.top + (i)) & 7])
static inline void lpush(LX87& x, long double v) { x.top = (x.top - 1) & 7; x.r[x.top] = v; x.valid |= 1u << x.top; x.c1 = 0; }
static inline void lpop(LX87& x) { x.valid &= ~(1u << x.top); x.top = (x.top + 1) & 7; }
static inline void lcom(LX87& x, long double a, long double b)
{
    if (a != a || b != b) { x.c0 = x.c2 = x.c3 = 1; return; }
    x.c0 = a < b; x.c3 = a == b; x.c2 = 0; x.c1 = 0;
}
void lift_x87_in(LiftCtx* c, LX87& x);       // image -> model; the hardware gets the game's control word, an empty stack
void lift_x87_out(LiftCtx* c, LX87& x);      // model -> image
uint16_t lift_sw(LX87& x);                   // fnstsw: the hardware's exception flags with the model's TOP and C0..C3

// the hardware's own transcendental and integer conversions (the game's rounding)
static inline long double lfsin(long double v) { __asm__("fsin" : "+t"(v)); return v; }
static inline long double lfcos(long double v) { __asm__("fcos" : "+t"(v)); return v; }
static inline long double lfsqrt(long double v) { __asm__("fsqrt" : "+t"(v)); return v; }
static inline long double lfpatan(long double y, long double xx) { long double r; __asm__("fpatan" : "=t"(r) : "0"(xx), "u"(y) : "st(1)"); return r; }
static inline long double lfptan(long double v) { __asm__("fptan\n\tfstp %%st(0)" : "+t"(v)); return v; }
static inline long double lfrnd(long double v) { __asm__("frndint" : "+t"(v)); return v; }
static inline int16_t lfist16(long double v) { int16_t r; __asm__("fistps %0" : "=m"(r) : "t"(v) : "st"); return r; }
static inline int32_t lfist32(long double v) { int32_t r; __asm__("fistpl %0" : "=m"(r) : "t"(v) : "st"); return r; }
static inline int64_t lfist64(long double v) { int64_t r; __asm__("fistpll %0" : "=m"(r) : "t"(v) : "st"); return r; }
static inline float lf32(long double v) { float r; __asm__("fstps %0" : "=m"(r) : "t"(v) : "st"); return r; }
static inline double lf64(long double v) { double r; __asm__("fstpl %0" : "=m"(r) : "t"(v) : "st"); return r; }

// --- the thunk ------------------------------------------------------------
// LIFT_FUNCTION(0x00412340) after the body lift_b_00412340: the entry the
// hook installs (lift_t_...), the trampoline slot, the registration
// (LIFT_FUNCTION_NF: a body without x87 instructions, entered without the x87 state)
#define LIFT_FUNCTION_(ADDR, HEX, ENTER)                                                  \
    extern "C" void lift_t_##HEX();                                                       \
    extern "C" void* lift_tramp_##HEX;                                                    \
    void* lift_tramp_##HEX = nullptr;                                                     \
    __asm__(".text\n.globl _lift_t_" #HEX "\n_lift_t_" #HEX ":\n"                         \
            "\tcmpl _g_lift_lo, %esp\n\tjb 1f\n\tcmpl _g_lift_hi, %esp\n\tjae 1f\n"     \
            "\tcmpl $60, _g_lift_depth\n\tjae 1f\n"                                     \
            "\tmovl %eax, _g_lift_eax\n\tmovl $_lift_b_" #HEX ", %eax\n\tjmp " ENTER "\n" \
            "1:\tjmp *_lift_tramp_" #HEX "\n");                                            \
    BEA_HOOKS({ (ADDR), "lift_" #HEX, reinterpret_cast<void*>(&lift_t_##HEX), __FILE__, &lift_tramp_##HEX });
#define LIFT_FUNCTION(ADDR, HEX) LIFT_FUNCTION_(ADDR, HEX, "_lift_enter")
#define LIFT_FUNCTION_NF(ADDR, HEX) LIFT_FUNCTION_(ADDR, HEX, "_lift_enter_nf")
