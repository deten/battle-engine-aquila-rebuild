// lifted from 00506800 (FUN_00506800, 232 bytes, 94 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00506800(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00506800;
L_00506800:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00506803:  // fld dword ptr [ecx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x60u)));
L_00506806:  // fistp qword ptr [esp]
    M64((uint32_t)(esp)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0050680a:  // mov edx, dword ptr [esp]
    edx = (uint32_t)(M32((uint32_t)(esp)));
L_0050680e:  // mov eax, 0x51eb851f
    eax = (uint32_t)(0x51eb851fu);
L_00506813:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00506814:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00506815:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00506816:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506817:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00506819:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_0050681b:  // sar edx, 5
    t0 = lsar<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_0050681e:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00506820:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_00506823:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00506825:  // mov ebp, edx
    ebp = (uint32_t)(edx);
L_00506827:  // mov edx, dword ptr [ecx + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xa4u)));
L_0050682d:  // lea edi, [ebp*4 + 0xc]
    edi = (uint32_t)((uint32_t)(ebp * 4u + 0xcu));
L_00506834:  // mov ebx, dword ptr [edi + edx]
    ebx = (uint32_t)(M32((uint32_t)(edi + edx)));
L_00506837:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_0050683d:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0050683f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00506841:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00506844:  // je 0x50684a
    if (f.zf) goto L_0050684a;
L_00506846:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00506848:  // jmp 0x50684c
    goto L_0050684c;
L_0050684a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050684c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050684e:  // je 0x506878
    if (f.zf) goto L_00506878;
L_00506850:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_00506852:  // je 0x506874
    if (f.zf) goto L_00506874;
L_00506854:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_0050685a:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0050685b:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0050685e:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00506861:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00506863:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00506866:  // je 0x50686c
    if (f.zf) goto L_0050686c;
L_00506868:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050686a:  // jmp 0x50686e
    goto L_0050686e;
L_0050686c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050686e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00506870:  // jne 0x506850
    if (!f.zf) goto L_00506850;
L_00506872:  // jmp 0x506878
    goto L_00506878;
L_00506874:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00506876:  // jne 0x5068cc
    if (!f.zf) goto L_005068cc;
L_00506878:  // dec ebp
    t0 = ldec<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_00506879:  // sub edi, 4
    t0 = lsub<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0050687c:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0050687e:  // jl 0x5068da
    if ((f.sf != f.of)) goto L_005068da;
L_00506880:  // mov edx, dword ptr [ecx + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xa4u)));
L_00506886:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00506888:  // mov ebx, dword ptr [edi + edx]
    ebx = (uint32_t)(M32((uint32_t)(edi + edx)));
L_0050688b:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_00506891:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00506893:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00506895:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00506898:  // je 0x50689e
    if (f.zf) goto L_0050689e;
L_0050689a:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050689c:  // jmp 0x5068a0
    goto L_005068a0;
L_0050689e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005068a0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005068a2:  // je 0x506878
    if (f.zf) goto L_00506878;
L_005068a4:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_005068a6:  // je 0x5068c8
    if (f.zf) goto L_005068c8;
L_005068a8:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_005068ae:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_005068af:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_005068b2:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_005068b5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005068b7:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_005068ba:  // je 0x5068c0
    if (f.zf) goto L_005068c0;
L_005068bc:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_005068be:  // jmp 0x5068c2
    goto L_005068c2;
L_005068c0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005068c2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005068c4:  // jne 0x5068a4
    if (!f.zf) goto L_005068a4;
L_005068c6:  // jmp 0x506878
    goto L_00506878;
L_005068c8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005068ca:  // je 0x506878
    if (f.zf) goto L_00506878;
L_005068cc:  // fld dword ptr [eax + 0xa0]
    lpush(x, (long double)F32((uint32_t)(eax + 0xa0u)));
L_005068d2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005068d3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005068d4:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005068d5:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005068d6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005068d9:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_005068da:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_005068e0:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005068e1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005068e2:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005068e3:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005068e4:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005068e7:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00506800, 00506800)
