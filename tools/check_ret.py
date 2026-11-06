"""Static stack-balance check: compare the `ret N` of every hooked original in
BEA.exe with the `ret N` of its replacement in build/zlib.dll.

A mismatch means the replacement pops a different number of argument bytes
than the original (wrong calling convention or parameter count); callers then
run with a skewed ESP, which typically ends in a crash the VEH logger cannot
report.  Hook tables are found by scanning the DLL's data for BeaHook records
{exe_addr, name*, replacement*, file*, original*}.

It also flags replacements whose last EAX write before `ret` covers only
AL/AX where the original writes all of EAX (a `bool` replacement for a
function whose callers test the whole register).

Usage: python -I tools/check_ret.py [--all]
"""
import os, re, struct, sys
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe')
DLL = next((x.split('=', 1)[1] for x in sys.argv if x.startswith('--dll=')), os.path.join(ROOT, 'build', 'zlib.dll'))


class Image:
    def __init__(self, path):
        self.pe = pefile.PE(path)
        self.base = self.pe.OPTIONAL_HEADER.ImageBase
        self.img = self.pe.get_memory_mapped_image()
        self.text = [(self.base + s.VirtualAddress, self.base + s.VirtualAddress + s.Misc_VirtualSize)
                     for s in self.pe.sections if s.Characteristics & 0x20000000]

    def is_code(self, va):
        return any(a <= va < b for a, b in self.text)

    def bytes(self, va, n):
        o = va - self.base
        return self.img[o:o + n]

    def cstr(self, va):
        o = va - self.base
        e = self.img.find(b'\0', o)
        return self.img[o:e].decode('latin1')


md = Cs(CS_ARCH_X86, CS_MODE_32)


def rets(image, va, limit=4000, follow=3):
    """Collect the immediates of the `ret`s reachable by a linear sweep with
    forward-jump following (good enough for compiler output)."""
    seen, out = set(), set()
    work = [va]
    while work and len(seen) < 400:
        pc = work.pop()
        if pc in seen or not image.is_code(pc):
            continue
        seen.add(pc)
        push_imm = None
        for ins in md.disasm(image.bytes(pc, limit), pc):
            if ins.mnemonic == 'ret':
                if push_imm is not None and not ins.op_str:
                    work.append(push_imm)          # `push TARGET; ret`: a thunk port's jump (autoport, 2026-10-21)
                    break
                out.add(int(ins.op_str, 16) if ins.op_str else 0)
                break
            push_imm = int(ins.op_str, 16) if ins.mnemonic == 'push' and ins.op_str.startswith('0x') else None
            if ins.mnemonic == 'jmp':
                if ins.op_str.startswith('0x'):
                    work.append(int(ins.op_str, 16))
                else:
                    out.add('indirect')
                break
            if ins.mnemonic.startswith('j') and ins.op_str.startswith('0x'):
                work.append(int(ins.op_str, 16))
            if ins.mnemonic in ('int3', 'hlt', 'ud2'):
                break
            if ins.mnemonic == 'call' and ins.op_str.startswith('0x'):
                t = int(ins.op_str, 16)
                # calls to noreturn helpers end the path; can't tell, keep sweeping
    return out


def eax_width(image, va, limit=4000):
    """Per path to a `ret`: 'full' if the last write to EAX before it covers
    the whole register, 'part' if it only writes AL/AH (setcc al, mov al),
    'none' if nothing on the path writes EAX (or a call does)."""
    out = set()
    work = [(va, 'none')]
    seen = set()
    while work and len(seen) < 400:
        pc, last = work.pop()
        if pc in seen or not image.is_code(pc):
            continue
        seen.add(pc)
        push_imm = None
        for ins in md.disasm(image.bytes(pc, limit), pc):
            m, o = ins.mnemonic, ins.op_str
            if m == 'ret':
                if push_imm is not None and not o:
                    work.append((push_imm, last))   # `push TARGET; ret`: a thunk port's jump
                    break
                out.add('full' if last == 'zero' else last)
                break
            push_imm = int(o, 16) if m == 'push' and o.startswith('0x') else None
            if m == 'call':
                last = 'call'
            elif m not in ('cmp', 'test', 'push') and o:
                dst = o.split(',')[0].strip()
                if dst == 'eax':
                    last = 'zero' if (m == 'xor' and o == 'eax, eax') or (m == 'mov' and o == 'eax, 0') else 'full'
                elif dst in ('al', 'ah', 'ax'):
                    last = 'full' if last == 'zero' else 'part'   # setcc al after xor eax, eax
            if m == 'jmp':
                if o.startswith('0x'):
                    work.append((int(o, 16), last))
                break
            if m.startswith('j') and o.startswith('0x'):
                work.append((int(o, 16), last))
    return out


def main():
    exe, dll = Image(EXE), Image(DLL)
    data = dll.img
    hooks = []
    for o in range(0, len(data) - 20, 4):
        a, name, repl, src, orig = struct.unpack_from('<5I', data, o)
        if 0x401000 <= a < 0x5d8000 and dll.is_code(repl) and dll.base <= name < dll.base + len(data) \
                and dll.base <= src < dll.base + len(data):
            try:
                n = dll.cstr(name)
            except Exception:
                continue
            if n and all(32 <= ord(c) < 127 for c in n):
                hooks.append((a, n, repl, orig))
    bad = 0
    for a, n, repl, orig in sorted(set(hooks)):
        ro, rr = rets(exe, a), rets(dll, repl)
        ok = ro == rr or (len(ro) == 1 and len(rr) == 1 and ro == rr)
        if 'indirect' in ro or 'indirect' in rr or not ro or not rr:
            if '--all' in sys.argv:
                print('?    %08x %-50s orig=%s repl=%s' % (a, n, sorted(map(str, ro)), sorted(map(str, rr))))
            continue
        if ro != rr:
            bad += 1
            print('BAD  %08x %-50s orig ret %s  repl ret %s' % (a, n, sorted(ro), sorted(rr)))
    print('%d hooks checked, %d stack-balance mismatches' % (len(set(hooks)), bad))
    # return width: the original sets all of EAX but the replacement only AL/AX
    narrow = 0
    for a, n, repl, orig in sorted(set(hooks)):
        if n.startswith('shadow:') or n.startswith('harness:'):
            continue
        wo, wr = eax_width(exe, a), eax_width(dll, repl)
        # a partial write in the replacement is only wrong if the original
        # never leaves a partial write at any ret (paths cannot be matched)
        if 'full' in wo and 'part' in wr and 'part' not in wo:
            narrow += 1
            print('NARROW %08x %-50s orig %s  repl %s' % (a, n, sorted(wo), sorted(wr)))
    print('%d replacements return a narrower EAX than the original' % narrow)


if __name__ == '__main__':
    main()
