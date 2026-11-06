// lifted from 00476fe0 (FUN_00476fe0, 2952 bytes, 842 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00476fe0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00476fe0;
L_00476fe0:  // sub esp, 0x270
    t0 = lsub<32>(esp, 0x270u, f);
    esp = (uint32_t)(t0);
L_00476fe6:  // mov eax, dword ptr [0x89ce4c]
    eax = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_00476feb:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_00476fef:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00476ff0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00476ff1:  // mov ecx, dword ptr [eax*4 + 0x89c9a4]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x89c9a4u)));
L_00476ff8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00476ff9:  // lea eax, [esp + 0x98]
    eax = (uint32_t)((uint32_t)(esp + 0x98u));
L_00477000:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00477001:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00477003:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00477004:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477006u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477006:  // mov ecx, dword ptr [0x89ce4c]
    ecx = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_0047700c:  // lea eax, [esp + 0x100]
    eax = (uint32_t)((uint32_t)(esp + 0x100u));
L_00477013:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00477014:  // mov ecx, dword ptr [ecx*4 + 0x89c9a4]
    ecx = (uint32_t)(M32((uint32_t)(ecx * 4u + 0x89c9a4u)));
L_0047701b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0047701d:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477020u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477020:  // fld dword ptr [eax + 0x20]
    lpush(x, (long double)F32((uint32_t)(eax + 0x20u)));
L_00477023:  // fld dword ptr [eax + 0x10]
    lpush(x, (long double)F32((uint32_t)(eax + 0x10u)));
L_00477026:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00477028:  // mov ecx, dword ptr [0x89ce4c]
    ecx = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_0047702e:  // lea eax, [esp + 0x100]
    eax = (uint32_t)((uint32_t)(esp + 0x100u));
L_00477035:  // mov ecx, dword ptr [ecx*4 + 0x89c9a4]
    ecx = (uint32_t)(M32((uint32_t)(ecx * 4u + 0x89c9a4u)));
L_0047703c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047703d:  // fstp dword ptr [esp + 0xd4]
    F32((uint32_t)(esp + 0xd4u)) = lf32(ST(0));
    lpop(x);
L_00477044:  // fstp dword ptr [esp + 0xd8]
    F32((uint32_t)(esp + 0xd8u)) = lf32(ST(0));
    lpop(x);
L_0047704b:  // fstp dword ptr [esp + 0xdc]
    F32((uint32_t)(esp + 0xdcu)) = lf32(ST(0));
    lpop(x);
L_00477052:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00477054:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477057u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477057:  // mov ecx, dword ptr [0x89ce4c]
    ecx = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_0047705d:  // lea eax, [esp + 0x100]
    eax = (uint32_t)((uint32_t)(esp + 0x100u));
L_00477064:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00477065:  // mov ecx, dword ptr [ecx*4 + 0x89c9a4]
    ecx = (uint32_t)(M32((uint32_t)(ecx * 4u + 0x89c9a4u)));
L_0047706c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0047706e:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477071u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477071:  // mov ecx, 6
    ecx = (uint32_t)(0x6u);
L_00477076:  // mov esi, 0x89ce14
    esi = (uint32_t)(0x89ce14u);
L_0047707b:  // lea edi, [esp + 0x100]
    edi = (uint32_t)((uint32_t)(esp + 0x100u));
L_00477082:  // lea edx, [esp + 0x200]
    edx = (uint32_t)((uint32_t)(esp + 0x200u));
L_00477089:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0047708b:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00477090:  // mov esi, 0x9c6994
    esi = (uint32_t)(0x9c6994u);
L_00477095:  // lea edi, [esp + 0x1c0]
    edi = (uint32_t)((uint32_t)(esp + 0x1c0u));
L_0047709c:  // lea eax, [esp + 0x240]
    eax = (uint32_t)((uint32_t)(esp + 0x240u));
L_004770a3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004770a5:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_004770aa:  // mov esi, 0x9c6914
    esi = (uint32_t)(0x9c6914u);
L_004770af:  // lea edi, [esp + 0x180]
    edi = (uint32_t)((uint32_t)(esp + 0x180u));
L_004770b6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004770b8:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_004770bd:  // mov esi, 0x9c6954
    esi = (uint32_t)(0x9c6954u);
L_004770c2:  // lea edi, [esp + 0x200]
    edi = (uint32_t)((uint32_t)(esp + 0x200u));
L_004770c9:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004770cb:  // lea ecx, [esp + 0x180]
    ecx = (uint32_t)((uint32_t)(esp + 0x180u));
L_004770d2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004770d3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004770d4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004770d5:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004770dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004770da:  // lea ecx, [esp + 0x1c0]
    ecx = (uint32_t)((uint32_t)(esp + 0x1c0u));
L_004770e1:  // lea edx, [esp + 0x240]
    edx = (uint32_t)((uint32_t)(esp + 0x240u));
L_004770e8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004770e9:  // lea eax, [esp + 0x144]
    eax = (uint32_t)((uint32_t)(esp + 0x144u));
L_004770f0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004770f1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004770f2:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004770f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004770f7:  // mov eax, dword ptr [esp + 0x100]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x100u)));
L_004770fe:  // fild dword ptr [0x89ce14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89ce14u)));
L_00477104:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00477105:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00477107:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00477109:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0047710d:  // mov eax, dword ptr [esp + 0x104]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x104u)));
L_00477114:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00477118:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00477119:  // fdivr st(1)
    ST(0) = (ST(1)) / (ST(0));
L_0047711b:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047711d:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_00477124:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00477126:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0047712a:  // mov eax, dword ptr [0x855170]
    eax = (uint32_t)(M32((uint32_t)(0x855170u)));
L_0047712f:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00477133:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00477135:  // mov dword ptr [0x855178], eax
    M32((uint32_t)(0x855178u)) = (uint32_t)(eax);
L_0047713a:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0047713c:  // mov dword ptr [0x888fb4], ebp
    M32((uint32_t)(0x888fb4u)) = (uint32_t)(ebp);
L_00477142:  // fdivr st(1)
    ST(0) = (ST(1)) / (ST(0));
L_00477144:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_0047714b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047714d:  // je 0x477153
    if (f.zf) goto L_00477153;
L_0047714f:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_00477151:  // jmp 0x477155
    goto L_00477155;
L_00477153:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00477155:  // mov bl, byte ptr [esp + 0x288]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x288u))) & 0xffu);
L_0047715c:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_0047715e:  // je 0x4773ef
    if (f.zf) goto L_004773ef;
L_00477164:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00477167:  // lea edi, [esi + 8]
    edi = (uint32_t)((uint32_t)(esi + 0x8u));
L_0047716a:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_0047716e:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00477170:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00477171:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477173u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477173:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00477175:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00477177:  // call dword ptr [edx + 0x54]
    t0 = M32((uint32_t)(edx + 0x54u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047717au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047717a:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0047717c:  // je 0x4771bd
    if (f.zf) goto L_004771bd;
L_0047717e:  // test dword ptr [esi + 0x34], 0x80000000
    t0 = llog<32>(M32((uint32_t)(esi + 0x34u)) & 0x80000000u, f);
L_00477185:  // lea ecx, [esi + 0x3c]
    ecx = (uint32_t)((uint32_t)(esi + 0x3cu));
L_00477188:  // jne 0x47718f
    if (!f.zf) goto L_0047718f;
L_0047718a:  // mov ecx, 0x83d9c0
    ecx = (uint32_t)(0x83d9c0u);
L_0047718f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00477190:  // lea eax, [esp + 0x104]
    eax = (uint32_t)((uint32_t)(esp + 0x104u));
L_00477197:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00477198:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047719du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047719d:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004771a1:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004771a3:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004771a7:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004771ab:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004771ae:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004771b2:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004771b6:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004771b9:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004771bd:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004771c1:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_004771c8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004771c9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004771cc:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004771d0:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_004771d7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004771d8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004771db:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004771df:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_004771e6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004771e7:  // lea ecx, [esp + 0xec]
    ecx = (uint32_t)((uint32_t)(esp + 0xecu));
L_004771ee:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004771f1:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004771f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004771f6:  // lea ecx, [esp + 0xe0]
    ecx = (uint32_t)((uint32_t)(esp + 0xe0u));
L_004771fd:  // call 0x477ba0
    t0 = 0x00477ba0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477202u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477202:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00477204:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00477206:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0047720a:  // call dword ptr [edx + 0x34]
    t0 = M32((uint32_t)(edx + 0x34u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047720du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047720d:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00477211:  // fadd dword ptr [0x5d8580]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8580u)));
L_00477217:  // test bl, bl
    t0 = llog<8>((ebx & 0xffu) & (ebx & 0xffu), f);
L_00477219:  // fdivp st(1)
    ST(1) = (ST(1)) / (ST(0));
    lpop(x);
L_0047721b:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0047721f:  // je 0x477255
    if (f.zf) goto L_00477255;
L_00477221:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_00477224:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_00477226:  // jne 0x47722d
    if (!f.zf) goto L_0047722d;
L_00477228:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047722b:  // je 0x477255
    if (f.zf) goto L_00477255;
L_0047722d:  // test al, 8
    t0 = llog<8>((eax & 0xffu) & 0x8u, f);
L_0047722f:  // jne 0x477255
    if (!f.zf) goto L_00477255;
L_00477231:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00477233:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00477235:  // call dword ptr [eax + 0x28]
    t0 = M32((uint32_t)(eax + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477238u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477238:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047723a:  // jne 0x477255
    if (!f.zf) goto L_00477255;
L_0047723c:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00477242:  // fdiv dword ptr [esp + 0x20]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x20u)));
L_00477246:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00477247:  // mov ecx, 0x9c7550
    ecx = (uint32_t)(0x9c7550u);
L_0047724c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047724f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00477250:  // call 0x477b70
    t0 = 0x00477b70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477255u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477255:  // lea ecx, [esp + 0x140]
    ecx = (uint32_t)((uint32_t)(esp + 0x140u));
L_0047725c:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_00477260:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00477261:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_00477265:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00477266:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00477267:  // call 0x57600b
    t0 = 0x0057600bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047726cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047726c:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0047726e:  // lea ecx, [esp + 0x140]
    ecx = (uint32_t)((uint32_t)(esp + 0x140u));
L_00477275:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00477276:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00477278:  // call dword ptr [edx + 0x20]
    t0 = M32((uint32_t)(edx + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047727bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047727b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047727c:  // lea eax, [esp + 0x138]
    eax = (uint32_t)((uint32_t)(esp + 0x138u));
L_00477283:  // lea ecx, [esp + 0xd8]
    ecx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_0047728a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047728d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047728e:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477293u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477293:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_0047729a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047729b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047729c:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004772a0:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004772a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004772a5:  // lea edx, [esp + 0x74]
    edx = (uint32_t)((uint32_t)(esp + 0x74u));
L_004772a9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004772aa:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004772ab:  // call 0x57600b
    t0 = 0x0057600bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004772b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004772b0:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004772b4:  // fdiv dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004772b8:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004772ba:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004772bc:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004772c2:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004772c6:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004772ca:  // fdiv dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004772ce:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004772d4:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004772d8:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004772dc:  // fdiv dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x7cu)));
L_004772e0:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004772e6:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_004772ea:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004772ee:  // fdiv dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x7cu)));
L_004772f2:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004772f8:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_004772fc:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00477300:  // fsub dword ptr [esp + 0x40]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x40u)));
L_00477304:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00477308:  // call dword ptr [eax + 0x20]
    t0 = M32((uint32_t)(eax + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047730bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047730b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047730d:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0047730f:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00477313:  // fchs 
    ST(0) = -ST(0);
L_00477315:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00477319:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0047731d:  // fcomp dword ptr [esp + 0x28]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x28u)));
    lpop(x);
L_00477321:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00477323:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00477326:  // jne 0x477363
    if (!f.zf) goto L_00477363;
L_00477328:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0047732c:  // fadd dword ptr [esp + 0x94]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x94u)));
L_00477333:  // fcomp dword ptr [esp + 0x40]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x40u)));
    lpop(x);
L_00477337:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00477339:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047733c:  // jne 0x477363
    if (!f.zf) goto L_00477363;
L_0047733e:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00477342:  // fcomp dword ptr [esp + 0x28]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x28u)));
    lpop(x);
L_00477346:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00477348:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047734b:  // jne 0x477363
    if (!f.zf) goto L_00477363;
L_0047734d:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00477351:  // fadd dword ptr [esp + 0x98]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x98u)));
L_00477358:  // fcomp dword ptr [esp + 0x44]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x44u)));
    lpop(x);
L_0047735c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047735e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00477361:  // je 0x47737d
    if (f.zf) goto L_0047737d;
L_00477363:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00477367:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00477369:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047736b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047736e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00477370:  // jne 0x47737f
    if (!f.zf) goto L_0047737f;
L_00477372:  // test dword ptr [esi + 0x34], 0x10000
    t0 = llog<32>(M32((uint32_t)(esi + 0x34u)) & 0x10000u, f);
L_00477379:  // je 0x4773d0
    if (f.zf) goto L_004773d0;
L_0047737b:  // jmp 0x47737f
    goto L_0047737f;
L_0047737d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047737f:  // mov al, byte ptr [esp + 0x28c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x28cu))) & 0xffu);
L_00477386:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00477388:  // je 0x4773b0
    if (f.zf) goto L_004773b0;
L_0047738a:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0047738d:  // test al, 0x30
    t0 = llog<8>((eax & 0xffu) & 0x30u, f);
L_0047738f:  // jne 0x477396
    if (!f.zf) goto L_00477396;
L_00477391:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00477394:  // je 0x4773b0
    if (f.zf) goto L_004773b0;
L_00477396:  // test al, 8
    t0 = llog<8>((eax & 0xffu) & 0x8u, f);
L_00477398:  // jne 0x4773b0
    if (!f.zf) goto L_004773b0;
L_0047739a:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0047739c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047739e:  // call dword ptr [edx + 0x28]
    t0 = M32((uint32_t)(edx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004773a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004773a1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004773a3:  // jne 0x4773b0
    if (!f.zf) goto L_004773b0;
L_004773a5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004773a6:  // mov ecx, 0x9c7550
    ecx = (uint32_t)(0x9c7550u);
L_004773ab:  // call 0x5545d0
    t0 = 0x005545d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004773b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004773b0:  // mov al, byte ptr [esp + 0x284]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x284u))) & 0xffu);
L_004773b7:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004773b9:  // je 0x4773c5
    if (f.zf) goto L_004773c5;
L_004773bb:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004773bd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004773bf:  // call dword ptr [eax + 0x94]
    t0 = M32((uint32_t)(eax + 0x94u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004773c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004773c5:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004773c7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004773c8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004773ca:  // call dword ptr [edx + 0x90]
    t0 = M32((uint32_t)(edx + 0x90u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004773d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004773d0:  // mov eax, dword ptr [0x855178]
    eax = (uint32_t)(M32((uint32_t)(0x855178u)));
L_004773d5:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004773d8:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004773da:  // mov dword ptr [0x855178], eax
    M32((uint32_t)(0x855178u)) = (uint32_t)(eax);
L_004773df:  // je 0x4773e5
    if (f.zf) goto L_004773e5;
L_004773e1:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004773e3:  // jmp 0x4773e7
    goto L_004773e7;
L_004773e5:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004773e7:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_004773e9:  // jne 0x477164
    if (!f.zf) goto L_00477164;
L_004773ef:  // mov dword ptr [esp + 0x28], 0x10
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x10u);
L_004773f7:  // mov dword ptr [esp + 0x18], ebp
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebp);
L_004773fb:  // mov esi, dword ptr [esp + 0x54]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004773ff:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00477403:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_00477408:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047740b:  // shl ebx, cl
    t0 = lshl<32>(ebx, (ecx & 0xffu), f);
    ebx = (uint32_t)(t0);
L_0047740d:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0047740e:  // idiv ebx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ebx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00477410:  // mov dword ptr [esp + 0xb0], ebx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(ebx);
L_00477417:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00477419:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0047741c:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0047741d:  // idiv ebx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ebx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0047741f:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00477421:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_00477424:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00477425:  // idiv ebx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ebx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00477427:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00477428:  // mov dword ptr [esp + 0x8c], edi
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(edi);
L_0047742f:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00477431:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_00477434:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00477435:  // idiv ebx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ebx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00477437:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0047743b:  // add ebp, 2
    t0 = ladd<32>(ebp, 0x2u, f);
    ebp = (uint32_t)(t0);
L_0047743e:  // mov dword ptr [esp + 0x20], ebp
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebp);
L_00477442:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00477444:  // mov eax, dword ptr [edx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x24u)));
L_00477447:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00477448:  // idiv ebx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ebx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0047744a:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0047744b:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0047744e:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00477450:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_00477454:  // jge 0x47745f
    if ((f.sf == f.of)) goto L_0047745f;
L_00477456:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00477458:  // mov dword ptr [esp + 0x8c], edi
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(edi);
L_0047745f:  // cmp ebp, ecx
    t0 = lsub<32>(ebp, ecx, f);
L_00477461:  // jle 0x477469
    if ((f.zf || f.sf != f.of)) goto L_00477469;
L_00477463:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00477465:  // mov dword ptr [esp + 0x20], ebp
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebp);
L_00477469:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0047746b:  // jge 0x47746f
    if ((f.sf == f.of)) goto L_0047746f;
L_0047746d:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0047746f:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00477473:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00477475:  // jle 0x47747d
    if ((f.zf || f.sf != f.of)) goto L_0047747d;
L_00477477:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00477479:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0047747d:  // lea edx, [ebx*8]
    edx = (uint32_t)((uint32_t)(ebx * 8u));
L_00477484:  // mov dword ptr [esp + 0x6c], esi
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(esi);
L_00477488:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0047748a:  // mov dword ptr [esp + 0x64], edx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edx);
L_0047748e:  // imul ecx, edx
    t0 = limul32(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00477491:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_00477493:  // mov dword ptr [esp + 0x50], ecx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ecx);
L_00477497:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_00477499:  // fild dword ptr [esp + 0x50]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x50u)));
L_0047749d:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004774a3:  // fstp dword ptr [esp + 0xb8]
    F32((uint32_t)(esp + 0xb8u)) = lf32(ST(0));
    lpop(x);
L_004774aa:  // jge 0x477b3e
    if ((f.sf == f.of)) goto L_00477b3e;
L_004774b0:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004774b4:  // mov eax, 0x40
    eax = (uint32_t)(0x40u);
L_004774b9:  // sar eax, cl
    t0 = lsar<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_004774bb:  // mov dword ptr [esp + 0xbc], eax
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(eax);
L_004774c2:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004774c4:  // imul eax, esi
    t0 = limul32(eax, esi, f);
    eax = (uint32_t)(t0);
L_004774c7:  // mov dword ptr [esp + 0x80], eax
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(eax);
L_004774ce:  // lea eax, [esi + 2]
    eax = (uint32_t)((uint32_t)(esi + 0x2u));
L_004774d1:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_004774d4:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004774d5:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_004774d9:  // imul esi, ebx
    t0 = limul32(esi, ebx, f);
    esi = (uint32_t)(t0);
L_004774dc:  // mov dword ptr [esp + 0x88], esi
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(esi);
L_004774e3:  // movsx ecx, word ptr [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(esp + 0x6cu))));
L_004774e8:  // imul ecx, dword ptr [esp + 0xbc]
    t0 = limul32(ecx, M32((uint32_t)(esp + 0xbcu)), f);
    ecx = (uint32_t)(t0);
L_004774f0:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004774f4:  // movsx eax, di
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)((edi & 0xffffu)));
L_004774f7:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_004774f9:  // mov eax, dword ptr [0x704290]
    eax = (uint32_t)(M32((uint32_t)(0x704290u)));
L_004774fe:  // cmp edi, ebp
    t0 = lsub<32>(edi, ebp, f);
L_00477500:  // mov eax, dword ptr [esi + eax]
    eax = (uint32_t)(M32((uint32_t)(esi + eax)));
L_00477503:  // lea ecx, [eax + ecx*8]
    ecx = (uint32_t)((uint32_t)(eax + ecx * 8u));
L_00477506:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_0047750a:  // jge 0x477aff
    if ((f.sf == f.of)) goto L_00477aff;
L_00477510:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00477512:  // imul eax, edi
    t0 = limul32(eax, edi, f);
    eax = (uint32_t)(t0);
L_00477515:  // fild dword ptr [esp + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x64u)));
L_00477519:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0047751f:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_00477526:  // fild dword ptr [esp + 0x80]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x80u)));
L_0047752d:  // mov dword ptr [esp + 0x60], eax
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(eax);
L_00477531:  // lea eax, [edi + 2]
    eax = (uint32_t)((uint32_t)(edi + 0x2u));
L_00477534:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_00477537:  // fadd dword ptr [esp + 0x90]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x90u)));
L_0047753e:  // fstp dword ptr [esp + 0x134]
    F32((uint32_t)(esp + 0x134u)) = lf32(ST(0));
    lpop(x);
L_00477545:  // mov dword ptr [esp + 0x84], eax
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(eax);
L_0047754c:  // lea eax, [edi - 1]
    eax = (uint32_t)((uint32_t)(edi + 0xffffffffu));
L_0047754f:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_00477552:  // sub ebp, edi
    t0 = lsub<32>(ebp, edi, f);
    ebp = (uint32_t)(t0);
L_00477554:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_00477558:  // mov dword ptr [esp + 0x50], ebp
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ebp);
L_0047755c:  // fild dword ptr [esp + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x60u)));
L_00477560:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00477564:  // mov byte ptr [esp + 0x13], 0
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x0u);
L_00477569:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_00477571:  // fadd dword ptr [esp + 0x90]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x90u)));
L_00477578:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0047757b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047757d:  // fsubr dword ptr [esp + 0x9c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x9cu))) - (ST(0));
L_00477584:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_0047758b:  // fsub dword ptr [esp + 0x134]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x134u)));
L_00477592:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00477594:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00477596:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00477598:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0047759a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047759c:  // fsub dword ptr [esp + 0xb8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb8u)));
L_004775a3:  // fstp dword ptr [esp + 0xac]
    F32((uint32_t)(esp + 0xacu)) = lf32(ST(0));
    lpop(x);
L_004775aa:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004775ac:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004775ae:  // je 0x477aae
    if (f.zf) goto L_00477aae;
L_004775b4:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004775b8:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004775bc:  // mov ecx, dword ptr [esp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004775c0:  // mov esi, dword ptr [esp + 0x88]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004775c7:  // mov edi, dword ptr [esp + 0x84]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004775ce:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004775d2:  // mov eax, dword ptr [edx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x18u)));
L_004775d5:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004775d9:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004775db:  // jge 0x4775e3
    if ((f.sf == f.of)) goto L_004775e3;
L_004775dd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004775df:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004775e3:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004775e5:  // jge 0x4775e9
    if ((f.sf == f.of)) goto L_004775e9;
L_004775e7:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004775e9:  // mov eax, dword ptr [edx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x20u)));
L_004775ec:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004775ee:  // jle 0x4775f6
    if ((f.zf || f.sf != f.of)) goto L_004775f6;
L_004775f0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004775f2:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004775f6:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004775f8:  // jle 0x4775fc
    if ((f.zf || f.sf != f.of)) goto L_004775fc;
L_004775fa:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004775fc:  // mov eax, dword ptr [edx + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x1cu)));
L_004775ff:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_00477601:  // jge 0x477605
    if ((f.sf == f.of)) goto L_00477605;
L_00477603:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00477605:  // cmp dword ptr [esp + 0x58], eax
    t0 = lsub<32>(M32((uint32_t)(esp + 0x58u)), eax, f);
L_00477609:  // jge 0x477613
    if ((f.sf == f.of)) goto L_00477613;
L_0047760b:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0047760d:  // mov dword ptr [esp + 0x1c], ebp
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebp);
L_00477611:  // jmp 0x477617
    goto L_00477617;
L_00477613:  // mov ebp, dword ptr [esp + 0x1c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00477617:  // mov eax, dword ptr [edx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x24u)));
L_0047761a:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_0047761c:  // jle 0x477620
    if ((f.zf || f.sf != f.of)) goto L_00477620;
L_0047761e:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00477620:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_00477622:  // jle 0x47762a
    if ((f.zf || f.sf != f.of)) goto L_0047762a;
L_00477624:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00477626:  // mov dword ptr [esp + 0x1c], ebp
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebp);
L_0047762a:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_0047762c:  // jge 0x477aae
    if ((f.sf == f.of)) goto L_00477aae;
L_00477632:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00477634:  // jge 0x47767f
    if ((f.sf == f.of)) goto L_0047767f;
L_00477636:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0047763a:  // mov ebp, dword ptr [eax + 8]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0047763d:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00477640:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_00477642:  // imul eax, esi
    t0 = limul32(eax, esi, f);
    eax = (uint32_t)(t0);
L_00477645:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00477647:  // mov bl, byte ptr [edx + eax*2]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + eax * 2u))) & 0xffu);
L_0047764a:  // lea eax, [edx + eax*2]
    eax = (uint32_t)((uint32_t)(edx + eax * 2u));
L_0047764d:  // cmp bl, byte ptr [eax + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(eax + 0x1u)), f);
L_00477650:  // jl 0x477667
    if ((f.sf != f.of)) goto L_00477667;
L_00477652:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00477656:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_0047765b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047765d:  // je 0x47766f
    if (f.zf) goto L_0047766f;
L_0047765f:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00477663:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00477665:  // jmp 0x47766f
    goto L_0047766f;
L_00477667:  // mov dword ptr [esp + 0x14], 1
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x1u);
L_0047766f:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00477670:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00477672:  // jl 0x477640
    if ((f.sf != f.of)) goto L_00477640;
L_00477674:  // mov ebx, dword ptr [esp + 0xb0]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_0047767b:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0047767f:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00477683:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00477684:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_00477686:  // jl 0x477632
    if ((f.sf != f.of)) goto L_00477632;
L_00477688:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_0047768c:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0047768e:  // je 0x477aae
    if (f.zf) goto L_00477aae;
L_00477694:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00477698:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00477699:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_0047769e:  // call 0x491d80
    t0 = 0x00491d80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004776a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004776a3:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004776a5:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004776a7:  // je 0x477aae
    if (f.zf) goto L_00477aae;
L_004776ad:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004776b1:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004776b3:  // call 0x492c90
    t0 = 0x00492c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004776b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004776b8:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004776ba:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_004776bd:  // test eax, 0x800000
    t0 = llog<32>(eax & 0x800000u, f);
L_004776c2:  // je 0x477a47
    if (f.zf) goto L_00477a47;
L_004776c8:  // test eax, 0x2000000
    t0 = llog<32>(eax & 0x2000000u, f);
L_004776cd:  // jne 0x477a5c
    if (!f.zf) goto L_00477a5c;
L_004776d3:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004776d6:  // lea edi, [esi + 8]
    edi = (uint32_t)((uint32_t)(esi + 0x8u));
L_004776d9:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_004776dd:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004776df:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004776e0:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004776e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004776e2:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004776e4:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004776e6:  // call dword ptr [edx + 0x54]
    t0 = M32((uint32_t)(edx + 0x54u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004776e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004776e9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004776eb:  // je 0x477785
    if (f.zf) goto L_00477785;
L_004776f1:  // test dword ptr [esi + 0x34], 0x80000000
    t0 = llog<32>(M32((uint32_t)(esi + 0x34u)) & 0x80000000u, f);
L_004776f8:  // lea ecx, [esi + 0x3c]
    ecx = (uint32_t)((uint32_t)(esi + 0x3cu));
L_004776fb:  // jne 0x477702
    if (!f.zf) goto L_00477702;
L_004776fd:  // mov ecx, 0x83d9c0
    ecx = (uint32_t)(0x83d9c0u);
L_00477702:  // fld dword ptr [ecx + 0x28]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x28u)));
L_00477705:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00477708:  // fld dword ptr [ecx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x24u)));
L_0047770b:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0047770e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047770f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00477711:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_00477714:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00477716:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00477718:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047771b:  // fld dword ptr [ecx + 0x18]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x18u)));
L_0047771e:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00477721:  // fld dword ptr [ecx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x14u)));
L_00477724:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00477727:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00477728:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047772a:  // fld dword ptr [ecx + 0x10]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x10u)));
L_0047772d:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_0047772f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00477731:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00477734:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_00477737:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_0047773a:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_0047773d:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00477740:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00477741:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00477743:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_00477745:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00477747:  // lea ecx, [esp + 0xfc]
    ecx = (uint32_t)((uint32_t)(esp + 0xfcu));
L_0047774e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00477750:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00477753:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477758u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477758:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_0047775f:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_00477763:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00477767:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0047776b:  // fadd dword ptr [esp + 0xf4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xf4u)));
L_00477772:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00477776:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0047777a:  // fadd dword ptr [esp + 0xf8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xf8u)));
L_00477781:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00477785:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00477789:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_00477790:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00477791:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00477794:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00477798:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_0047779f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004777a0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004777a3:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004777a7:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_004777ae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004777af:  // lea ecx, [esp + 0xcc]
    ecx = (uint32_t)((uint32_t)(esp + 0xccu));
L_004777b6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004777b9:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004777beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004777be:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_004777c5:  // fmul dword ptr [esp + 0xc8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc8u)));
L_004777cc:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_004777d3:  // fmul dword ptr [esp + 0xc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc4u)));
L_004777da:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004777dc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004777de:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004777e0:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_004777e7:  // fmul dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc0u)));
L_004777ee:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004777f0:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004777f4:  // call dword ptr [eax + 0x34]
    t0 = M32((uint32_t)(eax + 0x34u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004777f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004777f7:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004777fb:  // fadd dword ptr [0x5d8580]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8580u)));
L_00477801:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00477803:  // fdivp st(1)
    ST(1) = (ST(1)) / (ST(0));
    lpop(x);
L_00477805:  // fstp dword ptr [esp + 0xb4]
    F32((uint32_t)(esp + 0xb4u)) = lf32(ST(0));
    lpop(x);
L_0047780c:  // je 0x477987
    if (f.zf) goto L_00477987;
L_00477812:  // lea ecx, [esp + 0x140]
    ecx = (uint32_t)((uint32_t)(esp + 0x140u));
L_00477819:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0047781d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047781e:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_00477822:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00477823:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00477824:  // call 0x57600b
    t0 = 0x0057600bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477829u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477829:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0047782b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0047782d:  // call dword ptr [edx + 0x20]
    t0 = M32((uint32_t)(edx + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477830u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477830:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00477832:  // fmul dword ptr [esp + 0xd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd8u)));
L_00477839:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047783a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047783d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047783e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00477840:  // fmul dword ptr [esp + 0xdc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xdcu)));
L_00477847:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047784a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047784b:  // lea ecx, [esp + 0xec]
    ecx = (uint32_t)((uint32_t)(esp + 0xecu));
L_00477852:  // fmul dword ptr [esp + 0xdc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xdcu)));
L_00477859:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047785c:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477861u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477861:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00477865:  // fadd dword ptr [esp + 0xe8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xe8u)));
L_0047786c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047786d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00477870:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00477874:  // fadd dword ptr [esp + 0xe8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xe8u)));
L_0047787b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047787c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047787f:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_00477886:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_0047788a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047788b:  // lea ecx, [esp + 0x10c]
    ecx = (uint32_t)((uint32_t)(esp + 0x10cu));
L_00477892:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00477895:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047789au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047789a:  // lea eax, [esp + 0x140]
    eax = (uint32_t)((uint32_t)(esp + 0x140u));
L_004778a1:  // lea ecx, [esp + 0x100]
    ecx = (uint32_t)((uint32_t)(esp + 0x100u));
L_004778a8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004778a9:  // lea edx, [esp + 0x74]
    edx = (uint32_t)((uint32_t)(esp + 0x74u));
L_004778ad:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004778ae:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004778af:  // call 0x57600b
    t0 = 0x0057600bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004778b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004778b4:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004778b8:  // fdiv dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004778bc:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004778be:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004778c0:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004778c6:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004778ca:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004778ce:  // fdiv dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004778d2:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004778d8:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004778dc:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004778e0:  // fdiv dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x7cu)));
L_004778e4:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004778ea:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_004778ee:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004778f2:  // fdiv dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x7cu)));
L_004778f6:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004778fc:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_00477900:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00477904:  // fsub dword ptr [esp + 0x40]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x40u)));
L_00477908:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0047790c:  // call dword ptr [eax + 0x20]
    t0 = M32((uint32_t)(eax + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047790fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047790f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00477911:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00477913:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00477917:  // fchs 
    ST(0) = -ST(0);
L_00477919:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0047791d:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00477921:  // fcomp dword ptr [esp + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x24u)));
    lpop(x);
L_00477925:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00477927:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047792a:  // jne 0x477967
    if (!f.zf) goto L_00477967;
L_0047792c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00477930:  // fadd dword ptr [esp + 0x94]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x94u)));
L_00477937:  // fcomp dword ptr [esp + 0x40]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x40u)));
    lpop(x);
L_0047793b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047793d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00477940:  // jne 0x477967
    if (!f.zf) goto L_00477967;
L_00477942:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00477946:  // fcomp dword ptr [esp + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x24u)));
    lpop(x);
L_0047794a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047794c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047794f:  // jne 0x477967
    if (!f.zf) goto L_00477967;
L_00477951:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00477955:  // fadd dword ptr [esp + 0x98]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x98u)));
L_0047795c:  // fcomp dword ptr [esp + 0x44]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x44u)));
    lpop(x);
L_00477960:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00477962:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00477965:  // je 0x477985
    if (f.zf) goto L_00477985;
L_00477967:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0047796b:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0047796d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047796f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00477972:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00477974:  // jne 0x477987
    if (!f.zf) goto L_00477987;
L_00477976:  // test dword ptr [esi + 0x34], 0x10000
    t0 = llog<32>(M32((uint32_t)(esi + 0x34u)) & 0x10000u, f);
L_0047797d:  // je 0x477a47
    if (f.zf) goto L_00477a47;
L_00477983:  // jmp 0x477987
    goto L_00477987;
L_00477985:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00477987:  // mov al, byte ptr [esp + 0x28c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x28cu))) & 0xffu);
L_0047798e:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00477990:  // je 0x4779b8
    if (f.zf) goto L_004779b8;
L_00477992:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_00477995:  // test al, 0x30
    t0 = llog<8>((eax & 0xffu) & 0x30u, f);
L_00477997:  // jne 0x47799e
    if (!f.zf) goto L_0047799e;
L_00477999:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047799c:  // je 0x4779b8
    if (f.zf) goto L_004779b8;
L_0047799e:  // test al, 8
    t0 = llog<8>((eax & 0xffu) & 0x8u, f);
L_004779a0:  // jne 0x4779b8
    if (!f.zf) goto L_004779b8;
L_004779a2:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004779a4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004779a6:  // call dword ptr [edx + 0x28]
    t0 = M32((uint32_t)(edx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004779a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004779a9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004779ab:  // jne 0x4779b8
    if (!f.zf) goto L_004779b8;
L_004779ad:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004779ae:  // mov ecx, 0x9c7550
    ecx = (uint32_t)(0x9c7550u);
L_004779b3:  // call 0x5545d0
    t0 = 0x005545d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004779b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004779b8:  // mov al, byte ptr [esp + 0x284]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x284u))) & 0xffu);
L_004779bf:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004779c1:  // je 0x4779cd
    if (f.zf) goto L_004779cd;
L_004779c3:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004779c5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004779c7:  // call dword ptr [eax + 0x94]
    t0 = M32((uint32_t)(eax + 0x94u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004779cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004779cd:  // mov al, byte ptr [esp + 0x288]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x288u))) & 0xffu);
L_004779d4:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004779d6:  // je 0x477a3b
    if (f.zf) goto L_00477a3b;
L_004779d8:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_004779db:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_004779dd:  // jne 0x4779e4
    if (!f.zf) goto L_004779e4;
L_004779df:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004779e2:  // je 0x477a3b
    if (f.zf) goto L_00477a3b;
L_004779e4:  // test eax, 0x80000
    t0 = llog<32>(eax & 0x80000u, f);
L_004779e9:  // jne 0x477a3b
    if (!f.zf) goto L_00477a3b;
L_004779eb:  // test al, 8
    t0 = llog<8>((eax & 0xffu) & 0x8u, f);
L_004779ed:  // jne 0x477a3b
    if (!f.zf) goto L_00477a3b;
L_004779ef:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004779f1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004779f3:  // call dword ptr [edx + 0x28]
    t0 = M32((uint32_t)(edx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004779f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004779f6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004779f8:  // jne 0x477a3b
    if (!f.zf) goto L_00477a3b;
L_004779fa:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00477a00:  // fdiv dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0xb4u)));
L_00477a07:  // mov al, byte ptr [0x89d680]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x89d680u))) & 0xffu);
L_00477a0c:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00477a0e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00477a12:  // jne 0x477a3b
    if (!f.zf) goto L_00477a3b;
L_00477a14:  // mov eax, dword ptr [0x9c7b0c]
    eax = (uint32_t)(M32((uint32_t)(0x9c7b0cu)));
L_00477a19:  // fld dword ptr [eax*8 + 0x9c7558]
    lpush(x, (long double)F32((uint32_t)(eax * 8u + 0x9c7558u)));
L_00477a20:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_00477a24:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00477a26:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00477a29:  // jne 0x477a3b
    if (!f.zf) goto L_00477a3b;
L_00477a2b:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00477a2f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00477a30:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00477a31:  // mov ecx, 0x9c7550
    ecx = (uint32_t)(0x9c7550u);
L_00477a36:  // call 0x5526c0
    t0 = 0x005526c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477a3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477a3b:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00477a3d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00477a3f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00477a41:  // call dword ptr [edx + 0x90]
    t0 = M32((uint32_t)(edx + 0x90u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477a47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477a47:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_00477a4c:  // call 0x491d90
    t0 = 0x00491d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477a51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477a51:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00477a53:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00477a55:  // je 0x477aae
    if (f.zf) goto L_00477aae;
L_00477a57:  // jmp 0x4776b1
    goto L_004776b1;
L_00477a5c:  // fld dword ptr [0x6321a0]
    lpush(x, (long double)F32((uint32_t)(0x6321a0u)));
L_00477a62:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_00477a68:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00477a6a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00477a6c:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_00477a73:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_00477a75:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00477a77:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00477a7a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00477a7c:  // je 0x477aae
    if (f.zf) goto L_00477aae;
L_00477a7e:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00477a80:  // je 0x477aae
    if (f.zf) goto L_00477aae;
L_00477a82:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_00477a87:  // mov ebp, esi
    ebp = (uint32_t)(esi);
L_00477a89:  // call 0x491d90
    t0 = 0x00491d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477a8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477a8e:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00477a90:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00477a92:  // je 0x477a9d
    if (f.zf) goto L_00477a9d;
L_00477a94:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00477a96:  // call 0x492c90
    t0 = 0x00492c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477a9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477a9b:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00477a9d:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_00477aa0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00477aa2:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00477aa4:  // call dword ptr [eax + 0x90]
    t0 = M32((uint32_t)(eax + 0x90u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00477aaau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00477aaa:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00477aac:  // jne 0x477a82
    if (!f.zf) goto L_00477a82;
L_00477aae:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00477ab2:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_00477ab6:  // mov edi, dword ptr [esp + 0x68]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_00477aba:  // mov esi, dword ptr [esp + 0x84]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_00477ac1:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00477ac5:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_00477ac7:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00477acb:  // add edi, ebx
    t0 = ladd<32>(edi, ebx, f);
    edi = (uint32_t)(t0);
L_00477acd:  // add esi, ebx
    t0 = ladd<32>(esi, ebx, f);
    esi = (uint32_t)(t0);
L_00477acf:  // add ecx, 8
    t0 = ladd<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00477ad2:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00477ad3:  // mov dword ptr [esp + 0x68], edi
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(edi);
L_00477ad7:  // mov dword ptr [esp + 0x84], esi
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(esi);
L_00477ade:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_00477ae2:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_00477ae6:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_00477aea:  // jne 0x47755c
    if (!f.zf) goto L_0047755c;
L_00477af0:  // mov edi, dword ptr [esp + 0x8c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_00477af7:  // mov edx, dword ptr [esp + 0x64]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00477afb:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00477aff:  // mov esi, dword ptr [esp + 0x80]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_00477b06:  // mov ecx, dword ptr [esp + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_00477b0d:  // mov eax, dword ptr [esp + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_00477b11:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_00477b13:  // add ecx, ebx
    t0 = ladd<32>(ecx, ebx, f);
    ecx = (uint32_t)(t0);
L_00477b15:  // mov dword ptr [esp + 0x80], esi
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(esi);
L_00477b1c:  // mov esi, dword ptr [esp + 0x58]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00477b20:  // mov dword ptr [esp + 0x88], ecx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(ecx);
L_00477b27:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00477b2b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00477b2c:  // add esi, ebx
    t0 = ladd<32>(esi, ebx, f);
    esi = (uint32_t)(t0);
L_00477b2e:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00477b30:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_00477b34:  // mov dword ptr [esp + 0x58], esi
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(esi);
L_00477b38:  // jl 0x4774e3
    if ((f.sf != f.of)) goto L_004774e3;
L_00477b3e:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00477b42:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00477b46:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00477b47:  // sub edx, 4
    t0 = lsub<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_00477b4a:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00477b4d:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00477b51:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_00477b55:  // jle 0x4773fb
    if ((f.zf || f.sf != f.of)) goto L_004773fb;
L_00477b5b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00477b5c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00477b5d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00477b5e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00477b5f:  // add esp, 0x270
    t0 = ladd<32>(esp, 0x270u, f);
    esp = (uint32_t)(t0);
L_00477b65:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00476fe0, 00476fe0)
