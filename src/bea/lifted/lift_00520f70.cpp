// lifted from 00520f70 (FUN_00520f70, 399 bytes, 122 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00520f70(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00520f70;
L_00520f70:  // sub esp, 0x24
    t0 = lsub<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00520f73:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00520f74:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00520f78:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00520f79:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00520f7a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00520f7b:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00520f7d:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00520f7f:  // mov ecx, dword ptr [esi + 0x6ec]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x6ecu)));
L_00520f85:  // mov edx, dword ptr [esi + 0x6e8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x6e8u)));
L_00520f8b:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00520f91:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00520f93:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_00520f95:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00520f99:  // jle 0x520fce
    if ((f.zf || f.sf != f.of)) goto L_00520fce;
L_00520f9b:  // mov eax, dword ptr [esi + 0x6e4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x6e4u)));
L_00520fa1:  // lea edi, [edx + eax*4]
    edi = (uint32_t)((uint32_t)(edx + eax * 4u));
L_00520fa4:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_00520fa6:  // lea edi, [eax*8]
    edi = (uint32_t)((uint32_t)(eax * 8u));
L_00520fad:  // sub edi, eax
    t0 = lsub<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_00520faf:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_00520fb2:  // lea eax, [edi + esi + 0x58]
    eax = (uint32_t)((uint32_t)(edi + esi + 0x58u));
L_00520fb6:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00520fb8:  // mov ebp, dword ptr [eax]
    ebp = (uint32_t)(M32((uint32_t)(eax)));
L_00520fba:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00520fbd:  // mov dword ptr [esp + 0x1c], ebp
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebp);
L_00520fc1:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00520fc3:  // mov dword ptr [esp + 0x20], ebp
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebp);
L_00520fc7:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00520fc8:  // fiadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_00520fcc:  // jne 0x520fb8
    if (!f.zf) goto L_00520fb8;
L_00520fce:  // mov eax, dword ptr [esi + 0x6e4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x6e4u)));
L_00520fd4:  // mov dword ptr [esp + 0x28], ebp
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebp);
L_00520fd8:  // mov dword ptr [esp + 0x38], 0
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x0u);
L_00520fe0:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00520fe3:  // lea ecx, [eax + edx]
    ecx = (uint32_t)((uint32_t)(eax + edx));
L_00520fe6:  // add eax, ebx
    t0 = ladd<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_00520fe8:  // lea edx, [ecx*8]
    edx = (uint32_t)((uint32_t)(ecx * 8u));
L_00520fef:  // sub edx, ecx
    t0 = lsub<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_00520ff1:  // lea ecx, [edi + edx*2]
    ecx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00520ff4:  // mov edx, dword ptr [esi + ecx*8 + 0x58]
    edx = (uint32_t)(M32((uint32_t)(esi + ecx * 8u + 0x58u)));
L_00520ff8:  // lea ecx, [eax*8]
    ecx = (uint32_t)((uint32_t)(eax * 8u));
L_00520fff:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_00521003:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00521005:  // fild qword ptr [esp + 0x24]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x24u)));
L_00521009:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0052100b:  // mov dword ptr [esi + 0x6e8], ebx
    M32((uint32_t)(esi + 0x6e8u)) = (uint32_t)(ebx);
L_00521011:  // mov dword ptr [esi + 0x6ec], ebp
    M32((uint32_t)(esi + 0x6ecu)) = (uint32_t)(ebp);
L_00521017:  // fmul dword ptr [esi + 0x6f4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x6f4u)));
L_0052101d:  // cmp word ptr [esi + ecx*8 + 0x54], bp
    t0 = lsub<16>(M16((uint32_t)(esi + ecx * 8u + 0x54u)), (ebp & 0xffffu), f);
L_00521022:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00521024:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00521028:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0052102a:  // je 0x521070
    if (f.zf) goto L_00521070;
L_0052102c:  // mov edx, dword ptr [esi + 0x6ec]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x6ecu)));
L_00521032:  // mov dword ptr [esp + 0x30], ebp
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ebp);
L_00521036:  // lea eax, [ecx + edx]
    eax = (uint32_t)((uint32_t)(ecx + edx));
L_00521039:  // mov eax, dword ptr [esi + eax*8 + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esi + eax * 8u + 0x58u)));
L_0052103d:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_00521041:  // fild qword ptr [esp + 0x2c]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x2cu)));
L_00521045:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00521049:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_0052104d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00521051:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00521053:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00521055:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00521058:  // jne 0x5210a9
    if (!f.zf) goto L_005210a9;
L_0052105a:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0052105e:  // lea eax, [edx + 1]
    eax = (uint32_t)((uint32_t)(edx + 0x1u));
L_00521061:  // mov dword ptr [esi + 0x6ec], eax
    M32((uint32_t)(esi + 0x6ecu)) = (uint32_t)(eax);
L_00521067:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00521069:  // cmp word ptr [esi + eax*8 + 0x54], bp
    t0 = lsub<16>(M16((uint32_t)(esi + eax * 8u + 0x54u)), (ebp & 0xffffu), f);
L_0052106e:  // jne 0x52102c
    if (!f.zf) goto L_0052102c;
L_00521070:  // mov eax, dword ptr [esi + 0x6ec]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x6ecu)));
L_00521076:  // mov dword ptr [esi + 0x6f4], 0x3f000000
    M32((uint32_t)(esi + 0x6f4u)) = (uint32_t)(0x3f000000u);
L_00521080:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00521081:  // mov dword ptr [esi + 0x6ec], eax
    M32((uint32_t)(esi + 0x6ecu)) = (uint32_t)(eax);
L_00521087:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00521089:  // call 0x5214d0
    t0 = 0x005214d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052108eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052108e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00521090:  // je 0x5210f5
    if (f.zf) goto L_005210f5;
L_00521092:  // mov ecx, dword ptr [esi + 0x6e8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x6e8u)));
L_00521098:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0052109c:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0052109e:  // sub eax, edi
    t0 = lsub<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_005210a0:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_005210a3:  // jne 0x5210bf
    if (!f.zf) goto L_005210bf;
L_005210a5:  // or eax, eax
    t0 = llog<32>(eax | eax, f);
    eax = (uint32_t)(t0);
L_005210a7:  // jmp 0x5210d5
    goto L_005210d5;
L_005210a9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005210ab:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_005210af:  // fsub dword ptr [esp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x38u)));
L_005210b3:  // fdiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x14u)));
L_005210b7:  // fstp dword ptr [esi + 0x6f4]
    F32((uint32_t)(esi + 0x6f4u)) = lf32(ST(0));
    lpop(x);
L_005210bd:  // jmp 0x521087
    goto L_00521087;
L_005210bf:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_005210c2:  // jne 0x5210c6
    if (!f.zf) goto L_005210c6;
L_005210c4:  // jmp 0x5210d5
    goto L_005210d5;
L_005210c6:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_005210c8:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_005210cb:  // setge dl
    edx = (edx & 0xffffff00u) | ((uint32_t)((f.sf == f.of)) & 0xffu);
L_005210ce:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_005210cf:  // and edx, 2
    t0 = llog<32>(edx & 0x2u, f);
    edx = (uint32_t)(t0);
L_005210d2:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_005210d3:  // mov eax, edx
    eax = (uint32_t)(edx);
L_005210d5:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_005210d7:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_005210d9:  // jge 0x5210e7
    if ((f.sf == f.of)) goto L_005210e7;
L_005210db:  // mov eax, 4
    eax = (uint32_t)(0x4u);
L_005210e0:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_005210e2:  // jmp 0x520f7f
    goto L_00520f7f;
L_005210e7:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_005210ea:  // jl 0x5210ee
    if ((f.sf != f.of)) goto L_005210ee;
L_005210ec:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005210ee:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_005210f0:  // jmp 0x520f7f
    goto L_00520f7f;
L_005210f5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005210f6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005210f7:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005210f8:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005210f9:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_005210fc:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00520f70, 00520f70)
