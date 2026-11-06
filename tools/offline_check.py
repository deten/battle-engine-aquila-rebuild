"""Run the original and the port of a function side by side, offline, on calls
captured from the game (BEA_CAPTURE, src/bea/platform/capture.cpp).

    python -I tools/offline_check.py CAPDIR [ADDR ...] [--dll build/zlib.dll] [--max-calls N] [-v]

For every captured call of every function asked for (default: all captured):
  1. the original runs in an x86 emulator (unicorn) from the captured entry
     state: registers, x87 state, the stack pages and every page the call
     touched; BEA.exe's code and constants come from the file.  Its result is
     checked against the captured exit state ("emulation"): when they differ,
     the emulator does not reproduce the game for that call and the port is
     not judged on it;
  2. the port (its code in the DLL, found by symbol) runs from the same state,
     and its effects are compared with the original's: the registers it must
     keep and return, the stack pointer after the return, the x87 stack, and
     every byte of memory either one wrote (the stack only at and above the
     final esp: below it is scratch).
A call into code that is not emulated (an import of BEA.exe or of the DLL
that is not modelled here) makes that call "untestable".

Why: level replays say that a port changes the game, and need many runs to
say which one and where (NOTES A1-25: a day of bisecting for 0x440510's sum
order).  This says it per function in seconds, and names the bytes.
"""
import argparse, collections, mmap, os, re, struct, subprocess, sys
import pefile
from unicorn import Uc, UcError, UC_ARCH_X86, UC_MODE_32, UC_PROT_ALL, UC_HOOK_MEM_UNMAPPED, UC_HOOK_CODE, \
    UC_MEM_FETCH_UNMAPPED
from unicorn.x86_const import *

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe')
NM = r'C:\msys64\mingw32\bin\nm.exe'

HDR = struct.Struct('<4s3I8I8I108s108s2I')
ENT = struct.Struct('<IQQ')
REGS = (UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_EBX, UC_X86_REG_ESP, UC_X86_REG_EBP, UC_X86_REG_ESI,
        UC_X86_REG_EDI)
RNAME = ('eax', 'ecx', 'edx', 'ebx', 'esp', 'ebp', 'esi', 'edi')

SCRATCH = 0x7f000000        # fpu images and the entry/exit stubs
STUBS = 0x7f100000          # one 16-byte stub per import
TEB = 0x7ffdf000
# imports the emulation answers itself: name -> (EAX or None, stack arguments)
STDCALL_STUBS = {
    'WaitForSingleObject': (0, 2),          # WAIT_OBJECT_0
    'ReleaseMutex': (1, 1),
    'EnterCriticalSection': (None, 1),
    'LeaveCriticalSection': (None, 1),
    'GetLastError': (0, 0),
    'SetLastError': (None, 1),
    'SetEvent': (1, 1),                     # one thread: nobody waits
    'ResetEvent': (1, 1),
}
# the imports capture.cpp logs (in its id order) with their stdcall argument counts:
# a capture with an import log has them answered from it, call by call
ILOG_NAMES = ['ReadFile', 'CreateFileA', 'CloseHandle', 'GetFileSize', 'SetFilePointer', 'HeapAlloc', 'HeapFree',
              'HeapReAlloc', 'HeapSize', 'TlsGetValue', 'CreateEventA', 'GetKeyNameTextA', 'timeGetTime', 'GetFileType',
              '#63', 'WriteFile', 'Platform_GetTime']
ILOG_ARGS = {'ReadFile': 5, 'CreateFileA': 7, 'CloseHandle': 1, 'GetFileSize': 2, 'SetFilePointer': 4, 'HeapAlloc': 3,
             'HeapFree': 3, 'HeapReAlloc': 4, 'HeapSize': 3, 'TlsGetValue': 1, 'CreateEventA': 4, 'GetKeyNameTextA': 3,
             'timeGetTime': 0, 'GetFileType': 1, '#63': 0, 'WriteFile': 5}       # #63: zlib's uncompress, cdecl (the caller pops)
# stdcall imports with one pointer argument that add to a LONG and return the new value
INTERLOCKED = {'InterlockedIncrement': 1, 'InterlockedDecrement': -1}
GDT = 0x7f200000
# sums of rdtsc deltas the game's profiler adds to and no code reads (decompiled.c: written
# by 0x4934f0, 0x499e30 and 0x4a0bc0 only): the time-stamp counter differs run to run
TSC_SUMS = [(0x0082ce84, 0x0082d054), (0x00835764, 0x00835768), (0x00835944, 0x00835948), (0x0083c7e4, 0x0083c7e8)]
RUN_TIMEOUT, RUN_COUNT = 20 * 1000 * 1000, 200_000_000     # per run (tools/fuzz_check.py lowers them)
PAGE = 0x1000


def read_captures(d):
    with open(os.path.join(d, 'captures.bin'), 'rb') as f:
        data = f.read()
    i = 0
    while i + HDR.size <= len(data):
        h = HDR.unpack_from(data, i)
        i += HDR.size
        magic, addr, ordinal, flags = h[0], h[1], h[2], h[3]
        if magic != b'CAP1':
            raise SystemExit('captures.bin: bad record at %d' % (i - HDR.size))
        regs_in, regs_out, fpu_in, fpu_out, nstack, npages = h[4:12], h[12:20], h[20], h[21], h[22], h[23]
        ents = []
        if i + (nstack + npages) * ENT.size > len(data):
            return                             # the last record, cut short (the game ended mid-write)
        for _ in range(nstack + npages):
            ents.append(ENT.unpack_from(data, i))
            i += ENT.size
        ilog = None
        if flags & 2:
            # the import log (capture.cpp): id, eax, outputs (address, bytes) per call, in order
            if i + 8 > len(data):
                return
            magic2, n = struct.unpack_from('<II', data, i)
            i += 8
            if magic2 != 0x474f4c49 or i + n > len(data):
                return
            ilog, j = [], i
            while j < i + n:
                fid, eax, nout = struct.unpack_from('<3I', data, j)
                j += 12
                outs = []
                for _ in range(nout):
                    a, ln = struct.unpack_from('<2I', data, j)
                    j += 8
                    outs.append((a, data[j:j + ln]))
                    j += ln
                ilog.append((ILOG_NAMES[fid] if fid < len(ILOG_NAMES) else '?', eax, outs))
            i += n
        yield dict(addr=addr, ordinal=ordinal, flags=flags, regs_in=regs_in, regs_out=regs_out, fpu_in=fpu_in,
                   fpu_out=fpu_out, stack=ents[:nstack], pages=ents[nstack:], ilog=ilog, ilog_full=bool(flags & 4))


class Image:
    """a PE file mapped as the loader would: at its preferred base, or relocated
    to `base` (our DLL where the game had it: regions.txt)"""
    def __init__(self, path, skip_debug=False, base=None):
        self.pe = pefile.PE(path)
        self.pref = self.pe.OPTIONAL_HEADER.ImageBase
        if base and base != self.pref:
            self.pe.relocate_image(base)
        self.base = base or self.pref
        self.chunks = []           # (va, bytes, writable)
        end = 0
        for s in self.pe.sections:
            name = s.Name.rstrip(b'\0').decode(errors='replace')
            if skip_debug and name.startswith('/') and s.Characteristics & 0x02000000:   # discardable debug sections
                continue
            va = self.base + s.VirtualAddress
            size = max(s.Misc_VirtualSize, s.SizeOfRawData)
            raw = bytes(s.get_data()[:size]).ljust(size, b'\0')     # (a bytearray after relocate_image)
            self.chunks.append((va, raw, bool(s.Characteristics & 0x80000000)))
            end = max(end, va + size)
        self.end = (end + PAGE - 1) & ~(PAGE - 1)

    def imports(self):
        out = []
        if hasattr(self.pe, 'DIRECTORY_ENTRY_IMPORT'):
            for e in self.pe.DIRECTORY_ENTRY_IMPORT:
                for imp in e.imports:
                    out.append((imp.address, e.dll.decode().lower(), (imp.name or b'#%d' % imp.ordinal).decode()))   # (relocate_image moves these too)
        return out


OWN = [0, 0]              # the DLL's image: set by Emu
LIFT_BOUNDS = {}          # g_lift_lo / g_lift_hi in the DLL: the emulation runs lifted bodies on any stack


def port_symbols(dll):
    """{original address: port entry} from the DLL's symbol table"""
    out = {}
    lifts = {}
    r = subprocess.run([NM, dll], capture_output=True, text=True)
    for line in r.stdout.splitlines():
        m = re.match(r'([0-9a-f]{8}) [tT] (?:__ZL\d+|_)?ap_([0-9a-f]{8})(?:P|v|[A-Z]|$)', line)
        if m:
            out.setdefault(int(m.group(2), 16), int(m.group(1), 16))
        # a lifted function's entry: its thunk (src/bea/lifted/lift_rt.h)
        m = re.match(r'([0-9a-f]{8}) [tT] _lift_t_([0-9a-f]{8})$', line)
        if m:
            lifts[int(m.group(2), 16)] = int(m.group(1), 16)
        m = re.match(r'([0-9a-f]{8}) [bBdD] _g_lift_(lo|hi)$', line)
        if m:
            LIFT_BOUNDS[m.group(2)] = int(m.group(1), 16)
    # a DLL with both for one address (a pool of lifts for ported functions, 2026-11-05):
    # the port unless BEA_PREFER_LIFT=1
    for a, v in lifts.items():
        if os.environ.get('BEA_PREFER_LIFT') == '1' or a not in out:
            out[a] = v
    # hand-named ports (verified/, math/...: BEA_HOOK(0x00401ec0, Vector3_Set)) by
    # their registration and the demangled symbol; a name defined twice is skipped
    named = {}
    for dp, _, fs in os.walk(os.path.join(ROOT, 'src', 'bea')):
        for f in fs:
            if f.endswith('.cpp'):
                for a, n in re.findall(r'BEA_HOOK\((0x[0-9a-fA-F]+),\s*([A-Za-z_][A-Za-z_0-9:]*)\)', open(os.path.join(dp, f), errors='replace').read()):
                    if int(a, 16) not in out:
                        named.setdefault(n, int(a, 16))
    if named:
        defs = {}
        r = subprocess.run([NM, '-C', dll], capture_output=True, text=True)
        for line in r.stdout.splitlines():
            m = re.match(r'([0-9a-f]{8}) [tT] ([A-Za-z_][A-Za-z_0-9:]*)(?:\(|$)', line)
            if m and m.group(2) in named:
                defs.setdefault(m.group(2), []).append(int(m.group(1), 16))
        for n, v in defs.items():
            if len(set(v)) == 1:
                out.setdefault(named[n], v[0])
    # the rest from the DLL's hook tables themselves (BeaHook: address, name, replacement,
    # file, original): template instances like RetConst<0xff000080, 0x0> (the generated
    # ports) have no name to look up (2026-11-04)
    try:
        import pefile
        pe = pefile.PE(dll, fast_load=True)
        base = pe.OPTIONAL_HEADER.ImageBase
        text = [(base + s.VirtualAddress, base + s.VirtualAddress + s.Misc_VirtualSize)
                for s in pe.sections if s.Characteristics & 0x20000000]
        for s in pe.sections:
            if s.Characteristics & 0x20000000:
                continue
            d = s.get_data()
            for i in range(0, len(d) - 20, 4):
                addr, name, repl, src, orig = struct.unpack_from('<5I', d, i)
                if 0x401000 <= addr < 0x5d8000 and addr not in out and any(lo <= repl < hi for lo, hi in text) \
                        and base <= name < base + 0x4000000 and base <= src < base + 0x4000000 and (orig == 0 or base <= orig < base + 0x4000000):
                    out[addr] = repl
    except Exception:
        pass
    return out


class Untestable(Exception):
    pass


def gdt_entry(base, limit, access, flags):
    v = limit & 0xffff
    v |= (base & 0xffffff) << 16
    v |= (access & 0xff) << 40
    v |= ((limit >> 16) & 0xf) << 48
    v |= (flags & 0xf) << 52
    v |= ((base >> 24) & 0xff) << 56
    return struct.pack('<Q', v)


class Foreign:
    """The other modules of the captured process (regions.txt, written by the
    capture: Direct3D, the display driver, Windows' DLLs), loaded from disk at
    the base they had, relocated.  Their code is never emulated: a call into one
    returns at once (Emu._foreign_call), so a vtable read from them leads to a
    stub instead of to zeros.  Their writable data is the file's, not the
    game's: a call that depends on it shows as "emulation differs"."""
    def __init__(self, path):
        self.mods = {}             # base -> [end, file path, image bytes or None]
        for line in open(path, errors='replace'):
            f = line.split(None, 6)
            if len(f) < 7 or f[2] != 'img':
                continue
            lo, size, base = int(f[0], 16), int(f[1], 16), int(f[4], 16)
            mod = f[6].strip()
            if base == 0x00400000 or os.path.basename(mod).lower() == 'zlib.dll':
                continue
            m = self.mods.setdefault(base, [base, mod, None])
            m[0] = max(m[0], lo + size)

    def module(self, a):
        for base, m in self.mods.items():
            if base <= a < m[0]:
                return base, m
        return None, None

    def page(self, a):
        base, m = self.module(a)
        if base is None:
            return None
        if m[2] is None:
            path = m[1]
            # a 32-bit process's System32 is SysWOW64 on disk (this Python is 64-bit)
            low = path.lower()
            if '\\system32\\' in low:
                i = low.index('\\system32\\')
                path = path[:i] + '\\SysWOW64\\' + path[i + 10:]
            try:
                pe = pefile.PE(path, fast_load=True)
                if pe.OPTIONAL_HEADER.ImageBase != base:
                    pe.relocate_image(base)
                img = pe.get_memory_mapped_image()
            except Exception:
                img = b''
            m[2] = img.ljust(m[0] - base, b'\0')
        off = (a & ~(PAGE - 1)) - base
        return m[2][off:off + PAGE]

    def arity(self, a):
        """the stack arguments a stdcall method pops: its first `ret N`"""
        base, m = self.module(a)
        if base is None:
            return 0
        self.page(a)
        code = m[2][a - base:a - base + 0x800]
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        for x in Cs(CS_ARCH_X86, CS_MODE_32).disasm(code, a):
            if x.mnemonic == 'ret':
                return int(x.op_str, 16) // 4 if x.op_str else 0
        return 0


class Emu:
    def __init__(self, dll, foreign=None, dll_base=None):
        self.foreign = foreign
        self.foreign_calls = []
        self.null_calls = 0
        self.ilog, self.ilog_i = None, 0
        self.null_log, self.null_replay = [], []   # pops of the original's null calls; the port's run replays them
        self.real_after = {}       # the captured call's result pages: what the game's timer calls returned
        self.exe = Image(EXE)
        self.dll = Image(dll, skip_debug=True, base=dll_base) if dll else None
        if self.dll:
            OWN[:] = [self.dll.base, self.dll.end]
        self.mu = Uc(UC_ARCH_X86, UC_MODE_32)
        mu = self.mu
        self.baseline = []         # (va, bytes): writable image data, restored before each run
        for img in [self.exe] + ([self.dll] if self.dll else []):
            mu.mem_map(img.base, img.end - img.base, UC_PROT_ALL)
            for va, raw, w in img.chunks:
                mu.mem_write(va, raw)
                if w:
                    self.baseline.append((va, raw))
        mu.mem_map(SCRATCH, 0x10000, UC_PROT_ALL)
        mu.mem_map(STUBS, 0x40000, UC_PROT_ALL)
        mu.mem_map(TEB, PAGE, UC_PROT_ALL)
        mu.mem_map(GDT, PAGE, UC_PROT_ALL)
        # imports: every IAT slot of both images points at a stub of its own
        self.stub_names = {}
        n = 0
        for img in [self.exe] + ([self.dll] if self.dll else []):
            for slot, dll_name, name in img.imports():
                a = STUBS + 16 * n
                n += 1
                mu.mem_write(a, b'\xf4' * 16)        # hlt (never reached: the code hook acts first)
                self.stub_names[a] = '%s!%s' % (dll_name, name)
                for va, raw, w in img.chunks:        # the slot's initial value is part of the baseline too
                    pass
                mu.mem_write(slot, struct.pack('<I', a))
        # the baseline must hold the patched IAT where it is writable
        self.baseline = [(va, bytes(mu.mem_read(va, len(raw)))) for va, raw in self.baseline]
        mu.hook_add(UC_HOOK_CODE, self._import, begin=STUBS, end=STUBS + 0x40000 - 1)
        mu.hook_add(UC_HOOK_MEM_UNMAPPED, self._unmapped)
        mu.hook_add(UC_HOOK_CODE, self._null_call, begin=0, end=0xffff)
        # the harness's clock ran instead of 0x5159e0 in the game: its value comes from the import log
        mu.mem_write(SCRATCH + 0xe10, bytes([0xdb, 0x2d]) + struct.pack('<I', SCRATCH + 0xe00) + bytes([0xc3]))   # fld tbyte [v]; ret
        mu.hook_add(UC_HOOK_CODE, self._clock, begin=0x5159e0, end=0x5159e0)
        if foreign:
            # a module the game had where the emulation keeps its own (our DLL at its
            # preferred base, the stubs): left out (CoreMessaging.dll at 0x6b230000
            # took our DLL's code for its own and stubbed every port, 2026-10-30)
            mine = [(self.exe.base, self.exe.end), (SCRATCH, SCRATCH + 0x10000), (STUBS, STUBS + 0x40000),
                    (GDT, GDT + PAGE), (TEB, TEB + PAGE)] + ([(self.dll.base, self.dll.end)] if self.dll else [])
            for base in [b for b, m in foreign.mods.items() if any(b < hi and m[0] > lo for lo, hi in mine)]:
                del foreign.mods[base]
            for base, m in foreign.mods.items():
                mu.hook_add(UC_HOOK_CODE, self._foreign_call, begin=base, end=m[0] - 1)
        # rdtsc: the same made-up counter for the original and the port (0x4934f0 compares
        # elapsed time, and the host's counter moved on between the two runs).  Every
        # `0f 31` in executable code gets a hook; one that is not an instruction never fires
        self.tsc = 0
        for img in [self.exe] + ([self.dll] if self.dll else []):
            pe = img.pe
            for s in pe.sections:
                if s.Characteristics & 0x20000000:
                    data, va = s.get_data(), img.base + s.VirtualAddress
                    i = data.find(b'\x0f\x31')
                    while i >= 0:
                        mu.hook_add(UC_HOOK_CODE, self._rdtsc, begin=va + i, end=va + i)
                        i = data.find(b'\x0f\x31', i + 1)
        # segments: flat code/data, fs -> a TEB
        gdt = b''.join([gdt_entry(0, 0, 0, 0),
                        gdt_entry(TEB, 0xfff, 0x80 | 0x10 | 0x02 | 0x60, 0x4),          # fs: data, ring 3
                        gdt_entry(0, 0xfffff, 0x80 | 0x10 | 0x02 | 0x60, 0xc),          # ds/es: flat data ring 3
                        gdt_entry(0, 0xfffff, 0x80 | 0x10 | 0x08 | 0x02 | 0x60, 0xc),   # cs: flat code ring 3
                        gdt_entry(0, 0xfffff, 0x80 | 0x10 | 0x02, 0xc)])                # ss: flat data ring 0
        mu.mem_write(GDT, gdt)
        mu.reg_write(UC_X86_REG_GDTR, (0, GDT, len(gdt) - 1, 0))
        mu.reg_write(UC_X86_REG_FS, (1 << 3) | 3)
        mu.reg_write(UC_X86_REG_DS, (2 << 3) | 3)
        mu.reg_write(UC_X86_REG_ES, (2 << 3) | 3)
        mu.reg_write(UC_X86_REG_CS, (3 << 3) | 3)
        mu.reg_write(UC_X86_REG_SS, (4 << 3) | 0)
        self.lazy = {}             # page -> bytes offered for this run
        self.mapped = set()        # pages mapped lazily in this run
        self.missing = []          # pages touched that the capture does not have
        self.stopped = None

    # -- hooks ------------------------------------------------------------
    def _unmapped(self, mu, access, address, size, value, user):
        p = address & ~(PAGE - 1)
        if access == UC_MEM_FETCH_UNMAPPED:
            data = self.foreign.page(address) if self.foreign else None
            if data is None and address < 0x10000:
                data = bytes([0xf4]) * PAGE          # _null_call answers before anything runs here
            if data is None:
                self.stopped = 'jumped to unmapped %08x' % address
                return False
            mu.mem_map(p, PAGE, UC_PROT_ALL)
            self.mapped.add(p)
            mu.mem_write(p, data)
            return True
        for q in {p, (address + size - 1) & ~(PAGE - 1)}:
            if q in self.mapped:
                continue
            mu.mem_map(q, PAGE, UC_PROT_ALL)
            self.mapped.add(q)
            data = self.lazy.get(q)
            if data is None and self.foreign:
                data = self.foreign.page(q)
            if data is None:
                self.missing.append(q)
            else:
                mu.mem_write(q, data)
        return True

    def _clock(self, mu, address, size, user):
        if self.ilog is None:
            return                            # a capture without a log: the original runs
        if self.ilog_i >= len(self.ilog) or self.ilog[self.ilog_i][0] != 'Platform_GetTime':
            return                            # not logged there (the clock's own imports answer): the original runs
        value = self.ilog[self.ilog_i][2][0][1]
        self.ilog_i += 1
        mu.mem_write(SCRATCH + 0xe00, value)
        mu.reg_write(UC_X86_REG_EIP, SCRATCH + 0xe10)

    def _rdtsc(self, mu, address, size, user):
        if size != 2:
            return
        self.tsc += 100000
        mu.reg_write(UC_X86_REG_EAX, self.tsc & 0xffffffff)
        mu.reg_write(UC_X86_REG_EDX, self.tsc >> 32)
        mu.reg_write(UC_X86_REG_EIP, address + 2)

    def _null_call(self, mu, address, size, user):
        # a call through an object whose memory the capture lacks (a COM
        # interface of Direct3D or DirectSound: its vtable read as zeros):
        # answer S_OK and pop what the call site pushed (tools/callsites.py).
        # A method that should have written something leaves the emulated
        # original unlike the game, and the call is not judged
        esp = mu.reg_read(UC_X86_REG_ESP)
        ret = struct.unpack('<I', mu.mem_read(esp, 4))[0]
        if self.exe.base <= ret < self.exe.end:
            pops = self._site_pops(ret)
            self.null_log.append(pops)
        else:
            # the port's call (from our DLL): the original's calls in the same order
            pops = self.null_replay.pop(0) if self.null_replay else None
        if pops is None:
            self.stopped = 'jumped to unmapped %08x' % address
            mu.emu_stop()
            return
        self.null_calls += 1
        mu.reg_write(UC_X86_REG_EAX, 0)
        mu.reg_write(UC_X86_REG_ESP, esp + 4 + pops)
        mu.reg_write(UC_X86_REG_EIP, ret)

    def _site_pops(self, ret):
        tools = os.path.join(ROOT, 'tools')
        if tools not in sys.path:
            sys.path.append(tools)
        import callsites
        fs = self._fstarts if hasattr(self, '_fstarts') else None
        if fs is None:
            fs = self._fstarts = sorted(callsites.fp.funcs())
        lo, hi = 0, len(fs)
        while lo < hi:                      # the last function start <= ret
            mid = (lo + hi) // 2
            if fs[mid] <= ret:
                lo = mid + 1
            else:
                hi = mid
        if lo == 0:
            return None
        f = fs[lo - 1]
        cache = self.__dict__.setdefault('_sites', {})
        if f not in cache:
            try:
                cache[f] = {v[2]: v for v in callsites.sites(f)[0].values()}
            except (Exception, SystemExit):      # callsites gives up with SystemExit (0x5758b4: leave)
                cache[f] = {}
        v = cache[f].get(ret)
        return v[3] if v and v[0][0] == 'v' else None

    def _foreign_call(self, mu, address, size, user):
        # a method of Direct3D (or any other module) answers S_OK at once
        esp = mu.reg_read(UC_X86_REG_ESP)
        ret = struct.unpack('<I', mu.mem_read(esp, 4))[0]
        n = self.foreign.arity(address)
        self.foreign_calls.append(address)
        mu.reg_write(UC_X86_REG_EAX, 0)
        mu.reg_write(UC_X86_REG_ESP, esp + 4 + 4 * n)
        mu.reg_write(UC_X86_REG_EIP, ret)

    def _import(self, mu, address, size, user):
        a = address & ~0xf
        name = self.stub_names.get(a, '?')
        esp = mu.reg_read(UC_X86_REG_ESP)
        ret, a1, a2, a3 = struct.unpack('<4I', mu.mem_read(esp, 16))
        n = name.split('!')[-1]
        if self.ilog is not None and n in ILOG_ARGS:
            if self.ilog_i >= len(self.ilog) or self.ilog[self.ilog_i][0] != n:
                want = self.ilog[self.ilog_i][0] if self.ilog_i < len(self.ilog) else 'nothing more'
                self.stopped = 'import log: calls %s where the game called %s' % (n, want)
                mu.emu_stop()
                return
            _, eax, outs = self.ilog[self.ilog_i]
            self.ilog_i += 1
            for a, data in outs:
                if data:
                    # an output buffer the function never touched before (uncompress's
                    # destination): map its pages first, as a read of them would
                    for p in range(a & ~(PAGE - 1), a + len(data), PAGE):
                        try:
                            mu.mem_read(p, 1)
                        except UcError:
                            self._unmapped(mu, 0, p, 1, 0, None)
                    mu.mem_write(a, data)
            mu.reg_write(UC_X86_REG_EAX, eax)
            mu.reg_write(UC_X86_REG_ESP, esp + 4 + 4 * ILOG_ARGS[n])
            mu.reg_write(UC_X86_REG_EIP, ret)
            return
        if n in ('memcpy', 'memmove'):
            mu.mem_write(a1, bytes(mu.mem_read(a2, a3)))
            mu.reg_write(UC_X86_REG_EAX, a1)
        elif n == 'memset':
            mu.mem_write(a1, bytes([a2 & 0xff]) * a3)
            mu.reg_write(UC_X86_REG_EAX, a1)
        elif n == 'memcmp':
            x, y = bytes(mu.mem_read(a1, a3)), bytes(mu.mem_read(a2, a3))
            mu.reg_write(UC_X86_REG_EAX, 0 if x == y else (0xffffffff if x < y else 1))
        elif n == 'strlen':
            k = 0
            while mu.mem_read(a1 + k, 1)[0]:
                k += 1
            mu.reg_write(UC_X86_REG_EAX, k)
        elif n == '_errno':
            mu.reg_write(UC_X86_REG_EAX, SCRATCH + 0xf00)
        elif n in ('QueryPerformanceCounter', 'QueryPerformanceFrequency'):
            # the game's own answer, from the captured result (the same for the
            # original and the port; a value the call overwrote later leaves the
            # emulated original unlike the game, and the call is not judged)
            pg = self.real_after.get(a1 & ~(PAGE - 1))
            if pg is None or (a1 & (PAGE - 1)) > PAGE - 8:
                self.stopped = 'calls %s' % name
                mu.emu_stop()
                return
            mu.mem_write(a1, pg[a1 & (PAGE - 1):(a1 & (PAGE - 1)) + 8])
            mu.reg_write(UC_X86_REG_EAX, 1)
            mu.reg_write(UC_X86_REG_ESP, esp + 8)
            mu.reg_write(UC_X86_REG_EIP, ret)
            return
        elif n in INTERLOCKED:
            v = (struct.unpack('<i', mu.mem_read(a1, 4))[0] + INTERLOCKED[n]) & 0xffffffff
            mu.mem_write(a1, struct.pack('<I', v))
            mu.reg_write(UC_X86_REG_EAX, v)
            mu.reg_write(UC_X86_REG_ESP, esp + 8)
            mu.reg_write(UC_X86_REG_EIP, ret)
            return
        elif n in STDCALL_STUBS:
            # one thread: a wait is granted at once, a lock always free
            eax, nargs = STDCALL_STUBS[n]
            if eax is not None:
                mu.reg_write(UC_X86_REG_EAX, eax)
            mu.reg_write(UC_X86_REG_ESP, esp + 4 + 4 * nargs)
            mu.reg_write(UC_X86_REG_EIP, ret)
            return
        else:
            self.stopped = 'calls %s' % name
            mu.emu_stop()
            return
        mu.reg_write(UC_X86_REG_ESP, esp + 4)       # cdecl: the caller pops the arguments
        mu.reg_write(UC_X86_REG_EIP, ret)

    # -- one run ----------------------------------------------------------
    def _free_stack(self, mu, address, size, fill):
        # stack given back since the last instruction (pop, ret, add esp) gets
        # the poison: what a callee left there is as dead as what came before
        esp = mu.reg_read(UC_X86_REG_ESP)
        if self.low_esp < esp <= self.low_esp + 0x10000:
            mu.mem_write(self.low_esp, fill * (esp - self.low_esp))
        self.low_esp = esp

    def run(self, cap, entry, pages, fill=None):
        mu = self.mu
        for p in self.mapped:
            mu.mem_unmap(p, PAGE)
        if self.mapped and os.environ.get('BEA_UC_FLUSH', '1') == '1':
            # translated code can still point at pages unmapped here; with many map/unmap
            # cycles unicorn 2.1.4 then wrote into freed host memory (fuzz_check 0x5169b0,
            # access violation inside uc_emu_start, 2026-11-04)
            mu.ctl_flush_tb()
        self.mapped, self.missing, self.stopped = set(), [], None
        self.tsc = 0
        for va, raw in self.baseline:
            mu.mem_write(va, raw)
        if 'lo' in LIFT_BOUNDS and 'hi' in LIFT_BOUNDS:
            mu.mem_write(LIFT_BOUNDS['lo'], struct.pack('<I', 0))
            mu.mem_write(LIFT_BOUNDS['hi'], struct.pack('<I', 0xffffffff))
        # captured pages: inside an image they overwrite the file's bytes, elsewhere they map lazily
        self.lazy = {}
        for a, data in pages.items():
            if self.exe.base <= a < self.exe.end:
                mu.mem_write(a, data)
            else:
                self.lazy[a] = data
        if self.exe.base <= entry < self.exe.end:
            self.null_log = []
        else:
            self.null_replay = list(self.null_log)
        self.ilog, self.ilog_i = cap.get('ilog'), 0
        regs = list(cap['regs_in'])
        esp = regs[4]
        # TEB: the SEH chain ends at once; the stack bounds of the capture
        top = max(a for a, _, _ in cap['stack']) + PAGE
        low = min(a for a, _, _ in cap['stack'])
        mu.mem_write(TEB, struct.pack('<7I', 0xffffffff, top, low, 0, 0, 0, TEB))
        # entry stub: frstor [fpu_in]; jmp entry.  exit (the return address): fnsave [fpu_out]; hlt
        mu.mem_write(SCRATCH, cap['fpu_in'])
        # (the target goes through memory: unicorn keeps translated code, and a
        # rewritten `jmp rel32` sent every run after the first to the first's target)
        stub = SCRATCH + 0x400
        mu.mem_write(SCRATCH + 0x300, struct.pack('<I', entry))
        mu.mem_write(stub, b'\xdd\x25' + struct.pack('<I', SCRATCH) + b'\xff\x25' + struct.pack('<I', SCRATCH + 0x300))
        sentinel = SCRATCH + 0x800
        mu.mem_write(sentinel, b'\xdd\x35' + struct.pack('<I', SCRATCH + 0x200) + b'\xf4')
        # the return address slot gets the sentinel (the stack page must be mapped first)
        self._unmapped(mu, 0, esp, 4, 0, None)
        mu.mem_write(esp, struct.pack('<I', sentinel))
        for r, v in zip(REGS, regs):
            mu.reg_write(r, v)
        mu.reg_write(UC_X86_REG_EFLAGS, 0x202)
        hook = None
        if fill:
            self.low_esp = esp
            hook = mu.hook_add(UC_HOOK_CODE, self._free_stack, fill, begin=self.exe.base, end=self.exe.end - 1)
        try:
            mu.emu_start(stub, sentinel + 6, timeout=RUN_TIMEOUT, count=RUN_COUNT)
        except UcError as e:
            if not self.stopped:
                self.stopped = 'emulator: %s at %08x' % (e, mu.reg_read(UC_X86_REG_EIP))
        finally:
            if hook is not None:
                mu.hook_del(hook)
        eip = mu.reg_read(UC_X86_REG_EIP)
        if self.stopped:
            raise Untestable(self.stopped)
        if eip != sentinel + 6:
            raise Untestable('did not return (eip %08x)' % eip)
        out = dict(regs=[mu.reg_read(r) for r in REGS], fpu=bytes(mu.mem_read(SCRATCH + 0x200, 108)), mem={})
        for va, raw in self.baseline:
            now = bytes(mu.mem_read(va, len(raw)))
            if now != raw:
                for o in range(0, len(raw), PAGE):
                    if now[o:o + PAGE] != raw[o:o + PAGE]:
                        out['mem'][va + o] = now[o:o + PAGE]
        for a, data in pages.items():
            if self.exe.base <= a < self.exe.end:
                out['mem'][a] = bytes(mu.mem_read(a, PAGE))
        for p in self.mapped:
            out['mem'][p] = bytes(mu.mem_read(p, PAGE))
        out['missing'] = sorted(set(self.missing))
        return out


def fpu_stack(img):
    """(TOP, [st0..st7 as 10-byte values or None when empty]) of an fnsave image"""
    sw, tw = struct.unpack_from('<H', img, 4)[0], struct.unpack_from('<H', img, 8)[0]
    top = (sw >> 11) & 7
    out = []
    for i in range(8):
        phys = (top + i) & 7
        empty = ((tw >> (2 * phys)) & 3) == 3
        out.append(None if empty else img[28 + 10 * i:38 + 10 * i])
    return top, out


_registrations = None


def registrations():
    """{address: (source text, port name)} from the BEA_HOOK registrations"""
    global _registrations
    if _registrations is None:
        _registrations = {}
        for dp, _, fs in os.walk(os.path.join(ROOT, 'src', 'bea')):
            for f in fs:
                if f.endswith('.cpp'):
                    s = open(os.path.join(dp, f), errors='replace').read()
                    for a, n in re.findall(r'BEA_HOOK\((0x[0-9a-fA-F]+),\s*([A-Za-z_][A-Za-z_0-9:]*)\)', s):
                        _registrations.setdefault(int(a, 16), (s, n))
    return _registrations


def signature(addr):
    """the port's declaration up to its parameter list's end, or ''"""
    s, n = registrations().get(addr, ('', None))
    if not n:
        return ''
    m = re.search(r'(?:^|\n)((?:static\s+)?(?:inline\s+)?[A-Za-z_][\w\s\*&<>:]*?\s*(?:BEA_\w+\s+)?\b%s\s*\([^)]*\))' % re.escape(n.split('::')[-1]), s)
    return m.group(1) if m else ''


def cdecl_arg_bytes(addr):
    """the size of a cdecl port's stack arguments: the callee may write its
    argument slots (VC6 reuses them as locals) and the caller, who pops them,
    never reads them back"""
    sig = signature(addr)
    if 'BEA_CDECL' not in sig:
        return 0
    params = sig[sig.index('(') + 1:-1].strip()
    if not params or params == 'void':
        return 0
    return sum(8 if re.match(r'\s*(double|longlong|ulonglong|int64_t|uint64_t)\b', q) else 4 for q in params.split(','))


def original_returns_al(addr):
    """every return of the original sets AL alone last (`mov al, 1`, `xor al, al`,
    `setcc al`): EAX's upper bytes are leftovers no caller is meant to read"""
    if os.path.dirname(os.path.abspath(__file__)) not in sys.path:
        sys.path.append(os.path.dirname(os.path.abspath(__file__)))   # (appended: tools/bisect.py shadows the stdlib's)
    import fingerprint as fp
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    fn = fp.funcs().get(addr)
    if not fn:
        return False
    code = fp.exe_bytes(addr, fn[1])
    if not code:
        return False
    ins = list(Cs(CS_ARCH_X86, CS_MODE_32).disasm(code, addr))
    rets = [i for i, x in enumerate(ins) if x.mnemonic == 'ret']
    if not rets:
        return False
    for r in rets:
        kind = None
        for x in reversed(ins[max(0, r - 8):r]):
            if x.mnemonic.startswith('j') or x.mnemonic in ('ret', 'call'):
                break
            dst = x.op_str.split(',')[0].strip()
            if dst in ('al', 'ah', 'ax', 'eax') and not x.mnemonic.startswith(('cmp', 'test', 'push')):
                kind = dst
                break
        if kind != 'al':
            return False
    return True


def eax_mask(addr):
    """the bits of EAX the port's result has: 0 for a void function (or the
    @autoport-eax note: no caller reads EAX) or a float, 0xff for a bool or char, 0xffff
    for a short, else all"""
    s, n = registrations().get(addr, ('', None))
    if '@autoport-eax unused' in s[:4000]:
        return 0
    if n:
        m = re.search(r'(?:^|\n)(?:static\s+)?(?:inline\s+)?([A-Za-z_][\w\s\*&<>:]*?)\s*(?:BEA_\w+\s+)?\b%s\s*\(' % re.escape(n.split('::')[-1]), s)
        if m:
            t = m.group(1).split()[-1] if '*' not in m.group(1) else '*'
            if t in ('void', 'float', 'double', 'float10', 'longdouble'):
                return 0                   # (a float comes back in st0)
            if t in ('bool', 'char', 'byte', 'uint8_t', 'int8_t', 'undefined1', 'uchar'):
                return 0xff
            if t in ('short', 'ushort', 'uint16_t', 'int16_t', 'undefined2', 'word'):
                return 0xffff
    if original_returns_al(addr):
        return 0xff
    return 0xffffffff


def poisoned(before, stackpages, esp, fill):
    """the captured pages with the dead stack (below the entry ESP) overwritten"""
    out = dict(before)
    for p in stackpages:
        if p + PAGE <= esp:
            out[p] = fill * PAGE
        elif p <= esp < p + PAGE:
            out[p] = fill * (esp - p) + before[p][esp - p:]
    return out


def stale_dependent(o, others):
    """what of the original's result changes with the dead stack's bytes: register
    names, 'fpu', and the addresses of memory bytes.  The original copies stale
    stack into results nobody reads (the 4th lane of a vector, struct padding);
    a port that writes something else there is not wrong in a way that shows"""
    out = set()
    for q in others:
        if q is None:
            return None                    # a poisoned run did not finish: no claims
        for i, n in enumerate(RNAME):
            if o['regs'][i] != q['regs'][i]:
                out.add(n)
        if o['fpu'] != q['fpu']:
            out.add('fpu')
        for p in set(o['mem']) & set(q['mem']):
            x, y = o['mem'][p], q['mem'][p]
            if x != y:
                out.update(p + i for i in range(PAGE) if x[i] != y[i])
    return out


def compare(a, b, keep_from_esp, what, skip=('ecx',), stale=frozenset(), eax=0xffffffff, args=0, before=None):
    """differences between two results (a: reference); `stale`: what to ignore;
    `args`: bytes of cdecl arguments above the final ESP, scratch too"""
    diffs = []
    for i, n in enumerate(RNAME):
        if n in skip or n in stale:
            continue                       # scratch for the convention
        if n == 'eax' and not (a['regs'][i] ^ b['regs'][i]) & eax:
            continue
        if a['regs'][i] != b['regs'][i]:
            diffs.append('%s %08x vs %08x' % (n, a['regs'][i], b['regs'][i]))
    ta, sa = fpu_stack(a['fpu'])
    tb, sb = fpu_stack(b['fpu'])
    if 'fpu' in stale:
        pass
    elif ta != tb:
        diffs.append('x87 TOP %d vs %d' % (ta, tb))
    else:
        for i in range(8):
            if sa[i] != sb[i]:
                diffs.append('st%d %s vs %s' % (i, sa[i].hex() if sa[i] else '-', sb[i].hex() if sb[i] else '-'))
    esp = keep_from_esp
    for p in sorted(set(a['mem']) | set(b['mem'])):
        if OWN[0] <= p < OWN[1]:
            continue                         # our DLL's own memory (the lifted runtime's state) is no game state
        x, y = a['mem'].get(p), b['mem'].get(p)
        if x is None or y is None:
            # written by one run only: the other left the page as captured
            continue
        if x == y:
            continue
        lo = 0
        if p <= esp < p + PAGE:
            lo = esp - p
        elif p + PAGE <= esp and p in a.get('stackpages', ()):
            continue                         # stack below the final esp: scratch
        for o in range(lo, PAGE):
            if x[o] != y[o] and p + o not in stale and not esp <= p + o < esp + args \
                    and not any(t0 <= p + o < t1 for t0, t1 in TSC_SUMS) \
                    and not (before is not None and p in before and y[o] == before[p][o]):
                diffs.append('%s byte %08x: %02x vs %02x' % (what, p + o, x[o], y[o]))
                break
    return diffs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('capdir')
    ap.add_argument('addr', nargs='*')
    ap.add_argument('--dll', default=os.path.join(ROOT, 'build', 'zlib.dll'))
    ap.add_argument('--max-calls', type=int, default=99)
    ap.add_argument('-v', action='store_true')
    ap.add_argument('--edx', action='store_true', help='compare EDX too (64-bit returns)')
    a = ap.parse_args()
    want = {int(x, 16) for x in a.addr}
    syms = port_symbols(a.dll)
    rp = os.path.join(a.capdir, 'regions.txt')
    # our DLL where the game had it (with the modules around it where they were)
    dll_base = None
    if os.path.exists(rp):
        for line in open(rp, errors='replace'):
            f = line.split(None, 6)
            if len(f) == 7 and f[2] == 'img' and os.path.basename(f[6].strip()).lower() == 'zlib.dll':
                dll_base = int(f[4], 16)
                break
    emu = Emu(a.dll, Foreign(rp) if os.path.exists(rp) else None, dll_base)
    delta = emu.dll.base - emu.dll.pref
    if delta:
        syms = {k: v + delta for k, v in syms.items()}
        for k in LIFT_BOUNDS:
            LIFT_BOUNDS[k] += delta
    pf = open(os.path.join(a.capdir, 'pages.bin'), 'rb')
    pmap = mmap.mmap(pf.fileno(), 0, access=mmap.ACCESS_READ)

    def page(off):
        return bytes(pmap[off:off + PAGE])

    stats = collections.defaultdict(lambda: collections.Counter())
    first = {}
    for cap in read_captures(a.capdir):
        addr = cap['addr']
        if want and addr not in want:
            continue
        st = stats[addr]
        if st['calls'] >= a.max_calls:
            continue
        st['calls'] += 1
        if cap['flags'] & 1:
            st['untestable'] += 1
            first.setdefault(addr, 'capture overflow')
            continue
        before = {p: page(b) for p, b, _ in cap['stack'] + cap['pages']}
        after = {p: page(f) for p, _, f in cap['stack'] + cap['pages']}
        emu.real_after = after
        stackpages = {p for p, _, _ in cap['stack']}
        try:
            o = emu.run(cap, addr, before)
        except Untestable as e:
            st['untestable'] += 1
            first.setdefault(addr, 'original: %s' % e)
            continue
        o['stackpages'] = stackpages
        stale_cache = []

        def stale():
            # what of the original's result the dead stack decides: run it over two poisonings
            if not stale_cache:
                runs = []
                for fill in (b'\xa5', b'\x3c'):
                    try:
                        q = emu.run(cap, addr, poisoned(before, stackpages, cap['regs_in'][4], fill), fill)
                    except Untestable:
                        q = None
                    runs.append(q)
                stale_cache.append(stale_dependent(o, runs) or set())
            return stale_cache[0]

        # 1. does the emulated original do what the game's did?  (ecx and edx are
        # scratch: a stubbed import leaves edx as the real one would not; bytes the
        # dead stack decides differ too: in the game the capture's own stub ran
        # below ESP before each hooked call, leaving other leftovers there)
        real = dict(regs=list(cap['regs_out']), fpu=cap['fpu_out'], mem=after, stackpages=stackpages)
        eskip = ('ecx',) + (() if a.edx else ('edx',))
        # (`before`: a byte the emulated original left as captured but the game changed
        # was written by code the emulation stubs - Direct3D in its own objects - or
        # by another thread: not the function's doing)
        d = compare(real, o, cap['regs_out'][4], 'memory', eskip, before=before)
        if d and stale():
            d = compare(real, o, cap['regs_out'][4], 'memory', eskip, stale(), before=before)
        if d:
            st['emulation_differs'] += 1
            first.setdefault(addr, 'emulation: ' + '; '.join(d[:3]))
            if a.v:
                print('%08x call %d: emulation differs: %s' % (addr, cap['ordinal'], '; '.join(d[:4])))
            continue
        st['emulated'] += 1
        if addr not in syms:
            continue
        try:
            p = emu.run(cap, syms[addr], before)
        except Untestable as e:
            st['port_untestable'] += 1
            first.setdefault(addr, 'port: %s' % e)
            continue
        p['stackpages'] = stackpages
        # ecx and edx are scratch (edx returns only 64-bit values: --edx); of eax, what the port's type returns
        skip = ('ecx',) + (() if a.edx else ('edx',))
        em, ab = eax_mask(addr), cdecl_arg_bytes(addr)
        d = compare(o, p, o['regs'][4], 'memory', skip, eax=em, args=ab)
        if d:
            # only what the dead stack decides?
            if stale():
                d = compare(o, p, o['regs'][4], 'memory', skip, stale(), em, ab)
                if not d:
                    st['stale_only'] += 1
        # pages missing from the capture (memory never guarded: a locked vertex
        # buffer) are only news when the original did not touch them too
        extra = sorted(set(p['missing']) - set(o['missing']))
        if extra:
            d.append('port touched %d page(s) the original did not: %s' % (len(extra), ' '.join('%08x' % x for x in extra[:3])))
        if d and all(x.startswith('eax ') for x in d):
            # EAX alone: often the original's leftovers (fnstsw's status word) that
            # Ghidra typed as a result no caller reads; listed apart, to check the callers
            st['eax_only'] += 1
            first.setdefault(addr, 'port: ' + d[0])
            if a.v:
                print('%08x call %d: eax only: %s' % (addr, cap['ordinal'], d[0]))
        elif d:
            st['differs'] += 1
            first.setdefault(addr, 'port: ' + '; '.join(d[:3]))
            if a.v:
                print('%08x call %d: PORT DIFFERS: %s' % (addr, cap['ordinal'], '; '.join(d[:4])))
        else:
            st['same'] += 1
    bad = 0
    for addr in sorted(stats):
        s = stats[addr]
        verdict = 'DIFFERS' if s['differs'] else 'EAX ONLY' if s['eax_only'] else 'same' if s['same'] else 'not judged'
        bad += s['differs'] > 0
        print('%08x  %2d calls: %2d same (%d in stale bytes only), %2d differ, %2d emulation differs, %2d untestable%s  %s%s' % (
            addr, s['calls'], s['same'], s['stale_only'], s['differs'], s['emulation_differs'], s['untestable'] + s['port_untestable'],
            '' if addr in syms else ' (no port)', verdict, ('  - ' + first[addr]) if addr in first and verdict != 'same' else ''))
    print('%d function(s) whose port differs, %d in EAX alone, of %d captured' % (
        bad, sum(1 for s in stats.values() if s['eax_only'] and not s['differs']), len(stats)))
    sys.exit(1 if bad else 0)


if __name__ == '__main__':
    main()
