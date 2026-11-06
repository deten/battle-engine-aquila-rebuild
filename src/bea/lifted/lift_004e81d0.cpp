// lifted from 004e81d0 (FUN_004e81d0, 386 bytes, 147 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e81d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e81d0;
L_004e81d0:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004e81d3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e81d4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e81d5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e81d6:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004e81d8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e81d9:  // mov eax, dword ptr [esi + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xc4u)));
L_004e81df:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e81e1:  // je 0x4e8345
    if (f.zf) goto L_004e8345;
L_004e81e7:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004e81ea:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e81ed:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004e81ef:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004e81f1:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_004e81f3:  // mov dword ptr [ecx], edi
    M32((uint32_t)(ecx)) = (uint32_t)(edi);
L_004e81f5:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004e81f8:  // mov dword ptr [ecx + 4], edi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edi);
L_004e81fb:  // mov edi, dword ptr [eax + 8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004e81fe:  // mov dword ptr [ecx + 8], edi
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edi);
L_004e8201:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004e8204:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004e8207:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e8209:  // call dword ptr [edx + 0x12c]
    t0 = M32((uint32_t)(edx + 0x12cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e820fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e820f:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004e8211:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e8213:  // je 0x4e8345
    if (f.zf) goto L_004e8345;
L_004e8219:  // mov ecx, dword ptr [esi + 0xc4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xc4u)));
L_004e821f:  // mov eax, dword ptr [ecx + 0x34]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x34u)));
L_004e8222:  // test eax, 0x20000000
    t0 = llog<32>(eax & 0x20000000u, f);
L_004e8227:  // je 0x4e8253
    if (f.zf) goto L_004e8253;
L_004e8229:  // lea eax, [ebx + 0x1c]
    eax = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004e822c:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e822f:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004e8231:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e8233:  // mov ebp, dword ptr [eax]
    ebp = (uint32_t)(M32((uint32_t)(eax)));
L_004e8235:  // mov dword ptr [edi], ebp
    M32((uint32_t)(edi)) = (uint32_t)(ebp);
L_004e8237:  // mov ebp, dword ptr [eax + 4]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004e823a:  // mov dword ptr [edi + 4], ebp
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebp);
L_004e823d:  // mov ebp, dword ptr [eax + 8]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004e8240:  // mov dword ptr [edi + 8], ebp
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebp);
L_004e8243:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004e8246:  // mov dword ptr [edi + 0xc], eax
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(eax);
L_004e8249:  // call dword ptr [edx + 0x12c]
    t0 = M32((uint32_t)(edx + 0x12cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e824fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e824f:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004e8251:  // jmp 0x4e8259
    goto L_004e8259;
L_004e8253:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_004e8255:  // je 0x4e825d
    if (f.zf) goto L_004e825d;
L_004e8257:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004e8259:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004e825b:  // jne 0x4e8267
    if (!f.zf) goto L_004e8267;
L_004e825d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e825f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e8260:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e8261:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e8262:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e8263:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004e8266:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004e8267:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e8268:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e826a:  // call 0x4fb840
    t0 = 0x004fb840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e826fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e826f:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004e8271:  // mov edi, dword ptr [esi + 0xc4]
    edi = (uint32_t)(M32((uint32_t)(esi + 0xc4u)));
L_004e8277:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_004e827b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e827d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e827e:  // call dword ptr [edx + 0x120]
    t0 = M32((uint32_t)(edx + 0x120u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8284u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8284:  // fld dword ptr [edi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x1cu)));
L_004e8287:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_004e8289:  // fld dword ptr [edi + 0x20]
    lpush(x, (long double)F32((uint32_t)(edi + 0x20u)));
L_004e828c:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004e828f:  // fld dword ptr [edi + 0x24]
    lpush(x, (long double)F32((uint32_t)(edi + 0x24u)));
L_004e8292:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004e8295:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004e8299:  // lea esi, [ebp + 0x1c]
    esi = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004e829c:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e829f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e82a1:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e82a3:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004e82a7:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004e82ab:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e82ad:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004e82af:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e82b1:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004e82b3:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004e82b5:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004e82b7:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004e82b9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e82bb:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004e82be:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004e82c1:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e82c3:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004e82c6:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004e82c9:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004e82cc:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004e82cf:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e82d1:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004e82d3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e82d5:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004e82d9:  // call 0x4fb780
    t0 = 0x004fb780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e82deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e82de:  // fmul dword ptr [0x5db4ac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4acu)));
L_004e82e4:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_004e82e8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e82ea:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e82ed:  // jne 0x4e82fc
    if (!f.zf) goto L_004e82fc;
L_004e82ef:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_004e82f4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e82f5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e82f6:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e82f7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e82f8:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004e82fb:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004e82fc:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004e82fe:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004e8301:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e8304:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004e8306:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004e8308:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004e830b:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004e830e:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004e8311:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004e8314:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004e8317:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e8319:  // call 0x4fb7e0
    t0 = 0x004fb7e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e831eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e831e:  // fmul dword ptr [0x5d8600]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8600u)));
L_004e8324:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_004e8328:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e832a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004e832d:  // jne 0x4e8345
    if (!f.zf) goto L_004e8345;
L_004e832f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e8330:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e8332:  // call 0x4fb5a0
    t0 = 0x004fb5a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8337u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8337:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e8339:  // je 0x4e8345
    if (f.zf) goto L_004e8345;
L_004e833b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e833d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e833e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e833f:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e8340:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e8341:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004e8344:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004e8345:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e8346:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e8347:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e8348:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004e834d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e834e:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004e8351:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004e81d0, 004e81d0)
