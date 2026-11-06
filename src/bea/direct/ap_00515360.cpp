// auto-ported thunk by tools/autoport.py: the original is `jmp 0x005285b0` (CPCMusic::vslot3, 5 bytes); the port
// pushes the target and returns into it, leaving every register and the stack as the caller set them
// @autoport-mode direct (thunk)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_00515360()
{
    __asm__ volatile("pushl $0x005285b0; ret");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515360, ap_00515360));
