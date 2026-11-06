// lifted from 0054c0a0 (FUN_0054c0a0, 2162 bytes, 654 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0054c0a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0054c0a0;
L_0054c0a0:  // sub esp, 0x230
    t0 = lsub<32>(esp, 0x230u, f);
    esp = (uint32_t)(t0);
L_0054c0a6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054c0a7:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0054c0a9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054c0aa:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054c0ab:  // mov eax, dword ptr [ebx + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c0b1:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054c0b3:  // mov dword ptr [ebx + 0x108], edi
    M32((uint32_t)(ebx + 0x108u)) = (uint32_t)(edi);
L_0054c0b9:  // mov esi, dword ptr [eax + 0xa8]
    esi = (uint32_t)(M32((uint32_t)(eax + 0xa8u)));
L_0054c0bf:  // cmp esi, 1
    t0 = lsub<32>(esi, 0x1u, f);
L_0054c0c2:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_0054c0c6:  // jl 0x54c906
    if ((f.sf != f.of)) goto L_0054c906;
L_0054c0cc:  // mov eax, dword ptr [eax + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xb0u)));
L_0054c0d2:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0054c0d5:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0054c0d9:  // jl 0x54c906
    if ((f.sf != f.of)) goto L_0054c906;
L_0054c0df:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054c0e0:  // lea eax, [esi + esi*8]
    eax = (uint32_t)((uint32_t)(esi + esi * 8u));
L_0054c0e3:  // push 0x51
    t0 = 0x51u; esp -= 4; M32(esp) = t0;
L_0054c0e5:  // push 0x651244
    t0 = 0x651244u; esp -= 4; M32(esp) = t0;
L_0054c0ea:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0054c0ed:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_0054c0ef:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054c0f0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054c0f5:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_0054c0f9:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c0feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c0fe:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0054c100:  // je 0x54c10d
    if (f.zf) goto L_0054c10d;
L_0054c102:  // lea ecx, [esi - 1]
    ecx = (uint32_t)((uint32_t)(esi + 0xffffffffu));
L_0054c105:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0054c107:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_0054c10b:  // jmp 0x54c10f
    goto L_0054c10f;
L_0054c10d:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0054c10f:  // lea edx, [esi + esi*2]
    edx = (uint32_t)((uint32_t)(esi + esi * 2u));
L_0054c112:  // push 0x52
    t0 = 0x52u; esp -= 4; M32(esp) = t0;
L_0054c114:  // push 0x651244
    t0 = 0x651244u; esp -= 4; M32(esp) = t0;
L_0054c119:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_0054c11b:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0054c11e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054c11f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054c124:  // mov dword ptr [esp + 0x44], ebp
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ebp);
L_0054c128:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c12du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c12d:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_0054c12f:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_0054c133:  // jle 0x54c372
    if ((f.zf || f.sf != f.of)) goto L_0054c372;
L_0054c139:  // add ebp, 0x14
    t0 = ladd<32>(ebp, 0x14u, f);
    ebp = (uint32_t)(t0);
L_0054c13c:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_0054c140:  // mov dword ptr [esp + 0x30], ebp
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ebp);
L_0054c144:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_0054c148:  // jmp 0x54c14c
    goto L_0054c14c;
L_0054c14a:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054c14c:  // mov eax, dword ptr [ebx + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c152:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054c156:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_0054c15a:  // mov esi, dword ptr [eax + 0x134]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x134u)));
L_0054c160:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c166:  // add esi, ecx
    t0 = ladd<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_0054c168:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0054c16a:  // jle 0x54c221
    if ((f.zf || f.sf != f.of)) goto L_0054c221;
L_0054c170:  // lea ebp, [ebx + 8]
    ebp = (uint32_t)((uint32_t)(ebx + 0x8u));
L_0054c173:  // mov dword ptr [esp + 0x28], ebp
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebp);
L_0054c177:  // mov edi, 0xfffffff0
    edi = (uint32_t)(0xfffffff0u);
L_0054c17c:  // mov dword ptr [esp + 0x1c], 1
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x1u);
L_0054c184:  // lea ecx, [esi + 0x30]
    ecx = (uint32_t)((uint32_t)(esi + 0x30u));
L_0054c187:  // sub edi, esi
    t0 = lsub<32>(edi, esi, f);
    edi = (uint32_t)(t0);
L_0054c189:  // mov dword ptr [esp + 0x24], 6
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x6u);
L_0054c191:  // jmp 0x54c197
    goto L_0054c197;
L_0054c193:  // mov ebp, dword ptr [esp + 0x28]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054c197:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0054c199:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0054c19c:  // je 0x54c1d5
    if (f.zf) goto L_0054c1d5;
L_0054c19e:  // mov edx, dword ptr [ebx + 0x10c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c1a4:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054c1a7:  // mov edx, dword ptr [edx + 0x128]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x128u)));
L_0054c1ad:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0054c1af:  // fld dword ptr [edx + eax*4 + 0x20]
    lpush(x, (long double)F32((uint32_t)(edx + eax * 4u + 0x20u)));
L_0054c1b3:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054c1b9:  // lea edx, [edx + eax*4]
    edx = (uint32_t)((uint32_t)(edx + eax * 4u));
L_0054c1bc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054c1be:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054c1c1:  // jne 0x54c1d5
    if (!f.zf) goto L_0054c1d5;
L_0054c1c3:  // cmp dword ptr [edx], 0
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x0u, f);
L_0054c1c6:  // je 0x54c1d5
    if (f.zf) goto L_0054c1d5;
L_0054c1c8:  // mov ebp, dword ptr [ebp]
    ebp = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c1cb:  // lea eax, [edi + ecx]
    eax = (uint32_t)((uint32_t)(edi + ecx));
L_0054c1ce:  // cmp dword ptr [eax + ebp], edx
    t0 = lsub<32>(M32((uint32_t)(eax + ebp)), edx, f);
L_0054c1d1:  // je 0x54c1e9
    if (f.zf) goto L_0054c1e9;
L_0054c1d3:  // jmp 0x54c1e1
    goto L_0054c1e1;
L_0054c1d5:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c1d8:  // lea edx, [edi + ecx]
    edx = (uint32_t)((uint32_t)(edi + ecx));
L_0054c1db:  // cmp dword ptr [edx + eax], 0
    t0 = lsub<32>(M32((uint32_t)(edx + eax)), 0x0u, f);
L_0054c1df:  // je 0x54c1e9
    if (f.zf) goto L_0054c1e9;
L_0054c1e1:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0054c1e9:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054c1ed:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054c1f0:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054c1f1:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0054c1f5:  // jne 0x54c193
    if (!f.zf) goto L_0054c193;
L_0054c1f7:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054c1fb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054c1fd:  // jne 0x54c221
    if (!f.zf) goto L_0054c221;
L_0054c1ff:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054c203:  // mov ebp, dword ptr [esp + 0x28]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054c207:  // mov ecx, dword ptr [ebx + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c20d:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054c20e:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_0054c211:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054c213:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0054c217:  // mov dword ptr [esp + 0x28], ebp
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebp);
L_0054c21b:  // jl 0x54c177
    if ((f.sf != f.of)) goto L_0054c177;
L_0054c221:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054c225:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c22b:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0054c22d:  // jne 0x54c301
    if (!f.zf) goto L_0054c301;
L_0054c233:  // push 0x84
    t0 = 0x84u; esp -= 4; M32(esp) = t0;
L_0054c238:  // push 0x651244
    t0 = 0x651244u; esp -= 4; M32(esp) = t0;
L_0054c23d:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_0054c23f:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_0054c241:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054c246:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c24bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c24b:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0054c24d:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0054c24f:  // je 0x54c258
    if (f.zf) goto L_0054c258;
L_0054c251:  // mov dword ptr [eax], ebp
    M32((uint32_t)(eax)) = (uint32_t)(ebp);
L_0054c253:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_0054c256:  // jmp 0x54c25a
    goto L_0054c25a;
L_0054c258:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054c25a:  // mov edx, dword ptr [ebx + 0x108]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c260:  // mov edi, 0xfffffff0
    edi = (uint32_t)(0xfffffff0u);
L_0054c265:  // sub edi, esi
    t0 = lsub<32>(edi, esi, f);
    edi = (uint32_t)(t0);
L_0054c267:  // mov dword ptr [esp + 0x24], 6
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x6u);
L_0054c26f:  // mov dword ptr [ebx + edx*4 + 8], eax
    M32((uint32_t)(ebx + edx * 4u + 0x8u)) = (uint32_t)(eax);
L_0054c273:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c279:  // mov ecx, dword ptr [ebx + eax*4 + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + eax * 4u + 0x8u)));
L_0054c27d:  // mov dword ptr [ecx + 0x14], ebp
    M32((uint32_t)(ecx + 0x14u)) = (uint32_t)(ebp);
L_0054c280:  // mov edx, dword ptr [ebx + 0x108]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c286:  // mov eax, dword ptr [ebx + edx*4 + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + edx * 4u + 0x8u)));
L_0054c28a:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_0054c28d:  // mov ecx, dword ptr [ebx + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c293:  // mov edx, dword ptr [ebx + ecx*4 + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + ecx * 4u + 0x8u)));
L_0054c297:  // lea ecx, [esi + 0x30]
    ecx = (uint32_t)((uint32_t)(esi + 0x30u));
L_0054c29a:  // mov dword ptr [edx + 0x18], ebp
    M32((uint32_t)(edx + 0x18u)) = (uint32_t)(ebp);
L_0054c29d:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0054c29f:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0054c2a2:  // je 0x54c2de
    if (f.zf) goto L_0054c2de;
L_0054c2a4:  // mov edx, dword ptr [ebx + 0x10c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c2aa:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054c2ad:  // mov edx, dword ptr [edx + 0x128]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x128u)));
L_0054c2b3:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0054c2b5:  // fld dword ptr [edx + eax*4 + 0x20]
    lpush(x, (long double)F32((uint32_t)(edx + eax * 4u + 0x20u)));
L_0054c2b9:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054c2bf:  // lea edx, [edx + eax*4]
    edx = (uint32_t)((uint32_t)(edx + eax * 4u));
L_0054c2c2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054c2c4:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054c2c7:  // jne 0x54c2de
    if (!f.zf) goto L_0054c2de;
L_0054c2c9:  // cmp dword ptr [edx], ebp
    t0 = lsub<32>(M32((uint32_t)(edx)), ebp, f);
L_0054c2cb:  // je 0x54c2de
    if (f.zf) goto L_0054c2de;
L_0054c2cd:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c2d3:  // mov eax, dword ptr [ebx + eax*4 + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + eax * 4u + 0x8u)));
L_0054c2d7:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0054c2d9:  // mov dword ptr [eax + edi], edx
    M32((uint32_t)(eax + edi)) = (uint32_t)(edx);
L_0054c2dc:  // jmp 0x54c2ed
    goto L_0054c2ed;
L_0054c2de:  // mov edx, dword ptr [ebx + 0x108]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c2e4:  // mov eax, dword ptr [ebx + edx*4 + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + edx * 4u + 0x8u)));
L_0054c2e8:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0054c2ea:  // mov dword ptr [eax + edi], ebp
    M32((uint32_t)(eax + edi)) = (uint32_t)(ebp);
L_0054c2ed:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054c2f1:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054c2f4:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054c2f5:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0054c2f9:  // jne 0x54c29d
    if (!f.zf) goto L_0054c29d;
L_0054c2fb:  // inc dword ptr [ebx + 0x108]
    t0 = linc<32>(M32((uint32_t)(ebx + 0x108u)), f);
    M32((uint32_t)(ebx + 0x108u)) = (uint32_t)(t0);
L_0054c301:  // mov ecx, dword ptr [ebx + 0x10c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c307:  // mov edx, dword ptr [ecx + 0x84]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x84u)));
L_0054c30d:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0054c310:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054c313:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0054c315:  // mov edx, dword ptr [eax + ecx]
    edx = (uint32_t)(M32((uint32_t)(eax + ecx)));
L_0054c318:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0054c31a:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0054c31e:  // mov dword ptr [ecx - 0x14], edx
    M32((uint32_t)(ecx + 0xffffffecu)) = (uint32_t)(edx);
L_0054c321:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054c324:  // mov dword ptr [ecx - 0x10], edx
    M32((uint32_t)(ecx + 0xfffffff0u)) = (uint32_t)(edx);
L_0054c327:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0054c32a:  // mov dword ptr [ecx - 0xc], eax
    M32((uint32_t)(ecx + 0xfffffff4u)) = (uint32_t)(eax);
L_0054c32d:  // mov edx, dword ptr [esi + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_0054c330:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_0054c333:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_0054c336:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0054c339:  // mov edx, dword ptr [esi + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_0054c33c:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_0054c33f:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0054c341:  // mov dword ptr [ecx - 8], eax
    M32((uint32_t)(ecx + 0xfffffff8u)) = (uint32_t)(eax);
L_0054c344:  // mov edx, dword ptr [esi + 4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0054c347:  // mov dword ptr [ecx - 4], edx
    M32((uint32_t)(ecx + 0xfffffffcu)) = (uint32_t)(edx);
L_0054c34a:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0054c34d:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054c351:  // mov dword ptr [ecx], eax
    M32((uint32_t)(ecx)) = (uint32_t)(eax);
L_0054c353:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0054c357:  // add esi, 0x60
    t0 = ladd<32>(esi, 0x60u, f);
    esi = (uint32_t)(t0);
L_0054c35a:  // add ecx, 0x24
    t0 = ladd<32>(ecx, 0x24u, f);
    ecx = (uint32_t)(t0);
L_0054c35d:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054c35e:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_0054c362:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_0054c366:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0054c36a:  // jne 0x54c14a
    if (!f.zf) goto L_0054c14a;
L_0054c370:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054c372:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0054c374:  // call 0x56eb60
    t0 = 0x0056eb60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c379u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c379:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054c37b:  // call 0x56eb70
    t0 = 0x0056eb70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c380u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c380:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054c381:  // call 0x56eb80
    t0 = 0x0056eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c386u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c386:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054c387:  // call 0x56eb50
    t0 = 0x0056eb50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c38cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c38c:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c392:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0054c395:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0054c397:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0054c399:  // jle 0x54c3b7
    if ((f.zf || f.sf != f.of)) goto L_0054c3b7;
L_0054c39b:  // lea eax, [ebx + 8]
    eax = (uint32_t)((uint32_t)(ebx + 0x8u));
L_0054c39e:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0054c3a0:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0054c3a1:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0054c3a4:  // mov dword ptr [edx + 0x10], edi
    M32((uint32_t)(edx + 0x10u)) = (uint32_t)(edi);
L_0054c3a7:  // mov edx, dword ptr [eax - 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_0054c3aa:  // mov dword ptr [edx + 0x18], edi
    M32((uint32_t)(edx + 0x18u)) = (uint32_t)(edi);
L_0054c3ad:  // mov edx, dword ptr [ebx + 0x108]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c3b3:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0054c3b5:  // jl 0x54c39e
    if ((f.sf != f.of)) goto L_0054c39e;
L_0054c3b7:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c3bd:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054c3bf:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0054c3c1:  // jle 0x54c3fa
    if ((f.zf || f.sf != f.of)) goto L_0054c3fa;
L_0054c3c3:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054c3c7:  // lea ebp, [ebp + ebp*2]
    ebp = (uint32_t)((uint32_t)(ebp + ebp * 2u));
L_0054c3cb:  // shl ebp, 1
    t0 = lshl<32>(ebp, 0x1u, f);
    ebp = (uint32_t)(t0);
L_0054c3cd:  // push 0xba
    t0 = 0xbau; esp -= 4; M32(esp) = t0;
L_0054c3d2:  // push 0x651244
    t0 = 0x651244u; esp -= 4; M32(esp) = t0;
L_0054c3d7:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_0054c3d9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054c3da:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054c3df:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c3e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c3e4:  // mov dword ptr [esp + esi*4 + 0x140], eax
    M32((uint32_t)(esp + esi * 4u + 0x140u)) = (uint32_t)(eax);
L_0054c3eb:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c3f1:  // mov dword ptr [esp + esi*4 + 0x40], edi
    M32((uint32_t)(esp + esi * 4u + 0x40u)) = (uint32_t)(edi);
L_0054c3f5:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0054c3f6:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_0054c3f8:  // jl 0x54c3cd
    if ((f.sf != f.of)) goto L_0054c3cd;
L_0054c3fa:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054c3fe:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0054c400:  // jle 0x54c59a
    if ((f.zf || f.sf != f.of)) goto L_0054c59a;
L_0054c406:  // mov dword ptr [esp + 0x28], edi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edi);
L_0054c40a:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0054c40e:  // jmp 0x54c412
    goto L_0054c412;
L_0054c410:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054c412:  // mov eax, dword ptr [ebx + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c418:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054c41c:  // mov ebp, dword ptr [eax + 0x80]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x80u)));
L_0054c422:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c428:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_0054c42a:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0054c42c:  // mov dword ptr [esp + 0x24], ebp
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebp);
L_0054c430:  // jle 0x54c4f0
    if ((f.zf || f.sf != f.of)) goto L_0054c4f0;
L_0054c436:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c439:  // lea ebp, [ebx + 8]
    ebp = (uint32_t)((uint32_t)(ebx + 0x8u));
L_0054c43c:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0054c440:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_0054c444:  // jmp 0x54c44a
    goto L_0054c44a;
L_0054c446:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0054c44a:  // mov esi, 0xfffffff0
    esi = (uint32_t)(0xfffffff0u);
L_0054c44f:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_0054c457:  // lea ecx, [eax + 0x30]
    ecx = (uint32_t)((uint32_t)(eax + 0x30u));
L_0054c45a:  // sub esi, eax
    t0 = lsub<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0054c45c:  // mov dword ptr [esp + 0x18], 6
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x6u);
L_0054c464:  // jmp 0x54c46a
    goto L_0054c46a;
L_0054c466:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054c46a:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0054c46c:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0054c46f:  // je 0x54c4a8
    if (f.zf) goto L_0054c4a8;
L_0054c471:  // mov edx, dword ptr [ebx + 0x10c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c477:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054c47a:  // mov edx, dword ptr [edx + 0x128]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x128u)));
L_0054c480:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0054c482:  // fld dword ptr [edx + eax*4 + 0x20]
    lpush(x, (long double)F32((uint32_t)(edx + eax * 4u + 0x20u)));
L_0054c486:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054c48c:  // lea edx, [edx + eax*4]
    edx = (uint32_t)((uint32_t)(edx + eax * 4u));
L_0054c48f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054c491:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054c494:  // jne 0x54c4a8
    if (!f.zf) goto L_0054c4a8;
L_0054c496:  // cmp dword ptr [edx], 0
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x0u, f);
L_0054c499:  // je 0x54c4a8
    if (f.zf) goto L_0054c4a8;
L_0054c49b:  // mov ebp, dword ptr [ebp]
    ebp = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c49e:  // lea eax, [esi + ecx]
    eax = (uint32_t)((uint32_t)(esi + ecx));
L_0054c4a1:  // cmp dword ptr [eax + ebp], edx
    t0 = lsub<32>(M32((uint32_t)(eax + ebp)), edx, f);
L_0054c4a4:  // je 0x54c4bc
    if (f.zf) goto L_0054c4bc;
L_0054c4a6:  // jmp 0x54c4b4
    goto L_0054c4b4;
L_0054c4a8:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c4ab:  // lea edx, [esi + ecx]
    edx = (uint32_t)((uint32_t)(esi + ecx));
L_0054c4ae:  // cmp dword ptr [edx + eax], 0
    t0 = lsub<32>(M32((uint32_t)(edx + eax)), 0x0u, f);
L_0054c4b2:  // je 0x54c4bc
    if (f.zf) goto L_0054c4bc;
L_0054c4b4:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0054c4bc:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054c4c0:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054c4c3:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054c4c4:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0054c4c8:  // jne 0x54c466
    if (!f.zf) goto L_0054c466;
L_0054c4ca:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054c4ce:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054c4d0:  // jne 0x54c4ec
    if (!f.zf) goto L_0054c4ec;
L_0054c4d2:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054c4d6:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c4dc:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0054c4dd:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_0054c4e0:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0054c4e2:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_0054c4e6:  // jl 0x54c446
    if ((f.sf != f.of)) goto L_0054c446;
L_0054c4ec:  // mov ebp, dword ptr [esp + 0x24]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054c4f0:  // mov eax, dword ptr [ebx + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c4f6:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c4f9:  // mov ecx, dword ptr [esp + edi*4 + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x40u)));
L_0054c4fd:  // mov esi, dword ptr [esp + edi*4 + 0x140]
    esi = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x140u)));
L_0054c504:  // sub edx, dword ptr [eax + 0x134]
    t0 = lsub<32>(edx, M32((uint32_t)(eax + 0x134u)), f);
    edx = (uint32_t)(t0);
L_0054c50a:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_0054c50f:  // add ecx, 3
    t0 = ladd<32>(ecx, 0x3u, f);
    ecx = (uint32_t)(t0);
L_0054c512:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_0054c514:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0054c517:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0054c519:  // mov dword ptr [esp + edi*4 + 0x40], ecx
    M32((uint32_t)(esp + edi * 4u + 0x40u)) = (uint32_t)(ecx);
L_0054c51d:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_0054c520:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0054c522:  // mov word ptr [esi + ecx*2 - 6], dx
    M16((uint32_t)(esi + ecx * 2u + 0xfffffffau)) = (uint16_t)((edx & 0xffffu));
L_0054c527:  // mov eax, dword ptr [ebx + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c52d:  // mov edx, dword ptr [ebp + 4]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_0054c530:  // sub edx, dword ptr [eax + 0x134]
    t0 = lsub<32>(edx, M32((uint32_t)(eax + 0x134u)), f);
    edx = (uint32_t)(t0);
L_0054c536:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_0054c53b:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_0054c53d:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0054c540:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0054c542:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_0054c545:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0054c547:  // mov word ptr [esi + ecx*2 - 4], dx
    M16((uint32_t)(esi + ecx * 2u + 0xfffffffcu)) = (uint16_t)((edx & 0xffffu));
L_0054c54c:  // mov eax, dword ptr [ebx + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c552:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0054c555:  // mov ebp, dword ptr [eax + 0x134]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x134u)));
L_0054c55b:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_0054c560:  // sub edx, ebp
    t0 = lsub<32>(edx, ebp, f);
    edx = (uint32_t)(t0);
L_0054c562:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_0054c564:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0054c567:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0054c569:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_0054c56c:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0054c56e:  // mov word ptr [esi + ecx*2 - 2], dx
    M16((uint32_t)(esi + ecx * 2u + 0xfffffffeu)) = (uint16_t)((edx & 0xffffu));
L_0054c573:  // mov eax, dword ptr [ebx + edi*4 + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + edi * 4u + 0x8u)));
L_0054c577:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054c57b:  // mov edx, dword ptr [eax + 0x10]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_0054c57e:  // add ecx, 0xc
    t0 = ladd<32>(ecx, 0xcu, f);
    ecx = (uint32_t)(t0);
L_0054c581:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0054c582:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_0054c586:  // mov dword ptr [eax + 0x10], edx
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(edx);
L_0054c589:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0054c58d:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054c58e:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0054c592:  // jne 0x54c410
    if (!f.zf) goto L_0054c410;
L_0054c598:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054c59a:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c5a0:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_0054c5a4:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0054c5a6:  // jle 0x54c66c
    if ((f.zf || f.sf != f.of)) goto L_0054c66c;
L_0054c5ac:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054c5b0:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0054c5b2:  // lea esi, [ebx + 8]
    esi = (uint32_t)((uint32_t)(ebx + 0x8u));
L_0054c5b5:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0054c5b8:  // shl eax, 1
    t0 = lshl<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0054c5ba:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0054c5be:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054c5c2:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0054c5c6:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0054c5ca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054c5cb:  // mov ecx, dword ptr [esp + eax*4 + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + eax * 4u + 0x44u)));
L_0054c5cf:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054c5d0:  // mov edx, dword ptr [esp + eax*4 + 0x148]
    edx = (uint32_t)(M32((uint32_t)(esp + eax * 4u + 0x148u)));
L_0054c5d7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054c5d8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054c5d9:  // call 0x56eb90
    t0 = 0x0056eb90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c5deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c5de:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0054c5e0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054c5e2:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0054c5e5:  // mov dword ptr [ecx + 0x10], eax
    M32((uint32_t)(ecx + 0x10u)) = (uint32_t)(eax);
L_0054c5e8:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054c5ec:  // cmp dword ptr [ecx + 4], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), eax, f);
L_0054c5ef:  // jle 0x54c61a
    if ((f.zf || f.sf != f.of)) goto L_0054c61a;
L_0054c5f1:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0054c5f5:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_0054c5f7:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0054c5fa:  // mov edi, dword ptr [edi + 0x10]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_0054c5fd:  // mov cx, word ptr [ecx + eax*2]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ecx + eax * 2u))) & 0xffffu);
L_0054c601:  // add edi, ebp
    t0 = ladd<32>(edi, ebp, f);
    edi = (uint32_t)(t0);
L_0054c603:  // mov word ptr [edx + edi*2], cx
    M16((uint32_t)(edx + edi * 2u)) = (uint16_t)((ecx & 0xffffu));
L_0054c607:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0054c609:  // mov edi, dword ptr [ecx + 0x10]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0x10u)));
L_0054c60c:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0054c60d:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054c60e:  // mov dword ptr [ecx + 0x10], edi
    M32((uint32_t)(ecx + 0x10u)) = (uint32_t)(edi);
L_0054c611:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054c615:  // cmp eax, dword ptr [ecx + 4]
    t0 = lsub<32>(eax, M32((uint32_t)(ecx + 0x4u)), f);
L_0054c618:  // jl 0x54c5f5
    if ((f.sf != f.of)) goto L_0054c5f5;
L_0054c61a:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0054c61c:  // mov edx, dword ptr [eax + 0x10]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_0054c61f:  // sub edx, 2
    t0 = lsub<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_0054c622:  // mov dword ptr [eax + 0x18], edx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(edx);
L_0054c625:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054c629:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054c62b:  // je 0x54c64c
    if (f.zf) goto L_0054c64c;
L_0054c62d:  // mov ecx, dword ptr [eax - 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_0054c630:  // lea edi, [eax - 4]
    edi = (uint32_t)((uint32_t)(eax + 0xfffffffcu));
L_0054c633:  // push 0x48e310
    t0 = 0x48e310u; esp -= 4; M32(esp) = t0;
L_0054c638:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054c639:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_0054c63b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054c63c:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c641u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c641:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054c642:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054c647:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c64cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c64c:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054c650:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054c654:  // mov ecx, dword ptr [ebx + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c65a:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054c65b:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0054c65e:  // add ebp, edx
    t0 = ladd<32>(ebp, edx, f);
    ebp = (uint32_t)(t0);
L_0054c660:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054c662:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0054c666:  // jl 0x54c5be
    if ((f.sf != f.of)) goto L_0054c5be;
L_0054c66c:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c672:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054c674:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054c676:  // jle 0x54c69a
    if ((f.zf || f.sf != f.of)) goto L_0054c69a;
L_0054c678:  // lea edi, [esp + 0x140]
    edi = (uint32_t)((uint32_t)(esp + 0x140u));
L_0054c67f:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0054c681:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054c686:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054c687:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c68cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c68c:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c692:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0054c693:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0054c696:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_0054c698:  // jl 0x54c67f
    if ((f.sf != f.of)) goto L_0054c67f;
L_0054c69a:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c6a0:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054c6a2:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_0054c6a7:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_0054c6a9:  // mov dword ptr [esp + 0x1c], ebp
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebp);
L_0054c6ad:  // jle 0x54c79d
    if ((f.zf || f.sf != f.of)) goto L_0054c79d;
L_0054c6b3:  // mov eax, dword ptr [ebx + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0054c6b6:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054c6ba:  // mov dword ptr [eax + 0x14], ecx
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(ecx);
L_0054c6bd:  // mov eax, dword ptr [ebx + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0054c6c0:  // mov ecx, dword ptr [eax + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x14u)));
L_0054c6c3:  // lea edx, [ecx + ecx*8]
    edx = (uint32_t)((uint32_t)(ecx + ecx * 8u));
L_0054c6c6:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054c6cb:  // shl edx, 2
    t0 = lshl<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_0054c6ce:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_0054c6d1:  // mov eax, dword ptr [ebx + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0054c6d4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054c6d5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054c6d6:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0054c6d9:  // push 0x152
    t0 = 0x152u; esp -= 4; M32(esp) = t0;
L_0054c6de:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0054c6e0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054c6e1:  // call 0x513770
    t0 = 0x00513770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c6e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c6e6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054c6e8:  // jl 0x54c75b
    if ((f.sf != f.of)) goto L_0054c75b;
L_0054c6ea:  // mov eax, dword ptr [ebx + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c6f0:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0054c6f6:  // mov edx, dword ptr [eax + 0x128]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x128u)));
L_0054c6fc:  // mov eax, dword ptr [ebx + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0054c6ff:  // add edx, 0x24
    t0 = ladd<32>(edx, 0x24u, f);
    edx = (uint32_t)(t0);
L_0054c702:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054c703:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054c704:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0054c707:  // push 0x651224
    t0 = 0x651224u; esp -= 4; M32(esp) = t0;
L_0054c70c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054c70d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054c70e:  // push 0x9c3df0
    t0 = 0x9c3df0u; esp -= 4; M32(esp) = t0;
L_0054c713:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c718u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c718:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0054c71b:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0054c71e:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0054c720:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0054c724:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054c725:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054c726:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054c728:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054c729:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054c72a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054c72b:  // call dword ptr [ecx + 0x2c]
    t0 = M32((uint32_t)(ecx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c72eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c72e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054c730:  // jl 0x54c75b
    if ((f.sf != f.of)) goto L_0054c75b;
L_0054c732:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0054c736:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0054c73a:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054c73e:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0054c740:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0054c743:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054c745:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0054c747:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0054c74a:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0054c74c:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0054c74f:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0054c751:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054c752:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0054c754:  // call dword ptr [edx + 0x30]
    t0 = M32((uint32_t)(edx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c757u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c757:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054c759:  // jmp 0x54c75f
    goto L_0054c75f;
L_0054c75b:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_0054c75f:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c765:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0054c767:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0054c769:  // jle 0x54c79d
    if ((f.zf || f.sf != f.of)) goto L_0054c79d;
L_0054c76b:  // lea eax, [ebx + 0xc]
    eax = (uint32_t)((uint32_t)(ebx + 0xcu));
L_0054c76e:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0054c771:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_0054c773:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0054c774:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0054c777:  // mov edx, dword ptr [edx + 8]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0054c77a:  // mov dword ptr [edi + 8], edx
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(edx);
L_0054c77d:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0054c780:  // mov edi, dword ptr [eax - 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_0054c783:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0054c785:  // mov dword ptr [edi], edx
    M32((uint32_t)(edi)) = (uint32_t)(edx);
L_0054c787:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0054c78a:  // mov edi, dword ptr [eax - 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_0054c78d:  // mov edx, dword ptr [edx + 0x14]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x14u)));
L_0054c790:  // mov dword ptr [edi + 0x14], edx
    M32((uint32_t)(edi + 0x14u)) = (uint32_t)(edx);
L_0054c793:  // mov edx, dword ptr [ebx + 0x108]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c799:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0054c79b:  // jl 0x54c76e
    if ((f.sf != f.of)) goto L_0054c76e;
L_0054c79d:  // mov eax, dword ptr [ebx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c7a3:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_0054c7a7:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_0054c7a9:  // jle 0x54c8ad
    if ((f.zf || f.sf != f.of)) goto L_0054c8ad;
L_0054c7af:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054c7b3:  // lea ebp, [ebx + 8]
    ebp = (uint32_t)((uint32_t)(ebx + 0x8u));
L_0054c7b6:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0054c7b9:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0054c7bc:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0054c7c0:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0054c7c4:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0054c7c8:  // mov ecx, dword ptr [ebp]
    ecx = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c7cb:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054c7cd:  // mov dword ptr [ecx + 0x1c], 1
    M32((uint32_t)(ecx + 0x1cu)) = (uint32_t)(0x1u);
L_0054c7d4:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c7d7:  // cmp dword ptr [eax + 0x1c], esi
    t0 = lsub<32>(M32((uint32_t)(eax + 0x1cu)), esi, f);
L_0054c7da:  // je 0x54c885
    if (f.zf) goto L_0054c885;
L_0054c7e0:  // mov edx, dword ptr [eax + 0x10]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_0054c7e3:  // shl edx, 1
    t0 = lshl<32>(edx, 0x1u, f);
    edx = (uint32_t)(t0);
L_0054c7e5:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0054c7e8:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c7eb:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0054c7ee:  // lea ecx, [eax + 4]
    ecx = (uint32_t)((uint32_t)(eax + 0x4u));
L_0054c7f1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054c7f2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054c7f4:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_0054c7f6:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0054c7f8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054c7f9:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054c7fe:  // call 0x5137d0
    t0 = 0x005137d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c803u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c803:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054c805:  // jl 0x54c881
    if ((f.sf != f.of)) goto L_0054c881;
L_0054c807:  // mov eax, dword ptr [ebx + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0054c80d:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054c811:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054c812:  // mov ecx, dword ptr [ebp]
    ecx = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c815:  // mov edx, dword ptr [eax + 0x88]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0054c81b:  // mov eax, dword ptr [eax + 0x128]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x128u)));
L_0054c821:  // add eax, 0x24
    t0 = ladd<32>(eax, 0x24u, f);
    eax = (uint32_t)(t0);
L_0054c824:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054c825:  // mov edx, dword ptr [ecx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0054c828:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054c829:  // push 0x6511f8
    t0 = 0x6511f8u; esp -= 4; M32(esp) = t0;
L_0054c82e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054c82f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054c830:  // push 0x9c3df0
    t0 = 0x9c3df0u; esp -= 4; M32(esp) = t0;
L_0054c835:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c83au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c83a:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c83d:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0054c840:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_0054c844:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054c847:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054c848:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054c849:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054c84a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054c84c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054c84d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054c84e:  // call dword ptr [ecx + 0x2c]
    t0 = M32((uint32_t)(ecx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c851u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c851:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054c853:  // jl 0x54c881
    if ((f.sf != f.of)) goto L_0054c881;
L_0054c855:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c858:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054c85c:  // mov edi, dword ptr [esp + 0x38]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0054c860:  // mov ecx, dword ptr [eax + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_0054c863:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0054c865:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0054c867:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0054c86a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054c86c:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0054c86e:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0054c871:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0054c873:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0054c876:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054c879:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054c87a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054c87c:  // call dword ptr [ecx + 0x30]
    t0 = M32((uint32_t)(ecx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c87fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c87f:  // jmp 0x54c885
    goto L_0054c885;
L_0054c881:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_0054c885:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054c889:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054c88d:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054c891:  // mov ecx, dword ptr [ebx + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x108u)));
L_0054c897:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054c898:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_0054c89b:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0054c89d:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054c89f:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0054c8a3:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_0054c8a7:  // jl 0x54c7c8
    if ((f.sf != f.of)) goto L_0054c7c8;
L_0054c8ad:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0054c8b1:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054c8b6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054c8b7:  // mov dword ptr [ebx + 0x114], 0x24
    M32((uint32_t)(ebx + 0x114u)) = (uint32_t)(0x24u);
L_0054c8c1:  // mov dword ptr [ebx + 0x118], 0x152
    M32((uint32_t)(ebx + 0x118u)) = (uint32_t)(0x152u);
L_0054c8cb:  // mov dword ptr [ebx + 0x11c], 4
    M32((uint32_t)(ebx + 0x11cu)) = (uint32_t)(0x4u);
L_0054c8d5:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c8dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c8da:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0054c8de:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054c8df:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054c8e4:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c8e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c8e9:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054c8ed:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0054c8ee:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054c8f0:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0054c8f2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0054c8f3:  // and eax, 0x7fffbffb
    t0 = llog<32>(eax & 0x7fffbffbu, f);
    eax = (uint32_t)(t0);
L_0054c8f8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0054c8f9:  // add eax, 0x80004005
    t0 = ladd<32>(eax, 0x80004005u, f);
    eax = (uint32_t)(t0);
L_0054c8fe:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054c8ff:  // add esp, 0x230
    t0 = ladd<32>(esp, 0x230u, f);
    esp = (uint32_t)(t0);
L_0054c905:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0054c906:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0054c907:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0054c908:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054c90a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054c90b:  // add esp, 0x230
    t0 = ladd<32>(esp, 0x230u, f);
    esp = (uint32_t)(t0);
L_0054c911:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0054c0a0, 0054c0a0)
