// auto-ported tail call by tools/autoport.py: the original (CCamera::vslot5, 5 bytes) is
//   mov eax, dword ptr [ecx]; jmp dword ptr [eax + 0x10]
// the set-up is copied byte for byte (no relative operand, no stack access);
// a direct jump becomes push TARGET; ret, every register and the stack stay as the caller set them
// @autoport-mode direct (tail call)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_004190e0()
{
    __asm__ volatile(
        ".byte 0x8b, 0x01\n"    /* mov eax, dword ptr [ecx] */
        ".byte 0xff, 0x60, 0x10\n"    /* jmp dword ptr [eax + 0x10] */
    );
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004190e0, ap_004190e0));
