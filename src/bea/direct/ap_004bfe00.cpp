// auto-ported thunk by tools/autoport.py: the original is `jmp 0x004f84e0` (thunk_FUN_004f84e0, 5 bytes); the port
// pushes the target and returns into it, leaving every register and the stack as the caller set them
// @autoport-mode direct (thunk)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_004bfe00()
{
    __asm__ volatile("pushl $0x004f84e0; ret");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bfe00, ap_004bfe00));
