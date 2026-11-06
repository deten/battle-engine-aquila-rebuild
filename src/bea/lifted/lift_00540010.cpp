// lifted from 00540010 (FUN_00540010, 1581 bytes, 393 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00540010(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00540010;
L_00540010:  // sub esp, 0x90
    t0 = lsub<32>(esp, 0x90u, f);
    esp = (uint32_t)(t0);
L_00540016:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00540017:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00540018:  // mov ebp, dword ptr [esp + 0xb4]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_0054001f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540020:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00540021:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00540023:  // cmp word ptr [ebp], di
    t0 = lsub<16>(M16((uint32_t)(ebp)), (edi & 0xffffu), f);
L_00540027:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00540029:  // je 0x54062e
    if (f.zf) goto L_0054062e;
L_0054002f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00540031:  // mov ax, word ptr [ecx]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ecx))) & 0xffffu);
L_00540034:  // add ecx, 2
    t0 = ladd<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00540037:  // cmp ax, 0xd
    t0 = lsub<16>((eax & 0xffffu), 0xdu, f);
L_0054003b:  // je 0x540044
    if (f.zf) goto L_00540044;
L_0054003d:  // cmp ax, 0xa
    t0 = lsub<16>((eax & 0xffffu), 0xau, f);
L_00540041:  // je 0x540044
    if (f.zf) goto L_00540044;
L_00540043:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00540044:  // cmp word ptr [ecx], 0
    t0 = lsub<16>(M16((uint32_t)(ecx)), 0x0u, f);
L_00540048:  // jne 0x540031
    if (!f.zf) goto L_00540031;
L_0054004a:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0054004c:  // je 0x54062e
    if (f.zf) goto L_0054062e;
L_00540052:  // mov ecx, 0x897a98
    ecx = (uint32_t)(0x897a98u);
L_00540057:  // call 0x51a270
    t0 = 0x0051a270u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054005cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054005c:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00540061:  // call 0x465f00
    t0 = 0x00465f00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540066u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540066:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00540068:  // je 0x540106
    if (f.zf) goto L_00540106;
L_0054006e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00540073:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540078u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540078:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0054007c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00540081:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00540085:  // fmul dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xa4u)));
L_0054008c:  // fmul dword ptr [0x5db3a4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db3a4u)));
L_00540092:  // fstp dword ptr [esp + 0xa4]
    F32((uint32_t)(esp + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_00540099:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054009eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054009e:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_005400a2:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_005400a7:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_005400ab:  // fmul dword ptr [esp + 0xa8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xa8u)));
L_005400b2:  // fmul dword ptr [0x5db39c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db39cu)));
L_005400b8:  // fstp dword ptr [esp + 0xa8]
    F32((uint32_t)(esp + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_005400bf:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005400c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005400c4:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_005400c8:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_005400cd:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_005400d1:  // fmul dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb0u)));
L_005400d8:  // fmul dword ptr [0x5db3a4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db3a4u)));
L_005400de:  // fstp dword ptr [esp + 0xb0]
    F32((uint32_t)(esp + 0xb0u)) = lf32(ST(0));
    lpop(x);
L_005400e5:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005400eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005400ea:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_005400ee:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_005400f2:  // fmul dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb4u)));
L_005400f9:  // fmul dword ptr [0x5db39c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db39cu)));
L_005400ff:  // fstp dword ptr [esp + 0xb4]
    F32((uint32_t)(esp + 0xb4u)) = lf32(ST(0));
    lpop(x);
L_00540106:  // mov eax, dword ptr [esi + 0x170]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x170u)));
L_0054010c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054010e:  // jne 0x54016c
    if (!f.zf) goto L_0054016c;
L_00540110:  // mov al, byte ptr [esi + 0x15c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x15cu))) & 0xffu);
L_00540116:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00540118:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0054011a:  // je 0x540123
    if (f.zf) goto L_00540123;
L_0054011c:  // call 0x53fb00
    t0 = 0x0053fb00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540121u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540121:  // jmp 0x540128
    goto L_00540128;
L_00540123:  // call 0x53f880
    t0 = 0x0053f880u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540128u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540128:  // mov eax, dword ptr [esi + 0x170]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x170u)));
L_0054012e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00540130:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00540131:  // call 0x501280
    t0 = 0x00501280u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540136u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540136:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00540139:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0054013b:  // mov dword ptr [esi + 0x174], eax
    M32((uint32_t)(esi + 0x174u)) = (uint32_t)(eax);
L_00540141:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00540143:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00540145:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_00540147:  // push 0x208
    t0 = 0x208u; esp -= 4; M32(esp) = t0;
L_0054014c:  // push 0x144
    t0 = 0x144u; esp -= 4; M32(esp) = t0;
L_00540151:  // call 0x500540
    t0 = 0x00500540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540156u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540156:  // mov ecx, dword ptr [esi + 0x174]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x174u)));
L_0054015c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054015e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00540160:  // push 0x208
    t0 = 0x208u; esp -= 4; M32(esp) = t0;
L_00540165:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_00540167:  // call 0x500590
    t0 = 0x00500590u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054016cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054016c:  // mov ebx, dword ptr [esp + 0xc0]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_00540173:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_00540175:  // and eax, 8
    t0 = llog<32>(eax & 0x8u, f);
    eax = (uint32_t)(t0);
L_00540178:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_0054017c:  // jne 0x54018c
    if (!f.zf) goto L_0054018c;
L_0054017e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00540180:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_00540182:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00540187:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054018cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054018c:  // test bl, 0x10
    t0 = llog<8>((ebx & 0xffu) & 0x10u, f);
L_0054018f:  // jne 0x5401ad
    if (!f.zf) goto L_005401ad;
L_00540191:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_00540198:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054019b:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0054019e:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005401a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005401a3:  // fstp dword ptr [esp + 0xb0]
    F32((uint32_t)(esp + 0xb0u)) = lf32(ST(0));
    lpop(x);
L_005401aa:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005401ad:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_005401b4:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005401b7:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_005401ba:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005401bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005401bf:  // mov edx, dword ptr [esi + 0x164]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_005401c5:  // mov ecx, dword ptr [esp + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_005401cc:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_005401d0:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_005401d7:  // fld dword ptr [esi + 0x18c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18cu)));
L_005401dd:  // fsub dword ptr [esi + 0x184]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x184u)));
L_005401e3:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_005401e7:  // mov dword ptr [esp + 0x44], 0
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x0u);
L_005401ef:  // fimul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)(int32_t)M32((uint32_t)(esp + 0x40u)));
L_005401f3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005401f6:  // cmp edi, 0x9c4
    t0 = lsub<32>(edi, 0x9c4u, f);
L_005401fc:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_00540200:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00540204:  // jg 0x54062e
    if ((!f.zf && f.sf == f.of)) goto L_0054062e;
L_0054020a:  // lea eax, [edi*4]
    eax = (uint32_t)((uint32_t)(edi * 4u));
L_00540211:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00540215:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00540216:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00540217:  // mov ecx, 0x897a98
    ecx = (uint32_t)(0x897a98u);
L_0054021c:  // call 0x51a380
    t0 = 0x0051a380u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540221u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540221:  // cmp ax, 0xffff
    t0 = lsub<16>((eax & 0xffffu), 0xffffu, f);
L_00540225:  // je 0x540618
    if (f.zf) goto L_00540618;
L_0054022b:  // cmp word ptr [ebp], 0
    t0 = lsub<16>(M16((uint32_t)(ebp)), 0x0u, f);
L_00540230:  // je 0x5405f6
    if (f.zf) goto L_005405f6;
L_00540236:  // mov ebx, dword ptr [esp + 0xb8]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_0054023d:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0054023f:  // mov ebp, dword ptr [esp + 0xc4]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xc4u)));
L_00540246:  // mov di, word ptr [eax]
    edi = (edi & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax))) & 0xffffu);
L_00540249:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0054024c:  // cmp di, 0xa
    t0 = lsub<16>((edi & 0xffffu), 0xau, f);
L_00540250:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_00540254:  // jne 0x540276
    if (!f.zf) goto L_00540276;
L_00540256:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0054025a:  // fmul dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb4u)));
L_00540261:  // mov edx, dword ptr [esp + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_00540265:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00540269:  // fadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x20u)));
L_0054026d:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00540271:  // jmp 0x5405ec
    goto L_005405ec;
L_00540276:  // cmp di, 0xd
    t0 = lsub<16>((edi & 0xffffu), 0xdu, f);
L_0054027a:  // je 0x5405ec
    if (f.zf) goto L_005405ec;
L_00540280:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00540282:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00540283:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00540285:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540287u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540287:  // fld dword ptr [0x89d750]
    lpush(x, (long double)F32((uint32_t)(0x89d750u)));
L_0054028d:  // add eax, 0x18
    t0 = ladd<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_00540290:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00540292:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00540295:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00540296:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00540298:  // fadd dword ptr [eax + esi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + esi)));
L_0054029b:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0054029f:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005402a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005402a1:  // fld dword ptr [0x89d754]
    lpush(x, (long double)F32((uint32_t)(0x89d754u)));
L_005402a7:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_005402aa:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005402ab:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_005402ad:  // fadd dword ptr [eax + esi + 0x184]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + esi + 0x184u)));
L_005402b4:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_005402b6:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_005402ba:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005402bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005402bc:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_005402bf:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_005402c1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005402c2:  // fld dword ptr [eax + esi + 0x188]
    lpush(x, (long double)F32((uint32_t)(eax + esi + 0x188u)));
L_005402c9:  // fsub dword ptr [0x89d750]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x89d750u)));
L_005402cf:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_005402d1:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_005402d5:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005402d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005402d7:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_005402da:  // mov ecx, dword ptr [esi + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_005402e0:  // fld dword ptr [eax + esi + 0x18c]
    lpush(x, (long double)F32((uint32_t)(eax + esi + 0x18cu)));
L_005402e7:  // fsub dword ptr [0x89d754]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x89d754u)));
L_005402ed:  // mov eax, dword ptr [esi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x160u)));
L_005402f3:  // mov dword ptr [esp + 0x90], ecx
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(ecx);
L_005402fa:  // mov dword ptr [esp + 0x98], eax
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(eax);
L_00540301:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00540303:  // mov dword ptr [esp + 0x9c], eax
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(eax);
L_0054030a:  // mov dword ptr [esp + 0x94], eax
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(eax);
L_00540311:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00540315:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00540319:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_0054031d:  // fimul dword ptr [esp + 0x98]
    ST(0) = (ST(0)) * ((long double)(int32_t)M32((uint32_t)(esp + 0x98u)));
L_00540324:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_00540326:  // fmul dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb0u)));
L_0054032d:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00540331:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00540335:  // fimul dword ptr [esp + 0x90]
    ST(0) = (ST(0)) * ((long double)(int32_t)M32((uint32_t)(esp + 0x90u)));
L_0054033c:  // fmul dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb4u)));
L_00540343:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00540347:  // je 0x5403ac
    if (f.zf) goto L_005403ac;
L_00540349:  // mov ecx, dword ptr [ebp]
    ecx = (uint32_t)(M32((uint32_t)(ebp)));
L_0054034c:  // mov edx, dword ptr [0x8554fc]
    edx = (uint32_t)(M32((uint32_t)(0x8554fcu)));
L_00540352:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_00540355:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_00540357:  // jne 0x54040f
    if (!f.zf) goto L_0054040f;
L_0054035d:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0054035f:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00540361:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00540363:  // shr eax, 0xf
    t0 = lshr<32>(eax, 0xfu, f);
    eax = (uint32_t)(t0);
L_00540366:  // shr edi, 7
    t0 = lshr<32>(edi, 0x7u, f);
    edi = (uint32_t)(t0);
L_00540369:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_0054036f:  // and eax, 0x1fe
    t0 = llog<32>(eax & 0x1feu, f);
    eax = (uint32_t)(t0);
L_00540374:  // and edi, 0x1fe
    t0 = llog<32>(edi & 0x1feu, f);
    edi = (uint32_t)(t0);
L_0054037a:  // shl edx, 1
    t0 = lshl<32>(edx, 0x1u, f);
    edx = (uint32_t)(t0);
L_0054037c:  // cmp eax, 0xff
    t0 = lsub<32>(eax, 0xffu, f);
L_00540381:  // jbe 0x540388
    if ((f.cf || f.zf)) goto L_00540388;
L_00540383:  // mov eax, 0xff
    eax = (uint32_t)(0xffu);
L_00540388:  // cmp edi, 0xff
    t0 = lsub<32>(edi, 0xffu, f);
L_0054038e:  // jbe 0x540395
    if ((f.cf || f.zf)) goto L_00540395;
L_00540390:  // mov edi, 0xff
    edi = (uint32_t)(0xffu);
L_00540395:  // cmp edx, 0xff
    t0 = lsub<32>(edx, 0xffu, f);
L_0054039b:  // jbe 0x5403a2
    if ((f.cf || f.zf)) goto L_005403a2;
L_0054039d:  // mov edx, 0xff
    edx = (uint32_t)(0xffu);
L_005403a2:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_005403a5:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_005403a7:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_005403aa:  // jmp 0x540405
    goto L_00540405;
L_005403ac:  // mov edx, dword ptr [0x8554fc]
    edx = (uint32_t)(M32((uint32_t)(0x8554fcu)));
L_005403b2:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_005403b4:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_005403b6:  // jne 0x54040f
    if (!f.zf) goto L_0054040f;
L_005403b8:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_005403ba:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_005403bc:  // shr eax, 0xf
    t0 = lshr<32>(eax, 0xfu, f);
    eax = (uint32_t)(t0);
L_005403bf:  // shr ecx, 7
    t0 = lshr<32>(ecx, 0x7u, f);
    ecx = (uint32_t)(t0);
L_005403c2:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_005403c8:  // and eax, 0x1fe
    t0 = llog<32>(eax & 0x1feu, f);
    eax = (uint32_t)(t0);
L_005403cd:  // and ecx, 0x1fe
    t0 = llog<32>(ecx & 0x1feu, f);
    ecx = (uint32_t)(t0);
L_005403d3:  // shl edx, 1
    t0 = lshl<32>(edx, 0x1u, f);
    edx = (uint32_t)(t0);
L_005403d5:  // cmp eax, 0xff
    t0 = lsub<32>(eax, 0xffu, f);
L_005403da:  // jbe 0x5403e1
    if ((f.cf || f.zf)) goto L_005403e1;
L_005403dc:  // mov eax, 0xff
    eax = (uint32_t)(0xffu);
L_005403e1:  // cmp ecx, 0xff
    t0 = lsub<32>(ecx, 0xffu, f);
L_005403e7:  // jbe 0x5403ee
    if ((f.cf || f.zf)) goto L_005403ee;
L_005403e9:  // mov ecx, 0xff
    ecx = (uint32_t)(0xffu);
L_005403ee:  // cmp edx, 0xff
    t0 = lsub<32>(edx, 0xffu, f);
L_005403f4:  // jbe 0x5403fb
    if ((f.cf || f.zf)) goto L_005403fb;
L_005403f6:  // mov edx, 0xff
    edx = (uint32_t)(0xffu);
L_005403fb:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_005403fe:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00540400:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00540402:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00540405:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_0054040b:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0054040d:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0054040f:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00540413:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_00540419:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054041d:  // fadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x20u)));
L_00540421:  // mov edx, dword ptr [esp + 0xac]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_00540428:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054042c:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_00540430:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00540432:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_00540438:  // mov dword ptr [esp + 0x64], 0x3f800000
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0x3f800000u);
L_00540440:  // mov dword ptr [eax + 0x10], ecx
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ecx);
L_00540443:  // mov dword ptr [esp + 0x78], 0x3f800000
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0x3f800000u);
L_0054044b:  // mov dword ptr [esp + 0x8c], 0x3f800000
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(0x3f800000u);
L_00540456:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0054045a:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0054045e:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_00540464:  // fst dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
L_00540468:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0054046a:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_0054046e:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00540472:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_00540478:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_0054047c:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0054047e:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_00540482:  // mov edi, dword ptr [esp + 0x58]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00540486:  // fst dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
L_0054048a:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_0054048c:  // mov edi, dword ptr [esp + 0x5c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00540490:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00540494:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_00540497:  // mov edi, dword ptr [esp + 0x60]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0054049b:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_0054049f:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_005404a2:  // mov edi, dword ptr [esp + 0x64]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_005404a6:  // fstp dword ptr [eax + 0x18]
    F32((uint32_t)(eax + 0x18u)) = lf32(ST(0));
    lpop(x);
L_005404a9:  // mov dword ptr [edx + 0xc], edi
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(edi);
L_005404ac:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_005404b0:  // mov dword ptr [eax + 0x14], edx
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(edx);
L_005404b3:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_005404b7:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005404bb:  // mov dword ptr [esp + 0x6c], edx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(edx);
L_005404bf:  // mov edx, dword ptr [esp + 0xac]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_005404c6:  // mov edi, dword ptr [esp + 0x6c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_005404ca:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_005404ce:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_005404d1:  // mov dword ptr [esp + 0x74], edx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(edx);
L_005404d5:  // mov edx, eax
    edx = (uint32_t)(eax);
L_005404d7:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_005404db:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_005404dd:  // mov edi, dword ptr [esp + 0x70]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_005404e1:  // mov dword ptr [eax + 0x10], ecx
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ecx);
L_005404e4:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_005404e7:  // mov edi, dword ptr [esp + 0x74]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_005404eb:  // fst dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
L_005404f2:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_005404f5:  // mov edi, dword ptr [esp + 0x78]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_005404f9:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_005404fd:  // mov dword ptr [edx + 0xc], edi
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(edi);
L_00540500:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00540504:  // mov dword ptr [eax + 0x14], edx
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(edx);
L_00540507:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054050b:  // mov dword ptr [eax + 0x18], edx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(edx);
L_0054050e:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00540512:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00540516:  // mov dword ptr [esp + 0x80], edx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(edx);
L_0054051d:  // mov edx, dword ptr [esp + 0xac]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_00540524:  // mov edi, dword ptr [esp + 0x80]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_0054052b:  // add eax, 0x38
    t0 = ladd<32>(eax, 0x38u, f);
    eax = (uint32_t)(t0);
L_0054052e:  // mov dword ptr [esp + 0x88], edx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(edx);
L_00540535:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00540537:  // fst dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
L_0054053b:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_0054053d:  // mov edi, dword ptr [esp + 0x84]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_00540544:  // mov dword ptr [eax + 0x10], ecx
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ecx);
L_00540547:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_0054054a:  // mov edi, dword ptr [esp + 0x88]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_00540551:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_00540554:  // mov edi, dword ptr [esp + 0x8c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_0054055b:  // mov dword ptr [edx + 0xc], edi
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(edi);
L_0054055e:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00540562:  // mov dword ptr [eax + 0x14], edx
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(edx);
L_00540565:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00540569:  // mov dword ptr [esp + 0x54], 0x3f800000
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(0x3f800000u);
L_00540571:  // fstp dword ptr [eax + 0x18]
    F32((uint32_t)(eax + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00540574:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00540578:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_0054057c:  // mov edx, dword ptr [esp + 0xac]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_00540583:  // mov edi, dword ptr [esp + 0x48]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00540587:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_0054058b:  // add eax, 0x54
    t0 = ladd<32>(eax, 0x54u, f);
    eax = (uint32_t)(t0);
L_0054058e:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_00540592:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00540594:  // mov dword ptr [eax + 0x10], ecx
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ecx);
L_00540597:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054059b:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_0054059d:  // mov edi, dword ptr [esp + 0x4c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_005405a1:  // mov dword ptr [eax + 0x14], ecx
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(ecx);
L_005405a4:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_005405a7:  // mov edi, dword ptr [esp + 0x50]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_005405ab:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_005405ae:  // mov edi, dword ptr [esp + 0x54]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_005405b2:  // mov dword ptr [edx + 0xc], edi
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(edi);
L_005405b5:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_005405b9:  // mov dword ptr [eax + 0x18], edx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(edx);
L_005405bc:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_005405c0:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_005405c4:  // mov al, byte ptr [esi + 0x15c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x15cu))) & 0xffu);
L_005405ca:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005405cc:  // jne 0x5405dd
    if (!f.zf) goto L_005405dd;
L_005405ce:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_005405d2:  // fadd dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xb0u)));
L_005405d9:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_005405dd:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005405e1:  // add eax, 0x70
    t0 = ladd<32>(eax, 0x70u, f);
    eax = (uint32_t)(t0);
L_005405e4:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_005405e8:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_005405ec:  // cmp word ptr [eax], 0
    t0 = lsub<16>(M16((uint32_t)(eax)), 0x0u, f);
L_005405f0:  // jne 0x540246
    if (!f.zf) goto L_00540246;
L_005405f6:  // mov ecx, dword ptr [esi + 0x170]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x170u)));
L_005405fc:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540601u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540601:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00540602:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00540604:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00540609:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054060eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054060e:  // mov ecx, 0x897a98
    ecx = (uint32_t)(0x897a98u);
L_00540613:  // call 0x51a510
    t0 = 0x0051a510u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540618u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540618:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0054061c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054061e:  // jne 0x54062e
    if (!f.zf) goto L_0054062e;
L_00540620:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00540622:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_00540624:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00540629:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054062eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054062e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0054062f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00540630:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00540631:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00540633:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00540634:  // add esp, 0x90
    t0 = ladd<32>(esp, 0x90u, f);
    esp = (uint32_t)(t0);
L_0054063a:  // ret 0x24
    c->target = M32(esp); esp += 40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00540010, 00540010)
