"""Generate hook registrations for the physics-script statement classes.

The ~230 CUnit*/CWeapon*/CRound*/CExplosion*/CSpawner*/CFeature*/CHazard*/
CComponent* statement classes are instances of a handful of code templates
(see src/bea/physics/statements.cpp).  This script disassembles each method,
matches it against those templates, extracts the per-class parameters (global
list, field offsets, allocation line numbers, vtable addresses) and writes
src/bea/physics/statements_generated.inc.  Anything that does not match a
template is listed on stderr and left to the original code.

Usage: python -I tools/gen_statements.py
"""
import csv, glob, os, re, sys
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe')
OUT = os.path.join(ROOT, 'src', 'bea', 'physics', 'statements_generated.inc')

pe = pefile.PE(EXE)
base = pe.OPTIONAL_HEADER.ImageBase
img = pe.get_memory_mapped_image()
md = Cs(CS_ARCH_X86, CS_MODE_32)

CLASS_RE = re.compile(r'^C(Unit|Weapon|WeaponMode|Round|Explosion|Spawner|Feature|Hazard|Component)[A-Z]\w*$')
EXCLUDE = {'CUnitAI', 'CUnitBehaviour', 'CComponentGuide', 'CComponentBomberAI', 'CUnitStatement',
           'CWeaponStatement', 'CRoundStatement', 'CExplosionStatement', 'CSpawnerStatement',
           'CFeatureStatement', 'CHazardStatement', 'CComponentStatement', 'CWeaponModeStatement',
           'CSpawnerThing', 'CSpawnerData', 'CSpawnerInitThing', 'CUnitInitThing', 'CRoundInitThing',
           'CExplosionInitThing', 'CFeatureInitThing', 'CHazardInitThing'}
ALLOC, FREE, READ, MM = 0x5490e0, 0x549220, 0x548570, 0x9c3df0


def disasm(addr, size):
    return list(md.disasm(bytes(img[addr - base: addr - base + size]), addr))


def imm(s):
    return int(s, 16) if s.startswith('0x') else int(s)


def mem_disp(op):
    """'dword ptr [edi + 0x40]' -> ('edi', 0x40); 'dword ptr [edi]' -> ('edi', 0)."""
    m = re.match(r'(?:\w+ ptr )?\[(\w+)(?: \+ (0x[0-9a-f]+|\d+))?\]$', op)
    if m:
        return m.group(1), imm(m.group(2)) if m.group(2) else 0
    return None, None


def vtable_store(txt):
    """vtable constants stored into [esi]/[ecx] in order of appearance."""
    out = []
    for m, o in txt:
        mm = re.match(r'dword ptr \[(esi|ecx)\], (0x[0-9a-f]+)$', o)
        if m == 'mov' and mm:
            out.append(imm(mm.group(2)))
    return out


def line_before_repne(txt):
    for k, (m, o) in enumerate(txt):
        if m == 'push' and k + 1 < len(txt) and txt[k + 1][0].startswith('repne'):
            return imm(o)
    return None


def classify(addr, size):
    ins = disasm(addr, size)
    txt = [(i.mnemonic, i.op_str) for i in ins]
    calls = [imm(o) for m, o in txt if m == 'call' and o.startswith('0x')]

    # --- destructors
    if len(ins) == 2 and txt[0][0] == 'mov' and txt[0][1].startswith('dword ptr [ecx], 0x') and txt[1][0] == 'ret':
        return 'BaseDtor', (imm(txt[0][1].split(', ')[1]),)
    if txt[0] == ('push', 'esi') and txt[1] == ('mov', 'esi, ecx') and txt[2][0] == 'call' \
            and 'byte ptr [esp + 8], 1' in txt[3][1] and FREE in calls and txt[-3] == ('mov', 'eax, esi'):
        return 'DeletingDtorCall', (imm(txt[2][1]),)
    if txt[0] == ('mov', 'al, byte ptr [esp + 4]') and FREE in calls and len(vtable_store(txt)) == 1 \
            and txt[-3] == ('mov', 'eax, esi') and txt[-1] == ('ret', '4'):
        return 'DeletingDtor', (vtable_store(txt)[0],)
    if txt[0] == ('push', '-1') and txt[1][0] == 'push' and any(o == 'ecx, dword ptr [esi + 8]' for m, o in txt) \
            and len(vtable_store(txt)) == 2 and txt[-1] == ('ret', ''):
        vts = vtable_store(txt)
        return 'DtorDeleteChild', (vts[0], vts[1])

    # --- parse
    if len(ins) == 6 and txt[0] == ('add', 'ecx, 8') and txt[1][0] == 'push' and txt[2] == ('push', 'ecx') \
            and txt[4] == ('call', hex(READ)) and txt[5] == ('ret', '4'):
        return 'Parse', (imm(txt[1][1]),)
    if txt[0] == ('push', 'esi') and txt[1] == ('mov', 'esi, ecx') and txt[3] == ('lea', 'eax, [esp + 8]') \
            and txt[4][0] == 'push' and READ in calls and len(calls) == 2 and txt[-2] == ('mov', 'dword ptr [esi + 8], eax'):
        return 'ParseConvert', (imm(txt[4][1]), calls[1])

    # --- direct forms
    if len(ins) == 4 and txt[0] == ('mov', 'eax, dword ptr [ecx + 8]') and txt[1] == ('mov', 'ecx, dword ptr [esp + 4]') \
            and txt[2][0] == 'mov' and txt[2][1].endswith(', eax') and txt[3] == ('ret', '4'):
        r, d = mem_disp(txt[2][1].split(', ')[0])
        if r == 'ecx':
            return 'DirectDword', (d,)
    if len(ins) == 9 and txt[0] == ('mov', 'eax, dword ptr [ecx + 8]') and txt[1] == ('test', 'eax, eax') \
            and txt[4][0] == 'mov' and txt[4][1].endswith(', 1') and txt[7][1].endswith(', 0'):
        r, d = mem_disp(txt[4][1].split(', ')[0])
        r2, d2 = mem_disp(txt[7][1].split(', ')[0])
        if r == 'eax' and d == d2:
            return 'DirectBool', (d,)
    if len(ins) == 8 and txt[1] == ('fld', 'dword ptr [ecx + 8]') and txt[3][0] == 'fistp' and txt[5][0] == 'mov' \
            and txt[5][1].endswith(', eax'):
        r, d = mem_disp(txt[5][1].split(', ')[0])
        if r == 'ecx':
            return 'DirectRound', (d,)
    if txt[0] == ('fld', 'dword ptr [ecx + 8]') and txt[1][0] == 'fcomp' and txt[3] == ('test', 'ah, 0x41'):
        dsts = set()
        for m, o in txt:
            if m == 'mov' and (o.endswith(', eax') or o.endswith(', 0')):
                r, d = mem_disp(o.split(', ')[0])
                if r == 'ecx':
                    dsts.add(d)
        if len(dsts) == 1:
            return 'DirectBoolPositive', (dsts.pop(),)
    if txt[1] == ('lea', 'esi, [ecx + 8]') and FREE in calls and ALLOC in calls:
        line = line_before_repne(txt)
        dst = None
        for m, o in txt:
            if m == 'mov' and o.endswith(', edx'):
                r, d = mem_disp(o.split(', ')[0])
                if r == 'ebx':
                    dst = d
        if line is not None and dst is not None:
            return 'DirectString', (dst, line)
        return None, 'direct string parse failed'
    if len(ins) == 5 and txt[0] == ('add', 'ecx, 8') and txt[1] == ('push', 'ecx') \
            and txt[2] == ('mov', 'ecx, dword ptr [esp + 8]') and txt[3][0] == 'call' and txt[4] == ('ret', '4'):
        return 'CallDef1', (calls[0],)
    if len(ins) == 5 and txt[0] == ('mov', 'eax, dword ptr [ecx + 0xc]') and txt[1] == ('mov', 'edx, dword ptr [esp + 4]') \
            and txt[2] == ('mov', 'ecx, dword ptr [ecx + 8]') and txt[3][0] == 'mov' and txt[4] == ('ret', '4'):
        m = re.match(r'dword ptr \[edx \+ eax\*4 \+ (0x[0-9a-f]+)\], ecx', txt[3][1])
        if m:
            return 'DirectIndexedDword', (imm(m.group(1)),)
    if len(ins) == 7 and txt[0] == ('mov', 'ecx, dword ptr [ecx + 8]') and txt[1] == ('test', 'ecx, ecx') \
            and txt[4] == ('call', 'dword ptr [eax + 4]') and txt[6] == ('ret', '4'):
        r, d = mem_disp(txt[5][1].split(', ')[0])
        wr, wd = mem_disp(txt[5][1].split(', ')[0])
        if r == 'ecx':
            return 'DirectVirtual1', (d,)
    if txt[0] == ('mov', 'eax, dword ptr [ecx + 0x208]') and txt[1] == ('lea', 'edx, [ecx + 0x108]') \
            and len(calls) == 1 and txt[-1] == ('ret', '4'):
        return 'CallDef3', (calls[0],)

    # --- lookup family
    glob = None
    for m, o in txt:
        if m == 'mov' and o.startswith('edx, dword ptr [0x'):
            glob = imm(o[len('edx, dword ptr ['):-1])
            break
    if glob is not None and txt[0] == ('push', 'ebx') and txt[1] == ('push', 'ebp'):
        name_off = None
        defreg = None
        for m, o in txt:
            if m == 'mov' and o.startswith('esi, dword ptr [') and 'esp' not in o and 'edx' not in o:
                defreg, name_off = mem_disp(o.split(', ')[1])
                break
        if name_off is None:
            return None, 'lookup without name load'
        if ALLOC in calls:
            line = line_before_repne(txt)
            dst = None
            for m, o in txt:
                if m == 'mov' and o.endswith(', edx'):
                    r, d = mem_disp(o.split(', ')[0])
                    if r == defreg:
                        dst = d
            if line is not None and dst is not None:
                return 'LookupString', (glob, name_off, dst, line)
            return None, 'lookup string parse failed'
        if any(m == 'fcomp' for m, o in txt):
            dsts = set()
            for m, o in txt:
                if m == 'mov' and o.startswith('dword ptr [%s' % defreg) and (o.endswith(', 1') or o.endswith(', 0') or o.endswith(', eax')):
                    r, d = mem_disp(o.split(', ')[0])
                    dsts.add(d)
            if len(dsts) == 1:
                return 'LookupBool', (glob, name_off, dsts.pop())
            return None, 'lookup bool parse failed'
        for k, (m, o) in enumerate(txt):
            mm = re.match(r'(e[a-d]x), dword ptr \[ecx \+ 8\]$', o)
            if m == 'mov' and mm and k + 1 < len(txt):
                src = mm.group(1)
                m2, o2 = txt[k + 1]
                if m2 == 'mov' and o2.endswith(', ' + src):
                    r, d = mem_disp(o2.split(', ')[0])
                    if r == defreg:
                        return 'LookupDword', (glob, name_off, d)
                if (m2, o2) == ('test', '%s, %s' % (src, src)) and k + 3 < len(txt):
                    m3, o3 = txt[k + 3]
                    if m3 == 'mov' and o3.endswith(', ' + src):
                        r, d = mem_disp(o3.split(', ')[0])
                        if r == defreg:
                            return 'LookupDwordNonZero', (glob, name_off, d)
        return None, 'lookup variant unknown'
    return None, 'no template'


funcs = []
for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace')):
    ns = r['namespace']
    if (CLASS_RE.match(ns) and ns not in EXCLUDE) or re.match(r'^CPhysics\w+(Value|Type)$', ns):
        funcs.append((int(r['address'], 16), ns, r['name'], int(r['size'])))

# largest original a template may stand in for (bytes); see the size check below
MAX_SIZE = {'LookupString': 260, 'LookupDword': 200, 'LookupBool': 200, 'LookupDwordNonZero': 170,
            'DirectString': 120, 'DirectBoolPositive': 64}

# functions a lifted version replaces (src/bea/lifted, LIFT_FUNCTION; 2026-11-05: the
# fuzz checker found 0x435df0-style templates apart from the original where the lift matched)
lifted = set()
for path in glob.glob(os.path.join(ROOT, 'src', 'bea', 'lifted', 'lift_*.cpp')):
    for m in re.finditer(r'LIFT_FUNCTION(?:_NF)?\(\s*(0x[0-9A-Fa-f]+)', open(path, encoding='utf-8', errors='replace').read()):
        lifted.add(int(m.group(1), 16))

emitted = {}
skipped = []
for addr, ns, name, size in sorted(funcs):
    if addr in emitted:
        continue
    if addr in lifted:
        skipped.append((addr, ns, name, size, 'lifted (src/bea/lifted)'))
        continue
    kind, params = classify(addr, size)
    if kind is None:
        skipped.append((addr, ns, name, size, params))
        continue
    # A method much larger than its template does more than the template:
    # CExplosionBasedOn::vslot1 (710 bytes) and CRoundBasedOn::vslot1 (732)
    # matched LookupString (237) by their first lookup and lost the copy of
    # the base definition's fields; level 211 then ended at game clock 183.4
    # instead of 200.0 (2026-10-20, found by tools/behaviour_bisect.py).
    if size > MAX_SIZE.get(kind, 300):
        skipped.append((addr, ns, name, size, '%s template but %d bytes: does more than the template' % (kind, size)))
        continue
    emitted[addr] = (kind, params, ns, name)

lines = ["// Generated by tools/gen_statements.py - do not edit.",
         "// %d statement-class methods matched a template; %d left to original code." % (len(emitted), len(skipped)),
         ""]
for addr in sorted(emitted):
    kind, params, ns, name = emitted[addr]
    args = ", ".join("0x%x" % p for p in params)
    lines.append("    BEA_HOOK_T(0x%08x, %s<%s>),   // %s::%s" % (addr, kind, args, ns, name))
open(OUT, 'w').write("\n".join(lines) + "\n")

print("matched %d, skipped %d" % (len(emitted), len(skipped)))
from collections import Counter
print(Counter(v[0] for v in emitted.values()))
for addr, ns, name, size, why in skipped:
    print("  skip %08x %s::%s size=%d: %s" % (addr, ns, name, size, why), file=sys.stderr)
