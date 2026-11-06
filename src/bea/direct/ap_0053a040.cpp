// auto-ported thunk by tools/autoport.py: the original is `jmp 0x00557060` (CBLTexture::vslot2, 5 bytes); the port
// pushes the target and returns into it, leaving every register and the stack as the caller set them
// @autoport-mode direct (thunk)
#include "bea/hooks.h"

__attribute__((naked)) static void ap_0053a040()
{
    __asm__ volatile("pushl $0x00557060; ret");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053a040, ap_0053a040));
