// auto-ported thunk by tools/autoport.py: the original is `jmp 0x00498530` (thunk_FUN_00498530, 5 bytes); the port
// pushes the target and returns into it, leaving every register and the stack as the caller set them
// @autoport-mode direct (thunk)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_00405a10()
{
    __asm__ volatile("pushl $0x00498530; ret");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00405a10, ap_00405a10));
