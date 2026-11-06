// lifted from 00555020 (vslot3, 996 bytes, 287 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00555020(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00555020;
L_00555020:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00555026:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00555028:  // push 0x5d7cb9
    t0 = 0x5d7cb9u; esp -= 4; M32(esp) = t0;
L_0055502d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055502e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00555035:  // sub esp, 0x74
    t0 = lsub<32>(esp, 0x74u, f);
    esp = (uint32_t)(t0);
L_00555038:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00555039:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0055503a:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0055503c:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0055503e:  // mov dword ptr [ebp + 0xc], esi
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(esi);
L_00555041:  // mov dword ptr [ebp + 8], esi
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(esi);
L_00555044:  // mov dword ptr [ebp + 0x10], esi
    M32((uint32_t)(ebp + 0x10u)) = (uint32_t)(esi);
L_00555047:  // mov al, byte ptr [0x63c108]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x63c108u))) & 0xffu);
L_0055504c:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0055504e:  // je 0x5553f0
    if (f.zf) goto L_005553f0;
L_00555054:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00555055:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00555056:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00555058:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0055505a:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0055505c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0055505d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0055505e:  // push 0x652560
    t0 = 0x652560u; esp -= 4; M32(esp) = t0;
L_00555063:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555068u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555068:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0055506b:  // mov dword ptr [ebp + 0xc], eax
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(eax);
L_0055506e:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_00555072:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00555076:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00555077:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00555078:  // mov edi, 0x5e5148
    edi = (uint32_t)(0x5e5148u);
L_0055507d:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00555080:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00555082:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00555083:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00555085:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00555087:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00555088:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00555089:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0055508a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0055508b:  // push 0x5e5148
    t0 = 0x5e5148u; esp -= 4; M32(esp) = t0;
L_00555090:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_00555094:  // mov dword ptr [esp + 0x30], esi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(esi);
L_00555098:  // call 0x579a9a
    t0 = 0x00579a9au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055509du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055509d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0055509f:  // jge 0x5550ce
    if ((f.sf == f.of)) goto L_005550ce;
L_005550a1:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005550a5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005550a6:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005550a8:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005550abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005550ab:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005550ac:  // push 0x622dbc
    t0 = 0x622dbcu; esp -= 4; M32(esp) = t0;
L_005550b1:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005550b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005550b6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005550b9:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_005550be:  // push 0x1f4
    t0 = 0x1f4u; esp -= 4; M32(esp) = t0;
L_005550c3:  // push 0xd2
    t0 = 0xd2u; esp -= 4; M32(esp) = t0;
L_005550c8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005550c9:  // call 0x42d080
    t0 = 0x0042d080u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005550ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005550ce:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_005550d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005550d3:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005550d5:  // call dword ptr [ecx + 0x10]
    t0 = M32((uint32_t)(ecx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005550d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005550d8:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_005550da:  // push 0x3eb
    t0 = 0x3ebu; esp -= 4; M32(esp) = t0;
L_005550df:  // cmp ebx, 0x29e
    t0 = lsub<32>(ebx, 0x29eu, f);
L_005550e5:  // push 0xd2
    t0 = 0xd2u; esp -= 4; M32(esp) = t0;
L_005550ea:  // setb dl
    edx = (edx & 0xffffff00u) | ((uint32_t)(f.cf) & 0xffu);
L_005550ed:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005550ee:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_005550f3:  // call 0x42d080
    t0 = 0x0042d080u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005550f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005550f8:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_005550fc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005550fd:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005550ff:  // call dword ptr [ecx + 0xc]
    t0 = M32((uint32_t)(ecx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555102u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555102:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00555104:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00555106:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00555108:  // mov edi, 0x9c7cd8
    edi = (uint32_t)(0x9c7cd8u);
L_0055510d:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00555110:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00555112:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00555114:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00555117:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00555119:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0055511b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0055511c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0055511d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0055511e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00555120:  // push 0x9c7cd8
    t0 = 0x9c7cd8u; esp -= 4; M32(esp) = t0;
L_00555125:  // push 0x652554
    t0 = 0x652554u; esp -= 4; M32(esp) = t0;
L_0055512a:  // call 0x502060
    t0 = 0x00502060u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055512fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055512f:  // mov dword ptr [ebp + 0x10], eax
    M32((uint32_t)(ebp + 0x10u)) = (uint32_t)(eax);
L_00555132:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00555136:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_00555139:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0055513b:  // je 0x555147
    if (f.zf) goto L_00555147;
L_0055513d:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0055513f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00555140:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555143u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555143:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_00555147:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0055514b:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0055514d:  // je 0x555159
    if (f.zf) goto L_00555159;
L_0055514f:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00555151:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00555152:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555155u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555155:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_00555159:  // push 0xf3
    t0 = 0xf3u; esp -= 4; M32(esp) = t0;
L_0055515e:  // push 0x652534
    t0 = 0x652534u; esp -= 4; M32(esp) = t0;
L_00555163:  // push 0x1f
    t0 = 0x1fu; esp -= 4; M32(esp) = t0;
L_00555165:  // push 0x68
    t0 = 0x68u; esp -= 4; M32(esp) = t0;
L_00555167:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0055516c:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555171u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555171:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00555175:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00555177:  // mov dword ptr [esp + 0x8c], edi
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(edi);
L_0055517e:  // je 0x55518a
    if (f.zf) goto L_0055518a;
L_00555180:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00555181:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00555183:  // call 0x5003f0
    t0 = 0x005003f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555188u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555188:  // jmp 0x55518c
    goto L_0055518c;
L_0055518a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0055518c:  // mov dword ptr [ebp + 8], eax
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(eax);
L_0055518f:  // mov cl, byte ptr [0x854e6c]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x854e6cu))) & 0xffu);
L_00555195:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_00555197:  // mov dword ptr [esp + 0x8c], 0xffffffff
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(0xffffffffu);
L_005551a2:  // mov esi, 8
    esi = (uint32_t)(0x8u);
L_005551a7:  // je 0x5551ae
    if (f.zf) goto L_005551ae;
L_005551a9:  // mov esi, 0x18
    esi = (uint32_t)(0x18u);
L_005551ae:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_005551b0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005551b2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005551b4:  // or ecx, 0x40
    t0 = llog<32>(ecx | 0x40u, f);
    ecx = (uint32_t)(t0);
L_005551b7:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_005551b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005551ba:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005551bb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_005551bd:  // call 0x500540
    t0 = 0x00500540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005551c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005551c2:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_005551c5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005551c7:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005551c9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005551ca:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_005551cc:  // call 0x500590
    t0 = 0x00500590u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005551d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005551d1:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_005551d4:  // call 0x5005d0
    t0 = 0x005005d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005551d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005551d9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005551da:  // lea edx, [ebp + 0x388]
    edx = (uint32_t)((uint32_t)(ebp + 0x388u));
L_005551e0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005551e1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005551e2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005551e4:  // push 0x652500
    t0 = 0x652500u; esp -= 4; M32(esp) = t0;
L_005551e9:  // push 0x6524f0
    t0 = 0x6524f0u; esp -= 4; M32(esp) = t0;
L_005551ee:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_005551f3:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005551f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005551f8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005551f9:  // lea eax, [ebp + 0x3a0]
    eax = (uint32_t)((uint32_t)(ebp + 0x3a0u));
L_005551ff:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00555200:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00555201:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00555203:  // push 0x6524d4
    t0 = 0x6524d4u; esp -= 4; M32(esp) = t0;
L_00555208:  // push 0x6524c4
    t0 = 0x6524c4u; esp -= 4; M32(esp) = t0;
L_0055520d:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_00555212:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555217u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555217:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00555218:  // lea ecx, [ebp + 0x38c]
    ecx = (uint32_t)((uint32_t)(ebp + 0x38cu));
L_0055521e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0055521f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00555220:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00555222:  // push 0x6524a8
    t0 = 0x6524a8u; esp -= 4; M32(esp) = t0;
L_00555227:  // push 0x652490
    t0 = 0x652490u; esp -= 4; M32(esp) = t0;
L_0055522c:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_00555231:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555236u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555236:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00555237:  // lea edx, [ebp + 0x14]
    edx = (uint32_t)((uint32_t)(ebp + 0x14u));
L_0055523a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0055523b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0055523c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0055523e:  // push 0x65247c
    t0 = 0x65247cu; esp -= 4; M32(esp) = t0;
L_00555243:  // push 0x652474
    t0 = 0x652474u; esp -= 4; M32(esp) = t0;
L_00555248:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0055524d:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555252u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555252:  // mov edi, 0x3e8
    edi = (uint32_t)(0x3e8u);
L_00555257:  // mov esi, 0x80808080
    esi = (uint32_t)(0x80808080u);
L_0055525c:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555261u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555261:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00555265:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00555269:  // fmul dword ptr [0x5d85d8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d8u)));
L_0055526f:  // fmul dword ptr [0x5d8618]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8618u)));
L_00555275:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00555279:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055527eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055527e:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00555282:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00555286:  // fmul dword ptr [0x5d85d8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d8u)));
L_0055528c:  // fmul dword ptr [0x5d8618]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8618u)));
L_00555292:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00555296:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055529bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055529b:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0055529f:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_005552a3:  // fmul dword ptr [0x5d85d8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d8u)));
L_005552a9:  // fmul dword ptr [0x5d8618]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8618u)));
L_005552af:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_005552b3:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005552b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005552b8:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_005552bc:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005552c0:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_005552c4:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005552c8:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_005552cc:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_005552d0:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_005552d4:  // fmul dword ptr [0x5d8c58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c58u)));
L_005552da:  // mov dword ptr [esp + 0x5c], eax
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(eax);
L_005552de:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_005552e2:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_005552e6:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_005552ea:  // fmul dword ptr [0x5e5994]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e5994u)));
L_005552f0:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_005552f4:  // mov dword ptr [esp + 0x60], ecx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(ecx);
L_005552f8:  // mov dword ptr [esp + 0x74], ecx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(ecx);
L_005552fc:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_005552ff:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00555301:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00555302:  // fst dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
L_00555306:  // fst dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
L_0055530a:  // fst dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
L_0055530e:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_00555315:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_00555319:  // mov dword ptr [esp + 0x4c], esi
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(esi);
L_0055531d:  // mov dword ptr [esp + 0x58], edx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(edx);
L_00555321:  // mov dword ptr [esp + 0x60], esi
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(esi);
L_00555325:  // mov dword ptr [esp + 0x6c], edx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(edx);
L_00555329:  // mov dword ptr [esp + 0x74], esi
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(esi);
L_0055532d:  // mov dword ptr [esp + 0x80], edx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(edx);
L_00555334:  // mov dword ptr [esp + 0x88], esi
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(esi);
L_0055533b:  // call 0x500a10
    t0 = 0x00500a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555340u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555340:  // lea ecx, [eax + 1]
    ecx = (uint32_t)((uint32_t)(eax + 0x1u));
L_00555343:  // mov word ptr [esp + 0x28], ax
    M16((uint32_t)(esp + 0x28u)) = (uint16_t)((eax & 0xffffu));
L_00555348:  // mov word ptr [esp + 0x2a], cx
    M16((uint32_t)(esp + 0x2au)) = (uint16_t)((ecx & 0xffffu));
L_0055534d:  // lea ecx, [eax + 2]
    ecx = (uint32_t)((uint32_t)(eax + 0x2u));
L_00555350:  // lea edx, [eax + 3]
    edx = (uint32_t)((uint32_t)(eax + 0x3u));
L_00555353:  // mov word ptr [esp + 0x32], ax
    M16((uint32_t)(esp + 0x32u)) = (uint16_t)((eax & 0xffffu));
L_00555358:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_0055535c:  // mov word ptr [esp + 0x2c], cx
    M16((uint32_t)(esp + 0x2cu)) = (uint16_t)((ecx & 0xffffu));
L_00555361:  // mov word ptr [esp + 0x2e], cx
    M16((uint32_t)(esp + 0x2eu)) = (uint16_t)((ecx & 0xffffu));
L_00555366:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00555369:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0055536b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055536c:  // mov word ptr [esp + 0x38], dx
    M16((uint32_t)(esp + 0x38u)) = (uint16_t)((edx & 0xffffu));
L_00555371:  // call 0x500ac0
    t0 = 0x00500ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555376u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555376:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00555377:  // jne 0x55525c
    if (!f.zf) goto L_0055525c;
L_0055537d:  // lea esi, [ebp + 0x6c]
    esi = (uint32_t)((uint32_t)(ebp + 0x6cu));
L_00555380:  // mov edi, 0x32
    edi = (uint32_t)(0x32u);
L_00555385:  // mov ebx, 0xc0f00000
    ebx = (uint32_t)(0xc0f00000u);
L_0055538a:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055538fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055538f:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00555393:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00555397:  // fmul dword ptr [0x5d85d4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d4u)));
L_0055539d:  // fmul dword ptr [0x5d8618]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8618u)));
L_005553a3:  // fsub dword ptr [0x5e5990]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5e5990u)));
L_005553a9:  // fstp dword ptr [esi - 4]
    F32((uint32_t)(esi + 0xfffffffcu)) = lf32(ST(0));
    lpop(x);
L_005553ac:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005553b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005553b1:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_005553b5:  // add esi, 0x10
    t0 = ladd<32>(esi, 0x10u, f);
    esi = (uint32_t)(t0);
L_005553b8:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_005553bc:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_005553bd:  // fmul dword ptr [0x5d85d4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d4u)));
L_005553c3:  // fmul dword ptr [0x5d8618]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8618u)));
L_005553c9:  // fsub dword ptr [0x5e5990]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5e5990u)));
L_005553cf:  // fstp dword ptr [esi - 0x10]
    F32((uint32_t)(esi + 0xfffffff0u)) = lf32(ST(0));
    lpop(x);
L_005553d2:  // mov dword ptr [esi - 0xc], ebx
    M32((uint32_t)(esi + 0xfffffff4u)) = (uint32_t)(ebx);
L_005553d5:  // mov dword ptr [esi - 8], 0
    M32((uint32_t)(esi + 0xfffffff8u)) = (uint32_t)(0x0u);
L_005553dc:  // jne 0x55538a
    if (!f.zf) goto L_0055538a;
L_005553de:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_005553e1:  // call 0x5009c0
    t0 = 0x005009c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005553e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005553e6:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_005553e9:  // call 0x5009f0
    t0 = 0x005009f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005553eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005553ee:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005553ef:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005553f0:  // mov ecx, dword ptr [esp + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_005553f4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005553f5:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005553f6:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_005553fd:  // add esp, 0x80
    t0 = ladd<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_00555403:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00555020, 00555020)
