"""Map the CRASH lines of a hook log to the auto-ported functions involved.

The DLL's crash logger prints EIP and code-looking stack dwords as `dll+off`
(and plain exe addresses).  Offsets are resolved with addr2line against
build/zlib.dll (built with -g), so a fault inside a port, or a game-code fault
with a port on the call stack, names its `ap_<addr>` function directly and
no bisect is needed.

Usage: python -I tools/crashmap.py <log file>...      prints "addr name kind" per implicated port
API:   implicated(log_path) -> [(exe addr, function name, 'eip'|'stack')]
"""
import os, re, subprocess, sys
import pefile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DLL = os.path.join(ROOT, 'build', 'zlib.dll')
ADDR2LINE = 'C:/msys64/mingw32/bin/addr2line.exe'


def _image_base():
    # close the mapping: a PE object left open keeps build/zlib.dll mapped and
    # the next link fails with "cannot open output file: Invalid argument"
    pe = pefile.PE(DLL, fast_load=True)
    try:
        return pe.OPTIONAL_HEADER.ImageBase
    finally:
        pe.close()


def _symbolize(offsets):
    if not offsets:
        return {}
    base = _image_base()
    addrs = ['0x%x' % (base + o) for o in offsets]
    # -a prints the address before each symbol group; -i adds the inlining
    # chain (a fault inside bea_vcall<> is attributed to the port that inlined it)
    r = subprocess.run([ADDR2LINE, '-a', '-f', '-C', '-i', '-e', DLL] + addrs, capture_output=True, text=True)
    out = {}
    cur = None
    for line in r.stdout.splitlines():
        line = line.strip()
        if line.startswith('0x'):
            cur = int(line, 16) - base
            out.setdefault(cur, [])
        elif cur is not None and not re.match(r'.*:\d+$|\?\?', line):
            out[cur].append(line)
    return {o: ' '.join(names) for o, names in out.items()}


_EXE = None


def _exe_call_target(ret):
    """Target of a direct `call rel32` that ends right before the return
    address `ret` in BEA.exe, or None."""
    global _EXE
    if _EXE is None:
        pe = pefile.PE(os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe'), fast_load=True)
        _EXE = (pe.OPTIONAL_HEADER.ImageBase, pe.get_memory_mapped_image())
        pe.close()
    base, img = _EXE
    off = ret - 5 - base
    if not (0 <= off < len(img) - 5) or img[off] != 0xE8:
        return None
    return (ret + int.from_bytes(img[off + 1:off + 5], 'little', signed=True)) & 0xffffffff


def implicated(log_path):
    text = open(log_path, encoding='utf-8', errors='replace').read()
    m = re.search(r'CRASH code=([0-9a-f]+) eip=([0-9a-f]+) \(dll\+([0-9a-f]+)\)', text)
    callers = []
    if m:
        eip_off = int(m.group(3), 16)
        stack = re.search(r'CRASH stack:(.*)', text)
        stack_offs = [int(x, 16) for x in re.findall(r'dll\+([0-9a-f]+)', stack.group(1))] if stack else []
        # game-code return addresses whose call targets a (possibly hooked)
        # function: independent of the DLL's symbols (2026-10-19: a port on
        # the stack under `call 0x4e5b20` was not named from its dll offset)
        if stack:
            for x in re.findall(r'(?<![+\w])([0-9a-f]{8})\b', stack.group(1)):
                t = _exe_call_target(int(x, 16))
                if t:
                    callers.append(t)
    else:
        # a hang: the watchdog sampled the main thread's EIP and stack
        hangs = re.findall(r'HANG eip=[0-9a-f]+ \(dll\+([0-9a-f]+)\) esp=[0-9a-f]+ stack:(.*)', text)
        if not hangs:
            return []
        eip_off = 0
        stack_offs = []
        for eo, st in hangs:
            if int(eo, 16) and not eip_off:
                eip_off = int(eo, 16)
            stack_offs += [int(x, 16) for x in re.findall(r'dll\+([0-9a-f]+)', st)]
    names = _symbolize(([eip_off] if eip_off else []) + stack_offs)
    out = []
    seen = set()
    for kind, o in [('eip', eip_off)] + [('stack', o) for o in stack_offs]:
        if o == 0:
            continue
        nm = names.get(o, '')
        mm = re.search(r'\b(?:ap|sh)_([0-9a-f]{8})\b', nm)
        if mm and mm.group(1) not in seen:
            seen.add(mm.group(1))
            out.append((int(mm.group(1), 16), nm, kind))
    for t in callers:
        if '%08x' % t not in seen:
            seen.add('%08x' % t)
            out.append((t, 'called from game code on the stack', 'caller'))
    return out


if __name__ == '__main__':
    for path in sys.argv[1:]:
        for a, nm, kind in implicated(path):
            print('%08x %s %s' % (a, nm, kind))
