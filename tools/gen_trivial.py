"""Generate hooks for trivial accessor functions in the game code range.

Matches tiny functions whose entire body is one exact pattern (constant
return, field getter/setter, empty method, this-relative address, global
read) and emits src/bea/generated/trivial_generated.inc.  Each pattern maps to
a template in src/bea/generated/trivial.cpp that reproduces it exactly.
Functions already hooked by hand-written code are skipped.

Usage: python -I tools/gen_trivial.py
"""
import csv, glob, os, re, sys
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe')
OUT = os.path.join(ROOT, 'src', 'bea', 'generated', 'trivial_generated.inc')
GAME_LO, GAME_HI = 0x401000, 0x55A420
MAX_SIZE = 48

pe = pefile.PE(EXE)
base = pe.OPTIONAL_HEADER.ImageBase
img = pe.get_memory_mapped_image()
md = Cs(CS_ARCH_X86, CS_MODE_32)

# addresses already replaced elsewhere
hooked = set()
# (and LIFT_FUNCTION: a lifted function replaces the template, 2026-11-05)
hook_re = re.compile(r'(?:BEA_HOOK(?:_T)?|LIFT_FUNCTION(?:_NF)?)\(\s*(0x[0-9A-Fa-f]+)')
for path in glob.glob(os.path.join(ROOT, 'src', '**', '*.cpp'), recursive=True) + \
        glob.glob(os.path.join(ROOT, 'src', '**', '*.inc'), recursive=True):
    if path.endswith('trivial_generated.inc'):
        continue
    for m in hook_re.finditer(open(path, encoding='utf-8', errors='replace').read()):
        hooked.add(int(m.group(1), 16))


def imm(s):
    return int(s, 16) if s.startswith('0x') else int(s)


def disasm(addr, size):
    return list(md.disasm(bytes(img[addr - base: addr - base + size]), addr))


MEM = r'(?:dword|byte|word) ptr \[ecx(?: \+ (0x[0-9a-f]+|\d+))?\]'


def ecx_off(op):
    m = re.fullmatch(MEM, op)
    if not m:
        return None
    return imm(m.group(1)) if m.group(1) else 0


def ret_pop(t):
    if t[0] != 'ret':
        return None
    return imm(t[1]) if t[1] else 0


def classify(addr, size):
    ins = disasm(addr, size)
    # the function body must end at the first ret and be followed only by padding
    txt = []
    for i in ins:
        txt.append((i.mnemonic, i.op_str, i.size))
        if i.mnemonic == 'ret':
            break
    if not txt or txt[-1][0] != 'ret':
        return None
    body = sum(t[2] for t in txt)
    tail = bytes(img[addr - base + body: addr - base + size])
    if any(b not in (0x90, 0xcc) for b in tail):
        return None
    pop = ret_pop(txt[-1])
    t = [(m, o) for m, o, s in txt]
    n = len(t)
    if n == 1:
        return ('Nop', (pop,))
    if n == 2:
        m, o = t[0]
        if (m, o) == ('xor', 'eax, eax'):
            return ('RetConst', (0, pop))
        if (m, o) == ('xor', 'al, al'):
            return ('RetConst8', (0, pop))
        if m == 'mov' and o.startswith('eax, 0x') or (m == 'mov' and re.fullmatch(r'eax, -?\d+', o)):
            return ('RetConst', (imm(o[5:]) & 0xffffffff, pop))
        if m == 'mov' and re.fullmatch(r'al, (0x[0-9a-f]+|\d+)', o):
            return ('RetConst8', (imm(o[4:]) & 0xff, pop))
        if m == 'mov' and o == 'eax, ecx':
            return ('RetThis', (pop,))
        if m == 'mov' and o.startswith('eax, dword ptr [ecx'):
            off = ecx_off(o[5:])
            if off is not None:
                return ('GetDword', (off, pop))
        if m == 'mov' and o.startswith('al, byte ptr [ecx'):
            off = ecx_off(o[4:])
            if off is not None:
                return ('GetByte', (off, pop))
        if m == 'movzx' and o.startswith('eax, byte ptr [ecx'):
            off = ecx_off(o[5:])
            if off is not None:
                return ('GetByteZx', (off, pop))
        if m == 'movzx' and o.startswith('eax, word ptr [ecx'):
            off = ecx_off(o[5:])
            if off is not None:
                return ('GetWordZx', (off, pop))
        if m == 'movsx' and o.startswith('eax, word ptr [ecx'):
            off = ecx_off(o[5:])
            if off is not None:
                return ('GetWordSx', (off, pop))
        if m == 'fld' and o.startswith('dword ptr [ecx'):
            off = ecx_off(o)
            if off is not None:
                return ('GetFloat', (off, pop))
        if m == 'lea' and re.fullmatch(r'eax, \[ecx \+ (0x[0-9a-f]+|\d+)\]', o):
            return ('GetAddr', (imm(o.split('+ ')[1][:-1]), pop))
        if m == 'mov' and re.fullmatch(r'eax, dword ptr \[0x[0-9a-f]+\]', o):
            return ('GetGlobal', (imm(o[len('eax, dword ptr ['):-1]), pop))
        mm = re.fullmatch(r'(dword|byte) ptr \[ecx(?: \+ (0x[0-9a-f]+|\d+))?\], (0x[0-9a-f]+|-?\d+)', o)
        if m == 'mov' and mm:
            off = imm(mm.group(2)) if mm.group(2) else 0
            v = imm(mm.group(3))
            if mm.group(1) == 'dword':
                return ('SetConstDword', (off, v & 0xffffffff, pop))
            return ('SetConstByte', (off, v & 0xff, pop))
    if n == 3 and pop == 4:
        # setters: mov eax,[esp+4]; mov [ecx+off], eax; ret 4   (also al / fld-fstp)
        if t[0] == ('mov', 'eax, dword ptr [esp + 4]') and t[1][0] == 'mov' and t[1][1].endswith(', eax'):
            off = ecx_off(t[1][1][:-5])
            if off is not None:
                return ('SetDword', (off,))
        if t[0] == ('mov', 'al, byte ptr [esp + 4]') and t[1][0] == 'mov' and t[1][1].endswith(', al'):
            off = ecx_off(t[1][1][:-4])
            if off is not None:
                return ('SetByte', (off,))
        if t[0] == ('fld', 'dword ptr [esp + 4]') and t[1][0] == 'fstp' and t[1][1].startswith('dword ptr [ecx'):
            off = ecx_off(t[1][1])
            if off is not None:
                return ('SetDword', (off,))
    # --- second tier (up to 48 bytes) -------------------------------------
    full = [(i.mnemonic, i.op_str) for i in ins]      # whole function incl. padding
    callees = [imm(o) for m, o in t if m == 'call' and o.startswith('0x')]
    if n == 2 and t[0][0] == 'fld' and re.fullmatch(r'dword ptr \[0x[0-9a-f]+\]', t[0][1]):
        return ('RetFloatConst', (imm(t[0][1][len('dword ptr ['):-1]), pop))
    # deleting destructor calling a base: push esi; mov esi,ecx; call B; test byte [esp+8],1; je; push esi; mov ecx,MM; call FREE; mov eax,esi; pop esi; ret 4
    if n == 11 and t[0] == ('push', 'esi') and t[1] == ('mov', 'esi, ecx') and t[2][0] == 'call' \
            and t[3] == ('test', 'byte ptr [esp + 8], 1') and t[6] == ('mov', 'ecx, 0x9c3df0') and t[7] == ('call', '0x549220') \
            and t[8] == ('mov', 'eax, esi') and pop == 4:
        return ('DeletingDtorCall', (imm(t[2][1]),))
    # inline deleting destructor: mov al,[esp+4]; push esi; mov esi,ecx; test al,1; mov [esi],VT; je; push esi; mov ecx,MM; call FREE; mov eax,esi; pop esi; ret 4
    if n == 12 and t[0] == ('mov', 'al, byte ptr [esp + 4]') and t[3] == ('test', 'al, 1') and t[4][0] == 'mov' \
            and t[4][1].startswith('dword ptr [esi], 0x') and t[8] == ('call', '0x549220') and t[9] == ('mov', 'eax, esi') and pop == 4:
        return ('DeletingDtorInline', (imm(t[4][1].split(', ')[1]),))
    # forward with OR: mov eax,[esp+4]; or eax,K; push eax; call F; ret 4
    if n == 5 and t[0] == ('mov', 'eax, dword ptr [esp + 4]') and t[1][0] == 'or' and t[1][1].startswith('eax, ') \
            and t[2] == ('push', 'eax') and t[3][0] == 'call' and pop == 4:
        return ('ForwardOr', (callees[0], imm(t[1][1][5:]) & 0xffffffff))
    # forward: mov eax,[esp+4]; push eax; call F; ret 4
    if n == 4 and t[0] == ('mov', 'eax, dword ptr [esp + 4]') and t[1] == ('push', 'eax') and t[2][0] == 'call' and pop == 4:
        return ('Forward1', (callees[0],))
    # forward on field: mov eax,[esp+4]; mov ecx,[ecx+OFF]; push eax; call F; ret 4
    if n == 5 and t[0] == ('mov', 'eax, dword ptr [esp + 4]') and t[1][0] == 'mov' and t[1][1].startswith('ecx, dword ptr [ecx') \
            and t[2] == ('push', 'eax') and t[3][0] == 'call' and pop == 4:
        off = ecx_off(t[1][1][5:])
        if off is not None:
            return ('ForwardField1', (off, callees[0]))
    # forward on sub-object: mov eax,[esp+4]; add ecx,OFF; push eax; call F; ret 4
    if n == 5 and t[0] == ('mov', 'eax, dword ptr [esp + 4]') and t[1][0] == 'add' and t[1][1].startswith('ecx, ') \
            and t[2] == ('push', 'eax') and t[3][0] == 'call' and pop == 4:
        return ('ForwardAddr1', (imm(t[1][1][5:]), callees[0]))
    # set with OR: mov eax,[esp+4]; or eax,K; mov [ecx+OFF],eax; ret 4
    if n == 4 and t[0] == ('mov', 'eax, dword ptr [esp + 4]') and t[1][0] == 'or' and t[1][1].startswith('eax, ') \
            and t[2][0] == 'mov' and t[2][1].endswith(', eax') and pop == 4:
        off = ecx_off(t[2][1][:-5])
        if off is not None:
            return ('SetDwordOr', (off, imm(t[1][1][5:]) & 0xffffffff))
    # two-vtable ctor: mov eax,ecx; mov [eax+OFF],V1; mov [eax],V2; ret
    if n == 4 and t[0] == ('mov', 'eax, ecx') and pop == 0:
        m1 = re.fullmatch(r'dword ptr \[eax \+ (0x[0-9a-f]+|\d+)\], (0x[0-9a-f]+)', t[1][1])
        m2 = re.fullmatch(r'dword ptr \[eax\], (0x[0-9a-f]+)', t[2][1])
        if t[1][0] == 'mov' and t[2][0] == 'mov' and m1 and m2:
            return ('Ctor2', (imm(m1.group(1)), imm(m1.group(2)), imm(m2.group(1))))
    # free a field: push esi; mov esi,ecx; mov eax,[esi+OFF]; test; je; push eax; mov ecx,MM; call FREE; mov [esi+OFF],0; pop esi; ret
    if n == 11 and t[0] == ('push', 'esi') and t[1] == ('mov', 'esi, ecx') and t[2][0] == 'mov' and t[2][1].startswith('eax, dword ptr [esi') \
            and t[7] == ('call', '0x549220') and t[8][0] == 'mov' and t[8][1].endswith(', 0') and pop == 0:
        m1 = re.fullmatch(r'eax, dword ptr \[esi(?: \+ (0x[0-9a-f]+|\d+))?\]', t[2][1])
        off = imm(m1.group(1)) if m1 and m1.group(1) else 0
        return ('FreeField', (off,))
    # field non-zero: mov edx,[ecx+OFF]; xor eax,eax; test edx,edx; setne al; ret
    # (the compare must be `test edx, edx`: 0x528af0 is `cmp edx, -1` and was
    # taken for this shape; its port answered 1 for a -1 field and moved a HUD
    # element - found by the frame oracle, 2026-10-23)
    if n == 5 and t[0][0] == 'mov' and t[0][1].startswith('edx, dword ptr [ecx') and t[1] == ('xor', 'eax, eax') \
            and t[2] == ('test', 'edx, edx') and t[3] == ('setne', 'al') and pop == 0:
        off = ecx_off(t[0][1][5:])
        if off is not None:
            return ('IsFieldNonZero', (off,))
    # mov eax,[ecx+A]; fld [eax+B]; ret
    if n == 3 and t[0][0] == 'mov' and t[0][1].startswith('eax, dword ptr [ecx') and t[1][0] == 'fld' and pop == 0:
        m2 = re.fullmatch(r'dword ptr \[eax(?: \+ (0x[0-9a-f]+|\d+))?\]', t[1][1])
        a = ecx_off(t[0][1][5:])
        if a is not None and m2:
            return ('GetFloat2', (a, imm(m2.group(1)) if m2.group(1) else 0))
    # mov eax,[ecx+A]; test; je L; mov eax,[eax+B]; ret; L: (xor eax,eax | or eax,-1); ret
    if n == 5 and t[0][0] == 'mov' and t[0][1].startswith('eax, dword ptr [ecx') and t[1] == ('test', 'eax, eax') \
            and t[2][0] == 'je' and t[3][0] == 'mov' and pop == 0 and len(full) >= 7:
        a = ecx_off(t[0][1][5:])
        m2 = re.fullmatch(r'eax, dword ptr \[eax(?: \+ (0x[0-9a-f]+|\d+))?\]', t[3][1])
        e1, e2 = full[5], full[6]
        if a is not None and m2 and e2 == ('ret', '') and e1 in (('xor', 'eax, eax'), ('or', 'eax, 0xffffffff')):
            tail2 = bytes(img[addr - base + sum(i.size for i in ins[:7]): addr - base + size])
            if all(b in (0x90, 0xcc) for b in tail2):
                dflt = 0 if e1[0] == 'xor' else 0xffffffff
                return ('GetDword2Default', (a, imm(m2.group(1)) if m2.group(1) else 0, dflt))
    # copy 4 dwords to out: mov eax,[esp+4]; add ecx,OFF; push esi; mov edx,eax; (3x mov esi/[edx]); pop esi; mov ecx,[ecx+0xc]; mov [edx+0xc],ecx; ret 4
    if n == 14 and t[0] == ('mov', 'eax, dword ptr [esp + 4]') and t[1][0] == 'add' and t[1][1].startswith('ecx, ') \
            and t[2] == ('push', 'esi') and t[3] == ('mov', 'edx, eax') and t[11] == ('mov', 'ecx, dword ptr [ecx + 0xc]') \
            and t[12] == ('mov', 'dword ptr [edx + 0xc], ecx') and pop == 4:
        return ('GetBlock', (imm(t[1][1][5:]), 4))
    # rep movsd copy: mov eax,[esp+4]; push esi; push edi; lea esi,[ecx+OFF]; mov ecx,N; mov edi,eax; rep movsd; pop edi; pop esi; ret 4
    if n == 10 and t[0] == ('mov', 'eax, dword ptr [esp + 4]') and t[3][0] == 'lea' and t[4][0] == 'mov' and t[4][1].startswith('ecx, ') \
            and t[6][0].startswith('rep') and pop == 4:
        m1 = re.fullmatch(r'esi, \[ecx \+ (0x[0-9a-f]+|\d+)\]', t[3][1])
        if m1:
            return ('GetBlock', (imm(m1.group(1)), imm(t[4][1][5:])))
    if n == 3 and pop == 0:
        # mov eax,[ecx+a]; mov eax,[eax+b]; ret
        if t[0][0] == 'mov' and t[0][1].startswith('eax, dword ptr [ecx') and t[1][0] == 'mov' \
                and re.fullmatch(r'eax, dword ptr \[eax(?: \+ (0x[0-9a-f]+|\d+))?\]', t[1][1]):
            a = ecx_off(t[0][1][5:])
            mm = re.fullmatch(r'eax, dword ptr \[eax(?: \+ (0x[0-9a-f]+|\d+))?\]', t[1][1])
            b = imm(mm.group(1)) if mm.group(1) else 0
            if a is not None:
                return ('GetDword2', (a, b))
        # mov eax,[0xG]; mov eax,[eax+b]; ret
        if t[0][0] == 'mov' and re.fullmatch(r'eax, dword ptr \[0x[0-9a-f]+\]', t[0][1]) and t[1][0] == 'mov' \
                and re.fullmatch(r'eax, dword ptr \[eax(?: \+ (0x[0-9a-f]+|\d+))?\]', t[1][1]):
            g = imm(t[0][1][len('eax, dword ptr ['):-1])
            mm = re.fullmatch(r'eax, dword ptr \[eax(?: \+ (0x[0-9a-f]+|\d+))?\]', t[1][1])
            b = imm(mm.group(1)) if mm.group(1) else 0
            return ('GetGlobal2', (g, b))
    return None


funcs = []
for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace')):
    a = int(r['address'], 16)
    if GAME_LO <= a < GAME_HI and r['is_thunk'] != 'true' and int(r['size']) <= MAX_SIZE and a not in hooked:
        name = r['name'] if r['namespace'] in ('', 'Global') else r['namespace'] + '::' + r['name']
        funcs.append((a, int(r['size']), name))

emitted = []
from collections import Counter
kinds = Counter()
for a, size, name in sorted(funcs):
    c = classify(a, size)
    if c is None:
        continue
    kind, params = c
    kinds[kind] += 1
    emitted.append("    BEA_HOOK_TRIVIAL(0x%08x, %s, %s),   // %s" % (a, kind, ", ".join("0x%x" % p for p in params), name))

header = ["// Generated by tools/gen_trivial.py - do not edit.",
          "// %d trivial functions out of %d candidates (<= %d bytes) in the game range." % (len(emitted), len(funcs), MAX_SIZE),
          ""]
open(OUT, 'w').write("\n".join(header + emitted) + "\n")
print("emitted %d of %d candidates" % (len(emitted), len(funcs)))
for k, v in kinds.most_common():
    print("  %-14s %d" % (k, v))
