// auto-ported thunk by tools/autoport.py: the original is `jmp 0x004e5c60` (thunk_FUN_004e5c60, 5 bytes); the port
// pushes the target and returns into it, leaving every register and the stack as the caller set them
// @autoport-mode direct (thunk)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_0042f220()
{
    __asm__ volatile("pushl $0x004e5c60; ret");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042f220, ap_0042f220));
