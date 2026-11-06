// lifted from 00479200 (FUN_00479200, 1071 bytes, 327 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00479200(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00479200;
L_00479200:  // sub esp, 0x60
    t0 = lsub<32>(esp, 0x60u, f);
    esp = (uint32_t)(t0);
L_00479203:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00479204:  // mov ebx, dword ptr [esp + 0x70]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_00479208:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00479209:  // mov esi, dword ptr [esp + 0x7c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_0047920d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0047920e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047920f:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00479212:  // fsub dword ptr [ebx + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x8u)));
L_00479215:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00479218:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_0047921b:  // fsub dword ptr [ebx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x4u)));
L_0047921e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047921f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00479222:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00479224:  // fsub dword ptr [ebx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx)));
L_00479226:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00479227:  // lea ecx, [esp + 0x58]
    ecx = (uint32_t)((uint32_t)(esp + 0x58u));
L_0047922b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047922e:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479233u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479233:  // mov edi, dword ptr [esp + 0x74]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_00479237:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0047923b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047923c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047923d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0047923f:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479244u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479244:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00479248:  // call 0x477ba0
    t0 = 0x00477ba0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047924du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047924d:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_00479251:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00479255:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047925au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047925a:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_0047925e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047925f:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00479263:  // call 0x40d180
    t0 = 0x0040d180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479268u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479268:  // fst dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
L_0047926f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00479275:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00479277:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047927a:  // je 0x47929b
    if (f.zf) goto L_0047929b;
L_0047927c:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_0047927e:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00479280:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_00479284:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00479287:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0047928b:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0047928e:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00479292:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_00479295:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_00479299:  // jmp 0x479315
    goto L_00479315;
L_0047929b:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004792a2:  // fmul dword ptr [esp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x80u)));
L_004792a9:  // fcomp dword ptr [esp + 0x78]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x78u)));
    lpop(x);
L_004792ad:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004792af:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004792b2:  // jne 0x4792d3
    if (!f.zf) goto L_004792d3;
L_004792b4:  // mov edx, edi
    edx = (uint32_t)(edi);
L_004792b6:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004792b8:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004792bc:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004792bf:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004792c3:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004792c6:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004792ca:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004792cd:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004792d1:  // jmp 0x479315
    goto L_00479315;
L_004792d3:  // mov edx, dword ptr [esp + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004792da:  // lea eax, [esp + 0x5c]
    eax = (uint32_t)((uint32_t)(esp + 0x5cu));
L_004792de:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004792df:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004792e0:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_004792e4:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004792e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004792e9:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004792eb:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_004792ef:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004792f2:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_004792f6:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004792f9:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_004792fd:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_00479301:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00479304:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00479308:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00479309:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047930a:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0047930c:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_00479310:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479315u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479315:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00479318:  // fsub dword ptr [edi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x8u)));
L_0047931b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0047931c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047931d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00479320:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_00479323:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_00479326:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00479327:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047932a:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_0047932c:  // fsub dword ptr [edi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi)));
L_0047932e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047932f:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00479333:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00479336:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047933bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047933b:  // mov ebp, dword ptr [esp + 0x80]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_00479342:  // lea edx, [esp + 0x40]
    edx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00479346:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00479347:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00479348:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047934a:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047934fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047934f:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00479353:  // call 0x477ba0
    t0 = 0x00477ba0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479358u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479358:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_0047935c:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00479360:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479365u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479365:  // lea eax, [esp + 0x50]
    eax = (uint32_t)((uint32_t)(esp + 0x50u));
L_00479369:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_0047936d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047936e:  // call 0x40d180
    t0 = 0x0040d180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479373u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479373:  // fst dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
L_0047937a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00479380:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00479382:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00479385:  // je 0x4793a4
    if (f.zf) goto L_004793a4;
L_00479387:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_00479389:  // mov edx, dword ptr [edi + 4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0047938c:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0047938f:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_00479393:  // mov ecx, dword ptr [edi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_00479396:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_0047939a:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0047939e:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004793a2:  // jmp 0x47941e
    goto L_0047941e;
L_004793a4:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004793ab:  // fmul dword ptr [esp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x84u)));
L_004793b2:  // fcomp dword ptr [esp + 0x7c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x7cu)));
    lpop(x);
L_004793b6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004793b8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004793bb:  // jne 0x4793dc
    if (!f.zf) goto L_004793dc;
L_004793bd:  // mov edx, ebp
    edx = (uint32_t)(ebp);
L_004793bf:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004793c1:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004793c5:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004793c8:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004793cc:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004793cf:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004793d3:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004793d6:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004793da:  // jmp 0x47941e
    goto L_0047941e;
L_004793dc:  // mov edx, dword ptr [esp + 0x84]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004793e3:  // lea eax, [esp + 0x60]
    eax = (uint32_t)((uint32_t)(esp + 0x60u));
L_004793e7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004793e8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004793e9:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_004793ed:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004793f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004793f2:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004793f4:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004793f8:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004793fb:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_004793ff:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00479402:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_00479406:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0047940a:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0047940d:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_00479411:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00479412:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00479413:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00479415:  // mov dword ptr [esp + 0x54], edx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(edx);
L_00479419:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047941eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047941e:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00479422:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00479423:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00479424:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00479426:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047942bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047942b:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_0047942f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00479430:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00479431:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00479433:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479438u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479438:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_0047943c:  // call 0x477ba0
    t0 = 0x00477ba0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479441u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479441:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_00479445:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00479449:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047944eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047944e:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00479452:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00479453:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00479457:  // call 0x40d180
    t0 = 0x0040d180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047945cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047945c:  // fst dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
L_00479463:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00479469:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047946b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047946e:  // je 0x47948e
    if (f.zf) goto L_0047948e;
L_00479470:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00479473:  // mov eax, dword ptr [ebp + 4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_00479476:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00479479:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_0047947d:  // mov edx, dword ptr [ebp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_00479480:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_00479484:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_00479488:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_0047948c:  // jmp 0x479506
    goto L_00479506;
L_0047948e:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_00479495:  // fmul dword ptr [esp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x84u)));
L_0047949c:  // fcomp dword ptr [esp + 0x7c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x7cu)));
    lpop(x);
L_004794a0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004794a2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004794a5:  // jne 0x4794c4
    if (!f.zf) goto L_004794c4;
L_004794a7:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004794a9:  // mov ecx, dword ptr [ebx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004794ac:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004794af:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004794b3:  // mov eax, dword ptr [ebx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004794b6:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_004794ba:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004794be:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_004794c2:  // jmp 0x479506
    goto L_00479506;
L_004794c4:  // mov ecx, dword ptr [esp + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004794cb:  // lea edx, [esp + 0x60]
    edx = (uint32_t)((uint32_t)(esp + 0x60u));
L_004794cf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004794d0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004794d1:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_004794d5:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004794dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004794da:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004794dc:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004794e0:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004794e3:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_004794e7:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004794ea:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_004794ee:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004794f2:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004794f5:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_004794f9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004794fa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004794fb:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004794fd:  // mov dword ptr [esp + 0x54], edx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(edx);
L_00479501:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479506u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479506:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00479508:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_0047950c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047950d:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_00479511:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_00479514:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_00479518:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0047951c:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_0047951f:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00479523:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00479527:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_0047952a:  // fsub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0047952e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00479531:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_00479534:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_00479538:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00479539:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047953c:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_0047953e:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_00479542:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00479543:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00479547:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047954a:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047954fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047954f:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_00479553:  // fmul dword ptr [esp + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x58u)));
L_00479557:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0047955b:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_0047955f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00479560:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00479562:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_00479566:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_0047956a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047956c:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_00479573:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00479576:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_0047957a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047957d:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_00479580:  // fsub dword ptr [esp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x38u)));
L_00479584:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00479585:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00479588:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_0047958a:  // fsub dword ptr [esp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x38u)));
L_0047958e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047958f:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00479593:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00479596:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047959bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047959b:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_0047959f:  // call 0x477ba0
    t0 = 0x00477ba0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004795a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004795a4:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004795a8:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004795ac:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004795b0:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_004795b4:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004795b8:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004795bc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004795be:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004795c2:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_004795c6:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004795ca:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004795ce:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004795cf:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004795d1:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004795d8:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004795da:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004795dc:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004795df:  // je 0x4795fa
    if (f.zf) goto L_004795fa;
L_004795e1:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004795e5:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004795e9:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004795ed:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004795f1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004795f3:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004795fa:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004795fc:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004795fe:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00479600:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00479603:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00479605:  // je 0x479617
    if (f.zf) goto L_00479617;
L_00479607:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0047960b:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0047960f:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00479613:  // mov edi, dword ptr [esp + 0x38]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00479617:  // mov eax, dword ptr [esp + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_0047961b:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0047961d:  // mov dword ptr [ebx], ecx
    M32((uint32_t)(ebx)) = (uint32_t)(ecx);
L_0047961f:  // mov dword ptr [ebx + 4], edx
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(edx);
L_00479622:  // mov dword ptr [ebx + 8], esi
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(esi);
L_00479625:  // mov dword ptr [ebx + 0xc], edi
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(edi);
L_00479628:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00479629:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047962a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047962b:  // add esp, 0x60
    t0 = ladd<32>(esp, 0x60u, f);
    esp = (uint32_t)(t0);
L_0047962e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00479200, 00479200)
