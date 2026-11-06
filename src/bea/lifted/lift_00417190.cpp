// lifted from 00417190 (vslot9, 439 bytes, 151 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00417190(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00417190;
L_00417190:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00417196:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00417198:  // push 0x5d14c2
    t0 = 0x5d14c2u; esp -= 4; M32(esp) = t0;
L_0041719d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041719e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004171a5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004171a6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004171a7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004171a8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004171a9:  // mov edi, dword ptr [esp + 0x20]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004171ad:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_004171b2:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004171b4:  // mov ebx, dword ptr [edi + 0x70]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x70u)));
L_004171b7:  // mov dword ptr [edi + 0x7c], eax
    M32((uint32_t)(edi + 0x7cu)) = (uint32_t)(eax);
L_004171ba:  // mov dword ptr [edi + 0x80], eax
    M32((uint32_t)(edi + 0x80u)) = (uint32_t)(eax);
L_004171c0:  // mov eax, dword ptr [edi + 0x3bc]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x3bcu)));
L_004171c6:  // or ebx, 0x8000020
    t0 = llog<32>(ebx | 0x8000020u, f);
    ebx = (uint32_t)(t0);
L_004171cc:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004171ce:  // mov dword ptr [edi + 0x70], ebx
    M32((uint32_t)(edi + 0x70u)) = (uint32_t)(ebx);
L_004171d1:  // mov edx, dword ptr [eax + 0x13c]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x13cu)));
L_004171d7:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004171d9:  // cmp edx, ebp
    t0 = lsub<32>(edx, ebp, f);
L_004171db:  // sete cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_004171de:  // push 0x32
    t0 = 0x32u; esp -= 4; M32(esp) = t0;
L_004171e0:  // push 0x623af4
    t0 = 0x623af4u; esp -= 4; M32(esp) = t0;
L_004171e5:  // mov dword ptr [edi + 0x8c], ecx
    M32((uint32_t)(edi + 0x8cu)) = (uint32_t)(ecx);
L_004171eb:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004171f0:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_004171f2:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004171f7:  // mov dword ptr [esi + 0x258], 0xbf800000
    M32((uint32_t)(esi + 0x258u)) = (uint32_t)(0xbf800000u);
L_00417201:  // mov dword ptr [esi + 0x250], ebp
    M32((uint32_t)(esi + 0x250u)) = (uint32_t)(ebp);
L_00417207:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041720cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041720c:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00417210:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00417212:  // mov dword ptr [esp + 0x18], ebp
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebp);
L_00417216:  // je 0x41722a
    if (f.zf) goto L_0041722a;
L_00417218:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00417219:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0041721b:  // push 0x40000000
    t0 = 0x40000000u; esp -= 4; M32(esp) = t0;
L_00417220:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00417221:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00417223:  // call 0x443fc0
    t0 = 0x00443fc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00417228u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00417228:  // jmp 0x41722c
    goto L_0041722c;
L_0041722a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041722c:  // push 0x33
    t0 = 0x33u; esp -= 4; M32(esp) = t0;
L_0041722e:  // push 0x623af4
    t0 = 0x623af4u; esp -= 4; M32(esp) = t0;
L_00417233:  // or ebx, 0xffffffff
    t0 = llog<32>(ebx | 0xffffffffu, f);
    ebx = (uint32_t)(t0);
L_00417236:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_0041723b:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0041723d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00417242:  // mov dword ptr [esp + 0x28], ebx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebx);
L_00417246:  // mov dword ptr [esi + 0x178], eax
    M32((uint32_t)(esi + 0x178u)) = (uint32_t)(eax);
L_0041724c:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00417251u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00417251:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00417255:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00417257:  // mov dword ptr [esp + 0x18], 1
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x1u);
L_0041725f:  // je 0x417271
    if (f.zf) goto L_00417271;
L_00417261:  // mov edx, dword ptr [esi + 0x178]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x178u)));
L_00417267:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00417269:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041726a:  // call 0x494c60
    t0 = 0x00494c60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041726fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041726f:  // jmp 0x417273
    goto L_00417273;
L_00417271:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00417273:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00417274:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00417276:  // mov dword ptr [esp + 0x1c], ebx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebx);
L_0041727a:  // mov dword ptr [esi + 0x70], eax
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(eax);
L_0041727d:  // call 0x4f86d0
    t0 = 0x004f86d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00417282u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00417282:  // mov ebx, dword ptr [esi + 0x178]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x178u)));
L_00417288:  // cmp dword ptr [ebx + 0x20], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x20u)), ebp, f);
L_0041728b:  // jg 0x4172ba
    if ((!f.zf && f.sf == f.of)) goto L_004172ba;
L_0041728d:  // cmp ebx, ebp
    t0 = lsub<32>(ebx, ebp, f);
L_0041728f:  // je 0x4172a3
    if (f.zf) goto L_004172a3;
L_00417291:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00417293:  // call 0x444000
    t0 = 0x00444000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00417298u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00417298:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00417299:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0041729e:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004172a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004172a3:  // mov ecx, dword ptr [esi + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x70u)));
L_004172a6:  // mov dword ptr [esi + 0x178], ebp
    M32((uint32_t)(esi + 0x178u)) = (uint32_t)(ebp);
L_004172ac:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_004172ae:  // je 0x4172b7
    if (f.zf) goto L_004172b7;
L_004172b0:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004172b2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004172b4:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004172b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004172b7:  // mov dword ptr [esi + 0x70], ebp
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(ebp);
L_004172ba:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004172bd:  // push 0x623aec
    t0 = 0x623aecu; esp -= 4; M32(esp) = t0;
L_004172c2:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004172c4:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004172c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004172c7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004172c9:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004172ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004172ce:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004172d1:  // je 0x4172e2
    if (f.zf) goto L_004172e2;
L_004172d3:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004172d5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004172d7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004172d9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004172da:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004172dc:  // call dword ptr [edx + 0xf0]
    t0 = M32((uint32_t)(edx + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004172e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004172e2:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004172e5:  // mov ebx, 3
    ebx = (uint32_t)(0x3u);
L_004172ea:  // mov dword ptr [esi + 0x254], ebx
    M32((uint32_t)(esi + 0x254u)) = (uint32_t)(ebx);
L_004172f0:  // mov dword ptr [esi + 0x25c], ebp
    M32((uint32_t)(esi + 0x25cu)) = (uint32_t)(ebp);
L_004172f6:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004172f8:  // push 0x623ae4
    t0 = 0x623ae4u; esp -= 4; M32(esp) = t0;
L_004172fd:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00417300u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00417300:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00417302:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00417307u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00417307:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0041730a:  // je 0x417327
    if (f.zf) goto L_00417327;
L_0041730c:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0041730e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00417310:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00417312:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00417313:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00417315:  // call dword ptr [edx + 0xf0]
    t0 = M32((uint32_t)(edx + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041731bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041731b:  // mov dword ptr [esi + 0x260], 1
    M32((uint32_t)(esi + 0x260u)) = (uint32_t)(0x1u);
L_00417325:  // jmp 0x41732d
    goto L_0041732d;
L_00417327:  // mov dword ptr [esi + 0x260], ebp
    M32((uint32_t)(esi + 0x260u)) = (uint32_t)(ebp);
L_0041732d:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0041732f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00417331:  // mov dword ptr [esi + 0x264], ebx
    M32((uint32_t)(esi + 0x264u)) = (uint32_t)(ebx);
L_00417337:  // mov dword ptr [esi + 0x268], 0xc2c80000
    M32((uint32_t)(esi + 0x268u)) = (uint32_t)(0xc2c80000u);
L_00417341:  // call dword ptr [eax + 0x48]
    t0 = M32((uint32_t)(eax + 0x48u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00417344u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00417344:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00417345:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00417347:  // call 0x417390
    t0 = 0x00417390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041734cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041734c:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0041734f:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_00417351:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00417353:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00417355:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00417357:  // push 0x623adc
    t0 = 0x623adcu; esp -= 4; M32(esp) = t0;
L_0041735c:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041735fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041735f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00417361:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00417366u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00417366:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00417367:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00417369:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041736fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041736f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00417370:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00417375:  // call 0x50b010
    t0 = 0x0050b010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041737au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041737a:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0041737e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041737f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00417380:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00417381:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00417388:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00417389:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041738c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00417190, 00417190)
