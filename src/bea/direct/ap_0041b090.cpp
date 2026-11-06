// auto-ported tail call by tools/autoport.py: the original (CPanCamera::vslot1_t4, 8 bytes) is
//   sub ecx, 4; jmp 0x419a40
// the set-up is copied byte for byte (no relative operand, no stack access);
// a direct jump becomes push TARGET; ret, every register and the stack stay as the caller set them
// @autoport-mode direct (tail call)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_0041b090()
{
    __asm__ volatile(
        ".byte 0x83, 0xe9, 0x04\n"    /* sub ecx, 4 */
        "pushl $0x419a40; ret\n"    /* jmp 0x419a40 */
    );
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041b090, ap_0041b090));
