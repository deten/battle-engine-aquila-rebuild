// Stack parity for a port (2026-10-31).
//
// A port's stack frame is GCC's, not the original's, so the game code it
// calls runs at another depth than under the original, and that code's
// uninitialised stack reads see other leftovers.  Level 311's dive bomber took
// its attack threshold from such a leftover: the loader 0x50b9c0 copies a
// partly unset stack temporary into a heap block a guide is later built in
// (0x445250 leaves +0x70 unset).  Under the original the leftover is 0; with
// the outer ports 0x4f0330 / 0x46dc30 / 0x46cdf0 the loader ran 0x94 bytes
// deeper, read an ntdll return address there, and the bomber never attacked.
//
// A port compiled with BEA_PARITY defined (before bea/ghidra_compat.h) and
// registered with BEA_PARITY_HOOK runs its C body on a private stack; every
// call it makes through bea_guard / bea_vcall goes back to the game stack at
// the depth the original made that call (tools/callsites.py --table: the
// original's ESP at each call site, below the entry ESP), with the arguments
// where the original pushed them, and the original's return address is left
// in the call's slot afterwards, as the original's call leaves it.  The game
// stack between the entry and the call depth (the original's own frame) is
// not written.
//
// Main thread only, 32 nested parity frames (BEA_PAR_MAX): otherwise (and with BEA_PARITY=0
// in the environment) the thunk runs the port as an ordinary hook.  The
// port's body sees copies of its stack arguments (32 dwords are copied).
#pragma once
#include <stdint.h>

enum { BEA_PAR_DIRECT = 1, BEA_PAR_VCALL = 2, BEA_PAR_IMPORT = 3 };
// a site's depth for the original's tail jump (`jmp f` with ESP at the entry
// ESP): the port's call of f runs with its return-address slot at the port's
// entry ESP, as f runs under the original (platform/parity.cpp)
#define BEA_PAR_TAIL 0xfffffffcu
struct BeaParSite {
    uint32_t kind;                  // BEA_PAR_*; 0 ends the table
    uint32_t key;                   // the call target (direct), the vtable offset (virtual)
    uint32_t depth;                 // the original's ESP at the call, below its entry ESP
    uint32_t ra;                    // the original's return address of the call
};
struct BeaParTable {
    uint32_t addr;
    uint32_t body;                  // the original's ESP between calls, below the entry ESP
    const BeaParSite* sites;
};

extern "C" {
void bea_par_enter();               // the thunks' common part (platform/parity.cpp)
void bea_par_jmp();                 // what a routed call calls instead of its target
#define BEA_PAR_MAX 32
extern uint8_t g_par_stack[BEA_PAR_MAX][0x10000];
extern uint32_t g_par_lo, g_par_hi, g_par_depth;
}
// kind, key: the call as the table knows it; target: where it goes; n: the
// argument bytes the call pushes.  Sets up the next bea_par_jmp.
void bea_par_prepare(uint32_t kind, uint32_t key, uint32_t target, uint32_t n);
void bea_par_init();                // main thread, at hook install (hooks.cpp)

uint32_t bea_par_entry_esp();       // the game ESP at the running parity body's entry (its return address)

// a parity body is running: ESP is on a private stack (game code a routed
// call runs is back on the game stack, so its ports call normally)
__attribute__((always_inline)) static inline bool bea_par_body()
{
    uint32_t sp;
    __asm__ volatile("movl %%esp, %0" : "=r"(sp));
    return sp - (uint32_t)(uintptr_t)g_par_stack < sizeof g_par_stack;
}

// a local the original keeps in its frame at entry ESP - off and whose
// address escapes (a callee fills it): in a parity body the game-stack
// address, so what the callee writes stays there as the original's leftover;
// otherwise the port's own local
template <class T> __attribute__((always_inline)) static inline T* bea_par_local(uint32_t off, T* own)
{
    return bea_par_body() ? reinterpret_cast<T*>(static_cast<uintptr_t>(bea_par_entry_esp() - off)) : own;
}

// the bytes a call through a pointer of type F pushes, with arguments of the
// types A (after bea_pass): each parameter rounded to 4 bytes; a thiscall's
// first one is ECX; a variadic call pushes its extra arguments as passed
template <class... T> constexpr unsigned bea_par_sum() { return (0u + ... + ((unsigned)(sizeof(T) + 3) & ~3u)); }
template <unsigned K, class... A> constexpr unsigned bea_par_tail()
{
    constexpr unsigned s[] = {0u, ((unsigned)(sizeof(A) + 3) & ~3u)...};
    unsigned t = 0;
    for (unsigned i = K + 1; i < sizeof s / sizeof s[0]; ++i) t += s[i];
    return t;
}
template <class F> struct bea_par_ft;
template <class R, class... P> struct bea_par_ft<R (*)(P...)> {
    template <class... A> static constexpr unsigned bytes() { return bea_par_sum<P...>(); }
};
template <class R, class... P> struct bea_par_ft<R (__attribute__((stdcall)) *)(P...)> {
    template <class... A> static constexpr unsigned bytes() { return bea_par_sum<P...>(); }
};
template <class R, class P0, class... P> struct bea_par_ft<R (__attribute__((thiscall)) *)(P0, P...)> {
    template <class... A> static constexpr unsigned bytes() { return bea_par_sum<P...>(); }
};
// fastcall: the first two parameters in ECX and EDX (bea_par_jmp keeps EDX)
template <class R> struct bea_par_ft<R (__attribute__((fastcall)) *)()> {
    template <class... A> static constexpr unsigned bytes() { return 0u; }
};
template <class R, class P0> struct bea_par_ft<R (__attribute__((fastcall)) *)(P0)> {
    template <class... A> static constexpr unsigned bytes() { return 0u; }
};
template <class R, class P0, class P1, class... P> struct bea_par_ft<R (__attribute__((fastcall)) *)(P0, P1, P...)> {
    template <class... A> static constexpr unsigned bytes() { return bea_par_sum<P...>(); }
};
template <class R, class... P> struct bea_par_ft<R (*)(P..., ...)> {
    template <class... A> static constexpr unsigned bytes() { return bea_par_sum<P...>() + bea_par_tail<sizeof...(P), A...>(); }
};
template <class F, class... A> constexpr unsigned bea_par_bytes() { return bea_par_ft<F>::template bytes<A...>(); }

// BEA_PARITY_HOOK(0x0046cdf0, 0046cdf0, ap_0046cdf0, 0x1c, par_0046cdf0): the
// hook's entry (bea_par_t_...) for the port FN, the original's body depth,
// its call-site table
#define BEA_PARITY_HOOK(ADDR, HEX, FN, BODY, SITES)                                        \
    static const BeaParTable bea_par_tab_##HEX = {(ADDR), (BODY), (SITES)};               \
    extern "C" {                                                                           \
    void bea_par_t_##HEX();                                                                \
    void* bea_par_fn_##HEX = reinterpret_cast<void*>(&FN);                                 \
    const void* bea_par_tb_##HEX = &bea_par_tab_##HEX;                                     \
    }                                                                                      \
    __asm__(".text\n.globl _bea_par_t_" #HEX "\n_bea_par_t_" #HEX ":\n"                   \
            "\tcmpl _g_par_lo, %esp\n\tjb 1f\n\tcmpl _g_par_hi, %esp\n\tjae 1f\n"         \
            "\tcmpl $32, _g_par_depth\n\tjae 1f\n"   /* BEA_PAR_MAX */                   \
            "\tmovl _bea_par_fn_" #HEX ", %eax\n\tmovl _bea_par_tb_" #HEX ", %edx\n"       \
            "\tjmp _bea_par_enter\n"                                                       \
            "1:\tjmp *_bea_par_fn_" #HEX "\n");                                            \
    BEA_HOOKS({ (ADDR), #FN, reinterpret_cast<void*>(&bea_par_t_##HEX), __FILE__, nullptr });
