"""Mechanically port Ghidra decompiler output to compilable C++ (prototype).

Usage:
  python -I tools/autoport.py --list FILE [--out DIR] [--check]
     FILE has one address per line (hex, first token).  Writes one
     ap_<addr>.cpp per function into DIR (default: build/autoport) and, with
     --check, runs `gcc -fsyntax-only` on each and prints a yield report.

Only functions whose shape the transformer understands are emitted; the rest
are reported with a reason.  See docs/INVESTIGATION.md §10 and NOTES A1-8.
"""
import sys
import argparse, glob, os, re, struct, subprocess, sys, collections
import csv as _csv
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))   # append: tools/bisect.py would shadow the stdlib module
import eaxuse
from crt_sigs import CRT_SIGS, NAME_SIGS, X87_SIGS
EXE = os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe')
pe = pefile.PE(EXE)
base = pe.OPTIONAL_HEADER.ImageBase
img = pe.get_memory_mapped_image()
md = Cs(CS_ARCH_X86, CS_MODE_32)

vtables = {}
for m in re.finditer(r'^== (\S+) @0x([0-9a-f]+) this\+(\d+)', open(os.path.join(ROOT, 'ghidra_out', 'vtables.txt')).read(), re.M):
    if m.group(3) == '0':
        vtables.setdefault(m.group(1), int(m.group(2), 16))
    else:
        vtables.setdefault('%s::vftable_this%s' % (m.group(1), m.group(3)), int(m.group(2), 16))
# every vtable symbol Ghidra knows (tools/ghidra/ApplyRtti.java named them from
# ghidra_out/rtti_symbols.csv): classes vtables.txt does not list, e.g. CTweak
for _r in _csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'rtti_symbols.csv'), encoding='utf-8', errors='replace')):
    if _r['kind'] == 'vtable' and '::vftable' in _r['name']:
        _cls, _suf = _r['name'].split('::vftable', 1)
        vtables.setdefault(_cls if not _suf else _cls + '::vftable' + _suf, int(_r['va'], 16))


IMPORTS = {}      # name as Ghidra prints it -> (dll, iat va, stack bytes or None)
for _l in open(os.path.join(ROOT, 'ghidra_out', 'imports.txt'), encoding='utf-8', errors='replace'):
    _t = _l.split('\t')
    if len(_t) < 3 or '!' not in _t[0]:
        continue
    _dll, _nm = _t[0].split('!', 1)
    _iat = int(_t[2].split()[0], 16)
    _m = re.fullmatch(r'_?(\w+?)@(\d+)', _nm)
    if _m:
        IMPORTS['_%s_%s' % (_m.group(1), _m.group(2))] = (_dll.upper(), _iat, int(_m.group(2)))
        IMPORTS[_m.group(1)] = (_dll.upper(), _iat, int(_m.group(2)))
    else:
        IMPORTS[_nm] = (_dll.upper(), _iat, None)
WIN32_DLLS = ('KERNEL32', 'USER32', 'GDI32', 'ADVAPI32', 'WINMM', 'DSOUND', 'DINPUT8', 'D3D9', 'OLE32', 'SHELL32', 'COMCTL32', 'VERSION')


class Skip(Exception):
    pass


# name -> address for every function (Class::vslotN as well as FUN_xxxxxxxx)
import csv as _csv
name_to_addr = {}
ns_of = {}          # address -> class namespace (methods only)
for _r in _csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace')):
    _a = int(_r['address'], 16)
    _n = _r['name'] if _r['namespace'] in ('', 'Global') else _r['namespace'] + '::' + _r['name']
    name_to_addr[_n] = _a
    if _r['namespace'] not in ('', 'Global'):
        ns_of[_a] = _r['namespace']
    name_to_addr['FUN_%08x' % _a] = _a

KNOWN_TYPES = {'void', 'int', 'uint', 'char', 'byte', 'short', 'ushort', 'long', 'ulong', 'float', 'double',
               'float10', 'longlong', 'ulonglong', 'undefined', 'undefined1', 'undefined2', 'undefined4',
               'undefined8', 'bool', 'code', 'uint32_t', 'int32_t', 'uint8_t', 'uint16_t', 'sbyte', 'wchar16',
               'unsigned', 'signed', 'const', 'struct', 'size_t'}


WIN32_TYPES = {'HANDLE', 'DWORD', 'LPCSTR', 'LPSTR', 'LONG', 'ULONG', 'HWND', 'BYTE', 'WORD', 'BOOL', 'UINT', 'INT',
               'HINSTANCE', 'HMODULE', 'LPVOID', 'LPCVOID', 'HDC', 'HKEY', 'HMMIO', 'LPSECURITY_ATTRIBUTES', 'LARGE_INTEGER',
               'FILETIME', 'SYSTEMTIME', 'RECT', 'POINT', 'MSG', 'WPARAM', 'LPARAM', 'LRESULT', 'HRESULT', 'SIZE_T',
               'LPDWORD', 'LPBYTE', 'LPWORD', 'LPLONG', 'HGLOBAL', 'HRSRC', 'HICON', 'HCURSOR', 'HMENU', 'HFONT',
               'CRITICAL_SECTION', 'LPCRITICAL_SECTION', 'OVERLAPPED', 'LPOVERLAPPED', 'WNDCLASSA', 'tagRECT', 'tagPOINT',
               'tagMSG', 'MMRESULT', 'LPMMIOINFO', 'LPMMCKINFO', 'WAVEFORMATEX', 'GUID', 'IID', 'ULONGLONG', 'LONGLONG'}


def class_names(text):
    """Identifiers used as types that we do not know: emitted as `typedef char X;`
    so that `this + 0x28` style byte arithmetic compiles."""
    out = set()
    for t in re.findall(r'\b([A-Za-z_]\w*)\s*\*', text):
        if t not in KNOWN_TYPES and t not in WIN32_TYPES and not re.match(r'(FUN_|DAT_|LAB_|s_|PTR_|param_|local_|[a-z]+Var\d+$|this_?$|in_ECX|unused_)', t) and not t.islower():
            out.add(t)
    for t in re.findall(r'\(([A-Z][A-Za-z0-9_]*)\s*\*+\)', text):
        if t not in KNOWN_TYPES and t not in WIN32_TYPES:
            out.add(t)
    return out


_conv_csv = {}
_conv_argc = {}
_conv_varargs = set()
_conv_pop = {}
for _r in _csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'conventions.csv'))):
    _conv_csv[int(_r['address'], 16)] = _r['convention']
    _conv_argc[int(_r['address'], 16)] = int(_r['argc'])
    _conv_pop[int(_r['address'], 16)] = int(_r['ret_pop'])
    if _r.get('varargs') == '1':
        _conv_varargs.add(int(_r['address'], 16))


_HOOKED_SIGS = None
_CC_KW = {'BEA_THISCALL': '__thiscall', 'BEA_CDECL': '__cdecl', 'BEA_STDCALL': '__stdcall'}


def hooked_sig(addr):
    """Signature of a hand-written replacement (src/bea, not the generated
    dirs) registered for `addr`: the definition `static RET CC Name(params)`
    is authoritative where Ghidra's header is not (e.g. Random::Next is a
    thiscall on the generator state, Ghidra says `int __cdecl (void)`)."""
    global _HOOKED_SIGS
    if _HOOKED_SIGS is None:
        _HOOKED_SIGS = {}
        skip_dirs = {os.path.join(ROOT, 'src', 'bea', d) for d in ('autoport', 'verified', 'direct')}
        for path in glob.glob(os.path.join(ROOT, 'src', '**', '*.cpp'), recursive=True):
            if os.path.dirname(os.path.abspath(path)) in {os.path.abspath(d) for d in skip_dirs}:
                continue
            text = open(path, encoding='utf-8', errors='replace').read()
            for m in re.finditer(r'BEA_HOOK\(\s*(0x[0-9A-Fa-f]+)\s*,\s*([A-Za-z_]\w*)\s*\)', text):
                a, fname = int(m.group(1), 16), m.group(2)
                d = re.search(r'^(?:static\s+|inline\s+)*((?:const\s+)?[A-Za-z_][\w:]*(?:\s*\*+|\s+long\s+double)?)\s+(BEA_THISCALL|BEA_CDECL|BEA_STDCALL)\s+' + fname + r'\s*\(([^)]*)\)', text, re.M)
                if not d:
                    continue
                ret, cc, params = d.group(1).strip(), _CC_KW[d.group(2)], d.group(3).strip()
                if ret == 'long double':
                    ret = 'float10'
                plist = [] if params in ('', 'void') else [re.sub(r'\s*\b\w+$', '', q.strip()).strip() for q in params.split(',')]
                _HOOKED_SIGS[a] = (ret, cc, plist, a)
    return _HOOKED_SIGS.get(addr)


def stub_target(addr):
    """X when the function at addr is exactly `add/sub ecx, imm` or
    `mov dword ptr [ecx], imm` followed by `jmp X`, else None."""
    ins = list(md.disasm(img[addr - base:addr - base + 16], addr))[:2]
    if len(ins) != 2 or ins[1].mnemonic != 'jmp' or not re.fullmatch(r'0x[0-9a-f]+', ins[1].op_str):
        return None
    first = '%s %s' % (ins[0].mnemonic, ins[0].op_str)
    if not re.fullmatch(r'(?:add|sub) ecx, (?:0x)?[0-9a-f]+|mov dword ptr \[ecx\], 0x[0-9a-f]+', first):
        return None
    return int(ins[1].op_str, 16)


def raw_sig(addr):
    """A signature from the disassembly alone, for a callee whose decompiled
    header is unusable (a CRT function with `in_ECX`, a convention Ghidra got
    wrong): the convention and stack-argument count of conventions.csv, raw
    dword arguments and a dword result.  The caller passes bits (bea_arg), so
    float arguments arrive intact; a float *result* would be wrong, and
    tools/check_st0.py (an x87 value the typed-int callee leaves) and the
    fingerprint are the gates for that.  Only for the CRT range: a game
    function with a bad header is decompiled too and should be fixed there.
    2026-10-21: 677 callers were refused for unknown CRT callee signatures."""
    # DISABLED 2026-10-21: conventions.csv is back to the game range (its CRT
    # rows made check_ecx refuse 55 good ports), and the one batch built with
    # these signatures could not be judged (two batch loops ran at once).
    # Re-enable only with a CRT convention table reviewed by hand.
    if True or addr < 0x55a420 or addr in _conv_varargs:
        return None
    conv = _conv_csv.get(addr)
    argc = _conv_argc.get(addr)
    if conv not in ('__thiscall', '__stdcall', '__cdecl') or argc is None:
        return None
    params = ['uint32_t'] * argc
    if conv == '__thiscall':
        params = ['void *'] + params
    return 'uint32_t', conv, params, addr


def callee_sig(name):
    """(ret_type, conv keyword, [param type strings incl. this]) of a callee
    from its own decompile header, or None.  The header convention must agree
    with the one inferred from the disassembly (register-passed arguments
    hidden from Ghidra would otherwise be dropped).  CRT functions come from
    tools/crt_sigs.py, hand-written replacements from their definitions."""
    addr = name_to_addr.get(name)
    if addr is None:
        return None
    if addr in CRT_SIGS:
        cret, cconv, cparams, _cname = CRT_SIGS[addr]
        return cret, cconv, list(cparams), addr
    if name in NAME_SIGS:
        cret, cconv, cparams = NAME_SIGS[name]
        return cret, cconv, list(cparams), addr
    hs = hooked_sig(addr)
    if hs:
        return hs
    if _conv_csv.get(addr, 'custom') == 'custom':
        # a stub that adjusts or initialises `this` and jumps on (`add ecx,
        # 0xc; jmp X`, `mov dword ptr [ecx], vtbl; jmp X`) takes X's arguments
        tgt = stub_target(addr)
        if tgt is not None:
            s = callee_sig('FUN_%08x' % tgt)
            if s and s[1] == '__thiscall':
                return s[0], s[1], list(s[2]), addr
        return None
    files = glob.glob(os.path.join(ROOT, 'ghidra_out', 'per_function', '%08x_*.c' % addr))
    if not files:
        return raw_sig(addr)
    src = open(files[0], encoding='utf-8', errors='replace').read()
    src = re.sub(r'^//.*$', '', src, flags=re.M)
    src = re.sub(r'/\*.*?\*/', '', src, flags=re.S)
    m = re.search(r'^(' + TYPE_RE + r')\s+(?:(__thiscall|__cdecl|__stdcall|__fastcall)\s+)?([A-Za-z_][\w:]*)\s*\(([^)]*)\)\s*\{', src, re.M | re.S)
    if not m:
        return raw_sig(addr)
    # Ghidra omits the keyword for the program's default convention (__stdcall
    # on x86 Windows); accept it when the disassembly analysis agrees
    conv_kw = m.group(2) or ('__stdcall' if _conv_csv.get(addr) == '__stdcall' else None)
    if not conv_kw or conv_kw != _conv_csv.get(addr):
        return raw_sig(addr)
    params = m.group(4).strip()
    plist = [] if params in ('', 'void') else [re.sub(r'\s*\b\w+$', '', p.strip()).strip() for p in params.split(',')]
    # a trailing identifier that is a pointer: "CThing *this" -> "CThing *"
    plist = [p if p.endswith('*') or p in KNOWN_TYPES else p for p in plist]
    nstack = len(plist) - (1 if conv_kw == '__thiscall' and plist and plist[0].endswith('*') and 'this' in params.split(',')[0] else 0)
    if addr in _conv_argc and conv_kw == '__cdecl':
        if addr in _conv_varargs:
            if nstack < _conv_argc[addr]:
                return None          # header shorter than the fixed part: argument list unknown
            plist = plist[:(1 if nstack != len(plist) else 0) + _conv_argc[addr]] + ['...']
        elif nstack != _conv_argc[addr]:
            return None              # Ghidra's header drops/invents stack arguments (0x42fa80)
    return m.group(1).strip(), conv_kw, plist, addr


def disasm_cached(addr, size):
    return list(md.disasm(bytes(img[addr - base: addr - base + size]), addr))


_FN_SIZES = None


def reach_disp(addr, size, depth=0, seen=None):
    """Largest register-relative displacement used by a function and,
    transitively, its direct callees (a callee handed `this` may reach further
    into the object than the caller; the sandbox copy must cover that)."""
    global _FN_SIZES
    if _FN_SIZES is None:
        import csv
        _FN_SIZES = {int(r['address'], 16): int(r['size']) for r in
                     csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace'))}
    seen = set() if seen is None else seen
    if addr in seen or depth > 6:
        return 0
    seen.add(addr)
    best = 0
    for i in disasm_cached(addr, size):
        for mm in re.finditer(r'\[(e[a-d]x|esi|edi)(?: \+ e[a-z]{2}(?:\*\d)?)?(?: \+ (0x[0-9a-f]+|\d+))?\]', i.op_str):
            if mm.group(2):
                k = int(mm.group(2), 16) if mm.group(2).startswith('0x') else int(mm.group(2))
                if k < 0x100000:
                    best = max(best, k)
        if i.mnemonic in ('call', 'jmp') and i.op_str.startswith('0x'):
            t = int(i.op_str, 16)
            if t in _FN_SIZES and not (addr <= t < addr + size):
                best = max(best, reach_disp(t, _FN_SIZES[t], depth + 1, seen))
    return best


def analyse_asm(addr, size):
    ins = disasm_cached(addr, size)
    rets = [i for i in ins if i.mnemonic == 'ret']
    pops = set(int(i.op_str, 16) if i.op_str.startswith('0x') else (int(i.op_str) if i.op_str else 0) for i in rets)
    if not pops and addr in _conv_pop:
        # no ret: it leaves through tail jumps and pops what its targets pop
        # (tools/conventions.py tail_targets; check_ret.py follows the jumps)
        pops = {_conv_pop[addr]}
    if len(pops) != 1:
        raise Skip('inconsistent ret')
    pop = pops.pop()
    # Which instructions write EAX anywhere in the function?  A `void`
    # function that writes EAX may be returning a value Ghidra missed
    # (classically `mov eax, ecx` = return this).
    # EAX at each `ret`: whatever the last writer in the straight-line block
    # left there is what callers may use (VC6 returns `this` or an out-pointer
    # this way even when the decompiler says void).  Modes:
    #   none  - no writer before any ret
    #   this  - every last writer is `mov eax, ecx`
    #   arg   - every last writer is `mov eax, [esp+K]` for the same argument
    #   other - anything else (shadow stub passes the original's EAX through;
    #           the port is not promotable until reviewed)
    def writes_eax(p):
        return (re.match(r'(mov|lea|xor|or|and|sub|add|inc|dec|neg|not|movzx|movsx|setne|sete|setg|setl|setb|seta|sbb|adc|imul|cdq|pop|cmov\w*)\b', p.mnemonic)
                and re.match(r'(eax|ax|al|ah)\b', p.op_str)) or p.mnemonic == 'call'
    last_writers = []
    stored_writers = set()
    n_rets = sum(1 for i in ins if i.mnemonic == 'ret')
    # Branch targets inside the function: the writer found by scanning back
    # from a `ret` only determines EAX there if no branch lands between the
    # writer and the ret (0x426a20: `jne ret` skips the setter block and EAX
    # is still the argument); a block with no writer that is itself a branch
    # target inherits EAX from unknown predecessors.
    branch_targets = set()
    for i in ins:
        if i.mnemonic.startswith('j') and i.op_str.startswith('0x'):
            branch_targets.add(int(i.op_str, 16))
    for k, i in enumerate(ins):
        if i.mnemonic != 'ret':
            continue
        depth_at = 0
        w = None
        lo = k
        for j in range(k - 1, -1, -1):
            p = ins[j]
            if p.mnemonic in ('jmp', 'ret'):
                break
            lo = j
            if writes_eax(p):
                w = j
                break
        if w is not None:
            joined = any(ins[w].address < t <= i.address for t in branch_targets)
        else:
            joined = any(ins[lo].address <= t <= i.address for t in branch_targets) and lo != 0
        if joined:
            last_writers.append(('?', '?', 0))      # EAX depends on the path taken
            continue
        if w is not None:
            # stack depth at the writer (pushes still live at that point)
            d = 0
            for q in ins[:w]:
                if q.mnemonic == 'push': d += 4
                elif q.mnemonic == 'pop': d -= 4
                elif q.mnemonic == 'sub' and q.op_str.startswith('esp, '): d += int(q.op_str[5:], 0)
                elif q.mnemonic == 'add' and q.op_str.startswith('esp, '): d -= int(q.op_str[5:], 0)
            wm, wo = ins[w].mnemonic, ins[w].op_str
            # setter pattern: the last writer's value is then stored into
            # this+K (`mov [ecx+K], eax ; ret`), so EAX at ret equals the
            # field's final value, which the port can read back.
            for j in range(w + 1, k):
                q = ins[j]
                mm = re.fullmatch(r'dword ptr \[(e[a-d]x|esi|edi|ebp)(?: \+ (0x[0-9a-f]+|\d+))?\], eax', q.op_str) if q.mnemonic == 'mov' else None
                if mm:
                    koff = int(mm.group(2), 0) if mm.group(2) else 0
                    # offset of the base register from `this` on the linear
                    # path from entry (None = not derived from this)
                    regs = {'ecx': 0}
                    for r in ins[:j]:
                        rm, ro = r.mnemonic, r.op_str
                        dst, _, src = ro.partition(', ')
                        if rm == 'call':
                            regs = {x: v for x, v in regs.items() if x not in ('eax', 'ecx', 'edx')}
                            continue
                        if rm in ('cmp', 'test', 'push'):
                            continue
                        bname = re.sub(r'^[abcd]([lh])$', lambda m_: 'e' + m_.group(0)[0] + 'x', dst)
                        if bname in ('ax', 'bx', 'cx', 'dx', 'si', 'di', 'bp'):
                            bname = 'e' + bname
                        if bname not in ('eax', 'ebx', 'ecx', 'edx', 'esi', 'edi', 'ebp'):
                            continue
                        if rm == 'mov' and src in regs:
                            regs[bname] = regs[src]
                        elif rm == 'add' and bname in regs and re.fullmatch(r'0x[0-9a-f]+|\d+', src):
                            regs[bname] += int(src, 0)
                        elif rm == 'sub' and bname in regs and re.fullmatch(r'0x[0-9a-f]+|\d+', src):
                            regs[bname] -= int(src, 0)
                        elif rm == 'lea' and (lm := re.fullmatch(r'\[(e\w\w) \+ (0x[0-9a-f]+|\d+)\]', src)) and lm.group(1) in regs:
                            regs[bname] = regs[lm.group(1)] + int(lm.group(2), 0)
                        else:
                            regs.pop(bname, None)
                    breg = mm.group(1)
                    later = any(re.match(r'(?:\w+ ptr )?\[', r.op_str) and r.mnemonic not in ('cmp', 'test') for r in ins[j + 1:k])
                    if breg in regs and regs[breg] >= 0 and not later:
                        wm, wo = 'mov', 'eax, dword ptr [ecx + 0x%x]' % (regs[breg] + koff)
                        stored_writers.add(len(last_writers))
                    break
            last_writers.append((wm, wo, d))
    def writer_expr(m, o):
        # C expression for the value a writer leaves in EAX, or None
        if m == 'mov' and o == 'eax, ecx':
            return 'this_'
        mm = re.fullmatch(r'eax, dword ptr \[ecx(?: \+ (0x[0-9a-f]+|\d+))?\]', o)
        if m == 'mov' and mm:
            return '*(uint32_t*)((char*)this_ + 0x%x)' % (int(mm.group(1), 0) if mm.group(1) else 0)
        mm = re.fullmatch(r'eax, \[ecx \+ (0x[0-9a-f]+|\d+)\]', o)
        if m == 'lea' and mm:
            return '(uint32_t)((char*)this_ + 0x%x)' % int(mm.group(1), 0)
        mm = re.fullmatch(r'eax, dword ptr \[(0x[0-9a-f]+)\]', o)
        if m == 'mov' and mm:
            return 'GLOBAL_AT(uint32_t, %s)' % mm.group(1)
        mm = re.fullmatch(r'eax, (0x[0-9a-f]+|-?\d+)', o)
        if m == 'mov' and mm:
            return '(uint32_t)%s' % mm.group(1)
        if m == 'xor' and o == 'eax, eax':
            return '(uint32_t)0'
        return None
    if not last_writers:
        eax_mode = ('none', None)
    elif all(m == 'mov' and o == 'eax, ecx' for m, o, d in last_writers):
        eax_mode = ('this', None)
    elif all(writer_expr(m, o) is not None for m, o, d in last_writers) and len(set(writer_expr(m, o) for m, o, d in last_writers)) == 1:
        # 'exprstore': every path stores the value into the field it names,
        # so reading the field back at return is exact even though the body
        # assigns it (the 'expr' guard in transform() does not apply)
        eax_mode = ('exprstore' if len(stored_writers) == len(last_writers) else 'expr', writer_expr(*last_writers[0][:2]))
    else:
        idxs = set()
        ok = True
        for m, o, d in last_writers:
            mm = re.fullmatch(r'eax, dword ptr \[esp \+ (0x[0-9a-f]+|\d+)\]', o) if m == 'mov' else None
            if mm and int(mm.group(1), 0) >= d + 4:
                idxs.add((int(mm.group(1), 0) - d - 4) // 4)
            else:
                ok = False
        eax_mode = ('arg', idxs.pop()) if ok and len(idxs) == 1 else \
            ('other', ('allcalls' if len(last_writers) == n_rets else 'callsornone')
             if last_writers and all(m == 'call' for m, o, d in last_writers) else None)
    eax_live = eax_mode
    st0_live = False
    for k, i in enumerate(ins):
        if i.mnemonic != 'ret':
            continue
        for j in range(k - 1, max(-1, k - 6), -1):
            p = ins[j]
            if p.mnemonic in ('pop', 'add', 'sub') and not p.op_str.startswith('eax'):
                continue
            if p.mnemonic in ('fld', 'fild', 'fadd', 'fsub', 'fmul', 'fdiv', 'fdivr', 'fsubr', 'fsqrt', 'fchs', 'fabs', 'faddp', 'fsubp', 'fmulp', 'fdivp', 'fxch', 'fcos', 'fsin', 'fldz', 'fld1', 'fdivrp', 'fsubrp'):
                st0_live = True
            break
    # estimate the number of stack arguments actually read: walk linearly,
    # tracking pushes/pops, and look at [esp + K] / [ebp + K] references
    depth = 0
    max_arg = 0
    ebp_frame = False
    for i in ins:
        m, o = i.mnemonic, i.op_str
        if m == 'push':
            depth += 4
        elif m == 'pop':
            depth -= 4
        elif m == 'sub' and o.startswith('esp, '):
            depth += int(o[5:], 0)
        elif m == 'add' and o.startswith('esp, '):
            depth -= int(o[5:], 0)
        elif (m, o) == ('mov', 'ebp, esp'):
            ebp_frame = True
            frame_depth = depth
        for mm in re.finditer(r'\[esp \+ (0x[0-9a-f]+|\d+)\]', o):
            k = int(mm.group(1), 16) if mm.group(1).startswith('0x') else int(mm.group(1))
            if k >= depth + 4:
                max_arg = max(max_arg, (k - depth - 4) // 4 + 1)
        if ebp_frame:
            for mm in re.finditer(r'\[ebp \+ (0x[0-9a-f]+|\d+)\]', o):
                k = int(mm.group(1), 16) if mm.group(1).startswith('0x') else int(mm.group(1))
                if k >= 8:
                    max_arg = max(max_arg, (k - frame_depth - 8) // 4 + 1)
        if m == 'ret':
            break
    # largest displacement used with a non-stack base register: an upper
    # bound on how far into `this` (or a pointer derived from it) the code reaches
    max_disp = 0
    for i in ins:
        for mm in re.finditer(r'\[(e[a-d]x|esi|edi)(?: \+ e[a-z]{2}(?:\*\d)?)?(?: \+ (0x[0-9a-f]+|\d+))?\]', i.op_str):
            if mm.group(2):
                k = int(mm.group(2), 16) if mm.group(2).startswith('0x') else int(mm.group(2))
                if k < 0x100000:
                    max_disp = max(max_disp, k)
    # absolute-address operands: record the access width/kind per global, and
    # the float32 constants the x87 code loads (Ghidra prints them as doubles)
    global_kind = {}
    float_consts = set()
    x87 = ('fld', 'fst', 'fstp', 'fadd', 'fsub', 'fsubr', 'fmul', 'fdiv', 'fdivr', 'fcom', 'fcomp', 'fild', 'fist', 'fistp')
    for i in ins:
        for mm in re.finditer(r'(byte|word|dword|qword) ptr \[(0x[0-9a-f]+)\]', i.op_str):
            width, ga = mm.group(1), int(mm.group(2), 16)
            if i.mnemonic in x87:
                kind = {'dword': 'float', 'qword': 'double', 'word': 'short'}.get(width, 'int')
                if i.mnemonic in ('fild', 'fist', 'fistp'):
                    kind = {'dword': 'int', 'qword': 'longlong', 'word': 'short'}[width]
                if kind == 'float' and i.mnemonic in ('fld', 'fadd', 'fsub', 'fsubr', 'fmul', 'fdiv', 'fdivr', 'fcom', 'fcomp'):
                    off = ga - base
                    if 0 <= off + 4 <= len(img):
                        import struct as _st
                        float_consts.add(_st.unpack_from('<f', img, off)[0])
            else:
                kind = {'byte': 'char', 'word': 'short', 'dword': 'int', 'qword': 'longlong'}[width]
            # an x87 float access decides: 0x46d470 first stores 1.0f to
            # 0x672e20 with a plain `mov dword`, then reads it with fld; typed
            # int, the port compared and stored truncated values (2026-10-20)
            if kind in ('float', 'double') and global_kind.get(ga) == 'int':
                global_kind[ga] = kind
            global_kind.setdefault(ga, kind)
    return pop, eax_live, st0_live, max_arg, max_disp, global_kind, float_consts


TYPE_RE = r'(?:unsigned |signed )?[A-Za-z_][A-Za-z0-9_]*(?:\s*\*+)?'


def _match_paren(text, i):
    """index of the ')' matching the '(' at text[i]."""
    depth = 0
    for k in range(i, len(text)):
        if text[k] == '(':
            depth += 1
        elif text[k] == ')':
            depth -= 1
            if depth == 0:
                return k
    return -1


def _vtable_owner(body, v, at=None):
    """X when the definition of `v` reaching the call at offset `at` is
    `v = *(int *)X;` or `v = *X;` and X is a plain variable never assigned in
    the body; else None.  Ghidra reuses a temporary (`iVar1 = *(int *)this;`
    for the vtable, `iVar1 = FUN_004aa630(...)` elsewhere: 23 of the 40
    refusals left on 2026-10-21), so the reaching definition is found walking
    back from the call: an assignment in the same or an enclosing block
    counts, one inside a sibling block that closed before the call (a
    conditional redefinition) gives up.  Without `at`, the single-assignment
    rule."""
    if re.search(r'\b' + re.escape(v) + r'\s*(?:\+\+|--|[-+*/|&^]=)', body) or re.search(r'(?:\+\+|--)' + re.escape(v) + r'\b', body):
        return None
    asg_re = re.compile(r'^\s*' + re.escape(v) + r' = (.+);\s*$', re.M)
    if at is None:
        asg = asg_re.findall(body)
        if len(asg) != 1:
            return None
        rhs = asg[0]
    else:
        rhs, inner = None, 0
        defs = [(m.start(), m.end(), m.group(1)) for m in asg_re.finditer(body) if m.end() <= at]
        pos = at
        for st, en, r in reversed(defs):
            seg = body[en:pos]
            # blocks between the definition and the call: a `}` not matched by
            # a `{` in the segment means the definition sits in a block that
            # closed before the call
            depth = 0
            for c in seg:
                if c == '{':
                    depth += 1
                elif c == '}':
                    depth -= 1
            if depth < 0:
                return None
            rhs = r
            break
        if rhs is None:
            return None
    m = re.fullmatch(r'\*(?:\((?:int|undefined4|uint) \*\))?(\w+)', rhs.strip())
    if not m:
        return None
    x = m.group(1)
    if re.search(r'^\s*' + re.escape(x) + r'\s*(?:\+\+|--|[-+*/|&^]?=(?!=))', body, re.M) or re.search(r'(?:\+\+|--)' + re.escape(x) + r'\b', body):
        return None
    return x


def rewrite_fptr_calls(body):
    """The single-dereference call shapes Ghidra prints for virtual calls
    (NOTES A1-15; 56 game functions): `(*(code *)(*OBJ)[IDX])(ARGS)` is slot
    IDX of the object OBJ (`(*DAT_00888a50)[0x5e]`, the sound system), and
    `(*(code *)**(T **)EXPR)(ARGS)` is slot 0 of the object EXPR (`this`,
    `*piVar3`, `(iVar5 + 8)` for an embedded object, `(&DAT_0089c9a4)
    [DAT_0089ce4c]`).  Both become bea_vcall<R>(OBJ, OFF, ARGS) for
    rewrite_vcalls' convention; R is float10 under a float cast."""
    key = '(*(code *)'
    out, i = [], 0
    while True:
        j = body.find(key, i)
        if j < 0:
            out.append(body[i:])
            break
        k = j + len(key)
        obj = off = None
        close = None
        m = re.match(r'\(\*([A-Za-z_]\w*(?:\[\w+\])?)\)\[(0x[0-9a-f]+|\d+)\]\)', body[k:])
        if m:
            obj, off, close = m.group(1), int(m.group(2), 0) * 4, k + m.end()
        else:
            m = re.match(r'\*\*\((?:undefined4|int|uint|code) \*\*\)', body[k:])
            if m:
                e = k + m.end()
                if e < len(body) and body[e] == '(':
                    e2 = _match_paren(body, e) + 1
                    # `(&DAT_x)[idx]`: an element of a global table
                    mi = re.match(r'\[\w+\]', body[e2:])
                    if mi:
                        e2 += mi.end()
                    expr = body[e:e2]
                else:
                    mv = re.match(r'\*?[A-Za-z_]\w*(?:\[\w+\])?', body[e:])
                    if not mv:
                        out.append(body[i:k]); i = k; continue
                    expr = mv.group(0); e2 = e + mv.end()
                if e2 < len(body) and body[e2] == ')':
                    obj, off, close = expr, 0, e2 + 1
        if obj is None:
            out.append(body[i:k]); i = k; continue
        argopen = close
        while argopen < len(body) and body[argopen] in ' \t\r\n':
            argopen += 1
        if argopen >= len(body) or body[argopen] != '(':
            out.append(body[i:k]); i = k; continue
        argclose = _match_paren(body, argopen)
        args = body[argopen + 1:argclose].strip()
        before = body[max(0, j - 24):j]      # `bea_fcast<float10>(` is 19 characters
        ret = 'float10' if re.search(r'(?:\((?:float10|float|double)\)|bea_fcast<(?:float10|float|double)>\()\s*$', before) else 'uint32_t'
        out.append(body[i:j] + 'bea_vcall<%s>(%s, 0x%x%s)' % (ret, obj, off, (', ' + args) if args else ''))
        i = argclose + 1
    return ''.join(out)


def rewrite_vcalls(body):
    body = rewrite_fptr_calls(body)
    """Ghidra prints a virtual call as `(**(code **)(*(int *)OBJ + OFF))(ARGS)`
    (pass 3 hides the `this` register argument), which is not C++.  The
    receiver is the object whose first dword is the vtable, so the call
    becomes `bea_vcall<R>(OBJ, OFF, ARGS)`, a thiscall through slot OFF/4.
    R is float10 when the decompile casts the result to a float type,
    otherwise uint32_t (EAX)."""
    key = '(**(code **)'
    out = []
    i = 0
    while True:
        j = body.find(key, i)
        if j < 0:
            out.append(body[i:])
            break
        # receiver expression: `(*(int *)OBJ + OFF)` or `*(int *)OBJ`
        k = j + len(key)
        if k < len(body) and body[k] == '(':
            e = _match_paren(body, k)
            inner = body[k + 1:e]
            close = e + 1
        else:
            m = re.match(r'\*+\((?:int|undefined4|code \*\*?|uint|undefined) \*+\)', body[k:])
            if not m:
                # `(**(code **)*puVar2)(1)`: slot 0 (the deleting destructor)
                # of the object held in a plain variable, no cast
                mv = re.match(r'\*([A-Za-z_]\w*)(?![\w(\[])', body[k:])
                if not mv:
                    out.append(body[i:k]); i = k; continue
                inner = body[k:k + mv.end()]
                close = k + mv.end()
            else:
                e = k + m.end()
                if e < len(body) and body[e] == '(':
                    e = _match_paren(body, e) + 1
                else:
                    m2 = re.match(r'\w+(?:\[\d+\])?', body[e:])
                    if not m2:
                        out.append(body[i:k]); i = k; continue
                    e += m2.end()
                inner = body[k:e]
                close = e
        # the whole `(**(code **)RECV)` ends at the ')' matching the one at j
        if close >= len(body) or body[close] != ')':
            out.append(body[i:k]); i = k; continue
        argopen = close + 1
        # Ghidra wraps long calls: the argument list may start on the next line
        while argopen < len(body) and body[argopen] in ' \t\r\n':
            argopen += 1
        if argopen >= len(body) or body[argopen] != '(':
            out.append(body[i:k]); i = k; continue
        argclose = _match_paren(body, argopen)
        args = body[argopen + 1:argclose].strip()
        mm = re.fullmatch(r'\*\((?:int|undefined4|uint|code \*\*?) \*\)(.+?)(?:\s*\+\s*(0x[0-9a-f]+|\d+))?', inner.strip(), re.S)
        m2 = re.fullmatch(r'\*(.+?)\s*\+\s*(0x[0-9a-f]+|\d+)', inner.strip(), re.S)
        if mm:
            obj = mm.group(1).strip()
            off = int(mm.group(2), 0) if mm.group(2) else 0
        elif m2:
            # `*param_1 + 4`: the vtable pointer read from param_1, slot at +4
            obj = m2.group(1).strip()
            off = int(m2.group(2), 0)
        elif re.fullmatch(r'(\w+)\s*\+\s*(0x[0-9a-f]+|\d+)', inner.strip()) and _vtable_owner(body, inner.strip().split()[0], j):
            # `(**(code **)(iVar1 + 0xf0))(...)` with the vtable pointer read
            # into iVar1 from an object variable that is never reassigned
            obj = _vtable_owner(body, inner.strip().split()[0], j)
            off = int(re.fullmatch(r'\w+\s*\+\s*(0x[0-9a-f]+|\d+)', inner.strip()).group(1), 0)
        elif inner.strip().startswith('*'):
            # `**(undefined4 **)(this + 8)`: the vtable is the first dword of
            # the object whose pointer is the expression minus one deref
            obj = inner.strip()[1:]
            off = 0
        else:
            out.append(body[i:k]); i = k; continue
        if obj.startswith('(') and _match_paren(obj, 0) == len(obj) - 1:
            obj = obj[1:-1]
        # result type from an enclosing cast
        before = body[max(0, j - 24):j]      # `bea_fcast<float10>(` is 19 characters
        ret = 'float10' if re.search(r'(?:\((?:float10|float|double)\)|bea_fcast<(?:float10|float|double)>\()\s*$', before) else 'uint32_t'
        out.append(body[i:j] + 'bea_vcall<%s>(%s, 0x%x%s)' % (ret, obj, off, (', ' + args) if args else ''))
        i = argclose + 1
    return ''.join(out)


def strip_eh_frame(body):
    """Remove the VC6 exception-frame boilerplate Ghidra decompiles as
    `saved = ExceptionList; ExceptionList = &saved; handler = &LAB_x; ...
    state = N; ... ExceptionList = saved;`.  Returns the stripped body or
    None if ExceptionList is used in any other way."""
    if 'ExceptionList' not in body:
        return body
    m = re.search(r'^\s*(\w+) = ExceptionList;\s*$', body, re.M)
    if not m:
        return None
    saved = m.group(1)
    body = re.sub(r'^\s*' + saved + r' = ExceptionList;\s*\n', '', body, flags=re.M)
    body = re.sub(r'^\s*ExceptionList = &' + saved + r';\s*\n', '', body, flags=re.M)
    body = re.sub(r'^\s*ExceptionList = ' + saved + r';\s*\n', '', body, flags=re.M)
    body = re.sub(r'^\s*(\w+) = &LAB_[0-9a-f]{8};\s*\n', '', body, flags=re.M)
    if 'ExceptionList' in body:
        return None
    # dead stores: locals that are only ever assigned integer constants
    for dm in re.finditer(r'^\s*(?:undefined4|int|uint|undefined1 \*|void \*)\s+(\w+);\s*$', body, re.M):
        L = dm.group(1)
        uses = re.findall(r'\b' + L + r'\b', body)
        assigns = re.findall(r'^\s*' + L + r' = (?:-?\d+|0x[0-9a-f]+);\s*$', body, re.M)
        if len(uses) == len(assigns) + 1 and assigns:
            body = re.sub(r'^\s*' + L + r' = (?:-?\d+|0x[0-9a-f]+);\s*\n', '', body, flags=re.M)
    # declarations of the frame variables that are now unused
    for L in (saved,):
        if len(re.findall(r'\b' + L + r'\b', body)) == 1:
            body = re.sub(r'^\s*[\w ]+\*?\s*' + L + r';\s*\n', '', body, flags=re.M)
    return body


def passthrough_calls(body, allow_zero=False):
    """A void function whose every `ret` follows a call leaves the callee's
    EAX to its own caller (wrappers around a base-class method).  Turn each
    `CALL(...);` that directly precedes a `return;` (or ends the body) into
    `return CALL(...);`.  Returns the new body, or None if some return is
    not preceded by a call statement."""
    stmts = re.split(r'(?<=[;{}])\s*\n', body.strip('\n'))
    out = []
    ok = True
    def is_call(t):
        t = t.strip()
        return bool(re.match(r'(?:\(\*\*\(code \*\*\)|[A-Za-z_][\w:]*\s*\()', t)) and t.endswith(');') \
            and not re.match(r'(if|while|for|switch|return)\b', t) and '=' not in t.split('(', 1)[0]
    passed = 0
    for k, st in enumerate(stmts):
        if re.fullmatch(r'\s*return;\s*', st):
            if out and is_call(out[-1]):
                out[-1] = re.sub(r'^(\s*)', r'\1return ', out[-1], count=1)
                passed += 1
                continue
            if allow_zero:
                out.append(re.sub(r'return;', 'return 0;   /* no value on this path in the original */', st))
                continue
            ok = False
        out.append(st)
    if out and is_call(out[-1]) and not out[-1].lstrip().startswith('return '):
        out[-1] = re.sub(r'^(\s*)', r'\1return ', out[-1], count=1)
        passed += 1
    elif out and not re.match(r'\s*return ', out[-1]):
        if allow_zero:
            out.append('  return 0;   /* no value on this path in the original */')
        else:
            ok = False
    if not ok or not passed:
        return None
    return '\n' + '\n'.join(out) + '\n'


def wrap_call_args(body, names):
    """Wrap each top-level argument of calls to `names` in bea_arg(...)."""
    for nm in names:
        pat = re.compile(r'(?<![\w.>])' + re.escape(nm) + r'\s*\(')
        i = 0
        while True:
            m = pat.search(body, i)
            if not m:
                break
            o = m.end() - 1
            c = _match_paren(body, o)
            if c < 0:
                break
            inner = body[o + 1:c]
            args, depth, cur = [], 0, ''
            for ch in inner:
                if ch in '([': depth += 1
                elif ch in ')]': depth -= 1
                if ch == ',' and depth == 0:
                    args.append(cur); cur = ''
                else:
                    cur += ch
            if cur.strip() or args:
                args.append(cur)
            new = '(' + ', '.join('bea_arg(%s)' % a.strip() for a in args) + ')'
            body = body[:o] + new + body[c + 1:]
            i = o + len(new)
    return body


def guard_loops(body):
    """Prefix every loop condition with bea_shadow::tick() && (...)."""
    out = []
    i = 0
    pat = re.compile(r'\b(while|for)\s*\(')
    while True:
        m = pat.search(body, i)
        if not m:
            out.append(body[i:])
            break
        start = m.end() - 1
        end = _match_paren(body, start)
        if end < 0:
            out.append(body[i:])
            break
        inner = body[start + 1:end]
        if m.group(1) == 'for':
            parts = inner.split(';')
            if len(parts) == 3:
                cond = parts[1].strip()
                parts[1] = ' BEA_LOOP_GUARD((' + (cond if cond else '1') + '))'
                inner = ';'.join(parts)
        else:
            inner = 'BEA_LOOP_GUARD((' + inner + '))'
        out.append(body[i:start + 1] + inner)
        i = end
    return ''.join(out)


_ECX_READERS = None


def _ecx_readers():
    """Game functions whose body reads ECX (in_ECX, or a __thiscall header)."""
    global _ECX_READERS
    if _ECX_READERS is None:
        _ECX_READERS = set()
        for p in glob.glob(os.path.join(ROOT, 'ghidra_out', 'per_function', '*.c')):
            t = open(p, encoding='utf-8', errors='replace').read()
            if 'in_ECX' in t or '__thiscall' in t.split('{')[0]:
                _ECX_READERS.add(int(os.path.basename(p)[:8], 16))
    return _ECX_READERS


_FRAME_DECL = re.compile(r'^(\s*)(?!return\b|goto\b)((?:unsigned |signed )?\w+(?:\s*\*+)?)\s*((?:local|[a-z][A-Za-z]*Stack)_([0-9a-f]+))'
                         r'\s*(?:\[\s*(\w+)\s*\])?\s*(?:=\s*0\s*)?;\s*$', re.M)   # not `return local_4c;` (0x4ac140)
# `[a-z][A-Za-z]*Stack`: also `pCStack_14` (a class pointer), which stayed a
# plain local inside the frame of 0x49fc10 and 0x4f4920 - a message field the
# callee read as null (2026-10-27)


def emulate_frame(body):
    """Lay the stack locals out as the original frame when one's address
    escapes.  Ghidra splits a stack area into separately named variables by
    how the function itself accesses it: in 0x412f70 a callee writes a 3x4
    matrix through `auStack_30` (declared [4]) and the function reads three
    of its floats as fStack_2c/fStack_1c/fStack_c.  As independent C
    variables the callee overran the array and the port read zeros (NOTES
    A1-13, 2026-10-20: level-restart crashes under the autopilot).  When an
    array is passed by name or any stack local's address is taken, every
    `local_NN` / `xStack_NN` becomes a reference into one zeroed buffer at
    its original offset (NN = bytes below the entry stack pointer).
    Returns (body, frame size or 0)."""
    decls = list(_FRAME_DECL.finditer(body))
    if not decls:
        return body, 0
    escapes = False
    for d in decls:
        name, count = d.group(3), d.group(5)
        rest = body[:d.start()] + body[d.end():]
        if re.search(r'&\s*' + name + r'\b', rest):
            escapes = True
        elif count and re.search(r'\b' + name + r'\b(?!\s*\[)', rest):
            escapes = True
    if not escapes:
        return body, 0
    size = max(int(d.group(4), 16) for d in decls)
    size = (size + 15) & ~15
    out = []
    pos = 0
    for d in decls:
        indent, typ, name, off, count = d.group(1), d.group(2).strip(), d.group(3), int(d.group(4), 16), d.group(5)
        out.append(body[pos:d.start()])
        if count:
            out.append('%s%s (&%s)[%s] = *reinterpret_cast<%s (*)[%s]>(bea_frame_ + 0x%x - 0x%x);'
                       % (indent, typ, name, count, typ, count, size, off))
        else:
            out.append('%s%s &%s = *reinterpret_cast<%s *>(bea_frame_ + 0x%x - 0x%x);'
                       % (indent, typ, name, typ, size, off))
        pos = d.end()
    out.append(body[pos:])
    body = ''.join(out)
    first = decls[0]
    body = body[:first.start()] + '\n  alignas(16) uint8_t bea_frame_[0x%x] = {};   // the original stack frame (emulate_frame)\n' % size + body[first.start():]
    return body, size


def rewrite_in_stack(src):
    """Ghidra's `in_stack_NNNNNNNN` locals (NOTES A1-15, 54 game functions).

    A positive offset is a stack argument the signature omitted: the value at
    entry ESP+N is stack parameter N/4 (CThing::vslot18 is declared
    `(CThing *this)` but reads in_stack_00000004).  The parameter list gets
    the missing arguments, in order, named after the slots; the argument-count
    gates (ret N, callers' add esp) still check the result.  A negative
    offset is a local below the entry ESP that a callee fills through a
    pointer (`GetCursorPos(&stack0xfffffff8)`, 0x42d3b0): it becomes
    `local_NN` so emulate_frame lays it out at its original place."""
    if 'in_stack' not in src and 'stack0x' not in src:
        return src
    m = re.search(r'^(' + TYPE_RE + r')\s+(?:(__thiscall|__cdecl|__stdcall|__fastcall)\s+)?([A-Za-z_][\w:]*)\s*\(([^)]*)\)\s*\{', src, re.M | re.S)
    if not m:
        return src
    params = m.group(4).strip()
    plist = [p.strip() for p in params.split(',') if p.strip()] if params not in ('', 'void') else []
    nstack = len(plist) - (1 if plist and re.search(r'\bthis$', plist[0]) else 0)
    offs = sorted({int(o, 16) for o in re.findall(r'\bin_stack_([0-9a-f]{8})\b', src)})
    pos = [o for o in offs if o < 0x80000000]
    neg = [o for o in offs if o >= 0x80000000]
    if any(o < 4 or o % 4 for o in pos):
        raise Skip('in_stack at the return address or unaligned')
    # a slot below the entry ESP that Ghidra could not attribute to a local is
    # its stack-depth model drifting after an indirect call whose callee pops
    # its arguments (NOTES A1-15 class 18): the out-buffer a vtable call fills
    # became a slot of its own while the function reads the same memory by a
    # declared local's name (0x4135e0, 0x40c4a0, 0x40c750, 0x44ac20 live for
    # weeks passing the wrong vector; 0x49f820 lost level 311).  With no other
    # named local the port stays self-consistent and may be generated.
    if (neg or 'stack0xffff' in src) and re.search(r'\b(?:local|[a-zA-Z]*Stack)_[0-9a-f]+\b', src):
        raise Skip('stack0x below the entry ESP beside named locals: Ghidra depth drift (class 18)')
    if pos and pos[0] // 4 <= nstack:
        raise Skip('in_stack overlaps a declared parameter')
    extra = []
    if pos:
        # the declared type of each slot (`float in_stack_00000008;`) is kept
        decl = {int(mm.group(2), 16): mm.group(1).strip() for mm in
                re.finditer(r'^\s*((?:unsigned |signed )?\w+(?:\s*\*+)?)\s+in_stack_(0000[0-9a-f]{4});\s*$', src, re.M)}
        for i in range(nstack + 1, pos[-1] // 4 + 1):
            o = i * 4
            t = decl.get(o, 'undefined4')
            if re.fullmatch(r'(?:double|longlong|ulonglong|undefined8|float10|int8|uint8)', t):
                raise Skip('in_stack slot wider than 4 bytes')
            extra.append('%s stack_arg_%x' % (t, o))
        # drop the local declarations: they are parameters now
        src = re.sub(r'^\s*(?:unsigned |signed )?\w+(?:\s*\*+)?\s+in_stack_0000[0-9a-f]{4};\s*$\n?', '', src, flags=re.M)
        new_params = ', '.join(([params] if params not in ('', 'void') else []) + extra)
        src = src[:m.start(4)] + new_params + src[m.end(4):]
        # named so the artefact check (`in_stack` anywhere) does not refuse
        # the function: it refused every one of them since 2026-10-21
        for o in pos:
            src = re.sub(r'\bin_stack_%08x\b' % o, 'stack_arg_%x' % o, src)
    for o in neg:
        nn = (0x100000000 - o)
        src = re.sub(r'\bin_stack_%08x\b' % o, 'local_%x' % nn, src)
    src = re.sub(r'\bstack0x([0-9a-f]{8})\b', lambda mm: 'local_%x' % (0x100000000 - int(mm.group(1), 16)), src)
    # A struct passed by value (`sub esp, 0x30; rep movsl; call`): Ghidra
    # names the first slots in_stack_NEG (now local_NN) and, past the bytes it
    # saw `rep movsl` write, the stale values an earlier call pushed there -
    # its return address (`uVar5 = 0x544222;`, an address inside the function)
    # and its arguments.  0x5441b0 handed the renderer a matrix whose last row
    # was that garbage: the sky dome became a striped slab (frame oracle,
    # 2026-10-22).  A temporary assigned a code address marks the spot: it and
    # the temporaries that follow it in the argument list are the slots that
    # continue the local_NN run before them.
    markers = {m.group(1) for m in re.finditer(r'^\s*([a-z]Var\d+) = 0x([0-9a-f]{6});', src, re.M)
               if 0x401000 <= int(m.group(2), 16) < 0x55a420}
    if markers:
        fixed = set()
        def _fix_call(mm):
            args = [x.strip() for x in mm.group(2).split(',')]
            out = list(args)
            for k, x in enumerate(args):
                if x not in markers:
                    continue
                # Ghidra reuses the temporary later (`uVar5 = FUN_00558690(..)`
                # in 0x5441b0): only the call where it follows a local_NN run
                # is the by-value argument list
                run = re.fullmatch(r'local_([0-9a-f]+)', args[k - 1]) if k else None
                if not run:
                    continue
                nn = int(run.group(1), 16)
                j = k
                while j < len(args) and re.fullmatch(r'[a-z]Var\d+', args[j]):
                    nn -= 4
                    if nn <= 0:
                        raise Skip('stale by-value slot run leaves the frame')
                    out[j] = 'local_%x' % nn
                    fixed.add(args[j])
                    j += 1
                break
            return mm.group(1) + ', '.join(out) + ')'
        src = re.sub(r'((?:FUN_[0-9a-f]{8}|[A-Za-z_]\w*::\w+|\(\*\*\(code \*\*\)[^;]*?\))\()([^;]*?)\)(?=\s*;)', _fix_call, src, flags=re.S)
        if markers - fixed:
            raise Skip('temporary assigned a code address (%s) not resolved as a by-value slot' % ', '.join(sorted(markers - fixed)))
    # a renamed slot without a declaration (`&stack0x...` only): declare it
    body_at = src.index('{', m.end() - 1) + 1
    declared = set(re.findall(r'^\s*(?:unsigned |signed )?\w+(?:\s*\*+)?\s*&?\s*(local_[0-9a-f]+)\s*(?:\[[^\]]*\])?\s*;', src, re.M))
    missing = sorted({n for n in re.findall(r'\blocal_[0-9a-f]+\b', src[body_at:])} - declared, key=lambda n: int(n[6:], 16))
    if missing:
        src = src[:body_at] + '\n' + ''.join('  undefined4 %s;\n' % n for n in missing) + src[body_at:]
    return src


def rewrite_extraout(src):
    """`extraout_ST0`: the x87 value the preceding call left behind, which is
    that callee's real result (Ghidra typed the callee int: 0x4444b0 read it
    as an uninitialised variable and the port stored 0, NOTES A1-14 class 8).
    Each use is attached to the nearest preceding call statement: that call
    becomes `extraout_ST0 = (float10)CALLEE(...)`, and CALLEE is typed as
    returning float10 for this port (the set is returned).  Refused when the
    call's own result variable is used elsewhere (both EAX and ST0 wanted) or
    no call precedes the use."""
    if 'extraout_ST0' not in src:
        return src, set()
    lines = src.split('\n')
    overrides = set()
    # the preceding call: a named function, or a virtual call `(**(code **)(RECV))(ARGS)`
    # (since Ghidra pass 5 typed every vtable call site undefined4, a float result
    # left in ST0 shows as extraout_ST0_NN after it: 45 game functions, 2026-10-21)
    call_re = re.compile(r'^(\s*)(?:(\w+) = )?(FUN_[0-9a-f]{8}|[A-Za-z_]\w*::\w+|\(\*\*\(code \*\*\).*?\))\((.*)\);\s*$')
    name_re = re.compile(r'\bextraout_ST0(?:_\d+)?\b')
    for i, line in enumerate(lines):
        if 'extraout_ST0' not in line or re.match(r'^\s*float10 extraout_ST0(?:_\d+)?;', line):
            continue
        if re.match(r'^\s*extraout_ST0(?:_\d+)? = ', line):
            continue                                     # already rewritten
        name = name_re.search(line).group(0)
        j = i - 1
        while j >= 0 and not call_re.match(lines[j]):
            j -= 1
        if j < 0:
            raise Skip('extraout_ST0 without a preceding call')
        m = call_re.match(lines[j])
        indent, var, callee, args = m.groups()
        if var:
            rest = '\n'.join(lines[:j] + lines[j + 1:])
            if re.search(r'\b' + re.escape(var) + r'\b', re.sub(r'^\s*\w+ ' + re.escape(var) + r';\s*$', '', rest, flags=re.M)):
                raise Skip('extraout_ST0 beside a used EAX result (%s)' % callee)
        lines[j] = '%s%s = (float10)%s(%s);' % (indent, name, callee, args)
        if not callee.startswith('('):
            overrides.add(callee)
    return '\n'.join(lines), overrides


_DENORMAL = r'(\d+(?:\.\d+)?e-(?:39|4[0-5]))f?'


def rewrite_denormal_compares(body):
    """`x == 5.88545e-44` -> `bea_piece32(x) == 0x2au`: an integer in a slot
    Ghidra typed float, compared with the denormal that has its bits.  The
    literal is a double, so the comparison ran in double and never held;
    0x4b9ec0 ignored every key and a level-523 replay stuck in the message log
    (2026-10-27).  Assignments of such literals convert to the right bits."""
    def bits(lit):
        return struct.unpack('<I', struct.pack('<f', float(lit)))[0]
    def rep(m):
        return 'bea_piece32(%s) %s 0x%xu' % (m.group(1), m.group(2), bits(m.group(3)))
    operand = r'([A-Za-z_]\w*(?:\[[^\]]+\])?|\*\([^()]*\)\s*\w+|\*\(\w+ \*\)\([^()]*\))'
    body = re.sub(operand + r'\s*(==|!=)\s*' + _DENORMAL + r'(?![\w.])', rep, body)
    return body


def rewrite_casts_by_asm(body, addr, size, float_names, float_ptrs):
    """Explicit casts that the original does not perform (NOTES A1-14 classes
    7 and 12).  Ghidra prints `(float)x` and `(int)f` both for a conversion
    and for a same-size reinterpretation of a slot it typed the other way.
    When the function's code has no fild at all, every `(float)int` is a
    reinterpretation (fix_fcast); when it has no fistp and no __ftol call,
    every `(int)float` is one too (0x4fc4e0 copies a float vector into an
    int-typed record: `piVar15[2] = (int)*param_3`).  float_names: locals
    declared float; float_ptrs: parameters declared `float *`."""
    import fix_fcast as _ff
    # a float stored into a slot Ghidra typed as a pointer (`pCStack_4 =
    # (CBoatAI *)(DAT_00672fd0 + 1.0f)`: a timer in a slot that also holds a
    # pointer elsewhere): never a conversion, the bits are stored
    out, pos = [], 0
    for m in re.finditer(r'\(([A-Za-z_]\w*)\s*\*\)\s*(?=[(A-Za-z_])', body):
        if m.start() < pos or m.group(1) in ('float', 'double', 'float10'):
            continue                                   # `(void *)(clock + 1.0f)` is the common form: keep it
        try:
            end = _ff.unary(body, m.end())
        except (ValueError, IndexError):
            continue
        operand = body[m.end():end]
        if re.search(r'\d\.\d+f?\b|\bfVar\d+\b|\(float\)|\bDAT_00672fd0\b|\bSQRT\(|\bbea_fcast<float', operand) \
                and not re.search(r'^\*|^&|\*\s*\(', operand):
            out.append(body[pos:m.start()])
            out.append('(%s *)(uintptr_t)bea_piece32(%s)' % (m.group(1), operand))
            pos = end
    out.append(body[pos:])
    body = ''.join(out)
    ins = list(disasm_cached(addr, size))
    has_fild = any(i.mnemonic.startswith('fi') and not i.mnemonic.startswith('fist') and i.mnemonic not in ('finit', 'fninit') for i in ins)
    has_fist = any(i.mnemonic.startswith(('fist', 'fisttp')) or (i.mnemonic == 'call' and '0x55e128' in i.op_str) for i in ins)
    import fix_fcast
    n = 0
    if not has_fild:
        body, n = fix_fcast.rewrite(body)
    if not has_fist:
        # `(int)-f` too: 0x4e1260 stores the bits of a negated float (fchs; fstp)
        cast = re.compile(r'\((?:int|uint|long|ulong|undefined4|uint32_t|int32_t)\)\s*(?=[*(A-Za-z_]|-\s*[A-Za-z_(])')
        out, pos = [], 0
        for m in cast.finditer(body):
            if m.start() < pos:
                continue
            try:
                end = fix_fcast.unary(body, m.end())
            except (ValueError, IndexError):
                continue
            operand = body[m.end():end].strip()
            bare = operand.lstrip('-').strip()
            looks_float = ('float' in operand or re.search(r'\b(?:fVar\d+|fStack_[0-9a-f]+|extraout_ST0)\b', operand)
                           or any(re.match(r'^\*\s*%s$|^%s\s*\[' % (re.escape(p), re.escape(p)), operand) for p in float_ptrs)
                           or any(re.fullmatch(re.escape(nm), bare) for nm in float_names))
            if not looks_float:
                continue
            out.append(body[pos:m.start()])
            out.append('bea_piece32(%s)' % operand)
            pos = end
            n += 1
        out.append(body[pos:])
        body = ''.join(out)
        # `(ulonglong)dVar10 >> 0x20` (0x4015e0 passes doubles to a varargs print in
        # 4-byte halves) is the high half of the double's bits, not of its value
        for nm in float_names:
            body, k = re.subn(r'\((?:ulonglong|longlong|undefined8|uint64_t|int64_t)\)\s*' + re.escape(nm) + r'\b(?!\s*[\[(])',
                              'bea_bits64(%s)' % nm, body)
            n += k
    return body, n


_NOOP_CALLEES = None


def noop_callees():
    """Functions whose code is a single `ret` (CRenderThing::vslot3 0x40c640, a
    debug print compiled out): a call to one does nothing, whatever Ghidra
    thinks the arguments are."""
    global _NOOP_CALLEES
    if _NOOP_CALLEES is None:
        _NOOP_CALLEES = set()
        import csv as _c
        for r in _c.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace')):
            try:
                a, sz = int(r['address'], 16), int(r['size'])
            except ValueError:
                continue
            if sz <= 2 and 0x401000 <= a < 0x5d7f9d:
                ins = list(disasm_cached(a, max(sz, 1)))
                if ins and ins[0].mnemonic == 'ret':
                    _NOOP_CALLEES.add(a)
    return _NOOP_CALLEES


_SAVED_REGS = ('ebx', 'esi', 'edi', 'ebp')
_NO_DEST = ('push', 'cmp', 'test', 'call', 'jmp', 'ret', 'nop', 'fld', 'fild', 'fstp', 'fst', 'fistp', 'fcomp', 'fcom')


def vcall_pushes(ins, k):
    """Stack arguments pushed for the indirect call ins[k], counted back to
    the previous call (or the entry): `push` of a callee-saved register the
    function has not written yet is a save (VC6 saves late, inside the branch
    that needs the register), anything else pushed or `sub esp` counts.
    None when the walk back meets a jump target it cannot see past."""
    written = set()
    first_write = {}
    for j, x in enumerate(ins[:k]):
        ops = x.op_str.split(', ')
        if x.mnemonic not in _NO_DEST and ops and ops[0] in _SAVED_REGS:
            first_write.setdefault(ops[0], j)
        if x.mnemonic == 'pop' and x.op_str in _SAVED_REGS:
            first_write.setdefault(x.op_str, j)
    # the prologue (pushes, `sub esp`, the SEH frame's fs:[0] moves before
    # any other instruction) reserves the frame: never arguments
    pro = 0
    while pro < len(ins) and (ins[pro].mnemonic == 'push' or (ins[pro].mnemonic == 'sub' and ins[pro].op_str.startswith('esp,'))
                              or 'fs:[0]' in ins[pro].op_str):
        pro += 1
    n = 0
    for j in range(k - 1, pro - 1, -1):
        x = ins[j]
        if x.mnemonic == 'call':
            break
        if x.mnemonic == 'push':
            r = x.op_str
            if r in _SAVED_REGS and first_write.get(r, 1 << 30) > j:
                continue                     # a late save, not an argument
            n += 1
        elif x.mnemonic == 'sub' and x.op_str.startswith('esp,'):
            n += 1
    return n


def _split_top_args(s):
    """The arguments of a call, split at the commas outside parentheses,
    brackets and string literals; None when the nesting does not close."""
    if not s.strip():
        return []
    args, depth, start, i, q = [], 0, 0, 0, None
    while i < len(s):
        ch = s[i]
        if q:
            if ch == '\\':
                i += 1
            elif ch == q:
                q = None
        elif ch in '"\'':
            q = ch
        elif ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
            if depth < 0:
                return None
        elif ch == ',' and depth == 0:
            args.append(s[start:i].strip())
            start = i + 1
        i += 1
    if depth or q:
        return None
    args.append(s[start:].strip())
    return args


def rewrite_phantom_vcall_args(src, addr, size):
    """`(**(code **)(*param_1 + 0x38))(unaff_EDI)`: Ghidra gives a vtable
    call stack arguments the asm never pushes and fills them with callee-saved
    registers (0x534fb0: `push edi` is the late save of EDI, then `call [edx
    + 0x38]` with nothing pushed).  When every argument is an unaff_ register
    and every asm call through that vtable offset has nothing pushed, the
    arguments go (2026-10-27, 40 refused functions use unaff_ only there)."""
    if 'unaff_' not in src:
        return src
    ins = list(disasm_cached(addr, size))
    by_off = {}
    for k, x in enumerate(ins):
        if x.mnemonic == 'call' and x.op_str.startswith('dword ptr ['):
            if re.fullmatch(r'dword ptr \[0x[0-9a-f]+\]', x.op_str):
                continue                 # an import (IAT) call: a named function in the C
            m = re.fullmatch(r'dword ptr \[(?:e[a-z]{2})(?: \+ (0x[0-9a-f]+|\d+))?\]', x.op_str)
            off = int(m.group(1), 0) if m and m.group(1) else (0 if m else None)
            by_off.setdefault(off, []).append(vcall_pushes(ins, k))
    if None in by_off:
        return src                       # a call through a register or a scaled table: offsets unreliable
    import fix_fcast as _ff
    calls = []                           # (off, callee_end, args_end, args, number of trailing phantoms)
    pos = 0
    for m in re.finditer(r'\(\*\*?\(code \*\*?\)', src):
        if m.start() < pos:
            continue
        try:
            callee_end = _ff.match(src, m.start())
        except ValueError:
            continue
        if callee_end >= len(src) or src[callee_end] != '(':
            continue
        try:
            args_end = _ff.match(src, callee_end)
        except ValueError:
            continue
        callee = src[m.start():callee_end]
        om = re.search(r'\+ (0x[0-9a-f]+|\d+)\)\)$', callee)
        off = int(om.group(1), 0) if om else 0
        args = _split_top_args(src[callee_end + 1:args_end - 1])
        if args is None:
            continue
        nph = 0
        while nph < len(args) and re.fullmatch(r'unaff_E[A-Z]{2}', args[len(args) - 1 - nph]):
            nph += 1
        calls.append((off, callee_end, args_end, args, nph))
    # the phantoms trail the real arguments.  Per vtable offset, the calls'
    # argument counts with the phantoms dropped must be the asm's push counts
    # (as a multiset: 0x4b5330 calls slot 0x18 once with 0 and once with 2)
    drop_offs = set()
    for off in {c[0] for c in calls if c[4]}:
        counts = by_off.get(off)
        mine = [len(c[3]) - c[4] for c in calls if c[0] == off]
        if counts and sorted(mine) == sorted(counts):
            drop_offs.add(off)
    out, pos = [], 0
    for off, callee_end, args_end, args, nph in calls:
        if nph and off in drop_offs:
            out.append(src[pos:callee_end])
            out.append('(' + ','.join(args[:len(args) - nph]) + ')')
            pos = args_end
    out.append(src[pos:])
    src = ''.join(out)
    # declarations of the registers no longer used
    for r in set(re.findall(r'\bunaff_E[A-Z]{2}\b', src)):
        if len(re.findall(r'\b' + r + r'\b', src)) == 1:
            src = re.sub(r'^[ \t]*[\w ]+\*?\s*' + r + r';[ \t]*\r?\n', '', src, flags=re.M)
    return src


def tail_vcalls_only(addr, size):
    """Every indirect `jmp` of the function is `jmp dword ptr [reg + off]`
    (a tail call through a vtable slot, never a scaled jump table) and the
    function returns with a plain `ret` elsewhere (no stack arguments: the
    tail call forwards none, matching Ghidra's argument-less call)."""
    ins = list(disasm_cached(addr, size))
    jmps = [i for i in ins if i.mnemonic == 'jmp' and i.op_str.startswith('dword ptr [')]
    rets = [i for i in ins if i.mnemonic == 'ret']
    return bool(jmps) and bool(rets) \
        and all(re.fullmatch(r'dword ptr \[e[a-z]{2}(?: \+ 0x[0-9a-f]+)?\]', i.op_str) for i in jmps) \
        and all(not i.op_str for i in rets) and _conv_pop.get(addr) == 0


def rewrite_unaff_args(src):
    """`unaff_EDI` and friends as call arguments (NOTES A1-15).  Ghidra prints
    them for a varargs cdecl callee whose argument count it could not settle
    (the registers are not arguments); a call to a no-op callee is dropped
    and such an argument of a varargs callee becomes 0.  Other uses of
    unaff_ stay for the artefact check."""
    if 'unaff_' not in src:
        return src
    for cname in set(re.findall(r'\b(FUN_[0-9a-f]{8}|[A-Za-z_]\w*::\w+)\s*\(', src)):
        addr = name_to_addr.get(cname)
        if addr is None:
            continue
        if addr in noop_callees():
            src = re.sub(r'^\s*' + re.escape(cname) + r'\s*\([^;]*\);\s*$\n?', '', src, flags=re.M)
        elif addr in _conv_varargs:
            def fix(mm):
                return mm.group(1) + re.sub(r'\bunaff_\w+\b', '0', mm.group(2)) + ')'
            src = re.sub(r'(\b' + re.escape(cname) + r'\s*\()([^;]*)\)', fix, src)
    # the declarations of registers no longer used
    for r in set(re.findall(r'\bunaff_\w+\b', src)):
        if len(re.findall(r'\b' + r + r'\b', src)) == 1:
            src = re.sub(r'^\s*(?:\w+\s*\**\s*)' + r + r';\s*$\n?', '', src, flags=re.M)
    return src


def check_call_arity(addr, size, body):
    """The arguments each call pushes in the original versus the arguments
    the port's call has (NOTES A1-15).  Ghidra dropped the out-buffer
    argument of a virtual call in 0x411aa0 (`lea 0x4(%esp),%edx; push %edx;
    call *0x6c(%eax)` became a call with no arguments): the callee wrote
    through garbage and the batch crashed on every combat level
    (2026-10-21).  Per call site in the asm: the pushes since the previous
    call or branch (VC6 pushes arguments right before the call).  Per call
    in the C: the top-level arguments, less `this` for a thiscall callee or
    the receiver and slot of bea_vcall.  Refuse when the asm's multiset of
    counts is not covered by the C's."""
    import fix_fcast as _ff
    ins = list(disasm_cached(addr, size))
    # register saves: a push of ebx/ebp/esi/edi before the first call or
    # branch whose register is popped again later is not an argument (the
    # first version counted them and flagged 881 of 1,932 good ports)
    popped = {i.op_str for i in ins if i.mnemonic == 'pop'}
    first_write = {}
    for j, x in enumerate(ins):
        ops = x.op_str.split(', ')
        if x.mnemonic not in _NO_DEST and ops and ops[0] in _SAVED_REGS:
            first_write.setdefault(ops[0], j)
        if x.mnemonic == 'pop' and x.op_str in _SAVED_REGS:
            first_write.setdefault(x.op_str, j)
    saves = set()
    prologue = True
    prev = None
    for j, i in enumerate(ins):
        if i.mnemonic == 'call' or i.mnemonic.startswith('j'):
            prologue = False
        # `push ecx` in the prologue is VC6's 4-byte local (popped at the end);
        # a callee-saved register pushed as the first instruction after a
        # branch is VC6's lazy save (0x404c90: `je ...; push %edi` then the
        # argument `push %edi`); so is one the function has not written yet
        # (0x488460: `push %edi` before the rep movs that needs it, then the
        # one-argument Unlock call), as vcall_pushes counts them
        if i.mnemonic == 'push' and i.op_str in popped and (
                (prologue and i.op_str in ('ebx', 'ebp', 'esi', 'edi', 'ecx', 'eax', 'edx'))
                or (prev is not None and prev.mnemonic.startswith('j') and i.op_str in ('ebx', 'ebp', 'esi', 'edi'))
                or (i.op_str in _SAVED_REGS and first_write.get(i.op_str, 1 << 30) > j)):
            saves.add(i.address)
        prev = i
    # only indirect calls (virtual calls, `call *N(%reg)`) are compared:
    # direct callees are typed by their signatures, and the asm's zero-push
    # helper calls (_ftol, EH helpers) have no C call at all
    asm = []
    pushes = 0
    for i in ins:
        m = i.mnemonic
        if m == 'push':
            if i.address not in saves:
                pushes += 1
        elif m == 'call':
            if i.op_str.startswith('dword ptr [') and 'esp' not in i.op_str and not re.fullmatch(r'dword ptr \[0x[0-9a-f]+\]', i.op_str):
                asm.append(pushes)
            pushes = 0
        elif m.startswith('j') or m == 'ret':
            pushes = 0
        elif m in ('sub',) and i.op_str.startswith('esp'):
            pushes = 0
    # every call in the C counts as cover (Ghidra devirtualises some indirect
    # calls into direct `FUN_` calls through a known vtable)
    c = []
    for cm in re.finditer(r'\b(bea_vcall<[^>]*>|FUN_[0-9a-f]{8}|[A-Za-z_]\w*::\w+|[A-Za-z_]\w*__\w+)\s*\(', body):
        try:
            end = _ff.match(body, cm.end() - 1)
        except ValueError:
            continue
        inner = body[cm.end():end - 1]
        depth, n = 0, 0 if not inner.strip() else 1
        for ch in inner:
            if ch in '([<': depth += 1
            elif ch in ')]>': depth -= 1
            elif ch == ',' and depth == 0: n += 1
        name = cm.group(1)
        if name.startswith('bea_vcall'):
            n -= 2                                   # receiver and slot
        else:
            a = name_to_addr.get(name) or name_to_addr.get(name.replace('__', '::'))
            if a is not None and _conv_csv.get(a) == '__thiscall':
                n -= 1
            elif a is not None and _conv_csv.get(a) == '__fastcall':
                n -= 2
        c.append(max(n, 0))
    if not asm:
        return
    import collections
    need = collections.Counter(asm)
    have = collections.Counter(c)
    for k, v in need.items():
        if have.get(k, 0) < v:
            # advisory, not a refusal: after the register-save rules 52 of the
            # 1,932 live ports still trip it (mid-function saves, calls
            # Ghidra inlined), so the level table is the judge; the note
            # names the count so a flagged port can be read first
            return 'call arity differs from the asm (%d pushes: asm %d call(s), port %d)' % (k, v, have.get(k, 0))
    return None


def rewrite_in_eax(src):
    """Ghidra's `in_EAX` (NOTES A1-15, 59 game functions): the value EAX held
    at entry.  It appears where the original sets only AL (`CONCAT31((int3)
    ((uint)in_EAX >> 8), x)`: the result is the byte x, the upper bits are
    whatever the caller had, and callers read AL) and on paths that return
    without setting EAX (`return in_EAX;`: nothing meaningful; 0).  Any other
    use is left for the artefact check to refuse."""
    if 'in_EAX' not in src:
        return src
    src2 = re.sub(r'CONCAT31\(\(int3\)\(\(uint\)in_EAX >> 8\),\s*', '(uint)(byte)(', src)
    if not re.search(r'\bin_EAX\s*=[^=]', src2):
        src2 = re.sub(r'\breturn in_EAX;', 'return 0;', src2)
    if re.search(r'\bin_EAX\b', src2) and not re.search(r'^\s*(?:undefined4|uint|int)\s+in_EAX;\s*$', src2, re.M):
        return src2                                 # declared with a type this does not know: refuse
    # Ghidra also uses it as an ordinary variable assigned on most paths
    # (`in_EAX = FUN_x(...)`, `in_EAX = 0;`, then `return in_EAX;`): the entry
    # value only matters on a path that never assigns it, where the original
    # returns whatever EAX held; a zero-initialised local under another name
    src2 = re.sub(r'^(\s*)(?:undefined4|uint|int)\s+in_EAX;\s*$', r'\1uint32_t eax_in = 0;', src2, flags=re.M)
    src2 = re.sub(r'\bin_EAX\b', 'eax_in', src2)
    return src2


_TAIL_BODY_OPS = ('mov', 'sub', 'add', 'lea')


def tail_call_port(addr, name_hint, size):
    """A short tail call Ghidra cannot express: register set-up and a final
    jump, e.g. a this-adjusting thunk (`sub ecx, 4; jmp TARGET`) or a virtual
    forwarder (`mov eax, [ecx]; jmp [eax + 0x10]`); 5 game functions
    (2026-10-27).  The set-up has no relative operand and does not touch the
    stack, so its bytes are copied as they are; a direct jump becomes `push
    TARGET; ret` (a relative jmp from the DLL would not survive a load at
    another base), an indirect one through memory is copied too."""
    ins = list(disasm_cached(addr, size))
    if len(ins) < 2 or sum(i.size for i in ins) != size or ins[-1].mnemonic != 'jmp':
        return None
    body, last = ins[:-1], ins[-1]
    for i in body:
        if i.mnemonic not in _TAIL_BODY_OPS or 'esp' in i.op_str or 'ebp' in i.op_str:
            return None
    if not re.fullmatch(r'0x[0-9a-f]+', last.op_str) and not last.op_str.startswith('dword ptr ['):
        return None
    lines = []
    for i in body + ([] if re.fullmatch(r'0x[0-9a-f]+', last.op_str) else [last]):
        lines.append('        ".byte %s\\n"    /* %s %s */' % (', '.join('0x%02x' % b for b in i.bytes), i.mnemonic, i.op_str))
    if re.fullmatch(r'0x[0-9a-f]+', last.op_str):
        lines.append('        "pushl $%s; ret\\n"    /* jmp %s */' % (last.op_str, last.op_str))
    text = '; '.join('%s %s' % (i.mnemonic, i.op_str) for i in ins)
    tl = ['// auto-ported tail call by tools/autoport.py: the original (%s, %d bytes) is' % (name_hint, size),
          '//   %s' % text,
          '// the set-up is copied byte for byte (no relative operand, no stack access);',
          '// a direct jump becomes push TARGET; ret, every register and the stack stay as the caller set them',
          '// @autoport-mode direct (tail call)',
          '#include "bea/hooks.h"', '',
          '__attribute__((naked)) static void ap_%08x()' % addr, '{',
          '    __asm__ volatile(']
    tl += lines
    tl += ['    );', '}', '', '// @autoport-registration', 'BEA_HOOKS(BEA_HOOK(0x%08x, ap_%08x));' % (addr, addr)]
    return chr(10).join(tl) + chr(10)


def transform(addr, name_hint, size, direct=False):
    """direct=True: emit a plain replacement (BEA_HOOK, no shadow stub) for a
    function that cannot be shadow-tested (side effects on globals, writing
    callees, rep string ops).  Verified by the static checks
    (tools/check_ret.py), the build and the soak/bisect loop instead."""
    if direct and size == 5:
        # a thunk (`jmp TARGET`, Ghidra decompiles nothing): the port pushes the
        # target and returns into it, leaving every register and the stack as
        # the caller set them; 33 game functions (2026-10-21)
        ins = list(disasm_cached(addr, size))
        if len(ins) == 1 and ins[0].mnemonic == 'jmp' and re.fullmatch(r'0x[0-9a-f]+', ins[0].op_str):
            tgt = int(ins[0].op_str, 16)
            tl = ['// auto-ported thunk by tools/autoport.py: the original is `jmp 0x%08x` (%s, 5 bytes); the port',
                  '// pushes the target and returns into it, leaving every register and the stack as the caller set them',
                  '// @autoport-mode direct (thunk)',
                  '#include "bea/hooks.h"', '',
                  '__attribute__((naked)) static void ap_%08x()', '{',
                  '    __asm__ volatile("pushl $0x%08x; ret");', '}', '',
                  '// @autoport-registration', 'BEA_HOOKS(BEA_HOOK(0x%08x, ap_%08x));']
            return (chr(10).join(tl) + chr(10)) % (tgt, name_hint, addr, tgt, addr, addr)
    if direct and size <= 32:
        tail = tail_call_port(addr, name_hint, size)
        if tail:
            return tail
    files = glob.glob(os.path.join(ROOT, 'ghidra_out', 'per_function', '%08x_*.c' % addr))
    if not files:
        raise Skip('no decompile')
    src = open(files[0], encoding='utf-8', errors='replace').read()
    src = rewrite_in_stack(src)
    src = rewrite_in_eax(src)
    src, st0_overrides = rewrite_extraout(src)
    src = rewrite_phantom_vcall_args(src, addr, size)
    src = rewrite_unaff_args(src)
    # a label right before `}` (`case 0x3e: }` in 0x4d3110) needs a statement in C++
    src = re.sub(r'((?:\bcase [^:\n]+|\bdefault):)(\s*\n\s*\})', r'\1;\2', src)
    # extraout_ST0 and the numbered extraout_ST0_NN handled above (their uses now read
    # the retyped call); extraout_var/EDX and the register artefacts are still refused
    if 'halt_baddata' in src or 'unaff_' in src or 'in_stack' in src or 'uRam0000' in src \
            or 'in_EAX' in src or 'in_EDX' in src or 'in_ZF' in src or 'in_CF' in src \
            or 'extraout_' in re.sub(r'\bextraout_ST0(?:_\d+)?\b', '', src):
        raise Skip('unsupported decompiler artefact')
    # Ghidra's own warnings are `/* WARNING: ... */` comments; a string the game
    # prints ("WARNING: Could not find career ...", s_WARNING__... labels) is not
    # one - 22 game functions were refused for their log messages (2026-10-27)
    warns = re.findall(r'/\*\s*WARNING:([^*]*)', src)
    benign = ('Removing unreachable', 'Globals starting', 'Type propagation')
    if any('indirect jump as call' in w or 'Could not recover jumptable' in w for w in warns) \
            and tail_vcalls_only(addr, size):
        # `jmp [reg+off]`, a tail call through a vtable slot, not a switch:
        # Ghidra prints it as `return (**(code **)(...))();`, which is the
        # call when the function takes no stack arguments (0x401400
        # CThing::vslot8_t8; 12 such functions were refused, 2026-10-29)
        benign += ('indirect jump as call', 'Could not recover jumptable')
    if any(not any(k in w for k in benign) for w in warns):
        raise Skip('decompiler warning')
    # strip header comments
    body_src = re.sub(r'^//.*$', '', src, flags=re.M)
    body_src = re.sub(r'/\*.*?\*/', '', body_src, flags=re.S)
    m = re.search(r'^(' + TYPE_RE + r')\s+(?:(__thiscall|__cdecl|__stdcall|__fastcall)\s+)?([A-Za-z_][\w:]*)\s*\(([^)]*)\)\s*\{', body_src, re.M | re.S)
    if not m:
        raise Skip('no signature')
    ret_t, conv_kw, fname, params = m.group(1).strip(), m.group(2), m.group(3), m.group(4).strip()
    if conv_kw == '__fastcall':
        raise Skip('fastcall')
    if conv_kw and _conv_csv.get(addr) not in (None, conv_kw):
        # the convention Ghidra's header shows (pass 3) came from an older
        # conventions.csv; the current analysis disagrees (push-ecx slot
        # reservation, NOTES A1-8 rule 19): the header's argument list is wrong
        raise Skip('header convention disputed (%s vs %s)' % (conv_kw, _conv_csv.get(addr)))
    open_idx = body_src.index('{', m.end() - 1)
    close_idx = body_src.rindex('}')
    body = body_src[open_idx + 1:close_idx]
    if 'ExceptionList' in body:
        stripped = strip_eh_frame(body)
        if stripped is None:
            raise Skip('exception frame not recognised')
        body = stripped
        eh_frame = True
    else:
        eh_frame = False
    if params == 'void':
        params = ''
    plist = [p.strip() for p in params.split(',') if p.strip()] if params else []
    # self: either an explicit `Type *this` first parameter (pass-3 export) or
    # the older `in_ECX` local.  Either way the port names it `this_`.
    self_t = None
    if plist and re.search(r'\bthis$', plist[0]):
        self_t = re.sub(r'\s*\bthis$', '', plist[0]).strip()
        plist = plist[1:]
        body = re.sub(r'\bthis\b', 'this_', body)
    else:
        mm = re.search(r'^\s*((?:unsigned |signed )?[A-Za-z_][A-Za-z0-9_]*\s*\**)\s*in_ECX;\s*$', body, re.M)
        if mm:
            self_t = mm.group(1).strip()
            body = body[:mm.start()] + body[mm.end():]
            body = re.sub(r'\bin_ECX\b', 'this_', body)
        if re.search(r'\bin_ECX\b', body) and not self_t:
            raise Skip('in_ECX declaration not recognised')
        body = re.sub(r'\bthis\b', 'this_local', body)
    if conv_kw == '__thiscall' and not self_t:
        raise Skip('thiscall without this')
    pop, eax_live, st0_live, max_arg, max_disp, global_kind, float_consts = analyse_asm(addr, size)
    copy_bytes = max(0x200, max(max_disp, reach_disp(addr, size)) + 0x100)
    # Ghidra prints float32 literals as doubles ("0.05"): when the x87 code
    # loads a dword constant with that value, make the literal a float.  The
    # sign is matched loosely: the literal's `-` is a separate token, and
    # `-0.7853982 < fVar3` (0x5099a0) as a double is below the float -pi/4 the
    # original compares with, so an equal angle took the other branch and
    # level 400 ended differently (2026-10-20, found by a differential hook).
    import struct as _st
    float_abs = {abs(c) for c in float_consts}
    def _fix_literal(mm):
        lit = mm.group(0)
        try:
            v = float(lit)
            f = _st.unpack('<f', _st.pack('<f', v))[0]
        except (ValueError, OverflowError):
            return lit
        return lit + 'f' if abs(f) in float_abs else lit
    body = re.sub(r'(?<![\w.])\d+\.\d+(?:[eE][-+]?\d+)?(?![\w.])', _fix_literal, body)
    # explicit casts the original's code never performs are reinterpretations
    _float_names = set(re.findall(r'^\s*(?:float|float10|double)\s*&?\s*([A-Za-z_]\w*)\s*(?:=|;)', body, re.M))
    # float parameters too: `(int)-param_3` in 0x4e1260 (no fistp) is the bits of -param_3
    _float_names |= set(re.findall(r'(?:^|,)\s*float\s+([A-Za-z_]\w*)\s*(?=,|$)', params or ''))
    # and globals the disassembly reads as floats: `piVar1[0xb9] = (int)DAT_00672fd0;`
    # in 0x410310/0x410740/0x4109d0/0x407060 copies the clock's bits (mov edx, [0x672fd0]),
    # but the port converted the clock to an integer (2026-10-27)
    _float_names |= {'%sDAT_%08x' % (pf, ga) for ga, k in global_kind.items() if k in ('float', 'double') for pf in ('', '_')}
    _float_ptrs = set(re.findall(r'float\s*\*\s*([A-Za-z_]\w*)', params or ''))
    body, _ncast = rewrite_casts_by_asm(body, addr, size, _float_names, _float_ptrs)
    # x87 comparisons are true on NaN for <, <=, == and false for != when the
    # original jumps on the flag being set (VC6 tests C0/C3, which an unordered
    # compare sets); C's are not.  0x5099a0 clamped a NaN to 0 with `if (x <
    # 0.0)` in the original and returned the NaN in the port (2026-10-20).
    # Ghidra's canonical `<` does not say whether the jump sense was "set" or
    # "clear", so tools/fcmp_rewrite.py is NOT applied blindly (a tree-wide
    # run crashed level 221); it stays an opt-in for functions whose
    # disassembly has been read (NOTES A1-14, bug class 16).
    if copy_bytes > 0x100000 and not direct:
        raise Skip('object larger than the shadow buffer')
    if any(i.mnemonic.startswith('rep') for i in disasm_cached(addr, size)) and not direct:
        raise Skip('rep string op (unbounded write)')
    # calling convention and parameter padding
    if self_t:
        conv = 'BEA_THISCALL'
        n = pop // 4
        if len(plist) > n:
            raise Skip('more params than ret pops')
        if max_arg > n:
            raise Skip('reads more stack args than ret pops')
        plist += ['uint32_t unused_%d' % k for k in range(len(plist), n)]
        plist = ['%s this_' % self_t] + plist
    else:
        if pop == 0:
            conv = 'BEA_CDECL'
            # the [esp+K] scan misses arguments read through an EBP frame; the
            # callers' `add esp, N` after the call (conventions.csv argc) is
            # independent evidence for the declared count
            if max_arg != len(plist) and not (max_arg < len(plist) and _conv_argc.get(addr) == len(plist)):
                raise Skip('cdecl arg count unverifiable (%d read, %d declared)' % (max_arg, len(plist)))
        else:
            conv = 'BEA_STDCALL'
            n = pop // 4
            if len(plist) > n or max_arg > n:
                raise Skip('more params than ret pops')
            plist += ['uint32_t unused_%d' % k for k in range(len(plist), n)]
    body, frame_size = emulate_frame(body)
    # Uninitialised locals: VC6 copies a stack temporary whose fourth dword
    # was never written (vector w, NOTES A1-4/A1-6).  The port stores 0 and
    # the stub skips those bytes when comparing, since the original stores
    # whatever was on the stack.
    uninit_ignores = []     # (base name, offset, length)
    uninit_names = []
    pnames_all = [re.search(r'(\w+)$', p).group(1) for p in plist]
    ptypes_all = [re.sub(r'\s*\b\w+$', '', p).strip() for p in plist]
    SIZES = {'float': 4, 'undefined4': 4, 'int': 4, 'uint': 4, 'long': 4, 'ulong': 4, 'dword': 4, 'bool': 1,
             'short': 2, 'ushort': 2, 'undefined2': 2, 'word': 2, 'char': 1, 'byte': 1, 'uchar': 1, 'sbyte': 1,
             'undefined1': 1, 'undefined': 1, 'double': 8, 'longlong': 8, 'ulonglong': 8, 'undefined8': 8}
    def _elem_size(t):
        t = t.replace('*', '').replace('unsigned ', 'u').strip()
        return SIZES.get(t, 4 if '*' in t else None)
    # the name starts with a letter: `local_150;` alone (an expression's
    # continuation line) is not a declaration of `0` typed `local_15` (0x4b4250)
    # type and name are separated by whitespace or a `*`: `return;` is not a
    # declaration of `n` typed `retur` (0x42ad30 got `return = 0;`, 2026-10-21)
    for dm in re.finditer(r'^\s*((?:unsigned |signed )?\w+(?:\s*\*+\s*|\s+))([A-Za-z_]\w*)\s*;\s*$', body, re.M):
        dtype, L = dm.group(1).strip(), dm.group(2)
        if dtype in ('return', 'goto', 'break', 'continue', 'case', 'default', 'else', 'do', 'delete', 'throw'):
            continue      # a statement, not a declaration
        if L in ('this_',) or len(re.findall(r'\b' + L + r'\b', body)) < 2:
            continue
        assigned = (re.search(r'(?<![\w.>])' + L + r'\b\s*(?:\[[^\]]*\]\s*)?(?:=[^=]|\+=|-=|\*=|/=|\|=|&=|<<=|>>=|\+\+|--)', body)
                    or re.search(r'&\s*' + L + r'\b', body) or re.search(r'(?:\+\+|--)\s*' + L + r'\b', body))
        if assigned:
            continue
        uninit_names.append(L)
        body = body[:dm.start()] + body[dm.start():dm.end()].replace(L + ';', L + ' = 0;', 1) + body[dm.end():]
        for sm in re.finditer(r'^\s*(.+?)\s*=\s*' + L + r'\s*;\s*$', body, re.M):
            dst = sm.group(1).strip()
            tgt = None
            mm = re.fullmatch(r'(\w+)\[(\d+)\]', dst)
            if mm and mm.group(1) in pnames_all:
                es = _elem_size(ptypes_all[pnames_all.index(mm.group(1))])
                if es: tgt = (mm.group(1), int(mm.group(2)) * es, es)
            mm = re.fullmatch(r'\*\((\w+) \*\)\((?:\(int\))?(\w+) \+ (0x[0-9a-f]+|\d+)\)', dst)
            if mm and SIZES.get(mm.group(1)):
                tgt = (mm.group(2), int(mm.group(3), 0), SIZES[mm.group(1)])
            mm = re.fullmatch(r'\*\((\w+) \*\)(\w+)', dst)
            if mm and SIZES.get(mm.group(1)):
                tgt = (mm.group(2), 0, SIZES[mm.group(1)])
            mm = re.fullmatch(r'\*(\w+)', dst)
            if mm and mm.group(1) in pnames_all:
                es = _elem_size(ptypes_all[pnames_all.index(mm.group(1))])
                if es: tgt = (mm.group(1), 0, es)
            if tgt and (tgt[0] == 'this_' or tgt[0] in pnames_all):
                uninit_ignores.append(tgt)
    # A parameter Ghidra typed float/double that the body also converts to an
    # integer is a type confusion (0x4d65a0: a pointer argument whose stack
    # slot is reused for a float temporary): the numeric conversion would
    # turn the pointer into garbage.
    for _k, q in enumerate(plist):
        qm = re.match(r'(float|double)\s+(\w+)$', q.strip())
        if qm and re.search(r'\((?:int|uint|undefined4|longlong|char \*|void \*|\w+ \*)\)\s*' + qm.group(2) + r'\b', body):
            # when the function has no fistp/__ftol those casts are
            # reinterpretations: the argument is a pointer (0x4026e0 reads
            # `*(short *)(param_1 + 4)`) whose stack slot the function later
            # reuses as a float temporary (`param_1 = clock + 0.5; f(&param_1)`).
            # The port takes the dword as `NAME_bits`, keeps the casts on it and
            # gives every other use a float local `NAME_f` seeded with the same
            # bits (2026-10-21, 25 game functions).
            _ins = list(disasm_cached(addr, size))
            _fist = any(i.mnemonic.startswith(('fist', 'fisttp')) or (i.mnemonic == 'call' and '0x55e128' in i.op_str) for i in _ins)
            if qm.group(1) != 'float' or _fist:
                raise Skip('float parameter used as integer/pointer')
            nm = qm.group(2)
            body = re.sub(r'(\((?:int|uint|undefined4|longlong|char \*|void \*|\w+ \*)\)\s*)' + nm + r'\b', r'\g<1>' + nm + '_bits', body)
            body = re.sub(r'\b' + nm + r'\b(?!_bits)', nm + '_f', body)
            _i = body.find('{')
            _decl = '\n  float %s_f = __builtin_bit_cast(float, %s_bits);   // @autoport-float-param: the slot holds a pointer first, a float later' % (nm, nm)
            body = body[:_i + 1] + _decl + body[_i + 1:] if 0 <= _i < 40 else _decl.lstrip() + '\n' + body
            plist[_k] = 'uint32_t %s_bits' % nm
            ptypes_all[_k], pnames_all[_k] = 'uint32_t', nm + '_bits'
    if ret_t in ('float', 'double', 'float10') and not st0_live and eax_live[0] not in ('none',) \
            and eax_live[1] not in ('allcalls', 'callsornone'):
        ret_t = 'void'
        body = re.sub(r'\breturn\s+[^;]+;', 'return;', body)
        float_header_eax = True
    else:
        float_header_eax = False
    # return type checks
    eax_mode, eax_arg = eax_live
    eax_other = False
    eax_note = None
    passthrough = False
    if ret_t == 'void' and eax_mode != 'none':
        if eax_mode == 'this' and self_t:
            ret_t = self_t
            body = re.sub(r'\breturn;', 'return this_;', body)
            body = body.rstrip() + '\n  return this_;\n'
        elif eax_mode == 'arg' and eax_arg is not None and eax_arg < len(plist) - (1 if self_t else 0):
            pk = plist[eax_arg + (1 if self_t else 0)]
            pname = re.search(r'(\w+)$', pk).group(1)
            ptype = re.sub(r'\s*\b\w+$', '', pk).strip()
            if ptype in ('undefined4', 'int', 'uint'):
                ptype = 'uint32_t'
            if ptype in ('float', 'double'):
                # the argument's 4 bytes are returned in EAX, not converted
                ptype = 'uint32_t'
                pname = 'bea_arg(%s)' % pname
            ret_t = ptype
            body = re.sub(r'\breturn;', 'return %s;' % pname, body)
            body = body.rstrip() + '\n  return %s;\n' % pname
        elif eax_mode == 'exprstore' and self_t:
            ret_t = 'uint32_t'
            body = re.sub(r'\breturn;', 'return %s;' % eax_arg, body)
            body = body.rstrip() + '\n  return %s;\n' % eax_arg
        elif eax_mode == 'expr' and self_t and not (
                re.search(r'this_\s*\+\s*' + re.escape(re.search(r'0x[0-9a-f]+', eax_arg).group(0)) + r'\)\s*=[^=]', body)
                if re.search(r'this_ \+ 0x[0-9a-f]+', eax_arg) else re.search(r'\*\(\w+ \*\)this_\s*=[^=]', body)):
            # the value left in EAX is a simple expression of this/globals that the
            # body does not overwrite: return it (otherwise the original returns
            # the value loaded *before* the store and we cannot reproduce it)
            ret_t = 'uint32_t'
            body = re.sub(r'\breturn;', 'return %s;' % eax_arg, body)
            body = body.rstrip() + '\n  return %s;\n' % eax_arg
        else:
            eax_other = True      # port stays void; stub passes EAX through; not promotable
            if eax_arg in ('allcalls', 'callsornone'):
                nb = passthrough_calls(body, allow_zero=(eax_arg == 'callsornone'))
                if nb is not None:
                    body = nb
                    ret_t = 'uint32_t'
                    passthrough = True
                    eax_other = False
                    eax_note = 'EAX is the last callee\'s EAX on every path: passed through'
            if eax_other:
                used, why = eaxuse.eax_used(addr)
                if not used:
                    eax_other = False
                    eax_note = why
    if ret_t == 'void' and st0_live:
        raise Skip('void but ST0 live at ret')
    # the mirror case: Ghidra typed the return float (ST0) but the code
    # leaves nothing on the x87 stack before `ret` (and does not pass a
    # callee's ST0 through): the port would return garbage in ST0 and the
    # original's EAX value is lost - NaN positions downstream (rule 23)
    if ret_t in ('float', 'double', 'float10') and not st0_live and eax_arg not in ('allcalls', 'callsornone'):
        raise Skip('float return but ST0 not set at ret')
    if float_header_eax and ret_t == 'void':
        raise Skip('float header, EAX return not expressible')
    if ret_t in ('float', 'double'):
        ret_t = 'float10'
    # globals
    defs = []
    seen = set()
    for g in re.findall(r'\b_?DAT_([0-9a-f]{8})\b', body):
        if g in seen:
            continue
        seen.add(g)
        ga = int(g, 16)
        for pref in ('DAT_', '_DAT_'):
            tok = pref + g
            if not re.search(r'\b' + tok + r'\b', body):
                continue
            # infer type from use
            uses = re.findall(r'.{0,40}\b' + tok + r'\b.{0,40}', body)
            txt = ' '.join(uses)
            if ga in global_kind and not re.search(r'\*' + tok + r'\b|' + tok + r'\[', txt):
                ty = global_kind[ga]            # width/kind seen in the disassembly
            elif re.search(r'\(float\s*\*\)\s*&?' + tok, txt) or re.search(r'fVar\d+ = ' + tok, txt) or re.search(tok + r' \* |\* ' + tok + r'|' + tok + r' / | / ' + tok + r'|\(float10\)' + tok, txt):
                ty = 'float'
            elif re.search(r'\*' + tok + r'\b|' + tok + r'\[', txt):
                ty = 'undefined4*'
            elif re.search(r"'\\0'|\(char \*\)|\(byte \*\)", txt):
                ty = 'char'
            else:
                ty = 'int'
            # `pcVar = &DAT_x;` with `char *pcVar;` declared: DAT_x is a char
            am = re.search(r'(\w+)\s*=\s*&' + tok + r'\b', body)
            if am:
                dm = re.search(r'^\s*((?:unsigned |signed )?\w+)\s*\*\s*' + am.group(1) + r'\s*;', body, re.M)
                if dm and dm.group(1) in ('char', 'byte', 'undefined', 'undefined1', 'uchar', 'short', 'ushort', 'undefined2', 'float', 'int', 'uint', 'undefined4'):
                    ty = dm.group(1)
            defs.append('#define %s GLOBAL_AT(%s, 0x%08x)' % (tok, ty, ga))
    for s in set(re.findall(r'\b(s_\w+?_([0-9a-f]{8}))\b', body)):
        defs.append('#define %s ((char*)0x%s)' % (s[0], s[1]))
    for s in set(re.findall(r'\b(u_\w+?_([0-9a-f]{8}))\b', body)):
        defs.append('#define %s ((short*)0x%s)' % (s[0], s[1]))
    # Ghidra's typed absolute references without a symbol (`fRam0066abcd`,
    # `uRam..`, `iRam..`, `piRam..`, `pvRam..`): the same as DAT_, typed by the prefix
    for pref, ty in (('iRam', 'int'), ('uRam', 'uint32_t'), ('fRam', 'float'), ('pvRam', 'void *'), ('piRam', 'int *')):
        for g in set(re.findall(r'\b' + pref + r'([0-9a-f]{8})\b', body)):
            defs.append('#define %s%s GLOBAL_AT(%s, 0x%s)' % (pref, g, ty, g))
    for s in set(re.findall(r'\b(PTR_\w+?_([0-9a-f]{8}))\b', body)):
        defs.append('#define %s GLOBAL_AT(void*, 0x%s)' % (s[0], s[1]))
    for cls, suffix in set(re.findall(r'&([A-Za-z_]\w*)::vftable(_this\d+)?\b', body)):
        key = cls + '::vftable' + suffix if suffix else cls
        if key not in vtables:
            raise Skip('unknown vtable ' + key)
        # whole names only: `&X::vftable` must not eat the prefix of `&X::vftable_this4`
        # (the set order varies between runs, so a plain replace broke ports at random)
        body = re.sub(re.escape('&%s::vftable%s' % (cls, suffix)) + r'(?!\w)', '((void*)0x%08x)' % vtables[key], body)
    # `&vftable` / `&vftable_this8` inside a method is its own class's vtable
    # (Ghidra drops the namespace that matches the function's)
    for suffix in set(re.findall(r'&vftable(_this\d+)?(?!\w)', body)):
        cls = ns_of.get(addr)
        key = (cls + '::vftable' + suffix if suffix else cls) if cls else None
        if key in vtables:
            body = re.sub(re.escape('&vftable' + suffix) + r'(?!\w)', '((void*)0x%08x)' % vtables[key], body)
    if re.search(r'&vftable\b|(?<![:\w])vftable\b', body):
        raise Skip('references own vtable')
    # direct callees: declare each as a typed pointer to its original address
    # (hooked addresses dispatch to our replacement automatically)
    body = re.sub(r'\bthunk_(FUN_[0-9a-f]{8})\b', r'\1', body)
    wrap_names = set()
    callees = set(re.findall(r'\b(FUN_[0-9a-f]{8}|[A-Za-z_]\w*::\w+)\s*\(', body))
    # functions Ghidra named without a namespace (FID: _rand, _strstr...)
    for cn in set(re.findall(r'(?<![\w.>])(_?[A-Za-z]\w*)\s*\(', body)):
        if (cn in name_to_addr or cn in IMPORTS) and cn not in callees and not cn.startswith('bea_'):
            callees.add(cn)
    # a function used as a value (a constructor handed to the vector iterator,
    # a callback): its original address (a hooked one dispatches to the port)
    body = re.sub(r'&?\bFUN_([0-9a-f]{8})\b(?!\s*\()', r'((void*)0x\1)', body)
    # the address of a label passed as a value (`&LAB_004049a0`: code Ghidra
    # did not make a function, handed to a registration routine): the raw
    # address, which runs the original code.  52 pool files failed to
    # compile on it (2026-10-21).  `goto LAB_x;` and the labels stay.
    body = re.sub(r'&\s*\bLAB_([0-9a-f]{8})\b', r'((void*)0x\1)', body)
    body = rewrite_denormal_compares(body)
    # the same for a named method (`CThing3rdPersonCamera::vslot10` handed to a
    # constructor iterator); qualified names are unique in functions.csv
    body = re.sub(r'&?\b([A-Za-z_]\w*::\w+)\b(?!\s*\()',
                  lambda mm: '((void*)0x%08x)' % name_to_addr[mm.group(1)] if mm.group(1) in name_to_addr else mm.group(0), body)
    for cname in sorted(callees):
        sig = callee_sig(cname)
        if sig is None and cname in IMPORTS:
            dll, iat, nbytes = IMPORTS[cname]
            if dll.split('.')[0] in WIN32_DLLS and nbytes is None:
                continue        # declared by windows.h; the call compiles as is
            if nbytes is not None:
                # stdcall with a known stack size: raw dword arguments
                defs.append('typedef uint32_t (BEA_STDCALL* %s_t)(%s);' % (cname, ', '.join(['uint32_t'] * (nbytes // 4)) or 'void'))
                wrap_names.add(cname)
            else:
                # cdecl library function (zlib, ogg, vorbis): pointer/int arguments
                defs.append('typedef uint32_t (BEA_CDECL* %s_t)(...);' % cname)
            defs.append('#define %s (*(%s_t*)0x%08x)   /* %s import, via the IAT */' % (cname, cname, iat, dll))
            continue
        if sig is None:
            raise Skip('callee signature unknown: ' + cname)
        cret, cconv, cparams, caddr = sig
        if cname in X87_SIGS:
            # an x87-operand intrinsic (_CIfmod, _CIasin): bea_x87callN loads
            # the operands on the FPU stack, x1 in ST0, and calls the original
            n = X87_SIGS[cname][1]
            defs.append('#define %s(%s) bea_x87call%d(0x%08x, %s)' % (cname, ', '.join('a%d' % k for k in range(n)), n, caddr,
                                                                      ', '.join('(float10)(a%d)' % k for k in range(n))))
            continue
        # a callee that reads ECX called through a cdecl/stdcall pointer: the
        # port never sets ECX (Ghidra does not show what the original put
        # there) and only works while a previous callee leaves the right
        # value (tools/check_ecx.py, 2026-10-20: 26 ports)
        if cconv in ('__cdecl', '__stdcall') and caddr in _ecx_readers():
            raise Skip('callee reads ECX but is typed %s: %s' % (cconv, cname))
        if cname in st0_overrides:
            cret = 'float10'      # the x87 value it leaves is its result (rewrite_extraout)
        if cret in ('float', 'double'):
            cret = 'float10'
        if cret == 'void':
            cret = 'uint32_t'     # calling through a uint32_t-returning pointer is ABI-safe; callers may use EAX
        cident = cname.replace('::', '__')
        # a thiscall callee whose call sites lack the `this` argument: Ghidra
        # typed it stdcall (a hand signature corrected that, 0x4fc6e0) and
        # dropped the ECX setup.  Refused, unless BEA_AUTOPORT_ASSUME_THIS=1
        # says the port's own `this_` is what the original loaded into ECX
        # (checked in the disassembly by hand for that one port)
        if cconv == '__thiscall' and self_t:
            import fix_fcast
            sites = list(re.finditer(r'(?<![\w.>])' + re.escape(cname) + r'\s*\(', body))
            for cm in reversed(sites):                     # edit from the end: earlier offsets stay valid
                end = fix_fcast.match(body, cm.end() - 1)
                inner = body[cm.end():end - 1]
                depth, nargs = 0, 0 if not inner.strip() else 1
                for ch in inner:
                    if ch in '([': depth += 1
                    elif ch in ')]': depth -= 1
                    elif ch == ',' and depth == 0: nargs += 1
                if nargs == len(cparams) - 1:
                    if os.environ.get('BEA_AUTOPORT_ASSUME_THIS') == '1':
                        body = body[:cm.end()] + 'this_' + (', ' if inner.strip() else '') + body[cm.end():]
                        note = '// @autoport-this-assumed: this_ passed to %s (ECX = this, checked in the disassembly)' % cname
                        if note not in defs:
                            defs.append(note)
                    else:
                        raise Skip('thiscall call site lacks this: ' + cname)
        wide = ('double', 'longlong', 'ulonglong', 'undefined8', 'float10')
        if '...' not in cparams and not any(q.strip() in wide for q in cparams):
            cparams = ['uint32_t'] * len(cparams)
            wrap_names.add(cident if '::' in cname else cname)
        else:
            cparams = ['void *' if ('*' in q and q.strip() != '...') else q for q in cparams]
        # __fastcall callees (only hand-verified ones, tools/conv_overrides.csv):
        # GCC's fastcall passes the first two dword arguments in ECX/EDX and
        # the rest on the stack, callee-cleaned, like VC6
        cc = {'__thiscall': 'BEA_THISCALL', '__cdecl': 'BEA_CDECL', '__stdcall': 'BEA_STDCALL', '__fastcall': 'BEA_FASTCALL'}[cconv]
        defs.append('typedef %s (%s* %s_t)(%s);' % (cret, cc, cident, ', '.join(cparams) if cparams else 'void'))
        # bea_guard (ghidra_compat.h): pops a float the callee leaves behind
        # when the port declares a non-float return (the original's hidden
        # `fstp st(0)` after a discarded float result)
        defs.append('static const bea_guard<%s_t> %s = {(%s_t)0x%08x};' % (cident, cident, cident, caddr))
        if '::' in cname:
            body = re.sub(r'\b' + re.escape(cname) + r'\s*\(', cident + '(', body)
    if passthrough:
        f10 = [c for c in callees if callee_sig(c) and callee_sig(c)[0] in ('float', 'double', 'float10')]
        rets = re.findall(r'^\s*return ([A-Za-z_][\w:]*)\s*\(', body, re.M)
        fl = [r for r in rets if r in f10]
        if fl and len(fl) != len(rets):
            raise Skip('pass-through mixes ST0 and EAX returns')
        if fl:
            ret_t = 'float10'
    body = re.sub(r'SUB84\(\(double\)([^,()]+(?:\([^()]*\))?),0\)(?:,\s*\(int\)\(\(ulonglong\)\(double\)\1 >> 0x20\))?', r'(double)\1', body)
    body = wrap_call_args(body, wrap_names)
    # unknown class types used as byte-addressed pointers
    typedefs = sorted(class_names(body + ' ' + ' '.join(plist) + ' ' + ' '.join(defs) + ' ' + (self_t or '')))
    # Windows structs that windows.h/mmsystem.h already declare (0x5053d0's
    # _MMIOINFO, 0x559be0's _MEMORYSTATUS): the real type, not a char alias
    WIN_TYPES = {'_MMIOINFO', '_MEMORYSTATUS', '_SYSTEMTIME', '_FILETIME', '_RECT', '_POINT', '_WAVEFORMATEX',
                 '_LARGE_INTEGER', '_OVERLAPPED', '_SECURITY_ATTRIBUTES', '_WIN32_FIND_DATAA', '_MSG',
                 'MMIOINFO', 'MMCKINFO', '_MMCKINFO', 'WAVEFORMATEX', 'HMMIO', 'MEMORYSTATUS', 'SYSTEMTIME', 'FILETIME',
                 'RECT', 'POINT', 'LARGE_INTEGER', 'OVERLAPPED', 'MSG', 'HWND__', 'HINSTANCE__', 'HDC__', 'tagRECT', 'tagPOINT'}
    # an import's function-pointer typedef name (`_BinkOpen_8_t`) is not an
    # unknown class: five FMV-player candidates declared it twice (2026-10-21)
    _defs_text = '\n'.join(defs)
    typedefs = [t for t in typedefs if not re.search(r'\*\s*' + re.escape(t) + r'\)', _defs_text)]
    defs = ['typedef char %s;' % t for t in typedefs if t not in WIN_TYPES] + defs
    def _partial(mm):
        off, ln = int(mm.group(2)), int(mm.group(3))
        ty = {1: 'uint8_t', 2: 'uint16_t', 4: 'uint32_t', 8: 'uint64_t'}.get(ln)
        if ln == 3 and off + ln <= 4:
            # `local_4._1_3_` (the upper three bytes): a value only, so an
            # assignment to it fails to compile and the port is rejected
            return '((*(uint32_t*)((char*)&%s) >> %d) & 0xffffffu)' % (mm.group(1), 8 * off)
        if not ty:
            return mm.group(0)
        return '(*(%s*)((char*)&%s + %d))' % (ty, mm.group(1), off)
    # an assignment to the upper three bytes (`local_4._1_3_ = 0;`): a
    # read-modify-write of the dword (12 candidates failed as "lvalue
    # required", 2026-10-21)
    def _partial_store(mm):
        name, off, expr = mm.group(1), int(mm.group(2)), mm.group(3)
        sh = 8 * off
        return ('*(uint32_t*)((char*)&%s) = (*(uint32_t*)((char*)&%s) & ~(0xffffffu << %d)) | (((uint32_t)(%s) & 0xffffffu) << %d);'
                % (name, name, sh, expr, sh))
    body = re.sub(r'\b([A-Za-z_]\w*)\._([01])_3_\s*=\s*([^;=][^;]*);', _partial_store, body)
    # `_local_N`: Ghidra's whole-slot alias of a local it also typed narrower
    for nm in set(re.findall(r'\b_(local_[0-9a-f]+)\b', body)):
        if re.search(r'\b' + nm + r'\b', re.sub(r'\b_' + nm + r'\b', '', body)):
            body = re.sub(r'\b_' + nm + r'\b', '(*(uint32_t*)((char*)&%s))' % nm, body)
    body = re.sub(r'\b([A-Za-z_]\w*)\._(\d+)_(\d+)_', _partial, body)
    # `(T *)(&DAT_x + EXPR)`: Ghidra did the arithmetic on its own view of
    # DAT_x (an `undefined` byte unless it knew better), the cast says the
    # result is a T.  The port's define types DAT_x by the access width
    # (short for 0x4be9b0's `cmpw`), so `&DAT_x + EXPR` scaled EXPR by two and
    # the function read the wrong byte (returned 0 for 1: levels 211, 311,
    # 411 and 700 changed with that one port, 2026-10-21).  Byte arithmetic.
    # Only when the addend carries an explicit multiply (`idx * 4`, `n *
    # 0x18 + 8`): Ghidra writes that when its base type is one byte; for a
    # four-byte base it divides the scale out (`&DAT + idx`), and a bare
    # constant addend cannot be told apart, so those stay as they are.
    def _bytes_arith(mm):
        cast, dat, rest = mm.group(1), mm.group(2), mm.group(3)
        return '%s((char *)&%s)%s' % (cast, dat, rest) if re.search(r'\*\s*(?:0x[0-9a-f]+|\d+)\b', rest) else mm.group(0)
    # `\*+`: a `(int **)(&DAT_008a9d58 + iVar3 * 4)` (0x4d2bb0, the matrix of
    # object iVar3) was left scaled by the define's int type: the radar and
    # HUD matrices came from the wrong objects (frame oracle, 2026-10-22)
    body = re.sub(r'(\(\s*[A-Za-z_][\w ]*\*+\s*\)\s*\()&((?:_?DAT|[fiu]Ram|p[vi]Ram)_?[0-9a-f]{8})\b(\s*[+-][^;)]*)', _bytes_arith, body)
    body = re.sub(r'\bNAN\(', 'bea_isnan(', body)    # Ghidra's unordered test, not the constant
    body = rewrite_vcalls(body)
    if '(**(code **)' in body or '(*(code *)' in body:
        k = body.find('(**(code **)') if '(**(code **)' in body else body.find('(*(code *)')
        raise Skip('indirect call not rewritten: ' + re.sub(r'\s+', ' ', body[max(0, k - 30):k + 110]))
    _arity_note = check_call_arity(addr, size, body)
    if _arity_note:
        defs.append('// @autoport-arity: ' + _arity_note)
    body = guard_loops(body)
    # a pointer-returning port whose returned expression has another pointer
    # type (`int *` returned as `undefined *`): the same EAX, so cast it
    if ret_t and ret_t.rstrip().endswith('*'):
        body = re.sub(r'\breturn\s+(?!;)([^;]+);', lambda mm: 'return (%s)(%s);' % (ret_t, mm.group(1)), body)
    # output: the port, a shadow stub with the same stack layout, registration
    for p in plist:
        if re.match(r'(double|longlong|ulonglong|undefined8)\b', p) and not direct:
            raise Skip('8-byte parameter')
    fn = 'ap_%08x' % addr
    stub = 'sh_%08x' % addr
    slot = 'ap_%08x_orig' % addr
    ptypes = [re.sub(r'\s*\b\w+$', '', p).strip() for p in plist]      # declared types
    pnames = [re.search(r'(\w+)$', p).group(1) for p in plist]
    stub_params = ', '.join('uint32_t a%d' % k for k in range(len(plist)))
    has_self = bool(self_t)
    small = small_ = ('byte', 'char', 'short', 'ushort', 'bool', 'undefined1', 'undefined2', 'uchar', 'sbyte', 'undefined', 'wchar16')
    # every 4-byte argument may be a pointer (Ghidra often types them int): the
    # stub decides at run time and sandboxes anything that points at readable memory
    ptr_args = [k for k, ty in enumerate(ptypes) if not (k == 0 and has_self) and ty not in small_]
    conv_args = []
    for k, (ty, nm) in enumerate(zip(ptypes, pnames)):
        if k == 0 and has_self:
            continue
        if ty in small:
            conv_args.append('(%s)a%d' % (ty, k))
        else:
            conv_args.append('bea_shadow::bits<%s>(p%d)' % (ty, k))      # possibly redirected pointer
    if direct and eax_other:
        raise Skip('void but EAX live at ret (other)')
    out = ['// auto-ported from %s (%s, %d bytes) by tools/autoport.py' % (files[0].split(os.sep)[-1], name_hint, size),
           '// @autoport-mode direct (not shadow-testable: verified by static checks and soak)' if direct else '// @autoport-mode shadow',
           '// @autoport-eax other (port returns void but the original leaves a value in EAX; review before promoting)' if eax_other
           else ('// @autoport-eax unused (%s)' % eax_note if eax_note else '// @autoport-eax ok'),
           '#include "bea/ghidra_compat.h"', '#include "bea/hooks.h"', '#include "bea/shadow.h"',
           '#define BEA_LOOP_GUARD(c) (bea_shadow::tick() && (c))   // promote.py turns this into (c)', '']
    if frame_size:
        out.insert(2, '// @autoport-frame 0x%x: a stack local\'s address escapes; locals keep the original frame layout' % frame_size)
    for L in uninit_names:
        out.insert(2, '// @autoport-uninit %s: never written by the original (stack garbage is copied out); the port stores 0' % L)
    if float_header_eax:
        out.insert(2, '// @autoport-eaxfloat: Ghidra typed the return float, but the value is returned in EAX (rule 23)')
    if eh_frame:
        out.insert(2, '// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)')
    out += defs
    out.append('')
    # narrow return types (bool, char, short...) are widened to the full EAX:
    # GCC would set only AL/AX and leave garbage above, but VC6 callers may test
    # all of EAX (0x426900 returned `inc eax` = 0/1 and its caller tested EAX).
    # The C conversion zero-extends unsigned types and bool, sign-extends signed
    # ones; the stub compares all 32 bits, so a wrong extension is a mismatch.
    if ret_t in small_:
        ret_t = 'uint32_t'
    out.append('static %s %s %s(%s)' % (ret_t, conv, fn, ', '.join(plist) if plist else 'void'))
    out.append('{' + body + '}')
    out.append('')
    if direct:
        out = [l for l in out if l not in ('#include "bea/shadow.h"',)]
        out = [('#define BEA_LOOP_GUARD(c) (c)' if l.startswith('#define BEA_LOOP_GUARD') else l) for l in out]
        out.append('// @autoport-registration')
        out.append('BEA_HOOKS(BEA_HOOK(0x%08x, %s));' % (addr, fn))
        return '\n'.join(out) + '\n'
    is_void = ret_t == 'void'
    is_f80 = ret_t == 'float10'
    stub_ret = 'uint32_t' if (is_void and eax_other) else ret_t   # pass the original's EAX through
    out.append('static void* %s = nullptr;' % slot)
    out.append('static %s %s %s(%s)' % (stub_ret, conv, stub, stub_params if stub_params else 'void'))
    out.append('{')
    out.append('    typedef %s (%s* Fn)(%s);' % (stub_ret, conv, stub_params if stub_params else 'void'))
    all_args = ', '.join('a%d' % k for k in range(len(plist)))
    # The port runs entirely on scratch memory: a copy of `this` at the start
    # of the shared buffer and a 16 KB window per pointer argument, so its
    # writes never reach the real object before the original has run.
    out.append('    static unsigned calls_ = 0;')
    out.append('    if (++calls_ > 256 && (calls_ & 31) != 0) return %sreinterpret_cast<%s (%s*)(%s)>(%s)(%s);' % (
        '' if is_void and not eax_other else '', stub_ret, conv, stub_params if stub_params else 'void', slot, all_args))
    out.append('    static char* copybuf_ = nullptr;')
    out.append('    char* copy = bea_shadow::guarded_buffer(copybuf_);')
    if has_self:
        out.append('    const size_t kCopy = 0x%x;   // largest this-relative displacement + slack' % copy_bytes)
        out.append('    const void* self = bea_shadow::bits<const void*>(a0);')
        out.append('    size_t n = bea_shadow::readable_span(self, kCopy);')
        out.append('    memcpy(copy, self, n);')
    else:
        out.append('    const void* self = nullptr; size_t n = 0; (void)self; (void)n;')
    for k in ptr_args:
        out.append('    const void* r%d = bea_shadow::bits<const void*>(a%d);' % (k, k))
        out.append('    char* w%d = copy + 0x80000 + 0x%x; size_t n%d = 0; uint32_t p%d = a%d;' % (k, k * 0x4000, k, k, k))
        out.append('    if (self && bea_shadow::redirect(a%d, self, n, copy) != a%d) p%d = bea_shadow::redirect(a%d, self, n, copy);' % (k, k, k, k))
        out.append('    else if ((uintptr_t)r%d >= 0x10000 && (n%d = bea_shadow::readable_span(r%d, 0x4000)) > 0) { memcpy(w%d, r%d, n%d); p%d = (uint32_t)(uintptr_t)w%d; }' % (k, k, k, k, k, k, k, k))
    if has_self:
        port_call = '%s((%s)copy%s)' % (fn, self_t, (', ' + ', '.join(conv_args)) if conv_args else '')
    else:
        port_call = '%s(%s)' % (fn, ', '.join(conv_args))
    orig_call = 'reinterpret_cast<Fn>(%s)(%s)' % (slot, all_args)
    out.append('    g_bea_shadow_current = 0x%08x;' % addr)
    out.append('    g_bea_shadow_budget = bea_shadow::kLoopBudget;')
    if is_void:
        out.append('    %s;' % port_call)
        if eax_other:
            out.append('    uint32_t r_orig = %s;' % orig_call)
        else:
            out.append('    %s;' % orig_call)
        out.append('    bool mm = false; char detail[96] = "";')
    else:
        out.append('    %s r_port = %s;' % (ret_t, port_call))
        out.append('    %s r_orig = %s;' % (ret_t, orig_call))
        if is_f80:
            out.append('    bool mm = !bea_shadow::same_f80(r_port, r_orig); char detail[96] = "";')
            out.append('    if (mm) snprintf(detail, sizeof detail, "ret port=%Lg orig=%Lg", r_port, r_orig);')
        else:
            out.append('    uint32_t rp = (uint32_t)r_port;')
            if has_self:
                out.append('    rp = bea_shadow::translate_ret(rp, copy, n, self);')
            for k in ptr_args:
                out.append('    rp = bea_shadow::translate_ret(rp, w%d, n%d, r%d);' % (k, k, k))
            out.append('    bool mm = rp != (uint32_t)r_orig; char detail[96] = "";')
            out.append('    if (mm) snprintf(detail, sizeof detail, "ret port=%08x orig=%08x", (unsigned)rp, (unsigned)(uint32_t)r_orig);')
    for (bname, boff, blen) in uninit_ignores:
        if bname == 'this_' and has_self:
            out.append('    bea_shadow::ignore(copy, self, n, 0x%x, %d);   // uninitialised in the original' % (boff, blen))
        elif bname in pnames and pnames.index(bname) in ptr_args:
            k = pnames.index(bname)
            out.append('    if (n%d) bea_shadow::ignore(w%d, r%d, n%d, 0x%x, %d);   // uninitialised in the original' % (k, k, k, k, boff, blen))
    if has_self:
        out.append('    { int d = bea_shadow::first_diff(copy, self, n);')
        out.append('      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "this differs at +0x%x", d); } }')
    for k in ptr_args:
        out.append('    if (n%d) { int d = bea_shadow::first_diff(w%d, r%d, n%d);' % (k, k, k, k))
        out.append('      if (d >= 0) { mm = true; if (!detail[0]) snprintf(detail, sizeof detail, "arg%d differs at +0x%%x", d); } }' % k)
    out.append('    if (g_bea_shadow_budget <= 0) { mm = true; snprintf(detail, sizeof detail, "loop budget exhausted"); }')
    out.append('    g_bea_shadow_current = 0;')
    out.append('    bea_shadow_record(0x%08x, mm, detail);' % addr)
    if not is_void or eax_other:
        out.append('    return r_orig;')
    out.append('}')
    out.append('')
    out.append('// @autoport-registration')
    out.append('BEA_HOOKS(BEA_SHADOW_HOOK(0x%08x, %s, %s));' % (addr, stub, slot))
    return '\n'.join(out) + '\n'


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--list', required=True)
    ap.add_argument('--out', default=os.path.join(ROOT, 'src', 'bea', 'autoport'))
    ap.add_argument('--check', action='store_true')
    ap.add_argument('--direct', action='store_true', help='plain replacements for functions that cannot be shadow-tested (default --out src/bea/direct)')
    ap.add_argument('--keep', action='store_true', help='with --check: keep files that fail to compile and write <out>/_errors.txt')
    a = ap.parse_args()
    if a.direct and a.out == os.path.join(ROOT, 'src', 'bea', 'autoport'):
        a.out = os.path.join(ROOT, 'src', 'bea', 'direct')
    os.makedirs(a.out, exist_ok=True)
    sizes = {}
    import csv
    for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace')):
        sizes[int(r['address'], 16)] = (int(r['size']), (r['namespace'] + '::' if r['namespace'] not in ('', 'Global') else '') + r['name'])
    # addresses already replaced elsewhere (hand-written, generated, verified)
    hooked = set()
    for path in glob.glob(os.path.join(ROOT, 'src', '**', '*.cpp'), recursive=True) + \
            glob.glob(os.path.join(ROOT, 'src', '**', '*.inc'), recursive=True):
        if os.path.abspath(os.path.dirname(path)) == os.path.abspath(a.out):
            continue
        for m in re.finditer(r'BEA_(?:SHADOW_)?HOOK(?:_T|_TRIVIAL)?\(\s*(0x[0-9A-Fa-f]+)', open(path, encoding='utf-8', errors='replace').read()):
            hooked.add(int(m.group(1), 16))
    reasons = collections.Counter()
    emitted = []
    for line in open(a.list):
        tok = line.split()
        if not tok:
            continue
        addr = int(tok[0], 16)
        if addr in hooked and not os.environ.get('BEA_AUTOPORT_RESCAN'):
            reasons['already replaced'] += 1
            continue
        size, name = sizes[addr]
        try:
            code = transform(addr, name, size, direct=a.direct)
        except Skip as e:
            reasons['skip: ' + str(e)] += 1
            if os.environ.get('BEA_AUTOPORT_DEBUG'):
                print('skip %08x %s' % (addr, e), file=sys.stderr)
            continue
        path = os.path.join(a.out, 'ap_%08x.cpp' % addr)
        if os.path.exists(path) and '@autoport-handfixed' in open(path).read():
            reasons['hand-fixed, kept'] += 1
            continue
        open(path, 'w').write(code)
        emitted.append((addr, path))
    print('emitted %d files' % len(emitted))
    if a.check and emitted:
        # gcc only works inside the MSYS2 MinGW32 environment: one bash call for all files
        inc = os.path.join(ROOT, 'src').replace('\\', '/')
        outdir = a.out.replace('\\', '/')
        # files that do not compile are removed again so the DLL build stays green
        rm = 'true' if a.keep else 'rm -f "$f"'
        script = ("cd '%s' && rm -f _errors.txt && for f in ap_*.cpp; do if g++ -fsyntax-only -std=c++17 -w -fpermissive -I'%s' \"$f\" 2>/tmp/ap_err.txt; "
                  "then echo \"OK $f\"; else echo \"FAIL $f: $(grep -m1 error /tmp/ap_err.txt | cut -c1-200)\"; grep error /tmp/ap_err.txt | head -3 >> _errors.txt; %s; fi; done" % (outdir, inc, rm))
        r = subprocess.run(['C:/msys64/usr/bin/bash.exe', '-lc', script], capture_output=True, text=True,
                           env=dict(os.environ, MSYSTEM='MINGW32', CHERE_INVOKING='1'))
        ok = 0
        fails = []
        errkinds = collections.Counter()
        for line in r.stdout.splitlines():
            if line.startswith('OK '):
                ok += 1
            elif line.startswith('FAIL '):
                fails.append(line)
                msg = line.split(':', 1)[1] if ':' in line else line
                msg = re.sub(r'ap_[0-9a-f]{8}\.cpp:\d+:\d+: ', '', msg)
                msg = re.sub(r"'[^']*'", "'_'", msg)
                errkinds[msg.strip()[:90]] += 1
        # a pointer-type mismatch between two of Ghidra's own typings
        # (`puStack_124 = &local_194;`, `local_14[0] = &DAT_0062d804;`) is not a
        # bug in the port: insert the cast GCC names and try again, per file,
        # up to three times (2026-10-21; the untyped original has no such thing)
        conv = re.compile(r"^(ap_[0-9a-f]{8}\.cpp):(\d+):(\d+): error: (?:cannot convert '[^']*'(?: \{aka '[^']*'\})? to '([^']*)'(?: \{aka '[^']*'\})? in (?:assignment|initialization|argument passing)"
                          r"|invalid conversion from '[^']*'(?: \{aka '[^']*'\})? to '([^']*)'(?: \{aka '[^']*'\})?)", re.M)
        fixed = 0
        for line in list(fails):
            fname = line.split()[1].rstrip(':')
            path = os.path.join(a.out, fname)
            if not os.path.exists(path):
                continue
            for _round in range(3):
                chk = subprocess.run(['C:/msys64/usr/bin/bash.exe', '-lc',
                                      "cd '%s' && g++ -fsyntax-only -std=c++17 -w -fpermissive -I'%s' '%s' 2>&1" % (outdir, inc, fname)],
                                     capture_output=True, text=True, env=dict(os.environ, MSYSTEM='MINGW32', CHERE_INVOKING='1'))
                errs = [l for l in chk.stdout.splitlines() if ': error: ' in l]
                if not errs:
                    ok += 1; fixed += 1; fails.remove(line); break
                edits = []
                for e in errs:
                    m = conv.match(e)
                    if not m or '*' not in (m.group(4) or m.group(5) or ''):
                        edits = None; break
                    edits.append((int(m.group(2)), int(m.group(3)), (m.group(4) or m.group(5)).strip()))
                if not edits:
                    break
                src_lines = open(path, encoding='utf-8', errors='replace').read().split('\n')
                for ln, col, ty in sorted(set(edits), reverse=True):
                    s = src_lines[ln - 1]
                    src_lines[ln - 1] = s[:col - 1] + '(%s)' % ty + s[col - 1:]
                open(path, 'w', encoding='utf-8').write('\n'.join(src_lines))
            else:
                pass
            if line in fails and not a.keep:
                try: os.remove(path)
                except OSError: pass
        if fixed:
            print('pointer casts inserted: %d file(s) compile now' % fixed)
            # _errors.txt (read by the pool builders) must not list them any more
            errp = os.path.join(a.out, '_errors.txt')
            if os.path.exists(errp):
                still = {l.split()[1].rstrip(':') for l in fails}
                keep_lines = [l for l in open(errp, encoding='utf-8', errors='replace').read().splitlines()
                              if not re.match(r'(ap_[0-9a-f]{8}\.cpp)', l) or re.match(r'(ap_[0-9a-f]{8}\.cpp)', l).group(1) in still]
                open(errp, 'w', encoding='utf-8').write('\n'.join(keep_lines) + ('\n' if keep_lines else ''))
        print('compiled OK: %d / %d' % (ok, len(emitted)))
        reasons['compile error'] = len(fails)
        for k, v in errkinds.most_common(15):
            print('  %3d  %s' % (v, k))
        if r.stderr.strip():
            print(r.stderr[:500])
    for k, v in reasons.most_common():
        print('  %-40s %d' % (k, v))


if __name__ == '__main__':
    main()
