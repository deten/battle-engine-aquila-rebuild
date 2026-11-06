// auto-ported thunk by tools/autoport.py: the original is `jmp 0x0050ada0` (thunk_FUN_0050ada0, 5 bytes); the port
// pushes the target and returns into it, leaving every register and the stack as the caller set them
// @autoport-mode direct (thunk)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_0050abb0()
{
    __asm__ volatile("pushl $0x0050ada0; ret");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050abb0, ap_0050abb0));
