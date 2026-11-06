// lifted from 004a2190 (FUN_004a2190, 720 bytes, 233 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004a2190(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004a2190;
L_004a2190:  // sub esp, 0x27c
    t0 = lsub<32>(esp, 0x27cu, f);
    esp = (uint32_t)(t0);
L_004a2196:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a2197:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004a2198:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a2199:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a219a:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004a219c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004a219e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a21a3:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a21a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a21a8:  // mov ebp, dword ptr [eax + 0x54]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x54u)));
L_004a21ab:  // mov eax, dword ptr [edi + 0x50]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x50u)));
L_004a21ae:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a21af:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_004a21b3:  // push 0x62f658
    t0 = 0x62f658u; esp -= 4; M32(esp) = t0;
L_004a21b8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a21b9:  // mov dword ptr [esp + 0x20], ebp
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebp);
L_004a21bd:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a21c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a21c2:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a21c5:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004a21c9:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a21ce:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a21d0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a21d2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a21d3:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a21d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a21d8:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004a21db:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a21e0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a21e1:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004a21e3:  // push 0x42000000
    t0 = 0x42000000u; esp -= 4; M32(esp) = t0;
L_004a21e8:  // push 0x42000000
    t0 = 0x42000000u; esp -= 4; M32(esp) = t0;
L_004a21ed:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004a21ef:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a21f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a21f4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a21f6:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a21fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a21fb:  // mov eax, dword ptr [edi + 0x54]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x54u)));
L_004a21fe:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004a2202:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2203:  // lea esi, [ebp + 0x20]
    esi = (uint32_t)((uint32_t)(ebp + 0x20u));
L_004a2206:  // push 0x62f648
    t0 = 0x62f648u; esp -= 4; M32(esp) = t0;
L_004a220b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a220c:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_004a2210:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a2215u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a2215:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2218:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004a221c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a2221:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a2223:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a2225:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2226:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a222bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a222b:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_004a222f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004a2232:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2233:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004a2235:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2236:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a223b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a223e:  // push 0x42000000
    t0 = 0x42000000u; esp -= 4; M32(esp) = t0;
L_004a2243:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004a2245:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a224au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a224a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a224c:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a2251u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a2251:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_004a2254:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004a2258:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2259:  // add esi, ebp
    t0 = ladd<32>(esi, ebp, f);
    esi = (uint32_t)(t0);
L_004a225b:  // push 0x62f6bc
    t0 = 0x62f6bcu; esp -= 4; M32(esp) = t0;
L_004a2260:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2261:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_004a2265:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a226au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a226a:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a226d:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004a2271:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a2276:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a2278:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a227a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a227b:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a2280u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a2280:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_004a2284:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004a2287:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2288:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004a228a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a228b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a228e:  // push 0x42000000
    t0 = 0x42000000u; esp -= 4; M32(esp) = t0;
L_004a2293:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004a2295:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a229a:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a229fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a229f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a22a1:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a22a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a22a6:  // add esi, ebp
    t0 = ladd<32>(esi, ebp, f);
    esi = (uint32_t)(t0);
L_004a22a8:  // lea eax, [edi + 0x10]
    eax = (uint32_t)((uint32_t)(edi + 0x10u));
L_004a22ab:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_004a22af:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004a22b1:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004a22b5:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004a22b9:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004a22bb:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004a22bd:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004a22bf:  // mov eax, dword ptr [eax - 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_004a22c2:  // mov dword ptr [esp + 0x1c], ebx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebx);
L_004a22c6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a22c8:  // je 0x4a22e8
    if (f.zf) goto L_004a22e8;
L_004a22ca:  // mov ebp, dword ptr [esp + 0x1c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004a22ce:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004a22cf:  // mov dword ptr [esp + 0x1c], ebp
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebp);
L_004a22d3:  // mov ebp, dword ptr [eax + 4]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004a22d6:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004a22d9:  // and ebp, 0xfffffff0
    t0 = llog<32>(ebp & 0xfffffff0u, f);
    ebp = (uint32_t)(t0);
L_004a22dc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a22de:  // lea edx, [edx + ebp + 0x10]
    edx = (uint32_t)((uint32_t)(edx + ebp + 0x10u));
L_004a22e2:  // jne 0x4a22ca
    if (!f.zf) goto L_004a22ca;
L_004a22e4:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004a22e8:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004a22ec:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004a22ee:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a22f0:  // je 0x4a2308
    if (f.zf) goto L_004a2308;
L_004a22f2:  // mov ebp, dword ptr [eax + 4]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004a22f5:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004a22f8:  // and ebp, 0xfffffff0
    t0 = llog<32>(ebp & 0xfffffff0u, f);
    ebp = (uint32_t)(t0);
L_004a22fb:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004a22fc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a22fe:  // lea ecx, [ecx + ebp + 0x10]
    ecx = (uint32_t)((uint32_t)(ecx + ebp + 0x10u));
L_004a2302:  // jne 0x4a22f2
    if (!f.zf) goto L_004a22f2;
L_004a2304:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004a2308:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2309:  // lea ecx, [esi + 1]
    ecx = (uint32_t)((uint32_t)(esi + 0x1u));
L_004a230c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a230d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a230e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a230f:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004a2313:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2314:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a2315:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004a2319:  // push 0x62f668
    t0 = 0x62f668u; esp -= 4; M32(esp) = t0;
L_004a231e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a231f:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a2324u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a2324:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004a2327:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004a232b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a2330:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a2332:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a2334:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2335:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a233au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a233a:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_004a233e:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004a2341:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2342:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004a2344:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2345:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a234a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a234d:  // push 0x42000000
    t0 = 0x42000000u; esp -= 4; M32(esp) = t0;
L_004a2352:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004a2354:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a2359u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a2359:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a235b:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a2360u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a2360:  // mov ebx, dword ptr [esp + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004a2364:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004a2368:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004a236b:  // add ebx, ebp
    t0 = ladd<32>(ebx, ebp, f);
    ebx = (uint32_t)(t0);
L_004a236d:  // add ecx, 8
    t0 = ladd<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_004a2370:  // cmp esi, 0x10
    t0 = lsub<32>(esi, 0x10u, f);
L_004a2373:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_004a2377:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004a237b:  // jl 0x4a22b5
    if ((f.sf != f.of)) goto L_004a22b5;
L_004a2381:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2383:  // lea ecx, [esp + 0x88]
    ecx = (uint32_t)((uint32_t)(esp + 0x88u));
L_004a238a:  // mov dword ptr [ecx], eax
    M32((uint32_t)(ecx)) = (uint32_t)(eax);
L_004a238c:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004a238d:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004a2390:  // cmp eax, 0x81
    t0 = lsub<32>(eax, 0x81u, f);
L_004a2395:  // jb 0x4a238a
    if (f.cf) goto L_004a238a;
L_004a2397:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004a2399:  // lea eax, [esp + 0x8c]
    eax = (uint32_t)((uint32_t)(esp + 0x8cu));
L_004a23a0:  // mov dword ptr [esp + 0x14], 0x80
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x80u);
L_004a23a8:  // mov edx, dword ptr [eax - 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_004a23ab:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004a23ad:  // mov ebx, dword ptr [edi + edx*4 + 0x58]
    ebx = (uint32_t)(M32((uint32_t)(edi + edx * 4u + 0x58u)));
L_004a23b1:  // cmp ebx, dword ptr [edi + ecx*4 + 0x58]
    t0 = lsub<32>(ebx, M32((uint32_t)(edi + ecx * 4u + 0x58u)), f);
L_004a23b5:  // jge 0x4a23c1
    if ((f.sf == f.of)) goto L_004a23c1;
L_004a23b7:  // mov dword ptr [eax - 4], ecx
    M32((uint32_t)(eax + 0xfffffffcu)) = (uint32_t)(ecx);
L_004a23ba:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_004a23bf:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_004a23c1:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004a23c5:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004a23c8:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a23c9:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004a23cd:  // jne 0x4a23a8
    if (!f.zf) goto L_004a23a8;
L_004a23cf:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004a23d1:  // jne 0x4a2397
    if (!f.zf) goto L_004a2397;
L_004a23d3:  // lea esi, [esp + 0x88]
    esi = (uint32_t)((uint32_t)(esp + 0x88u));
L_004a23da:  // mov ebx, 0x81
    ebx = (uint32_t)(0x81u);
L_004a23df:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004a23e3:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004a23e5:  // add edx, ebp
    t0 = ladd<32>(edx, ebp, f);
    edx = (uint32_t)(t0);
L_004a23e7:  // mov ecx, dword ptr [edi + eax*4 + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(edi + eax * 4u + 0x58u)));
L_004a23eb:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004a23ef:  // mov edx, dword ptr [edi + eax*4 + 0x670]
    edx = (uint32_t)(M32((uint32_t)(edi + eax * 4u + 0x670u)));
L_004a23f6:  // shl eax, 5
    t0 = lshl<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_004a23f9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a23fa:  // add eax, 0x9c2dd0
    t0 = ladd<32>(eax, 0x9c2dd0u, f);
    eax = (uint32_t)(t0);
L_004a23ff:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2400:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2401:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004a2405:  // push 0x62f610
    t0 = 0x62f610u; esp -= 4; M32(esp) = t0;
L_004a240a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a240b:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a2410u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a2410:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004a2413:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_004a2417:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a241c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a241e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a2420:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2421:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a2426u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a2426:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_004a242a:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004a242d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a242e:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004a2433:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2434:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a2439:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a243c:  // push 0x42000000
    t0 = 0x42000000u; esp -= 4; M32(esp) = t0;
L_004a2441:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004a2443:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a2448u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a2448:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a244a:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a244fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a244f:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_004a2452:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004a2453:  // jne 0x4a23df
    if (!f.zf) goto L_004a23df;
L_004a2455:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004a2456:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004a2457:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004a2458:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004a2459:  // add esp, 0x27c
    t0 = ladd<32>(esp, 0x27cu, f);
    esp = (uint32_t)(t0);
L_004a245f:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004a2190, 004a2190)
