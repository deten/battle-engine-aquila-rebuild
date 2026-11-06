// Stack parity runtime: see bea/parity.h.
#include "bea/parity.h"
#include "bea/hooks.h"
#include <windows.h>
#include <set>
#include <utility>

struct BeaParFrame {                // the offsets are used by the asm below
    uint32_t E;                     // 0: the game ESP at the entry (the return address at [E])
    uint32_t ra;                    // 4: the caller's return address
    const BeaParTable* table;       // 8
    uint32_t cursor;                // 12: the table entry after the last call matched
    uint32_t fn;                    // 16: the port
    uint32_t P0;                    // 20: the private ESP at the port's call
    uint32_t ecx;                   // 24: scratch
    uint32_t ebx;                   // 28: scratch
    uint32_t c_target;              // 32: the routed call: where it goes
    uint32_t c_T;                   // 36: the game ESP at the callee's entry (the return address slot)
    uint32_t c_n;                   // 40: its argument bytes
    uint32_t c_rao;                 // 44: the original's return address of the call (0: none known)
    uint32_t c_X;                   // 48: the private ESP at bea_par_jmp
    uint32_t c_ra;                  // 52: the port's return address of the call
    uint32_t r_edx;                 // 56
    uint32_t unused[17];
};
static_assert(sizeof(BeaParFrame) == 128, "BeaParFrame layout");

extern "C" {
uint32_t g_par_lo = 0xffffffffu, g_par_hi = 0;      // the main thread's stack; nothing runs with parity before bea_par_init
uint32_t g_par_depth = 0, g_par_tmp = 0, g_par_eax = 0, g_par_edx = 0;
uint32_t g_par_jedx = 0, g_par_jtarget = 0;   // bea_par_jmp: the body's EDX and the target, kept across the switch
alignas(16) BeaParFrame g_par_frames[BEA_PAR_MAX];
alignas(16) uint8_t g_par_stack[BEA_PAR_MAX][0x10000];
void bea_par_ret();
}

void bea_par_init()
{
    char v[8];
    if (GetEnvironmentVariableA("BEA_PARITY", v, sizeof v) && v[0] == '0') {
        bea_log("parity: off (BEA_PARITY=0)");
        return;
    }
    uint32_t base = 0, dealloc = 0;
    __asm__("movl %%fs:4, %0" : "=r"(base));
    __asm__("movl %%fs:0xe0c, %0" : "=r"(dealloc));
    g_par_lo = dealloc;
    g_par_hi = base;
    bea_log("parity: on (main thread stack %08lx-%08lx)", (unsigned long)dealloc, (unsigned long)base);
}

uint32_t bea_par_entry_esp()
{
    return g_par_frames[g_par_depth - 1].E;
}

void bea_par_prepare(uint32_t kind, uint32_t key, uint32_t target, uint32_t n)
{
    BeaParFrame& fr = g_par_frames[g_par_depth - 1];
    const BeaParTable* t = fr.table;
    // the site: same call and argument bytes, the first one after the last
    // call matched (the port makes them in the original's order), else any
    // with the call
    const BeaParSite* s = t->sites;
    int count = 0;
    while (s[count].kind) ++count;
    const BeaParSite* best = nullptr;
    const BeaParSite* loose = nullptr;
    for (int i = 0; i < count && !best; ++i) {
        const BeaParSite& c = s[(fr.cursor + i) % count];
        if (c.kind != kind || c.key != key) continue;
        if (c.depth - t->body == n) best = &c;
        else if (!loose) loose = &c;
    }
    if (!best) best = loose;
    uint32_t depth = t->body + n;
    if (best) {
        depth = best->depth;
        fr.cursor = (uint32_t)(best - s + 1) % count;
    } else {
        static std::set<std::pair<uint32_t, uint32_t>> told;
        if (told.insert({t->addr, key}).second)
            bea_log("parity: %08lx calls %s %08lx not in the original's table (depth body+%u)", (unsigned long)t->addr,
                    kind == BEA_PAR_VCALL ? "vslot" : "", (unsigned long)key, n);
    }
    fr.c_target = target;
    fr.c_T = fr.E - depth - 4;
    fr.c_n = n;
    fr.c_rao = best ? best->ra : 0;
    // a tail jump (depth BEA_PAR_TAIL, -4): the callee runs where the original's
    // `jmp` runs it, its return-address slot the port's own (entry ESP), and
    // after it returns that slot holds the caller's return address again
    if (best && best->depth == BEA_PAR_TAIL) fr.c_rao = fr.ra;
}

// enter: EAX = the port, EDX = its table, ESP the caller's (return address at
// [esp]).  The port runs on the private stack of this nesting level with a
// copy of 32 stack dwords as its arguments; when it returns, the caller gets
// ESP past the bytes the port popped (its `ret N`), EAX/EDX and the x87
// stack as the port left them.
//
// jmp: called by a parity body instead of the call's target, after
// bea_par_prepare: the return address and the argument bytes go to the game
// stack where the original's call had them, and the target runs there with
// the body's ECX.  ret: back on the private stack past the bytes the callee
// popped, the original's return address in the call's slot.
__asm__(R"(
.text
.globl _bea_par_enter
_bea_par_enter:
    movl %edx, _g_par_tmp
    movl _g_par_depth, %edx
    shll $7, %edx
    addl $_g_par_frames, %edx
    incl _g_par_depth
    movl %esp, 0(%edx)
    movl %eax, 16(%edx)
    movl (%esp), %eax
    movl %eax, 4(%edx)
    movl _g_par_tmp, %eax
    movl %eax, 8(%edx)
    movl $0, 12(%edx)
    movl %ecx, 24(%edx)
    movl %ebx, 28(%edx)
    movl _g_par_depth, %eax
    shll $16, %eax
    leal _g_par_stack-256(%eax), %eax
    andl $-16, %eax
    movl $124, %ecx
1:  movl 4(%esp,%ecx), %ebx
    movl %ebx, (%eax,%ecx)
    subl $4, %ecx
    jns 1b
    movl 28(%edx), %ebx
    movl 24(%edx), %ecx
    movl %eax, %esp
    movl %esp, 20(%edx)
    call *16(%edx)
    movl %eax, _g_par_eax
    movl %edx, _g_par_edx
    movl _g_par_depth, %edx
    decl %edx
    shll $7, %edx
    addl $_g_par_frames, %edx
    decl _g_par_depth
    movl %esp, %eax
    subl 20(%edx), %eax
    addl 0(%edx), %eax
    addl $4, %eax
    movl 4(%edx), %ecx
    movl %eax, %esp
    movl _g_par_eax, %eax
    movl _g_par_edx, %edx
    jmp *%ecx

.globl _bea_par_jmp
_bea_par_jmp:
    movl %edx, _g_par_jedx
    movl _g_par_depth, %edx
    decl %edx
    shll $7, %edx
    addl $_g_par_frames, %edx
    movl %ecx, 24(%edx)
    movl %ebx, 28(%edx)
    movl %esp, 48(%edx)
    movl (%esp), %eax
    movl %eax, 52(%edx)
    movl 36(%edx), %ebx
    movl 40(%edx), %ecx
    testl %ecx, %ecx
    jz 2f
1:  movl (%esp,%ecx), %eax
    movl %eax, (%ebx,%ecx)
    subl $4, %ecx
    jnz 1b
2:  movl $_bea_par_ret, (%ebx)
    movl %ebx, %esp
    movl 28(%edx), %ebx
    movl 24(%edx), %ecx
    movl 32(%edx), %eax
    movl %eax, _g_par_jtarget
    movl _g_par_jedx, %edx          # the body's EDX (a fastcall's second argument)
    jmp *_g_par_jtarget

.globl _bea_par_ret
_bea_par_ret:
    movl %eax, _g_par_eax
    movl _g_par_depth, %eax
    decl %eax
    shll $7, %eax
    addl $_g_par_frames, %eax
    movl %edx, 56(%eax)
    movl %esp, %edx
    subl 36(%eax), %edx
    movl 44(%eax), %ecx
    testl %ecx, %ecx
    jz 1f
    movl 36(%eax), %esp
    movl %ecx, (%esp)
1:  movl 48(%eax), %esp
    addl %edx, %esp
    movl 52(%eax), %ecx
    movl 56(%eax), %edx
    movl _g_par_eax, %eax
    jmp *%ecx
)");
