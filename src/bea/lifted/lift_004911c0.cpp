// lifted from 004911c0 (FUN_004911c0, 371 bytes, 114 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004911c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004911c0;
L_004911c0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004911c2:  // push 0x5d31ab
    t0 = 0x5d31abu; esp -= 4; M32(esp) = t0;
L_004911c7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004911cd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004911ce:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004911d5:  // sub esp, 0x124
    t0 = lsub<32>(esp, 0x124u, f);
    esp = (uint32_t)(t0);
L_004911db:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004911dc:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004911de:  // mov ecx, dword ptr [esp + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x138u)));
L_004911e5:  // lea eax, [esp + 8]
    eax = (uint32_t)((uint32_t)(esp + 0x8u));
L_004911e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004911ea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004911eb:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004911ef:  // call 0x4f2c60
    t0 = 0x004f2c60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004911f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004911f4:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_004911f8:  // mov dword ptr [esp + 0x130], 0
    M32((uint32_t)(esp + 0x130u)) = (uint32_t)(0x0u);
L_00491203:  // call 0x4f2ce0
    t0 = 0x004f2ce0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00491208u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00491208:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049120a:  // jne 0x491227
    if (!f.zf) goto L_00491227;
L_0049120c:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_00491210:  // mov dword ptr [esp + 0x130], 0xffffffff
    M32((uint32_t)(esp + 0x130u)) = (uint32_t)(0xffffffffu);
L_0049121b:  // call 0x4f2cb0
    t0 = 0x004f2cb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00491220u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00491220:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00491222:  // jmp 0x49131b
    goto L_0049131b;
L_00491227:  // mov eax, dword ptr [edi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_0049122a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0049122b:  // mov ebx, dword ptr [esp + 0x144]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x144u)));
L_00491232:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00491233:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00491234:  // mov esi, dword ptr [esp + 0x148]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x148u)));
L_0049123b:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0049123e:  // imul esi, esi
    t0 = limul32(esi, esi, f);
    esi = (uint32_t)(t0);
L_00491241:  // add eax, dword ptr [edi]
    t0 = ladd<32>(eax, M32((uint32_t)(edi)), f);
    eax = (uint32_t)(t0);
L_00491243:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00491245:  // je 0x49126e
    if (f.zf) goto L_0049126e;
L_00491247:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0049124b:  // mov ebp, esi
    ebp = (uint32_t)(esi);
L_0049124d:  // lea ecx, [edx + 2]
    ecx = (uint32_t)((uint32_t)(edx + 0x2u));
L_00491250:  // mov dl, byte ptr [ecx - 2]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0xfffffffeu))) & 0xffu);
L_00491253:  // add ecx, 3
    t0 = ladd<32>(ecx, 0x3u, f);
    ecx = (uint32_t)(t0);
L_00491256:  // mov byte ptr [eax], dl
    M8((uint32_t)(eax)) = (uint8_t)((edx & 0xffu));
L_00491258:  // mov dl, byte ptr [ecx - 4]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0xfffffffcu))) & 0xffu);
L_0049125b:  // mov byte ptr [eax + 1], dl
    M8((uint32_t)(eax + 0x1u)) = (uint8_t)((edx & 0xffu));
L_0049125e:  // mov dl, byte ptr [ecx - 3]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0xfffffffdu))) & 0xffu);
L_00491261:  // mov byte ptr [eax + 2], dl
    M8((uint32_t)(eax + 0x2u)) = (uint8_t)((edx & 0xffu));
L_00491264:  // mov byte ptr [eax + 3], 0
    M8((uint32_t)(eax + 0x3u)) = (uint8_t)(0x0u);
L_00491268:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049126b:  // dec ebp
    t0 = ldec<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0049126c:  // jne 0x491250
    if (!f.zf) goto L_00491250;
L_0049126e:  // mov ebp, dword ptr [esp + 0x2c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00491272:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00491274:  // je 0x4912c7
    if (f.zf) goto L_004912c7;
L_00491276:  // mov eax, dword ptr [edi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_00491279:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0049127b:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0049127e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00491280:  // mov byte ptr [esp + 0x13], 0x7f
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x7fu);
L_00491285:  // mov dl, 0x80
    edx = (edx & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
L_00491287:  // lea ecx, [eax + ecx + 3]
    ecx = (uint32_t)((uint32_t)(eax + ecx + 0x3u));
L_0049128b:  // je 0x4912b5
    if (f.zf) goto L_004912b5;
L_0049128d:  // mov al, byte ptr [ebp]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp))) & 0xffu);
L_00491290:  // shr al, 2
    t0 = lshr<8>((eax & 0xffu), 0x2u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00491293:  // sub al, 0x20
    t0 = lsub<8>((eax & 0xffu), 0x20u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00491295:  // cmp al, dl
    t0 = lsub<8>((eax & 0xffu), (edx & 0xffu), f);
L_00491297:  // mov byte ptr [ecx], al
    M8((uint32_t)(ecx)) = (uint8_t)((eax & 0xffu));
L_00491299:  // jle 0x49129d
    if ((f.zf || f.sf != f.of)) goto L_0049129d;
L_0049129b:  // mov dl, al
    edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
L_0049129d:  // cmp al, byte ptr [esp + 0x13]
    t0 = lsub<8>((eax & 0xffu), M8((uint32_t)(esp + 0x13u)), f);
L_004912a1:  // jge 0x4912a7
    if ((f.sf == f.of)) goto L_004912a7;
L_004912a3:  // mov byte ptr [esp + 0x13], al
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)((eax & 0xffu));
L_004912a7:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004912aa:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004912ab:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004912ac:  // jne 0x49128d
    if (!f.zf) goto L_0049128d;
L_004912ae:  // mov ebx, dword ptr [esp + 0x14c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x14cu)));
L_004912b5:  // movsx eax, byte ptr [esp + 0x13]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esp + 0x13u))));
L_004912ba:  // movsx ecx, dl
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)((edx & 0xffu)));
L_004912bd:  // mov dword ptr [edi + ebx*4 + 0x1c], eax
    M32((uint32_t)(edi + ebx * 4u + 0x1cu)) = (uint32_t)(eax);
L_004912c1:  // mov dword ptr [edi + ebx*4 + 0x34], ecx
    M32((uint32_t)(edi + ebx * 4u + 0x34u)) = (uint32_t)(ecx);
L_004912c5:  // jmp 0x4912ff
    goto L_004912ff;
L_004912c7:  // mov edx, dword ptr [edi + 0x10]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_004912ca:  // mov ebp, dword ptr [edi]
    ebp = (uint32_t)(M32((uint32_t)(edi)));
L_004912cc:  // imul edx, ebx
    t0 = limul32(edx, ebx, f);
    edx = (uint32_t)(t0);
L_004912cf:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004912d1:  // mov cl, 0x7f
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x7fu) & 0xffu);
L_004912d3:  // mov al, 0x80
    eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
L_004912d5:  // lea ebp, [edx + ebp + 3]
    ebp = (uint32_t)((uint32_t)(edx + ebp + 0x3u));
L_004912d9:  // je 0x4912f1
    if (f.zf) goto L_004912f1;
L_004912db:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004912dd:  // mov byte ptr [ebp], 0
    M8((uint32_t)(ebp)) = (uint8_t)(0x0u);
L_004912e1:  // jge 0x4912e5
    if ((f.sf == f.of)) goto L_004912e5;
L_004912e3:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_004912e5:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004912e7:  // jle 0x4912eb
    if ((f.zf || f.sf != f.of)) goto L_004912eb;
L_004912e9:  // xor cl, cl
    t0 = llog<8>((ecx & 0xffu) ^ (ecx & 0xffu), f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_004912eb:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_004912ee:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004912ef:  // jne 0x4912db
    if (!f.zf) goto L_004912db;
L_004912f1:  // movsx ecx, cl
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ecx & 0xffu)));
L_004912f4:  // movsx edx, al
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)((eax & 0xffu)));
L_004912f7:  // mov dword ptr [edi + ebx*4 + 0x1c], ecx
    M32((uint32_t)(edi + ebx * 4u + 0x1cu)) = (uint32_t)(ecx);
L_004912fb:  // mov dword ptr [edi + ebx*4 + 0x34], edx
    M32((uint32_t)(edi + ebx * 4u + 0x34u)) = (uint32_t)(edx);
L_004912ff:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00491303:  // mov dword ptr [esp + 0x13c], 0xffffffff
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(0xffffffffu);
L_0049130e:  // call 0x4f2cb0
    t0 = 0x004f2cb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00491313u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00491313:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00491314:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00491315:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0049131a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0049131b:  // mov ecx, dword ptr [esp + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x128u)));
L_00491322:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00491323:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0049132a:  // add esp, 0x130
    t0 = ladd<32>(esp, 0x130u, f);
    esp = (uint32_t)(t0);
L_00491330:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004911c0, 004911c0)
