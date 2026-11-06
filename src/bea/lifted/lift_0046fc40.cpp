// lifted from 0046fc40 (FUN_0046fc40, 244 bytes, 77 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0046fc40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0046fc40;
L_0046fc40:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0046fc41:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0046fc43:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046fc44:  // mov ecx, dword ptr [esi + 0x9f8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x9f8u)));
L_0046fc4a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0046fc4c:  // je 0x46fd31
    if (f.zf) goto L_0046fd31;
L_0046fc52:  // mov edx, dword ptr [esi + 0xa00]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xa00u)));
L_0046fc58:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_0046fc59:  // mov dword ptr [esi + 0xa00], edx
    M32((uint32_t)(esi + 0xa00u)) = (uint32_t)(edx);
L_0046fc5f:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0046fc61:  // call dword ptr [eax + 0x144]
    t0 = M32((uint32_t)(eax + 0x144u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fc67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fc67:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0046fc69:  // mov eax, dword ptr [esi + 0xa00]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa00u)));
L_0046fc6f:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0046fc72:  // jne 0x46fc94
    if (!f.zf) goto L_0046fc94;
L_0046fc74:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046fc76:  // lea ecx, [esi + 0xa04]
    ecx = (uint32_t)((uint32_t)(esi + 0xa04u));
L_0046fc7c:  // mov dword ptr [esi + 0xa00], eax
    M32((uint32_t)(esi + 0xa00u)) = (uint32_t)(eax);
L_0046fc82:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fc87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fc87:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0046fc89:  // je 0x46fd31
    if (f.zf) goto L_0046fd31;
L_0046fc8f:  // jmp 0x46fd1f
    goto L_0046fd1f;
L_0046fc94:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046fc96:  // jge 0x46fca2
    if ((f.sf == f.of)) goto L_0046fca2;
L_0046fc98:  // mov ecx, dword ptr [edi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_0046fc9b:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0046fc9c:  // mov dword ptr [esi + 0xa00], ecx
    M32((uint32_t)(esi + 0xa00u)) = (uint32_t)(ecx);
L_0046fca2:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0046fca4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046fca6:  // mov dword ptr [edi + 8], eax
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(eax);
L_0046fca9:  // je 0x46fcaf
    if (f.zf) goto L_0046fcaf;
L_0046fcab:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0046fcad:  // jmp 0x46fcb1
    goto L_0046fcb1;
L_0046fcaf:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046fcb1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046fcb3:  // jne 0x46fcc2
    if (!f.zf) goto L_0046fcc2;
L_0046fcb5:  // mov dword ptr [esi + 0xa00], 0xffffffff
    M32((uint32_t)(esi + 0xa00u)) = (uint32_t)(0xffffffffu);
L_0046fcbf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046fcc0:  // jmp 0x46fd10
    goto L_0046fd10;
L_0046fcc2:  // mov ecx, dword ptr [esi + 0xa00]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa00u)));
L_0046fcc8:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0046fcca:  // jle 0x46fd0f
    if ((f.zf || f.sf != f.of)) goto L_0046fd0f;
L_0046fccc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046fcce:  // je 0x46fd0f
    if (f.zf) goto L_0046fd0f;
L_0046fcd0:  // mov edx, dword ptr [edi + 8]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0046fcd3:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0046fcd6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046fcd8:  // mov dword ptr [edi + 8], eax
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(eax);
L_0046fcdb:  // je 0x46fcea
    if (f.zf) goto L_0046fcea;
L_0046fcdd:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0046fcdf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046fce1:  // je 0x46fcea
    if (f.zf) goto L_0046fcea;
L_0046fce3:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0046fce4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0046fce6:  // jle 0x46fd0f
    if ((f.zf || f.sf != f.of)) goto L_0046fd0f;
L_0046fce8:  // jmp 0x46fccc
    goto L_0046fccc;
L_0046fcea:  // mov eax, dword ptr [esi + 0xa00]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa00u)));
L_0046fcf0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046fcf1:  // push 0x62c208
    t0 = 0x62c208u; esp -= 4; M32(esp) = t0;
L_0046fcf6:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0046fcfb:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fd00u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fd00:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0046fd03:  // mov dword ptr [esi + 0xa00], 0xffffffff
    M32((uint32_t)(esi + 0xa00u)) = (uint32_t)(0xffffffffu);
L_0046fd0d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046fd0f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046fd10:  // lea ecx, [esi + 0xa04]
    ecx = (uint32_t)((uint32_t)(esi + 0xa04u));
L_0046fd16:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fd1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fd1b:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0046fd1d:  // je 0x46fd31
    if (f.zf) goto L_0046fd31;
L_0046fd1f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0046fd21:  // call 0x42f220
    t0 = 0x0042f220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fd26u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fd26:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046fd27:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0046fd2c:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fd31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fd31:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0046fd32:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046fd33:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0046fc40, 0046fc40)
