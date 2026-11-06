// Runtime of the lifted functions: see lift_rt.h.
#include "bea/lifted/lift_rt.h"
#include <windows.h>

extern "C" {
uint32_t g_lift_lo = 0xffffffffu, g_lift_hi = 0;      // the main thread's stack; nothing is lifted before lift_init
uint32_t g_lift_eax = 0, g_lift_edx = 0, g_lift_tgt = 0, g_lift_depth = 0;
alignas(16) LiftCtx g_lift_ctx[64];
alignas(16) uint8_t g_lift_stack[64][0x10000];        // one private stack per nesting level
void lift_enter();
}

void lift_init()
{
    // TEB: StackBase at fs:4; the reserved stack starts at DeallocationStack (fs:0xe0c)
    uint32_t base = 0, dealloc = 0;
    __asm__("movl %%fs:4, %0" : "=r"(base));
    __asm__("movl %%fs:0xe0c, %0" : "=r"(dealloc));
    g_lift_lo = dealloc;
    g_lift_hi = base;
}

// enter: EAX = the body, the game's EAX in g_lift_eax, every other register
// and ESP (the return address at [esp]) as the caller left them.  The body
// sets the registers, ESP and the exit target in the context; the exit loads
// them and jumps (a return: the popped return address; a tail jump: its target)
__asm__(R"(
.text
.globl _lift_enter
_lift_enter:
    movl %edx, _g_lift_edx
    movl _g_lift_depth, %edx
    shll $8, %edx
    addl $_g_lift_ctx, %edx
    incl _g_lift_depth
    movl %eax, 32(%edx)
    movl _g_lift_eax, %eax
    movl %eax, 0(%edx)
    movl %ecx, 4(%edx)
    movl _g_lift_edx, %eax
    movl %eax, 8(%edx)
    movl %ebx, 12(%edx)
    movl %esp, 16(%edx)
    movl %ebp, 20(%edx)
    movl %esi, 24(%edx)
    movl %edi, 28(%edx)
    movl $0, 36(%edx)
    fnsave 64(%edx)
    movl _g_lift_depth, %eax
    shll $16, %eax
    leal _g_lift_stack(%eax), %esp
    subl $16, %esp
    andl $-16, %esp
    movl %edx, (%esp)
    call *32(%edx)
    movl _g_lift_depth, %edx        # (the body may have written its argument slot)
    decl %edx
    shll $8, %edx
    addl $_g_lift_ctx, %edx
    cmpl $1, 36(%edx)
    je 1f
    frstor 64(%edx)
    jmp 2f
1:  pushl %edx
    call _lift_exit_env
    popl %edx
2:
    decl _g_lift_depth
    movl 40(%edx), %eax
    movl %eax, _g_lift_tgt
    movl 12(%edx), %ebx
    movl 16(%edx), %esp
    movl 20(%edx), %ebp
    movl 24(%edx), %esi
    movl 28(%edx), %edi
    movl 0(%edx), %eax
    movl 4(%edx), %ecx
    movl 8(%edx), %edx
    jmp *_g_lift_tgt

# lift_call(ctx, target, return address), cdecl, from a body on its private stack: the game's
# registers, ESP and x87 state from the context, `call target` on the game
# stack, then everything back into the context (the context of the innermost
# active level: a lifted function the callee entered has left by then)
.globl _lift_call
_lift_call:
    pushl %ebp
    pushl %ebx
    pushl %esi
    pushl %edi
    movl 20(%esp), %edx
    movl 24(%esp), %eax
    movl %eax, _g_lift_tgt
    movl 28(%esp), %eax
    movl %eax, 56(%edx)
    movl 16(%edx), %eax
    movl %eax, 52(%edx)
    movl %esp, 48(%edx)
    cmpl $1, 36(%edx)
    je 1f
    frstor 64(%edx)
    jmp 2f
1:  fnstsw %ax
    movw %ax, 60(%edx)
2:
    movl 12(%edx), %ebx
    movl 20(%edx), %ebp
    movl 24(%edx), %esi
    movl 28(%edx), %edi
    movl 16(%edx), %esp
    movl 0(%edx), %eax
    movl 4(%edx), %ecx
    movl 8(%edx), %edx
    call *_g_lift_tgt
    movl %edx, _g_lift_edx
    movl _g_lift_depth, %edx
    decl %edx
    shll $8, %edx
    addl $_g_lift_ctx, %edx
    movl %eax, 0(%edx)
    movl %ecx, 4(%edx)
    movl _g_lift_edx, %eax
    movl %eax, 8(%edx)
    movl %ebx, 12(%edx)
    movl %esp, 16(%edx)
    movl %ebp, 20(%edx)
    movl %esi, 24(%edx)
    movl %edi, 28(%edx)
    cmpl $1, 36(%edx)
    je 1f
    fnsave 64(%edx)
    jmp 2f
1:  fnstsw %ax
    movw %ax, 62(%edx)
    movl $2, 36(%edx)
2:
    movl 52(%edx), %ecx
    movl 56(%edx), %eax
    movl %eax, -4(%ecx)
    movl 48(%edx), %esp
    popl %edi
    popl %esi
    popl %ebx
    popl %ebp
    ret
)");

// The same two without the x87 state, for a body with no x87 instruction: the
// hardware keeps the game's x87 state throughout (GCC's integer code does not
// touch it), so nothing is saved, converted or restored
__asm__(R"(
.text
.globl _lift_enter_nf
_lift_enter_nf:
    movl %edx, _g_lift_edx
    movl _g_lift_depth, %edx
    shll $8, %edx
    addl $_g_lift_ctx, %edx
    incl _g_lift_depth
    movl %eax, 32(%edx)
    movl _g_lift_eax, %eax
    movl %eax, 0(%edx)
    movl %ecx, 4(%edx)
    movl _g_lift_edx, %eax
    movl %eax, 8(%edx)
    movl %ebx, 12(%edx)
    movl %esp, 16(%edx)
    movl %ebp, 20(%edx)
    movl %esi, 24(%edx)
    movl %edi, 28(%edx)
    movl _g_lift_depth, %eax
    shll $16, %eax
    leal _g_lift_stack(%eax), %esp
    subl $16, %esp
    andl $-16, %esp
    movl %edx, (%esp)
    call *32(%edx)
    movl _g_lift_depth, %edx
    decl %edx
    shll $8, %edx
    addl $_g_lift_ctx, %edx
    decl _g_lift_depth
    movl 40(%edx), %eax
    movl %eax, _g_lift_tgt
    movl 12(%edx), %ebx
    movl 16(%edx), %esp
    movl 20(%edx), %ebp
    movl 24(%edx), %esi
    movl 28(%edx), %edi
    movl 0(%edx), %eax
    movl 4(%edx), %ecx
    movl 8(%edx), %edx
    jmp *_g_lift_tgt

.globl _lift_call_nf
_lift_call_nf:
    pushl %ebp
    pushl %ebx
    pushl %esi
    pushl %edi
    movl 20(%esp), %edx
    movl 24(%esp), %eax
    movl %eax, _g_lift_tgt
    movl 28(%esp), %eax
    movl %eax, 56(%edx)
    movl 16(%edx), %eax
    movl %eax, 52(%edx)
    movl %esp, 48(%edx)
    movl 12(%edx), %ebx
    movl 20(%edx), %ebp
    movl 24(%edx), %esi
    movl 28(%edx), %edi
    movl 16(%edx), %esp
    movl 0(%edx), %eax
    movl 4(%edx), %ecx
    movl 8(%edx), %edx
    call *_g_lift_tgt
    movl %edx, _g_lift_edx
    movl _g_lift_depth, %edx
    decl %edx
    shll $8, %edx
    addl $_g_lift_ctx, %edx
    movl %eax, 0(%edx)
    movl %ecx, 4(%edx)
    movl _g_lift_edx, %eax
    movl %eax, 8(%edx)
    movl %ebx, 12(%edx)
    movl %esp, 16(%edx)
    movl %ebp, 20(%edx)
    movl %esi, 24(%edx)
    movl %edi, 28(%edx)
    movl 52(%edx), %ecx
    movl 56(%edx), %eax
    movl %eax, -4(%ecx)
    movl 48(%edx), %esp
    popl %edi
    popl %esi
    popl %ebx
    popl %ebp
    ret
)");

namespace {

// the tag of a value as fnsave writes it: 00 valid, 01 zero, 10 special
uint32_t tag_of(const uint8_t* p)
{
    uint64_t m;
    uint16_t se;
    memcpy(&m, p, 8);
    memcpy(&se, p + 8, 2);
    uint32_t e = se & 0x7fff;
    if (e == 0x7fff) return 2;
    if (e == 0) return m == 0 ? 1 : 2;
    return (m >> 63) ? 0 : 2;               // an unnormal is special
}

}  // namespace

// The fast mode (2026-11-04: the bridge was 62% of all time fullscreen). At a call with the
// model's x87 stack empty (lift_x87_out, mode 1) the hardware already holds the game's
// control word, its exception flags and an empty stack: lift_call reads only the status
// word before and after the call (mode 2), and lift_x87_in pops into the model the values
// the callee left (the change in TOP: a float result in st0), the hardware keeping what
// the callee left in the control word and flags. The exit in mode 1 writes the model's
// condition bits and TOP into the status word (lift_exit_env). Not carried any more: the
// stale bits of empty registers, which no instruction can read (a load of an empty register
// is a stack fault). Anything else (a callee popping more than it pushed) takes the fnsave.
void lift_x87_in(LiftCtx* c, LX87& x)
{
    if (c->xmode == 2) {
        c->xmode = 0;
        uint16_t before, after;
        memcpy(&before, reinterpret_cast<uint8_t*>(c) + 60, 2);
        memcpy(&after, reinterpret_cast<uint8_t*>(c) + 62, 2);
        int n = (((before >> 11) & 7) - ((after >> 11) & 7)) & 7;   // the values the callee left
        if (n <= 2) {
            x.top = (x.top - n) & 7;
            x.valid = 0;
            for (int k = 0; k < n; ++k) {
                int phys = (x.top + k) & 7;
                __asm__ volatile("fstpt %0" : "=m"(*(long double*)&x.r[phys]));
                x.valid |= 1u << phys;
            }
            x.c0 = (after >> 8) & 1; x.c1 = (after >> 9) & 1; x.c2 = (after >> 10) & 1; x.c3 = (after >> 14) & 1;
            return;
        }
        // anything else (a callee that popped more than it pushed): the whole state
        __asm__ volatile("fnsave %0" : "=m"(*(uint8_t(*)[108])c->fpu));
    }
    const uint8_t* img = c->fpu;
    uint16_t sw, tw;
    memcpy(&sw, img + 4, 2);
    memcpy(&tw, img + 8, 2);
    x.top = (sw >> 11) & 7;
    x.c0 = (sw >> 8) & 1; x.c1 = (sw >> 9) & 1; x.c2 = (sw >> 10) & 1; x.c3 = (sw >> 14) & 1;
    x.valid = 0;
    for (int i = 0; i < 8; ++i) {
        int phys = (x.top + i) & 7;
        // the 10 bytes copied as bytes: a long double temporary went through fld/fstp, and
        // the stale bits of empty registers (denormals, unnormals, NaNs) took microcode
        // assists: this function was a quarter of all time fullscreen (2026-11-04 profile)
        memcpy(&x.r[phys], img + 28 + 10 * i, 10);
        if (((tw >> (2 * phys)) & 3) != 3) x.valid |= 1u << phys;
    }
    // the hardware: the game's control word and exception flags, an empty stack
    uint8_t env[28];
    memcpy(env, img, 28);
    uint16_t hsw = sw & 0x00ff & ~0x80;     // the exception flags (ES/B follow them when unmasked)
    uint16_t htw = 0xffff;
    memcpy(env + 4, &hsw, 2);
    memcpy(env + 8, &htw, 2);
    __asm__ volatile("fldenv %0" : : "m"(*(const uint8_t(*)[28])env));
}

// the exit in mode 1: the hardware has the game's control word and flags and an empty
// stack; the model's condition bits and TOP go into its status word
extern "C" void lift_exit_env(LiftCtx* c)
{
    uint8_t env[28];
    __asm__ volatile("fnstenv %0" : "=m"(*(uint8_t(*)[28])env));
    uint16_t hsw, msw;
    memcpy(&hsw, env + 4, 2);
    memcpy(&msw, reinterpret_cast<uint8_t*>(c) + 44, 2);
    uint16_t sw = (uint16_t)((hsw & 0x00ff) | msw);
    uint16_t tw = 0xffff;
    memcpy(env + 4, &sw, 2);
    memcpy(env + 8, &tw, 2);
    __asm__ volatile("fldenv %0" : : "m"(*(const uint8_t(*)[28])env));
}

void lift_x87_out(LiftCtx* c, LX87& x)
{
    if (x.valid == 0) {
        // mode 1: nothing to hand over but the condition bits and TOP, kept for the exit
        // (lift_exit_env); a call reads only the status word (lift_call)
        uint16_t msw = (uint16_t)((x.c0 << 8) | (x.c1 << 9) | (x.c2 << 10) | (x.top << 11) | (x.c3 << 14));
        memcpy(reinterpret_cast<uint8_t*>(c) + 44, &msw, 2);
        c->xmode = 1;
        return;
    }
    uint8_t env[28];
    __asm__ volatile("fnstenv %0" : "=m"(*(uint8_t(*)[28])env));
    uint8_t* img = c->fpu;
    memcpy(img, env, 28);                   // the control word is the game's (fnstenv masked nothing it keeps)
    uint16_t hsw;
    memcpy(&hsw, env + 4, 2);
    uint16_t sw = (uint16_t)((hsw & 0x00ff) | (x.c0 << 8) | (x.c1 << 9) | (x.c2 << 10) | (x.top << 11) | (x.c3 << 14));
    memcpy(img + 4, &sw, 2);
    c->xmode = 0;
    uint16_t tw = 0;
    for (int i = 0; i < 8; ++i) {
        int phys = (x.top + i) & 7;
        memcpy(img + 28 + 10 * i, &x.r[phys], 10);
        uint32_t t = (x.valid >> phys) & 1 ? tag_of(img + 28 + 10 * i) : 3;
        tw |= (uint16_t)(t << (2 * phys));
    }
    memcpy(img + 8, &tw, 2);
    // fnstenv masked every exception in the hardware: the control word back
    __asm__ volatile("fldcw %0" : : "m"(*(const uint16_t*)img));
}

uint16_t lift_sw(LX87& x)
{
    uint16_t hsw;
    __asm__ volatile("fnstsw %0" : "=am"(hsw));
    return (uint16_t)((hsw & 0x00ff) | (x.c0 << 8) | (x.c1 << 9) | (x.c2 << 10) | (x.top << 11) | (x.c3 << 14));
}
