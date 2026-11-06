// lifted from 0041b1a0 (vslot9, 456 bytes, 134 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0041b1a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0041b1a0;
L_0041b1a0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0041b1a6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0041b1a8:  // push 0x5d17a2
    t0 = 0x5d17a2u; esp -= 4; M32(esp) = t0;
L_0041b1ad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041b1ae:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0041b1b5:  // sub esp, 0xc
    t0 = lsub<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041b1b8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0041b1b9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0041b1ba:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041b1bb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041b1bc:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041b1c0:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0041b1c2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041b1c3:  // or dword ptr [edi + 0x70], 0x20
    t0 = llog<32>(M32((uint32_t)(edi + 0x70u)) | 0x20u, f);
    M32((uint32_t)(edi + 0x70u)) = (uint32_t)(t0);
L_0041b1c7:  // call 0x47c730
    t0 = 0x0047c730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b1ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b1cc:  // mov eax, dword ptr [esi + 0x214]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x214u)));
L_0041b1d2:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0041b1d5:  // mov ebp, dword ptr [esi]
    ebp = (uint32_t)(M32((uint32_t)(esi)));
L_0041b1d7:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0041b1d9:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0041b1db:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0041b1dd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0041b1df:  // je 0x41b203
    if (f.zf) goto L_0041b203;
L_0041b1e1:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0041b1e3:  // push 0x623e00
    t0 = 0x623e00u; esp -= 4; M32(esp) = t0;
L_0041b1e8:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b1ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b1eb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041b1ed:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b1f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b1f2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041b1f3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041b1f5:  // call dword ptr [ebp + 0xf0]
    t0 = M32((uint32_t)(ebp + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b1fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b1fb:  // mov dword ptr [esi + 0x260], ebx
    M32((uint32_t)(esi + 0x260u)) = (uint32_t)(ebx);
L_0041b201:  // jmp 0x41b227
    goto L_0041b227;
L_0041b203:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0041b205:  // push 0x623df4
    t0 = 0x623df4u; esp -= 4; M32(esp) = t0;
L_0041b20a:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b20du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b20d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041b20f:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b214u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b214:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041b215:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041b217:  // call dword ptr [ebp + 0xf0]
    t0 = M32((uint32_t)(ebp + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b21du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b21d:  // mov dword ptr [esi + 0x260], 1
    M32((uint32_t)(esi + 0x260u)) = (uint32_t)(0x1u);
L_0041b227:  // push 0x22
    t0 = 0x22u; esp -= 4; M32(esp) = t0;
L_0041b229:  // push 0x623dd4
    t0 = 0x623dd4u; esp -= 4; M32(esp) = t0;
L_0041b22e:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0041b230:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_0041b232:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0041b237:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b23cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b23c:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0041b240:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0041b242:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_0041b246:  // je 0x41b252
    if (f.zf) goto L_0041b252;
L_0041b248:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041b249:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041b24b:  // call 0x4f1ec0
    t0 = 0x004f1ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b250u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b250:  // jmp 0x41b254
    goto L_0041b254;
L_0041b252:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041b254:  // push 0x23
    t0 = 0x23u; esp -= 4; M32(esp) = t0;
L_0041b256:  // push 0x623dd4
    t0 = 0x623dd4u; esp -= 4; M32(esp) = t0;
L_0041b25b:  // or ebp, 0xffffffff
    t0 = llog<32>(ebp | 0xffffffffu, f);
    ebp = (uint32_t)(t0);
L_0041b25e:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_0041b260:  // push 0x60
    t0 = 0x60u; esp -= 4; M32(esp) = t0;
L_0041b262:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0041b267:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_0041b26b:  // mov dword ptr [esi + 0x208], eax
    M32((uint32_t)(esi + 0x208u)) = (uint32_t)(eax);
L_0041b271:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b276u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b276:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0041b27a:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0041b27c:  // mov dword ptr [esp + 0x24], 1
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x1u);
L_0041b284:  // je 0x41b291
    if (f.zf) goto L_0041b291;
L_0041b286:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041b287:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041b288:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041b28a:  // call 0x4fe710
    t0 = 0x004fe710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b28fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b28f:  // jmp 0x41b293
    goto L_0041b293;
L_0041b291:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041b293:  // mov dword ptr [esi + 0x13c], eax
    M32((uint32_t)(esi + 0x13cu)) = (uint32_t)(eax);
L_0041b299:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0041b2a1:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0041b2a5:  // lea eax, [esi + 0x12c]
    eax = (uint32_t)((uint32_t)(esi + 0x12cu));
L_0041b2ab:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0041b2b3:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0041b2b7:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0041b2b9:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0041b2c1:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0041b2c5:  // push 0x26
    t0 = 0x26u; esp -= 4; M32(esp) = t0;
L_0041b2c7:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0041b2ca:  // push 0x623dd4
    t0 = 0x623dd4u; esp -= 4; M32(esp) = t0;
L_0041b2cf:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0041b2d1:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0041b2d3:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0041b2d6:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0041b2db:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_0041b2df:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b2e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b2e4:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0041b2e8:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0041b2ea:  // mov dword ptr [esp + 0x24], 2
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x2u);
L_0041b2f2:  // je 0x41b311
    if (f.zf) goto L_0041b311;
L_0041b2f4:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_0041b2f6:  // je 0x41b305
    if (f.zf) goto L_0041b305;
L_0041b2f8:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_0041b2fb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041b2fc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041b2fe:  // call 0x495230
    t0 = 0x00495230u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b303u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b303:  // jmp 0x41b313
    goto L_0041b313;
L_0041b305:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041b307:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041b308:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041b30a:  // call 0x495230
    t0 = 0x00495230u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b30fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b30f:  // jmp 0x41b313
    goto L_0041b313;
L_0041b311:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041b313:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041b314:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_0041b319:  // mov dword ptr [esp + 0x28], ebp
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebp);
L_0041b31d:  // mov dword ptr [esi + 0x70], eax
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(eax);
L_0041b320:  // mov dword ptr [esi + 0xf4], ebx
    M32((uint32_t)(esi + 0xf4u)) = (uint32_t)(ebx);
L_0041b326:  // mov dword ptr [esi + 0x264], ebx
    M32((uint32_t)(esi + 0x264u)) = (uint32_t)(ebx);
L_0041b32c:  // call 0x50b010
    t0 = 0x0050b010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b331u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b331:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_0041b337:  // fcomp dword ptr [esi + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x24u)));
    lpop(x);
L_0041b33a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041b33c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0041b33f:  // jne 0x41b349
    if (!f.zf) goto L_0041b349;
L_0041b341:  // mov dword ptr [esi + 0x258], ebx
    M32((uint32_t)(esi + 0x258u)) = (uint32_t)(ebx);
L_0041b347:  // jmp 0x41b353
    goto L_0041b353;
L_0041b349:  // mov dword ptr [esi + 0x258], 1
    M32((uint32_t)(esi + 0x258u)) = (uint32_t)(0x1u);
L_0041b353:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0041b357:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041b358:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041b359:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0041b35a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041b35b:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0041b362:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0041b365:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0041b1a0, 0041b1a0)
