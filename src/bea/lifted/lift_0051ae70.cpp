// lifted from 0051ae70 (FUN_0051ae70, 1512 bytes, 410 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0051ae70(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0051ae70;
L_0051ae70:  // sub esp, 0x54
    t0 = lsub<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_0051ae73:  // fld dword ptr [0x5e499c]
    lpush(x, (long double)F32((uint32_t)(0x5e499cu)));
L_0051ae79:  // fmul dword ptr [0x5e49ac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e49acu)));
L_0051ae7f:  // mov eax, dword ptr [0x5e4994]
    eax = (uint32_t)(M32((uint32_t)(0x5e4994u)));
L_0051ae84:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051ae85:  // mov dword ptr [esp + 4], eax
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(eax);
L_0051ae89:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051ae8a:  // fadd dword ptr [0x5e4994]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e4994u)));
L_0051ae90:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051ae91:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0051ae93:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051ae94:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0051ae96:  // fadd dword ptr [0x5d8c48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c48u)));
L_0051ae9c:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_0051aea0:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0051aea4:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0051aea8:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051aeae:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_0051aeb0:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0051aeb6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051aeb8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051aebb:  // je 0x51aec7
    if (f.zf) goto L_0051aec7;
L_0051aebd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051aebf:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0051aec5:  // jmp 0x51aedc
    goto L_0051aedc;
L_0051aec7:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0051aecd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051aecf:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051aed2:  // jne 0x51aedc
    if (!f.zf) goto L_0051aedc;
L_0051aed4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051aed6:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051aedc:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0051aee2:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0051aee6:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0051aeea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051aeeb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051aeec:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051aef0:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0051aef4:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051aef9:  // call 0x467200
    t0 = 0x00467200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051aefeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051aefe:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0051af02:  // fcomp dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
    lpop(x);
L_0051af08:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051af0a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051af0d:  // jne 0x51af3a
    if (!f.zf) goto L_0051af3a;
L_0051af0f:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0051af13:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051af19:  // fmul dword ptr [0x5e49a8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e49a8u)));
L_0051af1f:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051af23:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0051af27:  // shl eax, 0x17
    t0 = lshl<32>(eax, 0x17u, f);
    eax = (uint32_t)(t0);
L_0051af2a:  // and eax, 0xff000000
    t0 = llog<32>(eax & 0xff000000u, f);
    eax = (uint32_t)(t0);
L_0051af2f:  // xor eax, 0xffffff
    t0 = llog<32>(eax ^ 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0051af34:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0051af38:  // jmp 0x51af3e
    goto L_0051af3e;
L_0051af3a:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_0051af3e:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051af42:  // lea eax, [ebx + ebx*4]
    eax = (uint32_t)((uint32_t)(ebx + ebx * 4u));
L_0051af45:  // fld dword ptr [0x5e4998]
    lpush(x, (long double)F32((uint32_t)(0x5e4998u)));
L_0051af4b:  // mov ecx, dword ptr [0x5e4994]
    ecx = (uint32_t)(M32((uint32_t)(0x5e4994u)));
L_0051af51:  // fsub dword ptr [0x5d85bc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85bcu)));
L_0051af57:  // shl eax, 0x15
    t0 = lshl<32>(eax, 0x15u, f);
    eax = (uint32_t)(t0);
L_0051af5a:  // and eax, 0xff000000
    t0 = llog<32>(eax & 0xff000000u, f);
    eax = (uint32_t)(t0);
L_0051af5f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051af60:  // push 0x3f0ccccd
    t0 = 0x3f0ccccdu; esp -= 4; M32(esp) = t0;
L_0051af65:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051af66:  // push 0x44048000
    t0 = 0x44048000u; esp -= 4; M32(esp) = t0;
L_0051af6b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051af6c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051af6d:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051af72:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051af75:  // call 0x467010
    t0 = 0x00467010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051af7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051af7a:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0051af7e:  // mov eax, dword ptr [0x5e4994]
    eax = (uint32_t)(M32((uint32_t)(0x5e4994u)));
L_0051af83:  // fld dword ptr [0x5e4998]
    lpush(x, (long double)F32((uint32_t)(0x5e4998u)));
L_0051af89:  // fsub dword ptr [0x5d85bc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85bcu)));
L_0051af8f:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_0051af94:  // push 0x40000000
    t0 = 0x40000000u; esp -= 4; M32(esp) = t0;
L_0051af99:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051af9a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051af9b:  // push 0x44048000
    t0 = 0x44048000u; esp -= 4; M32(esp) = t0;
L_0051afa0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051afa1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051afa2:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051afa7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051afaa:  // call 0x466e70
    t0 = 0x00466e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051afafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051afaf:  // mov ecx, dword ptr [edi + 0x400c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x400cu)));
L_0051afb5:  // mov eax, dword ptr [edi + 0x4008]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4008u)));
L_0051afbb:  // add ecx, 0xb
    t0 = ladd<32>(ecx, 0xbu, f);
    ecx = (uint32_t)(t0);
L_0051afbe:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0051afc0:  // jg 0x51afde
    if ((!f.zf && f.sf == f.of)) goto L_0051afde;
L_0051afc2:  // mov edx, dword ptr [edi + 0x400c]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x400cu)));
L_0051afc8:  // mov ecx, dword ptr [edi + 0x4008]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x4008u)));
L_0051afce:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0051afcf:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0051afd1:  // mov dword ptr [edi + 0x400c], edx
    M32((uint32_t)(edi + 0x400cu)) = (uint32_t)(edx);
L_0051afd7:  // add eax, 0xb
    t0 = ladd<32>(eax, 0xbu, f);
    eax = (uint32_t)(t0);
L_0051afda:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0051afdc:  // jle 0x51afc2
    if ((f.zf || f.sf != f.of)) goto L_0051afc2;
L_0051afde:  // mov edx, dword ptr [edi + 0x400c]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x400cu)));
L_0051afe4:  // mov eax, dword ptr [edi + 0x4008]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4008u)));
L_0051afea:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0051afec:  // jle 0x51b007
    if ((f.zf || f.sf != f.of)) goto L_0051b007;
L_0051afee:  // mov edx, dword ptr [edi + 0x400c]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x400cu)));
L_0051aff4:  // mov ecx, dword ptr [edi + 0x4008]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x4008u)));
L_0051affa:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_0051affb:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0051affd:  // mov dword ptr [edi + 0x400c], edx
    M32((uint32_t)(edi + 0x400cu)) = (uint32_t)(edx);
L_0051b003:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0051b005:  // jg 0x51afee
    if ((!f.zf && f.sf == f.of)) goto L_0051afee;
L_0051b007:  // mov ebp, dword ptr [edi + 0x400c]
    ebp = (uint32_t)(M32((uint32_t)(edi + 0x400cu)));
L_0051b00d:  // cmp ebp, 0x1000
    t0 = lsub<32>(ebp, 0x1000u, f);
L_0051b013:  // jge 0x51b1c0
    if ((f.sf == f.of)) goto L_0051b1c0;
L_0051b019:  // lea eax, [edi + ebp*4 + 4]
    eax = (uint32_t)((uint32_t)(edi + ebp * 4u + 0x4u));
L_0051b01d:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_0051b021:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0051b025:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0051b027:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0051b029:  // je 0x51b1c0
    if (f.zf) goto L_0051b1c0;
L_0051b02f:  // mov esi, dword ptr [edi + 0x400c]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x400cu)));
L_0051b035:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0051b037:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_0051b039:  // cmp eax, 0xb
    t0 = lsub<32>(eax, 0xbu, f);
L_0051b03c:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0051b040:  // jge 0x51b1c0
    if ((f.sf == f.of)) goto L_0051b1c0;
L_0051b046:  // cmp ebp, dword ptr [edi + 0x4008]
    t0 = lsub<32>(ebp, M32((uint32_t)(edi + 0x4008u)), f);
L_0051b04c:  // jne 0x51b085
    if (!f.zf) goto L_0051b085;
L_0051b04e:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_0051b054:  // fmul dword ptr [0x5db4f4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4f4u)));
L_0051b05a:  // fmul dword ptr [0x5db4f0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4f0u)));
L_0051b060:  // fcos 
    ST(0) = lfcos(ST(0));
L_0051b062:  // fmul dword ptr [0x5e49a4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e49a4u)));
L_0051b068:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051b06c:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0051b070:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051b072:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0051b075:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0051b077:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0051b07a:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0051b07c:  // mov ecx, 0xff969696
    ecx = (uint32_t)(0xff969696u);
L_0051b081:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0051b083:  // jmp 0x51b08a
    goto L_0051b08a;
L_0051b085:  // mov ecx, 0xff404040
    ecx = (uint32_t)(0xff404040u);
L_0051b08a:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0051b08c:  // push 0x12
    t0 = 0x12u; esp -= 4; M32(esp) = t0;
L_0051b08e:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051b091:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_0051b095:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0051b097:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_0051b09c:  // and esi, 0xffff0000
    t0 = llog<32>(esi & 0xffff0000u, f);
    esi = (uint32_t)(t0);
L_0051b0a2:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0051b0a5:  // fmul dword ptr [0x5e499c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e499cu)));
L_0051b0ab:  // fadd dword ptr [0x5e4994]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e4994u)));
L_0051b0b1:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0051b0b5:  // imul esi, ebx
    t0 = limul32(esi, ebx, f);
    esi = (uint32_t)(t0);
L_0051b0b8:  // xor esi, ecx
    t0 = llog<32>(esi ^ ecx, f);
    esi = (uint32_t)(t0);
L_0051b0ba:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0051b0be:  // and esi, 0xffffff
    t0 = llog<32>(esi & 0xffffffu, f);
    esi = (uint32_t)(t0);
L_0051b0c4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051b0c5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b0c6:  // xor esi, eax
    t0 = llog<32>(esi ^ eax, f);
    esi = (uint32_t)(t0);
L_0051b0c8:  // call 0x55eb00
    t0 = 0x0055eb00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b0cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b0cd:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0051b0d0:  // cmp word ptr [esp + 0x5a], 0
    t0 = lsub<16>(M16((uint32_t)(esp + 0x5au)), 0x0u, f);
L_0051b0d6:  // je 0x51b0f0
    if (f.zf) goto L_0051b0f0;
L_0051b0d8:  // push 0x63fb70
    t0 = 0x63fb70u; esp -= 4; M32(esp) = t0;
L_0051b0dd:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b0e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b0e2:  // lea edx, [esp + 0x5e]
    edx = (uint32_t)((uint32_t)(esp + 0x5eu));
L_0051b0e6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b0e7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051b0e8:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b0edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b0ed:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0051b0f0:  // mov ecx, dword ptr [0x5e4998]
    ecx = (uint32_t)(M32((uint32_t)(0x5e4998u)));
L_0051b0f6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b0f8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b0fa:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_0051b0fe:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051b103:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b104:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b105:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0051b109:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051b10e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051b113:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051b118:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b119:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b11a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b11c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051b121:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b126u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b126:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051b128:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b12du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b12d:  // fld dword ptr [0x5e499c]
    lpush(x, (long double)F32((uint32_t)(0x5e499cu)));
L_0051b133:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_0051b137:  // mov edx, dword ptr [0x5e4998]
    edx = (uint32_t)(M32((uint32_t)(0x5e4998u)));
L_0051b13d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b13e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051b141:  // push 0x43ff0000
    t0 = 0x43ff0000u; esp -= 4; M32(esp) = t0;
L_0051b146:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b147:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051b148:  // call 0x469430
    t0 = 0x00469430u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b14du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b14d:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051b150:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051b152:  // je 0x51b166
    if (f.zf) goto L_0051b166;
L_0051b154:  // mov dword ptr [edi + 0x4008], ebp
    M32((uint32_t)(edi + 0x4008u)) = (uint32_t)(ebp);
L_0051b15a:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_0051b160:  // fstp dword ptr [edi + 0x4010]
    F32((uint32_t)(edi + 0x4010u)) = lf32(ST(0));
    lpop(x);
L_0051b166:  // fld dword ptr [0x5e499c]
    lpush(x, (long double)F32((uint32_t)(0x5e499cu)));
L_0051b16c:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_0051b170:  // mov eax, dword ptr [0x5e4998]
    eax = (uint32_t)(M32((uint32_t)(0x5e4998u)));
L_0051b175:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b176:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051b179:  // push 0x43ff0000
    t0 = 0x43ff0000u; esp -= 4; M32(esp) = t0;
L_0051b17e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b17f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b180:  // call 0x469400
    t0 = 0x00469400u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b185u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b185:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051b188:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051b18a:  // je 0x51b1a8
    if (f.zf) goto L_0051b1a8;
L_0051b18c:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0051b190:  // mov dword ptr [edi + 0x4008], ebp
    M32((uint32_t)(edi + 0x4008u)) = (uint32_t)(ebp);
L_0051b196:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_0051b19c:  // fstp dword ptr [edi + 0x4010]
    F32((uint32_t)(edi + 0x4010u)) = lf32(ST(0));
    lpop(x);
L_0051b1a2:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0051b1a4:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_0051b1a8:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0051b1ac:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0051b1ad:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0051b1b0:  // cmp ebp, 0x1000
    t0 = lsub<32>(ebp, 0x1000u, f);
L_0051b1b6:  // mov dword ptr [esp + 0x6c], ecx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ecx);
L_0051b1ba:  // jl 0x51b021
    if ((f.sf != f.of)) goto L_0051b021;
L_0051b1c0:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0051b1c2:  // jne 0x51b26b
    if (!f.zf) goto L_0051b26b;
L_0051b1c8:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0051b1cc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b1cd:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051b1ce:  // push 0x37
    t0 = 0x37u; esp -= 4; M32(esp) = t0;
L_0051b1d0:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b1d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b1d5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0051b1d8:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051b1dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b1de:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051b1df:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b1e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b1e4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051b1e6:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b1ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b1eb:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_0051b1ef:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051b1f0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051b1f1:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051b1f6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051b1f7:  // fsubr dword ptr [0x5db570]
    ST(0) = ((long double)F32((uint32_t)(0x5db570u))) - (ST(0));
L_0051b1fd:  // shl ebx, 0x17
    t0 = lshl<32>(ebx, 0x17u, f);
    ebx = (uint32_t)(t0);
L_0051b200:  // push 0x37
    t0 = 0x37u; esp -= 4; M32(esp) = t0;
L_0051b202:  // mov esi, ebx
    esi = (uint32_t)(ebx);
L_0051b204:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051b20a:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0051b211:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b216u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b216:  // fld dword ptr [0x5e499c]
    lpush(x, (long double)F32((uint32_t)(0x5e499cu)));
L_0051b21c:  // fmul dword ptr [0x5e49a0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e49a0u)));
L_0051b222:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0051b225:  // and esi, 0xff000000
    t0 = llog<32>(esi & 0xff000000u, f);
    esi = (uint32_t)(t0);
L_0051b22b:  // xor esi, 0xffffff
    t0 = llog<32>(esi ^ 0xffffffu, f);
    esi = (uint32_t)(t0);
L_0051b231:  // fadd dword ptr [0x5e4994]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e4994u)));
L_0051b237:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b238:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b239:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051b23e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051b243:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051b248:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b249:  // mov ecx, dword ptr [esp + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0051b250:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051b253:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b254:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051b255:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051b25a:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b25fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b25f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051b261:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b266u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b266:  // jmp 0x51b439
    goto L_0051b439;
L_0051b26b:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0051b26f:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051b273:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0051b277:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_0051b27c:  // push 0x40000000
    t0 = 0x40000000u; esp -= 4; M32(esp) = t0;
L_0051b281:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051b282:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b283:  // push 0x44048000
    t0 = 0x44048000u; esp -= 4; M32(esp) = t0;
L_0051b288:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b289:  // push 0x43ff0000
    t0 = 0x43ff0000u; esp -= 4; M32(esp) = t0;
L_0051b28e:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051b293:  // call 0x466e70
    t0 = 0x00466e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b298u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b298:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0051b29c:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_0051b2a0:  // mov eax, dword ptr [edi + 0x400c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x400cu)));
L_0051b2a6:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_0051b2aa:  // sub ebp, eax
    t0 = lsub<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_0051b2ac:  // mov dword ptr [esp + 0x24], ebp
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebp);
L_0051b2b0:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_0051b2b4:  // fsub dword ptr [0x5d85cc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ccu)));
L_0051b2ba:  // fild dword ptr [edi + 0x4004]
    lpush(x, (long double)(int32_t)M32((uint32_t)(edi + 0x4004u)));
L_0051b2c0:  // fdivp st(1)
    ST(1) = (ST(1)) / (ST(0));
    lpop(x);
L_0051b2c2:  // fild dword ptr [esp + 0x6c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x6cu)));
L_0051b2c6:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0051b2c8:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_0051b2cc:  // fadd dword ptr [0x5d85d8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d8u)));
L_0051b2d2:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_0051b2d6:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_0051b2da:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0051b2dc:  // fadd dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x6cu)));
L_0051b2e0:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0051b2e4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051b2e6:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0051b2ea:  // fsub dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x6cu)));
L_0051b2ee:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0051b2f2:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0051b2f6:  // fcomp dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
    lpop(x);
L_0051b2fc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051b2fe:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051b301:  // jne 0x51b332
    if (!f.zf) goto L_0051b332;
L_0051b303:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0051b307:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051b30d:  // fmul dword ptr [0x5e49a8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e49a8u)));
L_0051b313:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051b317:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051b31b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051b31d:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0051b320:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0051b322:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0051b325:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0051b327:  // not eax
    eax = (uint32_t)(~eax);
L_0051b329:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0051b32e:  // xor eax, ecx
    t0 = llog<32>(eax ^ ecx, f);
    eax = (uint32_t)(t0);
L_0051b330:  // jmp 0x51b334
    goto L_0051b334;
L_0051b332:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0051b334:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0051b338:  // mov edx, dword ptr [esp + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0051b33c:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_0051b341:  // push 0x40a00000
    t0 = 0x40a00000u; esp -= 4; M32(esp) = t0;
L_0051b346:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b347:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b348:  // push 0x44034000
    t0 = 0x44034000u; esp -= 4; M32(esp) = t0;
L_0051b34d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051b34e:  // push 0x4400c000
    t0 = 0x4400c000u; esp -= 4; M32(esp) = t0;
L_0051b353:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051b358:  // call 0x466e70
    t0 = 0x00466e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b35du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b35d:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051b361:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b362:  // push 0x44048000
    t0 = 0x44048000u; esp -= 4; M32(esp) = t0;
L_0051b367:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b368:  // push 0x43ff0000
    t0 = 0x43ff0000u; esp -= 4; M32(esp) = t0;
L_0051b36d:  // call 0x4693d0
    t0 = 0x004693d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b372u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b372:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051b375:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051b377:  // je 0x51b428
    if (f.zf) goto L_0051b428;
L_0051b37d:  // mov eax, dword ptr [edi + 0x4004]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4004u)));
L_0051b383:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0051b385:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0051b387:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_0051b38b:  // je 0x51b428
    if (f.zf) goto L_0051b428;
L_0051b391:  // mov cl, byte ptr [0x89bdf5]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x89bdf5u))) & 0xffu);
L_0051b397:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0051b399:  // je 0x51b428
    if (f.zf) goto L_0051b428;
L_0051b39f:  // fild dword ptr [0x89bda4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89bda4u)));
L_0051b3a5:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_0051b3a9:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0051b3ad:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051b3b3:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0051b3b5:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0051b3b9:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_0051b3bd:  // fdivp st(1)
    ST(1) = (ST(1)) / (ST(0));
    lpop(x);
L_0051b3bf:  // fild dword ptr [esp + 0x6c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x6cu)));
L_0051b3c3:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_0051b3c9:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0051b3cb:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051b3cf:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051b3d3:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0051b3d5:  // mov dword ptr [edi + 0x4008], ecx
    M32((uint32_t)(edi + 0x4008u)) = (uint32_t)(ecx);
L_0051b3db:  // jge 0x51b3e3
    if ((f.sf == f.of)) goto L_0051b3e3;
L_0051b3dd:  // mov dword ptr [edi + 0x4008], edx
    M32((uint32_t)(edi + 0x4008u)) = (uint32_t)(edx);
L_0051b3e3:  // cmp dword ptr [edi + 0x4008], eax
    t0 = lsub<32>(M32((uint32_t)(edi + 0x4008u)), eax, f);
L_0051b3e9:  // jl 0x51b3f4
    if ((f.sf != f.of)) goto L_0051b3f4;
L_0051b3eb:  // lea ecx, [eax - 1]
    ecx = (uint32_t)((uint32_t)(eax + 0xffffffffu));
L_0051b3ee:  // mov dword ptr [edi + 0x4008], ecx
    M32((uint32_t)(edi + 0x4008u)) = (uint32_t)(ecx);
L_0051b3f4:  // cmp eax, 0xb
    t0 = lsub<32>(eax, 0xbu, f);
L_0051b3f7:  // jle 0x51b422
    if ((f.zf || f.sf != f.of)) goto L_0051b422;
L_0051b3f9:  // fild dword ptr [0x89bda4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89bda4u)));
L_0051b3ff:  // add eax, -0xb
    t0 = ladd<32>(eax, 0xfffffff5u, f);
    eax = (uint32_t)(t0);
L_0051b402:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_0051b406:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_0051b40a:  // fdiv dword ptr [esp + 0x20]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x20u)));
L_0051b40e:  // fild dword ptr [esp + 0x6c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x6cu)));
L_0051b412:  // fadd dword ptr [0x5d8bb0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bb0u)));
L_0051b418:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0051b41a:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051b41e:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051b422:  // mov dword ptr [edi + 0x400c], edx
    M32((uint32_t)(edi + 0x400cu)) = (uint32_t)(edx);
L_0051b428:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0051b42c:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051b431:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b432:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0051b434:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b439u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b439:  // mov ecx, dword ptr [esp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0051b43d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b43e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051b440:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051b445:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b44au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b44a:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0051b44e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051b44f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051b450:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0051b451:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0051b452:  // add esp, 0x54
    t0 = ladd<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_0051b455:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0051ae70, 0051ae70)
