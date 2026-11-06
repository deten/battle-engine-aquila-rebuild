// auto-ported tail call by tools/autoport.py: the original (CCarver::vslot64, 11 bytes) is
//   mov ecx, dword ptr [ecx + 0x208]; mov eax, dword ptr [ecx]; jmp dword ptr [eax + 0x20]
// the set-up is copied byte for byte (no relative operand, no stack access);
// a direct jump becomes push TARGET; ret, every register and the stack stay as the caller set them
// @autoport-mode direct (tail call)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_00422750()
{
    __asm__ volatile(
        ".byte 0x8b, 0x89, 0x08, 0x02, 0x00, 0x00\n"    /* mov ecx, dword ptr [ecx + 0x208] */
        ".byte 0x8b, 0x01\n"    /* mov eax, dword ptr [ecx] */
        ".byte 0xff, 0x60, 0x20\n"    /* jmp dword ptr [eax + 0x20] */
    );
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422750, ap_00422750));
