"""Generate hooks for VC6 non-deleting destructors with exception frames.

Shape handled:
    push -1 ; push <handler> ; mov eax, fs:[0] ; push eax ; mov fs:[0], esp
    push ecx ; push esi ; mov esi, ecx ; mov [esp+4], esi
    <steps, interleaved with EH-state stores `mov [esp+K], K`>
    mov ecx, [esp+K] ; pop esi ; mov fs:[0], ecx ; add esp, 0x10 ; ret
Steps:
    SetVt<VT>        mov dword ptr [esi], VT
    MPtr<OFF>        MonitorPtr member destructor (inline), member at OFF
    DelMember<OFF>   if ([esi+OFF]) ([esi+OFF])->vtable[0](1)
    CallAt<OFF,F>    lea ecx,[esi+OFF] ; call F        (embedded member dtor)
    CallThis<F>      mov ecx,esi ; call F               (base destructor)
Writes src/bea/generated/dtors_generated.inc.  Usage: python -I tools/gen_dtors.py
"""
import csv, glob, os, re, sys
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe')
OUT = os.path.join(ROOT, 'src', 'bea', 'generated', 'dtors_generated.inc')
GAME_LO, GAME_HI = 0x401000, 0x55A420
PTRLIST_REMOVE = 0x4e5bd0

pe = pefile.PE(EXE)
base = pe.OPTIONAL_HEADER.ImageBase
img = pe.get_memory_mapped_image()
md = Cs(CS_ARCH_X86, CS_MODE_32)

hooked = set()
for path in glob.glob(os.path.join(ROOT, 'src', '**', '*.cpp'), recursive=True) + \
        glob.glob(os.path.join(ROOT, 'src', '**', '*.inc'), recursive=True):
    if path.endswith('dtors_generated.inc'):
        continue
    # (LIFT_FUNCTION too: a lifted function replaces the template, 2026-11-05)
    for m in re.finditer(r'(?:BEA_HOOK(?:_T|_TRIVIAL)?|LIFT_FUNCTION(?:_NF)?)\(\s*(0x[0-9A-Fa-f]+)', open(path, encoding='utf-8', errors='replace').read()):
        hooked.add(int(m.group(1), 16))


def imm(s):
    return int(s, 16) if s.startswith('0x') else int(s)


def esi_off(op):
    m = re.fullmatch(r'(?:dword ptr )?\[esi(?: \+ (0x[0-9a-f]+|\d+))?\]', op)
    if not m:
        return None
    return imm(m.group(1)) if m.group(1) else 0


def classify(addr, size):
    ins = list(md.disasm(bytes(img[addr - base: addr - base + size]), addr))
    t = [(i.mnemonic, i.op_str) for i in ins]
    # prologue
    pro = [('push', '-1'), None, ('mov', 'eax, dword ptr fs:[0]'), ('push', 'eax'), ('mov', 'dword ptr fs:[0], esp'),
           ('push', 'ecx'), ('push', 'esi'), ('mov', 'esi, ecx'), ('mov', 'dword ptr [esp + 4], esi')]
    if len(t) < 14:
        return None
    for k, p in enumerate(pro):
        if p is not None and t[k] != p:
            return None
    if t[1][0] != 'push':
        return None
    # epilogue
    epi = t[-5:]
    if not (epi[0][0] == 'mov' and epi[0][1].startswith('ecx, dword ptr [esp') and epi[1] == ('pop', 'esi')
            and epi[2] == ('mov', 'dword ptr fs:[0], ecx') and epi[3] == ('add', 'esp, 0x10') and epi[4] == ('ret', '')):
        return None
    body = [x for x in t[9:-5] if not (x[0] == 'mov' and re.fullmatch(r'(?:dword|byte) ptr \[esp \+ (0x[0-9a-f]+|\d+)\], (0x[0-9a-f]+|-?\d+)', x[1]))]
    steps = []
    i = 0
    while i < len(body):
        m, o = body[i]
        # SetVt
        mm = re.fullmatch(r'dword ptr \[esi\], (0x[0-9a-f]+)', o)
        if m == 'mov' and mm:
            steps.append('SetVt<0x%x>' % imm(mm.group(1)))
            i += 1
            continue
        # MPtr: mov eax,[esi+X]; lea edx,[esi+X]; test eax,eax; je; mov eax,[eax+4]; test eax,eax; je; push edx; mov ecx,eax; call REMOVE
        if m == 'mov' and o.startswith('eax, dword ptr [esi') and i + 9 < len(body):
            x = esi_off(o[5:])
            seq = body[i + 1:i + 10]
            if x is not None and seq[0] == ('lea', 'edx, [esi + 0x%x]' % x) and seq[1] == ('test', 'eax, eax') and seq[2][0] == 'je' \
                    and seq[3] == ('mov', 'eax, dword ptr [eax + 4]') and seq[4] == ('test', 'eax, eax') and seq[5][0] == 'je' \
                    and seq[6] == ('push', 'edx') and seq[7] == ('mov', 'ecx, eax') and seq[8] == ('call', hex(PTRLIST_REMOVE)):
                steps.append('MPtr<0x%x>' % x)
                i += 10
                continue
        # DelMember: mov ecx,[esi+X]; test ecx,ecx; je; mov eax,[ecx]; push 1; call [eax]
        if m == 'mov' and o.startswith('ecx, dword ptr [esi') and i + 5 < len(body):
            x = esi_off(o[5:])
            seq = body[i + 1:i + 6]
            if x is not None and seq[0] == ('test', 'ecx, ecx') and seq[1][0] == 'je' and seq[2] == ('mov', 'eax, dword ptr [ecx]') \
                    and seq[3] == ('push', '1') and seq[4] == ('call', 'dword ptr [eax]'):
                steps.append('DelMember<0x%x>' % x)
                i += 6
                continue
        # CallAt: lea ecx,[esi+X]; call F
        if m == 'lea' and i + 1 < len(body) and body[i + 1][0] == 'call' and body[i + 1][1].startswith('0x'):
            mm = re.fullmatch(r'ecx, \[esi \+ (0x[0-9a-f]+|\d+)\]', o)
            if mm:
                steps.append('CallAt<0x%x, 0x%x>' % (imm(mm.group(1)), imm(body[i + 1][1])))
                i += 2
                continue
        # CallThis: mov ecx,esi; call F
        if (m, o) == ('mov', 'ecx, esi') and i + 1 < len(body) and body[i + 1][0] == 'call' and body[i + 1][1].startswith('0x'):
            steps.append('CallThis<0x%x>' % imm(body[i + 1][1]))
            i += 2
            continue
        return None
    if not steps:
        return None
    return steps


funcs = []
for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace')):
    a = int(r['address'], 16)
    if GAME_LO <= a < GAME_HI and r['is_thunk'] != 'true' and a not in hooked and int(r['size']) <= 400:
        name = r['name'] if r['namespace'] in ('', 'Global') else r['namespace'] + '::' + r['name']
        funcs.append((a, int(r['size']), name))

out = []
for a, size, name in sorted(funcs):
    steps = classify(a, size)
    if steps:
        out.append("    BEA_HOOK_T(0x%08x, DtorSeq<%s>::f),   // %s" % (a, ", ".join(steps), name))
open(OUT, 'w').write("// Generated by tools/gen_dtors.py - do not edit.\n// %d destructors.\n\n%s\n" % (len(out), "\n".join(out)))
print("emitted %d destructors" % len(out))
