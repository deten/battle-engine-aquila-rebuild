// hand-ported tail call (CController::vslot2, 34 bytes): six field moves, then jmp [vtbl+0x3c]
// @hand-fixed 2026-10-29 the original only uses registers and tail-jumps through the vtable (0042d9ef jmp [edx+0x3c], with this still in ECX and the caller's stack untouched), which Ghidra flagged as an unrecoverable jump table; copied byte for byte as a naked port (like the autoport tail-call ports), so the target sees the same ECX/stack/x87 and returns its own EAX to the caller
// @autoport-mode direct (tail call)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_0042d9d0()
{
    __asm__ volatile(
        ".byte 0x8b, 0x41, 0x14\n"    /* mov eax, dword ptr [ecx + 0x14] */
        ".byte 0x8b, 0x51, 0x18\n"    /* mov edx, dword ptr [ecx + 0x18] */
        ".byte 0x89, 0x41, 0x20\n"    /* mov dword ptr [ecx + 0x20], eax */
        ".byte 0x8b, 0x41, 0x1c\n"    /* mov eax, dword ptr [ecx + 0x1c] */
        ".byte 0x89, 0x41, 0x28\n"    /* mov dword ptr [ecx + 0x28], eax */
        ".byte 0x33, 0xc0\n"          /* xor eax, eax */
        ".byte 0x89, 0x51, 0x24\n"    /* mov dword ptr [ecx + 0x24], edx */
        ".byte 0x8b, 0x11\n"          /* mov edx, dword ptr [ecx] */
        ".byte 0x89, 0x41, 0x14\n"    /* mov dword ptr [ecx + 0x14], eax */
        ".byte 0x89, 0x41, 0x18\n"    /* mov dword ptr [ecx + 0x18], eax */
        ".byte 0x89, 0x41, 0x1c\n"    /* mov dword ptr [ecx + 0x1c], eax */
        ".byte 0xff, 0x62, 0x3c\n"    /* jmp dword ptr [edx + 0x3c] */
    );
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042d9d0, ap_0042d9d0));
