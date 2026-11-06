// auto-ported thunk by tools/autoport.py: the original is `jmp 0x00488290` (thunk_FUN_00488290, 5 bytes); the port
// pushes the target and returns into it, leaving every register and the stack as the caller set them
// @autoport-mode direct (thunk)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_0048e350()
{
    __asm__ volatile("pushl $0x00488290; ret");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e350, ap_0048e350));
