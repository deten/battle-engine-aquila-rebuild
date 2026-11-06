// lifted from 004b6260 (FUN_004b6260, 230 bytes, 86 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b6260(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b6260;
L_004b6260:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b6261:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b6262:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b6266:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b6267:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004b6269:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b626a:  // je 0x4b6341
    if (f.zf) goto L_004b6341;
L_004b6270:  // mov ebx, dword ptr [esp + 0x24]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b6274:  // mov eax, dword ptr [ebp + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x15cu)));
L_004b627a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b627c:  // jle 0x4b632c
    if ((f.zf || f.sf != f.of)) goto L_004b632c;
L_004b6282:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004b6284:  // je 0x4b62dc
    if (f.zf) goto L_004b62dc;
L_004b6286:  // mov ecx, dword ptr [ebx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004b6289:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b628b:  // je 0x4b62dc
    if (f.zf) goto L_004b62dc;
L_004b628d:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b6291:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b6293:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b6294:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b6295:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b6296:  // call 0x4b4cd0
    t0 = 0x004b4cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b629bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b629b:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004b629f:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b62a4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b62a5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b62a6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b62a7:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b62ab:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b62ac:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004b62af:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004b62b1:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004b62b4:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b62b6:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004b62ba:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004b62bc:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004b62be:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004b62c0:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004b62c3:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004b62c6:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004b62c9:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004b62cc:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004b62cf:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004b62d2:  // call 0x4b5e80
    t0 = 0x004b5e80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b62d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b62d7:  // add esp, 0x50
    t0 = ladd<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_004b62da:  // jmp 0x4b632c
    goto L_004b632c;
L_004b62dc:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004b62e0:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004b62e4:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b62e8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b62e9:  // mov edx, dword ptr [ebp + 0x160]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x160u)));
L_004b62ef:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b62f3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b62f4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b62f5:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004b62f7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b62f8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b62f9:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b62fe:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004b6301:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004b6303:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004b6306:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b6308:  // mov ecx, dword ptr [esp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004b630c:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004b630e:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004b6310:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004b6312:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004b6315:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004b6318:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004b631b:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004b631e:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004b6321:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004b6324:  // call 0x4b5ad0
    t0 = 0x004b5ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b6329u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b6329:  // add esp, 0x54
    t0 = ladd<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_004b632c:  // mov al, byte ptr [esp + 0x2c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x2cu))) & 0xffu);
L_004b6330:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004b6332:  // je 0x4b6341
    if (f.zf) goto L_004b6341;
L_004b6334:  // mov ebp, dword ptr [ebp + 8]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004b6337:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004b6339:  // je 0x4b6341
    if (f.zf) goto L_004b6341;
L_004b633b:  // jne 0x4b6274
    if (!f.zf) goto L_004b6274;
L_004b6341:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b6342:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b6343:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b6344:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b6345:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004b6260, 004b6260)
