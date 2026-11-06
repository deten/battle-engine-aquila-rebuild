// lifted from 0040f2f0 (FUN_0040f2f0, 214 bytes, 91 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0040f2f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0040f2f0;
L_0040f2f0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0040f2f4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040f2f6:  // jl 0x40f300
    if ((f.sf != f.of)) goto L_0040f300;
L_0040f2f8:  // cmp eax, dword ptr [0x660250]
    t0 = lsub<32>(eax, M32((uint32_t)(0x660250u)), f);
L_0040f2fe:  // jl 0x40f302
    if ((f.sf != f.of)) goto L_0040f302;
L_0040f300:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0040f302:  // mov eax, dword ptr [eax*4 + 0x660200]
    eax = (uint32_t)(M32((uint32_t)(eax * 4u + 0x660200u)));
L_0040f309:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040f30a:  // mov ebx, dword ptr [0x6602a0]
    ebx = (uint32_t)(M32((uint32_t)(0x6602a0u)));
L_0040f310:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0040f311:  // mov ebp, ebx
    ebp = (uint32_t)(ebx);
L_0040f313:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040f314:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0040f316:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040f317:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0040f31b:  // mov dword ptr [0x6602a8], ebp
    M32((uint32_t)(0x6602a8u)) = (uint32_t)(ebp);
L_0040f321:  // je 0x40f327
    if (f.zf) goto L_0040f327;
L_0040f323:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0040f325:  // jmp 0x40f329
    goto L_0040f329;
L_0040f327:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0040f329:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040f32b:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0040f32d:  // je 0x40f380
    if (f.zf) goto L_0040f380;
L_0040f32f:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0040f333:  // mov ecx, dword ptr [edi + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xa8u)));
L_0040f339:  // mov al, byte ptr [ecx]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx))) & 0xffu);
L_0040f33b:  // mov dl, al
    edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
L_0040f33d:  // cmp al, byte ptr [esi]
    t0 = lsub<8>((eax & 0xffu), M8((uint32_t)(esi)), f);
L_0040f33f:  // jne 0x40f35d
    if (!f.zf) goto L_0040f35d;
L_0040f341:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0040f343:  // je 0x40f359
    if (f.zf) goto L_0040f359;
L_0040f345:  // mov al, byte ptr [ecx + 1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0x1u))) & 0xffu);
L_0040f348:  // mov dl, al
    edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
L_0040f34a:  // cmp al, byte ptr [esi + 1]
    t0 = lsub<8>((eax & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0040f34d:  // jne 0x40f35d
    if (!f.zf) goto L_0040f35d;
L_0040f34f:  // add ecx, 2
    t0 = ladd<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0040f352:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0040f355:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0040f357:  // jne 0x40f339
    if (!f.zf) goto L_0040f339;
L_0040f359:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0040f35b:  // jmp 0x40f362
    goto L_0040f362;
L_0040f35d:  // sbb ecx, ecx
    t0 = lsbb<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_0040f35f:  // sbb ecx, -1
    t0 = lsbb<32>(ecx, 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0040f362:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0040f364:  // je 0x40f392
    if (f.zf) goto L_0040f392;
L_0040f366:  // mov ebp, dword ptr [ebp + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_0040f369:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0040f36b:  // mov dword ptr [0x6602a8], ebp
    M32((uint32_t)(0x6602a8u)) = (uint32_t)(ebp);
L_0040f371:  // je 0x40f378
    if (f.zf) goto L_0040f378;
L_0040f373:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0040f376:  // jmp 0x40f37a
    goto L_0040f37a;
L_0040f378:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0040f37a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040f37c:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0040f37e:  // jne 0x40f32f
    if (!f.zf) goto L_0040f32f;
L_0040f380:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0040f382:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0040f384:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0040f386:  // mov dword ptr [0x6602a8], ecx
    M32((uint32_t)(0x6602a8u)) = (uint32_t)(ecx);
L_0040f38c:  // je 0x40f39d
    if (f.zf) goto L_0040f39d;
L_0040f38e:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0040f390:  // jmp 0x40f39f
    goto L_0040f39f;
L_0040f392:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0040f394:  // je 0x40f380
    if (f.zf) goto L_0040f380;
L_0040f396:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0040f398:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0040f399:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0040f39a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0040f39b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0040f39c:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0040f39d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0040f39f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040f3a1:  // je 0x40f3bf
    if (f.zf) goto L_0040f3bf;
L_0040f3a3:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0040f3a5:  // je 0x40f3c1
    if (f.zf) goto L_0040f3c1;
L_0040f3a7:  // mov ecx, dword ptr [ecx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0040f3aa:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_0040f3ab:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0040f3ad:  // mov dword ptr [0x6602a8], ecx
    M32((uint32_t)(0x6602a8u)) = (uint32_t)(ecx);
L_0040f3b3:  // je 0x40f3b9
    if (f.zf) goto L_0040f3b9;
L_0040f3b5:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0040f3b7:  // jmp 0x40f3bb
    goto L_0040f3bb;
L_0040f3b9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0040f3bb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040f3bd:  // jne 0x40f3a3
    if (!f.zf) goto L_0040f3a3;
L_0040f3bf:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0040f3c1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0040f3c2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0040f3c3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0040f3c4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0040f3c5:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0040f2f0, 0040f2f0)
