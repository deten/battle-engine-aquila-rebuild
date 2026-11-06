// auto-ported thunk by tools/autoport.py: the original is `jmp 0x004dd770` (CTreeDetail::vslot15, 5 bytes); the port
// pushes the target and returns into it, leaving every register and the stack as the caller set them
// @autoport-mode direct (thunk)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_004cef60()
{
    __asm__ volatile("pushl $0x004dd770; ret");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cef60, ap_004cef60));
