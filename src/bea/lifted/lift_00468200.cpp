// lifted from 00468200 (FUN_00468200, 710 bytes, 195 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00468200(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00468200;
L_00468200:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00468201:  // mov edx, dword ptr [0x8a9aac]
    edx = (uint32_t)(M32((uint32_t)(0x8a9aacu)));
L_00468207:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468208:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00468209:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0046820b:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0046820c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00468211:  // mov dword ptr [0x8a9aac], edx
    M32((uint32_t)(0x8a9aacu)) = (uint32_t)(edx);
L_00468217:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046821cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046821c:  // fstp dword ptr [esi + 0xbe20]
    F32((uint32_t)(esi + 0xbe20u)) = lf32(ST(0));
    lpop(x);
L_00468222:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00468227:  // call 0x540f70
    t0 = 0x00540f70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046822cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046822c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046822e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00468233:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00468235:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046823au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046823a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046823c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046823e:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00468243:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468248u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468248:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046824a:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0046824c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00468251:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468256u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468256:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00468258:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_0046825a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0046825f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468264u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468264:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468266:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_00468268:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0046826d:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468272u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468272:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00468274:  // mov dword ptr [0x9c68d4], 0x280
    M32((uint32_t)(0x9c68d4u)) = (uint32_t)(0x280u);
L_0046827e:  // mov dword ptr [0x9c68d8], 0x1e0
    M32((uint32_t)(0x9c68d8u)) = (uint32_t)(0x1e0u);
L_00468288:  // mov byte ptr [0x9c68dc], 1
    M8((uint32_t)(0x9c68dcu)) = (uint8_t)(0x1u);
L_0046828f:  // je 0x468439
    if (f.zf) goto L_00468439;
L_00468295:  // fld dword ptr [esi + 0x204]
    lpush(x, (long double)F32((uint32_t)(esi + 0x204u)));
L_0046829b:  // fdiv dword ptr [esi + 0x208]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esi + 0x208u)));
L_004682a1:  // fst dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
L_004682a5:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004682ab:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004682ad:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004682b0:  // jne 0x4682bc
    if (!f.zf) goto L_004682bc;
L_004682b2:  // mov dword ptr [esp + 8], 0x3f800000
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x3f800000u);
L_004682ba:  // jmp 0x4682d5
    goto L_004682d5;
L_004682bc:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004682c0:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004682c6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004682c8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004682cb:  // je 0x4682d5
    if (f.zf) goto L_004682d5;
L_004682cd:  // mov dword ptr [esp + 8], 0
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x0u);
L_004682d5:  // mov eax, dword ptr [esi + 0x1f8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1f8u)));
L_004682db:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004682dc:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004682e0:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004682e3:  // jne 0x46835d
    if (!f.zf) goto L_0046835d;
L_004682e5:  // mov eax, dword ptr [esi + 0x200]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x200u)));
L_004682eb:  // mov edx, dword ptr [esi + 0x1fc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x1fcu)));
L_004682f1:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_004682f3:  // jle 0x468329
    if ((f.zf || f.sf != f.of)) goto L_00468329;
L_004682f5:  // mov ecx, dword ptr [esi + eax*4 + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x214u)));
L_004682fc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004682fd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004682fe:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00468300:  // call dword ptr [eax + 0x10]
    t0 = M32((uint32_t)(eax + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468303u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468303:  // mov ecx, dword ptr [esi + 0x1fc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1fcu)));
L_00468309:  // mov eax, dword ptr [esi + 0x200]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x200u)));
L_0046830f:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00468315:  // mov ecx, dword ptr [esi + ecx*4 + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esi + ecx * 4u + 0x214u)));
L_0046831c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046831d:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_00468321:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00468323:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00468324:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00468327:  // jmp 0x46836f
    goto L_0046836f;
L_00468329:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0046832f:  // mov ecx, dword ptr [esi + edx*4 + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esi + edx * 4u + 0x214u)));
L_00468336:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00468337:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_0046833b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0046833d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046833e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00468341:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468344u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468344:  // mov eax, dword ptr [esi + 0x200]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x200u)));
L_0046834a:  // mov ecx, dword ptr [esi + eax*4 + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x214u)));
L_00468351:  // mov eax, dword ptr [esi + 0x1fc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1fcu)));
L_00468357:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00468358:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00468359:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0046835b:  // jmp 0x46836f
    goto L_0046836f;
L_0046835d:  // mov eax, dword ptr [esi + eax*4 + 0x214]
    eax = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x214u)));
L_00468364:  // push -2
    t0 = 0xfffffffeu; esp -= 4; M32(esp) = t0;
L_00468366:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0046836b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046836d:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0046836f:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468372u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468372:  // mov ecx, dword ptr [esi + 0x21c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x21cu)));
L_00468378:  // push -2
    t0 = 0xfffffffeu; esp -= 4; M32(esp) = t0;
L_0046837a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046837b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0046837d:  // call dword ptr [eax + 0x14]
    t0 = M32((uint32_t)(eax + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468380u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468380:  // mov eax, dword ptr [esi + 0x1f8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1f8u)));
L_00468386:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_00468389:  // jne 0x468403
    if (!f.zf) goto L_00468403;
L_0046838b:  // mov eax, dword ptr [esi + 0x200]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x200u)));
L_00468391:  // mov edx, dword ptr [esi + 0x1fc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x1fcu)));
L_00468397:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_00468399:  // jle 0x4683cf
    if ((f.zf || f.sf != f.of)) goto L_004683cf;
L_0046839b:  // mov ecx, dword ptr [esi + eax*4 + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x214u)));
L_004683a2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004683a3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004683a4:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004683a6:  // call dword ptr [eax + 0x14]
    t0 = M32((uint32_t)(eax + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004683a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004683a9:  // mov ecx, dword ptr [esi + 0x1fc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1fcu)));
L_004683af:  // mov eax, dword ptr [esi + 0x200]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x200u)));
L_004683b5:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004683bb:  // mov ecx, dword ptr [esi + ecx*4 + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esi + ecx * 4u + 0x214u)));
L_004683c2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004683c3:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_004683c7:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004683c9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004683ca:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004683cd:  // jmp 0x468415
    goto L_00468415;
L_004683cf:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004683d5:  // mov ecx, dword ptr [esi + edx*4 + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esi + edx * 4u + 0x214u)));
L_004683dc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004683dd:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_004683e1:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004683e3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004683e4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004683e7:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004683eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004683ea:  // mov eax, dword ptr [esi + 0x200]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x200u)));
L_004683f0:  // mov ecx, dword ptr [esi + eax*4 + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x214u)));
L_004683f7:  // mov eax, dword ptr [esi + 0x1fc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1fcu)));
L_004683fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004683fe:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004683ff:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00468401:  // jmp 0x468415
    goto L_00468415;
L_00468403:  // mov eax, dword ptr [esi + eax*4 + 0x214]
    eax = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x214u)));
L_0046840a:  // push -2
    t0 = 0xfffffffeu; esp -= 4; M32(esp) = t0;
L_0046840c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00468411:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00468413:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00468415:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468418u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468418:  // mov eax, dword ptr [esi + 0x2b0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2b0u)));
L_0046841e:  // lea ecx, [esi + 0x2b0]
    ecx = (uint32_t)((uint32_t)(esi + 0x2b0u));
L_00468424:  // push -2
    t0 = 0xfffffffeu; esp -= 4; M32(esp) = t0;
L_00468426:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0046842b:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046842eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046842e:  // mov ecx, 0x675688
    ecx = (uint32_t)(0x675688u);
L_00468433:  // call 0x44d6f0
    t0 = 0x0044d6f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468438u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468438:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00468439:  // test byte ptr [0x89ce54], 0x40
    t0 = llog<8>(M8((uint32_t)(0x89ce54u)) & 0x40u, f);
L_00468440:  // je 0x46844c
    if (f.zf) goto L_0046844c;
L_00468442:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00468447:  // call 0x549290
    t0 = 0x00549290u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046844cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046844c:  // mov ecx, dword ptr [esi + 0x274]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x274u)));
L_00468452:  // cmp ecx, -1
    t0 = lsub<32>(ecx, 0xffffffffu, f);
L_00468455:  // je 0x46847e
    if (f.zf) goto L_0046847e;
L_00468457:  // mov edx, dword ptr [esi + 0x1f8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x1f8u)));
L_0046845d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046845f:  // cmp edx, 0xf
    t0 = lsub<32>(edx, 0xfu, f);
L_00468462:  // jne 0x468469
    if (!f.zf) goto L_00468469;
L_00468464:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00468469:  // mov ecx, dword ptr [esi + ecx*4 + 0xbe0c]
    ecx = (uint32_t)(M32((uint32_t)(esi + ecx * 4u + 0xbe0cu)));
L_00468470:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00468471:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00468472:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468474:  // mov ecx, 0x89be50
    ecx = (uint32_t)(0x89be50u);
L_00468479:  // call 0x527990
    t0 = 0x00527990u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046847eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046847e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046847f:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00468484:  // call 0x540fb0
    t0 = 0x00540fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468489u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468489:  // mov eax, dword ptr [0x662df4]
    eax = (uint32_t)(M32((uint32_t)(0x662df4u)));
L_0046848e:  // mov byte ptr [0x9c68dc], 0
    M8((uint32_t)(0x9c68dcu)) = (uint8_t)(0x0u);
L_00468495:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00468497:  // jne 0x4684a2
    if (!f.zf) goto L_004684a2;
L_00468499:  // mov al, byte ptr [0x679ec1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x679ec1u))) & 0xffu);
L_0046849e:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004684a0:  // je 0x4684be
    if (f.zf) goto L_004684be;
L_004684a2:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_004684a4:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004684a9:  // call 0x515980
    t0 = 0x00515980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004684aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004684ae:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004684b0:  // je 0x4684be
    if (f.zf) goto L_004684be;
L_004684b2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004684b4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004684b6:  // call 0x441b10
    t0 = 0x00441b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004684bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004684bb:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004684be:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_004684c0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004684c1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004684c2:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_004684c3:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00468200, 00468200)
