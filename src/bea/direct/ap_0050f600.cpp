// auto-ported tail call by tools/autoport.py: the original (CRelaxedSquad::vslot74, 8 bytes) is
//   mov eax, dword ptr [ecx]; jmp dword ptr [eax + 0x124]
// the set-up is copied byte for byte (no relative operand, no stack access);
// a direct jump becomes push TARGET; ret, every register and the stack stay as the caller set them
// @autoport-mode direct (tail call)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_0050f600()
{
    __asm__ volatile(
        ".byte 0x8b, 0x01\n"    /* mov eax, dword ptr [ecx] */
        ".byte 0xff, 0xa0, 0x24, 0x01, 0x00, 0x00\n"    /* jmp dword ptr [eax + 0x124] */
    );
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050f600, ap_0050f600));
