"""Run the original and the port of a function side by side in the emulator
(tools/offline_check.py) from made-up entry states, for functions no recording
reaches (2026-11-01).

    python -I tools/fuzz_check.py ADDR [ADDR ...] [--dll build_pool/zlib.dll] [--states N] [--guided N] [-v]

offline_check needs a captured call: the function's real arguments and the
memory it read.  About 90 lifted functions never run in any test (classes with
no object in any level, menu code nobody reaches), so they have none.  Here the
entry state is invented: registers and stack arguments drawn from the values
game code mostly sees (zero, small counts, flags, floats, pointers), and every
page the call touches filled the same way, by a generator seeded with the
page's address, so the original and the port read the same "memory".  A call
through a pointer into that memory (a vtable made up of such values) answers
at once as offline_check's null calls do, with a made-up result.

After --states random states, --guided more are made the way a coverage-guided
fuzzer makes them: a state that reached code no earlier one did is kept, and
new states change one to three of the values its function read (a field, an
argument, a global) until every instruction has run or the budget is spent.

Every state that runs to the return on both sides is compared as offline_check
compares a captured call (registers kept and returned, the x87 stack, every
byte written; what the dead stack decides is not held against the port).  The
report says, per function, how many states were judged, how many differed, and
how much of the original's code the judged states ran (instructions reached /
instructions in the function): the evidence is only as wide as that.
"""
import argparse, collections, os, random, struct, sys

sys.path.append(os.path.dirname(os.path.abspath(__file__)))     # (appended: tools/bisect.py shadows the stdlib's)
import offline_check as oc
from offline_check import PAGE
from unicorn import UC_HOOK_CODE, UC_HOOK_MEM_READ, UC_MEM_FETCH_UNMAPPED, UC_PROT_ALL
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_ESP, UC_X86_REG_EIP

HEAP = 0x30000000          # made-up objects: pointers drawn into it
HEAP_PAGES = 64
ALLOC = 0x38000000         # HeapAlloc answers from here
SLIDE_END = 0x7f000f90     # (in offline_check's SCRATCH page)
FVAL = 0x7f000fa0          # a made-up float result
CBSTUBS = 0x7f001000       # xor eax, eax; ret 4k
CBTEXT = 0x7f001400
FSTUBS = 0x7f000a00        # fld dword [FVAL]; ret 4k
STACK = 0x0018f000         # the entry stack page (ESP inside it)
FLOATS = [0.0, 0.5, 1.0, 2.0, -1.0, 10.0, 100.0, 0.25, 3.0, -0.5, 1000.0]

# an empty x87 at the game's control word (24-bit precision, all exceptions masked)
# the made-up states' x87 state, an fnsave image: control word 0x007f (the game's under
# Direct3D), status 0, every register empty. Until 2026-11-05 the tag word went to offset 4
# (the status word): every state started with 8 valid zero registers, TOP 7 and every
# exception flag set, so every push overflowed
FPU0 = bytearray(108)
struct.pack_into('<I', FPU0, 0, 0xffff007f)     # (the high word of each env slot as fnsave writes it)
struct.pack_into('<I', FPU0, 4, 0xffff0000)
struct.pack_into('<I', FPU0, 8, 0xffffffff)


def value(r, profile):
    """one dword as game data mostly looks"""
    x = r.random()
    for kind, w in profile:
        if x < w:
            break
        x -= w
    if kind == 'zero':
        return 0
    if kind == 'small':
        return r.randint(1, 8)
    if kind == 'neg':
        return 0xffffffff
    if kind == 'float':
        f = r.choice(FLOATS) if r.random() < 0.6 else r.uniform(-500.0, 500.0)
        return struct.unpack('<I', struct.pack('<f', f))[0]
    if kind == 'ptr':
        return HEAP + r.randrange(HEAP_PAGES) * PAGE + 4 * r.randrange(PAGE // 4 - 64)
    if kind == 'bit':
        return 1 << r.randrange(32)
    if kind == 'count':
        return r.randint(0, 0x40)
    return r.getrandbits(32)


PROFILES = [
    [('zero', .35), ('small', .1), ('neg', .03), ('float', .17), ('ptr', .15), ('bit', .08), ('count', .07), ('rand', .05)],
    [('zero', .6), ('small', .1), ('float', .1), ('ptr', .15), ('bit', .05)],
    [('zero', .15), ('small', .15), ('neg', .05), ('float', .25), ('ptr', .25), ('bit', .1), ('count', .05)],
    [('zero', .2), ('small', .2), ('float', .1), ('ptr', .3), ('bit', .15), ('count', .05)],
]


def fill(seed, page, profile, ov=None):
    r = random.Random((seed << 32) ^ page)
    out = struct.pack('<1024I', *(value(r, profile) for _ in range(1024)))
    if ov:
        b = bytearray(out)
        for a, v in ov.items():
            if page <= a <= page + PAGE - 4:
                struct.pack_into('<I', b, a - page, v)
        out = bytes(b)
    return out


_float_ret = None


def float_ret():
    """the functions Ghidra says return in st0 (float10)"""
    global _float_ret
    if _float_ret is None:
        import re
        _float_ret, cur = set(), None
        for line in open(os.path.join(oc.ROOT, 'ghidra_out', 'decompiled.c'), errors='replace'):
            m = re.match(r'// ===== ([0-9a-f]{8}) ', line)
            if m:
                cur = int(m.group(1), 16)
            elif cur is not None and line.strip():
                if line.startswith('float10 '):
                    _float_ret.add(cur)
                if '(' in line:
                    cur = None
    return _float_ret


_rets = {}


def ret_pops(f):
    """the stack bytes function f pops (its first `ret N`), or None"""
    if f not in _rets:
        import fingerprint as fp
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        fn = fp.funcs().get(f)
        _rets[f] = None
        for i in Cs(CS_ARCH_X86, CS_MODE_32).disasm(fp.exe_bytes(f, fn[1]) if fn else b'', f):
            if i.mnemonic == 'ret':
                _rets[f] = int(i.op_str, 16) if i.op_str else 0
                break
    return _rets[f]


_decoded = {}


def decoded(f):
    """(instructions by address, jump tables) of function f, as callsites decodes it"""
    if f not in _decoded:
        import callsites, fingerprint as fp
        fn = fp.funcs()[f]
        nxt = min((b for b in fp.funcs() if b > f), default=f + fn[1])
        _decoded[f] = callsites.decode(f, max(fn[1], nxt - f))
    return _decoded[f]


def com_call(f, site_ret):
    """the indirect call returning to site_ret is a COM one (`mov ecx, [eax] / push eax /
    call [ecx+N]`, Direct3D's at 0x51352d): stdcall with the object pushed, so it pops
    every push since the last call; the game's vtable slots say nothing about it"""
    from capstone.x86 import X86_OP_MEM, X86_OP_REG
    try:
        insns, _ = decoded(f)
    except Exception:
        return False
    order = sorted(a for a in insns if a < site_ret)
    if not order:
        return False
    c = insns[order[-1]]
    if c.mnemonic != 'call' or c.operands[0].type != X86_OP_MEM or not c.operands[0].mem.base:
        return False
    vreg = c.reg_name(c.operands[0].mem.base)
    obj = src = None                    # the last push; where the vtable register was loaded from
    for a in reversed(order[-8:-1]):
        x = insns[a]
        if x.mnemonic == 'call':
            break
        if x.mnemonic == 'push' and obj is None:
            obj = x.reg_name(x.operands[0].reg) if x.operands[0].type == X86_OP_REG else '?'
        if src is None and x.mnemonic == 'mov' and x.operands[0].type == X86_OP_REG and x.reg_name(x.operands[0].reg) == vreg:
            m = x.operands[1]
            src = x.reg_name(m.mem.base) if m.type == X86_OP_MEM and m.mem.disp == 0 and not m.mem.index and m.mem.base else '-'
    return obj is not None and obj == src


def sub_esp_args(f, site_ret):
    """a `sub esp, N` since the call before: arguments copied by value (0x421dd6's
    16-byte vector), which callsites does not count"""
    from capstone.x86 import X86_OP_IMM, X86_OP_REG
    try:
        insns, _ = decoded(f)
    except Exception:
        return False
    order = sorted(a for a in insns if a < site_ret)
    for a in reversed(order[-24:-1]):
        x = insns[a]
        if x.mnemonic == 'call':
            break
        if x.mnemonic == 'sub' and x.operands[0].type == X86_OP_REG and x.reg_name(x.operands[0].reg) == 'esp'                 and x.operands[1].type == X86_OP_IMM:
            return a != order[0]                # (not the prologue's)
    return False


_bal = {}


def balance_pops(f, site_ret, depth):
    """what an unsure indirect call pops, from the code after it: on a path from
    its return address to f's `ret` that makes only calls whose pops are known,
    the stack must come back level (0x4f37c0's `push ebp` is a save that
    callsites counts as 0x4f37df's argument).  `depth`: the bytes on the stack
    (below the return address) before the call.  None when no such path."""
    key = (f, site_ret, depth)
    if key in _bal:
        return _bal[key]
    _bal[key] = None
    import callsites, fingerprint as fp
    from capstone.x86 import X86_OP_IMM, X86_OP_MEM, X86_OP_REG
    try:
        insns, tables = decoded(f)
    except Exception:
        return None
    order = sorted(insns)
    nexti = {a: order[i + 1] for i, a in enumerate(order[:-1])}
    try:
        pend = {v[2]: v[3] for v in callsites.sites(f)[0].values()}
    except (Exception, SystemExit):
        pend = {}
    work, seen, found = collections.deque([(site_ret, 0)]), set(), set()
    while work and len(seen) < 4000:
        a, d = work.popleft()
        if a in seen or a not in insns:
            continue
        seen.add(a)
        x = insns[a]
        m, ops = x.mnemonic, x.operands
        if m == 'push':
            d += 4
        elif m == 'pop':
            d -= 4
        elif m in ('sub', 'add') and ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'esp':
            if ops[1].type != X86_OP_IMM:
                continue
            d += ops[1].imm if m == 'sub' else -ops[1].imm
        elif m in ('leave', 'pushal', 'popal', 'pushfd', 'popfd') or (
                m in ('mov', 'lea') and ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'esp'):
            continue                            # (frames: not followed)
        elif m == 'call':
            pops = None
            if ops[0].type == X86_OP_IMM and ops[0].imm != 0x0055def0:
                pops = callsites.callee_pops(ops[0].imm)
            elif ops[0].type == X86_OP_MEM and ops[0].mem.base:
                if com_call(f, a + x.size):
                    pops = pend.get(a + x.size)
                elif pend.get(a + x.size) == 0:
                    pops = 0                    # nothing pushed since the last call: no arguments
                else:                           # (before the slot table: 0x421e46's slot 0x100 pops 20 elsewhere)
                    pops = callsites.vslot_pops(ops[0].mem.disp)
            if pops is None:
                continue                        # another unknown: not this path
            d -= pops
        if m == 'ret':
            found.add(depth + d)
            continue
        if m in ('int3', 'hlt'):
            continue
        if m == 'jmp':
            succ = [ops[0].imm] if ops[0].type == X86_OP_IMM and ops[0].imm in insns else tables.get(a, [])
        elif m.startswith('j') or m.startswith('loop'):
            succ = [ops[0].imm, nexti.get(a)] if ops[0].type == X86_OP_IMM and ops[0].imm in insns else [nexti.get(a)]
        else:
            succ = [nexti.get(a)]
        for b in succ:
            if b is not None:
                work.append((b, d))
    if len(found) == 1:
        v = found.pop()
        if 0 <= v <= 0x100 and v % 4 == 0:
            _bal[key] = v
    return _bal[key]


_slot_pops = None
_slot_float = None


def slot_float():
    """the vtable offsets whose methods mostly return in st0"""
    global _slot_float
    if _slot_float is None:
        import csv
        n, fl = collections.Counter(), collections.Counter()
        for r in csv.DictReader(open(os.path.join(oc.ROOT, 'ghidra_out', 'vtable_slots_by_function.csv'))):
            if r['this_offset'] == '0':
                k = 4 * int(r['slot'])
                n[k] += 1
                fl[k] += int(r['function_va'], 16) in float_ret()
        _slot_float = {k for k in n if fl[k] * 2 > n[k]}
    return _slot_float


def slot_pops():
    """{vtable offset: the stack bytes its methods pop (`ret N`)}, from every class's vtable"""
    global _slot_pops
    if _slot_pops is None:
        import csv
        import fingerprint as fp
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        md = Cs(CS_ARCH_X86, CS_MODE_32)
        _slot_pops, rets = {}, {}
        for r in csv.DictReader(open(os.path.join(oc.ROOT, 'ghidra_out', 'vtable_slots_by_function.csv'))):
            if r['this_offset'] != '0':
                continue
            f = int(r['function_va'], 16)
            if f not in rets:
                fn = fp.funcs().get(f)
                rets[f] = None
                for i in md.disasm(fp.exe_bytes(f, fn[1]) if fn else b'', f):
                    if i.mnemonic == 'ret':
                        rets[f] = int(i.op_str, 16) if i.op_str else 0
                        break
            if rets[f] is not None:
                _slot_pops.setdefault(4 * int(r['slot']), set()).add(rets[f])
    return _slot_pops


_arity = {}
BASE_IMPORTS = {'memcpy', 'memmove', 'memset', 'memcmp', 'strlen', '_errno'} | set(oc.INTERLOCKED) | set(oc.STDCALL_STUBS)


def import_arity(dll, name):
    """the stack bytes a Windows export pops (its first `ret N` in SysWOW64's copy), None if not found"""
    key = (dll, name)
    if key not in _arity:
        _arity[key] = None
        try:
            import pefile
            from capstone import Cs, CS_ARCH_X86, CS_MODE_32
            pe = _arity.setdefault(('pe', dll), None) or pefile.PE(os.path.join(os.environ.get('WINDIR', r'C:\Windows'), 'SysWOW64', dll))
            _arity[('pe', dll)] = pe
            for e in pe.DIRECTORY_ENTRY_EXPORT.symbols:
                if e.name and e.name.decode() == name and not e.forwarder:
                    code = pe.get_data(e.address, 0x400)
                    for i in Cs(CS_ARCH_X86, CS_MODE_32).disasm(code, 0):
                        if i.mnemonic == 'ret':
                            _arity[key] = int(i.op_str, 16) if i.op_str else 0
                            break
                        if i.mnemonic == 'jmp' and not i.op_str.startswith('0x'):
                            break               # (a jump through a table: not followed)
                    break
        except Exception:
            pass
        if _arity[key] is None and dll in ('kernel32.dll', 'advapi32.dll'):
            _arity[key] = import_arity('kernelbase.dll', name)      # (kernel32's exports jump to kernelbase's)
        if _arity[key] is None:
            _arity[key] = KNOWN_ARITY.get(name)
    return _arity[key]


# runtime helpers a made-up answer would break: __alloca_probe moves ESP by EAX (a
# function with a big frame then returns into made-up stack: 0x51c280, 0x547860),
# the x87 helpers pop their operand (a made-up answer leaves it on the x87 stack)
REAL_CALLEES = {0x0055def0, 0x0055dcb0, 0x0055e128, 0x0055e3ea, 0x0055fa40}


# functions that never return (their loop runs until the process ends): a run ends
# at the function's n-th call of a callee it calls once a round
NORETURN = {0x4f0200: (0x5492d0, 3)}         # cycles through the levels for ever


# exports the scan above can't follow (forwarded to ntdll, or reached through a jump table)
# imports BEA.exe takes by ordinal (SysWOW64 dsound.dll's export table): 0x5169b0's sound
# setup calls DirectSoundEnumerateA as dsound.dll!#2
ORDINAL_ARITY = {('dsound.dll', '#1'): 12, ('dsound.dll', '#2'): 8, ('dsound.dll', '#3'): 8,
                 ('dsound.dll', '#6'): 12, ('dsound.dll', '#7'): 8, ('dsound.dll', '#11'): 12,
                 ('zlib.dll', '#9'): 0, ('zlib.dll', '#63'): 0}     # compress, uncompress: cdecl
# enumerations that call the game back: (argument of the callback, argument of its
# context). Run made-up, the callback never ran and 0x5169b0 found no sound device
CALLBACK_IMPORTS = {('dsound.dll', '#2'): (0, 1), ('dsound.dll', '#7'): (0, 1)}
KNOWN_ARITY = {'mmioOpenA': 12, 'mmioClose': 8, 'mmioRead': 12, 'mmioWrite': 12, 'mmioSeek': 12,
               'mmioDescend': 16, 'mmioAscend': 12, 'mmioCreateChunk': 12, 'mmioGetInfo': 12, 'mmioSetInfo': 12,
               'mmioAdvance': 12, 'InitializeCriticalSection': 4, 'DeleteCriticalSection': 4, 'GetFileVersionInfoSizeA': 8,
               'GetFileVersionInfoA': 16, 'VerQueryValueA': 16, 'SetWindowPos': 28, 'GetWindowRect': 8,
               'GetClientRect': 8, 'AdjustWindowRect': 12, 'AdjustWindowRectEx': 16, 'SetWindowLongA': 12,
               'GetWindowLongA': 8, 'GetSystemMetrics': 4, 'MessageBoxA': 16, 'ShowCursor': 4,
               'HeapSize': 12, 'HeapReAlloc': 16, 'DestroyWindow': 4}


class FuzzEmu(oc.Emu):
    def __init__(self, dll):
        super().__init__(dll)
        self.seed, self.profile, self.ov = 0, PROFILES[0], {}
        self.alloc = ALLOC
        self.callr = random.Random(0)
        self.mu.hook_add(UC_HOOK_CODE, self._null_call, begin=HEAP, end=HEAP + HEAP_PAGES * PAGE - 1)
        self.mu.hook_add(UC_HOOK_CODE, self._null_call, begin=ALLOC, end=ALLOC + 0x1000000 - 1)
        self.mu.mem_write(oc.SCRATCH + 0xf80, struct.pack('<I', SLIDE_END))
        self.mu.mem_write(SLIDE_END, bytes([0xf4]))
        self.mu.hook_add(UC_HOOK_CODE, self._null_call, begin=SLIDE_END, end=SLIDE_END)
        # the original's `fnstsw ax` as the CPU gives it: the emulator sets B and ES with
        # every exception masked and leaves C1 from before a compare; the CPU clears all
        # three there (scratchpad sw442960.c), the lift's model has C1 0, and no game
        # code tests C1 (0x442960, 0x51c280 differed in EAX bits 0x8280 alone)
        self.sw_fix = None
        for sec in self.exe.pe.sections:
            if sec.Characteristics & 0x20000000:
                data, va = sec.get_data(), self.exe.base + sec.VirtualAddress
                i = data.find(b'\xdf\xe0')
                while i >= 0:
                    self.mu.hook_add(UC_HOOK_CODE, self._fnstsw, begin=va + i, end=va + i + 2)
                    i = data.find(b'\xdf\xe0', i + 1)
        # fld dword [FVAL]; ret N: a made-up float result
        for k in range(48):
            self.mu.mem_write(FSTUBS + 16 * k, bytes([0xd9, 0x05]) + struct.pack('<I', FVAL) + bytes([0xc2]) + struct.pack('<H', 4 * k))
        # xor eax, eax; ret 4k: where an enumeration's callback returns (CALLBACK_IMPORTS),
        # and the device it is told about; written here once (code written from inside a
        # hook and run at once crashed unicorn)
        for k in range(16):
            self.mu.mem_write(CBSTUBS + 16 * k, bytes([0x31, 0xc0, 0xc2]) + struct.pack('<H', 4 * k))
        self.mu.mem_write(CBTEXT, b'Primary Sound Driver\0\0\0\0dsound.dll\0\0')
        self.plan = {}             # (callee, k-th call) -> (eax, float or None): direct calls answered made-up
        self.calls = collections.Counter()
        self.calls_seen = []
        self.nres = {}             # null call index -> (eax, float or None)
        self.outv = {}             # (null call index, argument) -> the value it writes there, None: none
        self.body = (0, 0)
        self.stuball = False
        self.stop_at = None        # (callee, n): the run ends at the function's n-th call of callee
        self.imports_i = 0
        # BEA.exe's code and constants: a made-up pointer can lead a write there, and the
        # file's bytes must come back before the next run (offline_check restores only the
        # writable sections); a run writing there is untestable (_ro_write)
        from unicorn import UC_HOOK_MEM_WRITE
        self.ro = [(va, raw) for va, raw, w in self.exe.chunks if not w]
        self.dirty = set()
        for va, raw in self.ro:
            self.mu.hook_add(UC_HOOK_MEM_WRITE, self._ro_write, begin=va, end=va + len(raw) - 1)

    def _fnstsw(self, mu, address, size, user):
        if self.sw_fix == address:
            ax = mu.reg_read(UC_X86_REG_EAX)
            mu.reg_write(UC_X86_REG_EAX, ax & ~0x8280)
        self.sw_fix = None
        if size == 2 and bytes(mu.mem_read(address, 2)) == b'\xdf\xe0':
            self.sw_fix = address + 2

    def _ro_write(self, mu, access, address, size, value_, user):
        # the game would fault here (its code and constants are read-only): a state no
        # real call has, and the original would go on to run code it overwrote
        # (0x54c0a0 state 324 rewrote its own instructions at 0x54c8ad)
        self.dirty.update({address & ~(PAGE - 1), (address + size - 1) & ~(PAGE - 1)})
        if not self.stopped:
            self.stopped = 'writes into BEA.exe read-only %08x' % address
        mu.emu_stop()

    def run(self, cap, entry, pages, fill=None):
        for p in self.dirty:
            for va, raw in self.ro:
                if va <= p < va + len(raw):
                    self.mu.mem_write(p, raw[p - va:p - va + PAGE])
        self.dirty = set()
        out = self._run(cap, entry, pages, fill)
        for p in self.dirty:
            if p not in out['mem']:
                out['mem'][p] = bytes(self.mu.mem_read(p, PAGE))
        return out

    def _run(self, cap, entry, pages, fill=None):
        self.calls.clear()
        self.calls_seen = []
        self.null_i = 0
        self.out_at = {}             # stack address -> (null call index, argument) whose out-value is there
        self.imports_i = 0
        self.site_count = collections.Counter()
        self.entry_esp = cap['regs_in'][4]
        self.port_run = not self.exe.base <= entry < self.exe.end
        return super().run(cap, entry, pages, fill)

    def _end(self, mu, eax):
        # the run ends here as if the function had returned eax; its frame is dead from then on
        mu.reg_write(UC_X86_REG_EAX, eax)
        mu.reg_write(UC_X86_REG_ESP, self.entry_esp + 4)
        mu.reg_write(UC_X86_REG_EIP, oc.SCRATCH + 0x800)

    def _answer(self, mu, esp, ret, pops, eax, fval):
        mu.reg_write(UC_X86_REG_EAX, eax)
        if fval is None:
            mu.reg_write(UC_X86_REG_ESP, esp + 4 + pops)
            mu.reg_write(UC_X86_REG_EIP, ret)
        else:
            mu.mem_write(FVAL, struct.pack('<f', fval))
            mu.reg_write(UC_X86_REG_EIP, FSTUBS + 16 * (pops // 4))

    def _callee(self, mu, address, size, user):
        # a direct call of the function's: answered made-up when the state says so,
        # by the k-th call to that callee made by the function itself (the original's
        # from its body, the port's from our DLL)
        esp = mu.reg_read(UC_X86_REG_ESP)
        ret = struct.unpack('<I', mu.mem_read(esp, 4))[0]
        if not (self.body[0] <= ret < self.body[1] or oc.OWN[0] <= ret < oc.OWN[1]):
            return
        key = (address, self.calls[address])
        self.calls[address] += 1
        self.calls_seen.append(key)
        if self.stop_at and (address, key[1] + 1) == self.stop_at:
            self._end(mu, mu.reg_read(UC_X86_REG_EAX))
            return
        ans = self.plan.get(key)
        pops = ret_pops(address)
        if ans is None and self.stuball:
            r = random.Random((self.seed << 40) ^ (address << 8) ^ key[1])
            ans = (value(r, self.profile), r.choice(FLOATS) if address in float_ret() else None)
        if ans is None or ans == 'real' or pops is None or address in REAL_CALLEES:
            return
        # out-parameters, as the null calls' (0x4f2ce0 reads a TGA header byte by byte
        # through 0x548570(&local, 1)): keyed by callee and count, so the port's run
        # writes the same; a byte where the pointer is unaligned (the lifts keep the
        # original's frame, so its neighbours are the same locals)
        for k in range(pops // 4):
            q = struct.unpack('<I', mu.mem_read(esp + 4 + 4 * k, 4))[0]
            if esp + 4 + pops <= q < self.entry_esp:
                okey = (('d', address, key[1]), k)
                self.calls_seen.append(('o',) + okey)
                r2 = random.Random((self.seed << 40) ^ (address << 12) ^ (key[1] << 4) ^ k)
                w = self.outv[okey] if okey in self.outv else value(r2, PROFILES[0]) if r2.random() < .5 else None
                if w is None:
                    continue
                if q & 3:
                    self._poke(mu, q, bytes([w & 0xff]))
                else:
                    self._poke(mu, q, struct.pack('<I', w & 0xffffffff))
                    self.out_at[q] = okey
        self._answer(mu, esp, ret, pops, ans[0], ans[1])

    def _null_call(self, mu, address, size, user):
        # as offline_check's, for any call site whose pops callsites.py knows, and
        # with a made-up result (drawn as memory is: a pointer, a count, a flag);
        # the port's run replays the original's answers in order
        esp = mu.reg_read(UC_X86_REG_ESP)
        ret = struct.unpack('<I', mu.mem_read(esp, 4))[0]
        if self.exe.base <= ret < self.exe.end:
            self._site_pops(ret)                    # (fills the cache)
            v = owner = None
            for fa, f in getattr(self, '_sites', {}).items():
                if ret in f:
                    v, owner = f[ret], fa
            pops = v[3] if v and v[3] is not None else None
            nxt = bytes(mu.mem_read(ret, 3))
            bal = None
            com = v is not None and v[0][0] == 'v' and com_call(owner, ret)
            if com:
                pops = v[3]
            elif v and (not v[4] or sub_esp_args(owner, ret)):
                # the depth below the function's return address: the emulator's own for
                # the function under test (callsites' is off after an earlier unsure call)
                depth = self.entry_esp - esp - 4 if owner == self.body[0] else v[1]
                bal = balance_pops(owner, ret, depth)
            if com:
                pass
            elif bal is not None:
                pops = bal
            elif pops is not None and (nxt[:2] == bytes([0x83, 0xc4]) or nxt[:2] == bytes([0x81, 0xc4])):
                pops = 0                        # `add esp, N` after the call: cdecl, the caller pops
            elif pops is not None and v[0][0] == 'v':
                # callsites counts every push since the last call, and VC6 pushes a
                # later call's argument early (0x4157c4: `push 0` is 0x4aa630's): the
                # methods in that vtable slot say what the callee pops
                cands = slot_pops().get(v[0][1], ())
                if cands and pops not in cands:
                    pops = max([c for c in cands if c < pops], default=pops)
            # the answer depends on the call site and its count alone: the port's run
            # meets the nested ones (from the game code it calls) at the same sites
            cnt = self.site_count[ret]
            self.site_count[ret] += 1
            r = random.Random((self.seed << 40) ^ (ret << 8) ^ cnt)
            eax = value(r, self.profile)
            if com and r.random() < .2:
                eax = 0x80004005            # E_FAIL: a COM call's failure path (0x516d35 `jge`)
            fval = None
            if v and v[0][0] == 'v' and v[0][1] in slot_float():
                fval = struct.unpack('<f', struct.pack('<I', value(r, PROFILES[0])))[0]
                if fval != fval or abs(fval) > 1e30:
                    fval = 1.0
            outs = ()
            if self.body[0] <= ret < self.body[1] and self.port_run:
                # the original's body inside the port's run: a recursive call (0x4934f0
                # calls itself; the exe is not patched here); its answers are the
                # original's, in their order, as the port's own are
                if self.null_replay:
                    pops, eax, fval, outs = self.null_replay.pop(0)
                    self._outs(mu, esp, outs)
            elif self.body[0] <= ret < self.body[1]:
                # the function's own: the port makes these from our DLL, in this order
                if self.null_i in self.nres:
                    eax, fval = self.nres[self.null_i][0], (self.nres[self.null_i][1] if fval is not None else None)
                if pops:
                    # out-parameters: an argument pointing at one of the function's
                    # locals gets a made-up value there half the time (Direct3D's
                    # CreateTexture hands its texture back so, 0x5134d2)
                    outs = []
                    for k in range(pops // 4):
                        q = struct.unpack('<I', mu.mem_read(esp + 4 + 4 * k, 4))[0]
                        if esp + 4 + pops <= q < self.entry_esp and not q & 3:
                            key = (self.null_i, k)
                            self.calls_seen.append(('o',) + key)
                            w = self.outv[key] if key in self.outv else value(r, [('ptr', 1)]) if r.random() < .5 else None
                            if w is not None:
                                outs.append((k, w))
                                self.out_at[q] = key
                    self._outs(mu, esp, outs)
                self.calls_seen.append(('n', self.null_i))
                self.null_i += 1
                self.null_log.append((pops, eax, fval, tuple(outs)))
        else:
            pops, eax, fval, outs = self.null_replay.pop(0) if self.null_replay else (None, 0, None, ())
            self._outs(mu, esp, outs)
        if os.environ.get('FUZZ_POPS'):
            print('    null call from %08x pops %s' % (ret, pops))
        if pops is None:
            self.stopped = 'jumped to unmapped %08x (from %08x)' % (address, ret)
            mu.emu_stop()
            return
        self.null_calls += 1
        self._answer(mu, esp, ret, pops, eax, fval)

    def _poke(self, mu, a, data):
        # a write from here (not from an instruction): pages mapped lazily are mapped first,
        # and no single write crosses a page (unicorn 2 wrote outside its own memory when
        # 20 bytes below ESP spanned two separately mapped stack pages)
        from unicorn import UcError, UC_MEM_WRITE_UNMAPPED
        i = 0
        while i < len(data):
            n = min(len(data) - i, PAGE - ((a + i) & (PAGE - 1)))
            try:
                mu.mem_write(a + i, data[i:i + n])
            except UcError:
                self._unmapped(mu, UC_MEM_WRITE_UNMAPPED, a + i, n, 0, None)
                mu.mem_write(a + i, data[i:i + n])
            i += n

    def _outs(self, mu, esp, outs):
        # the made-up values a call writes through its pointer arguments (k: the argument);
        # the port's run writes them where its own k-th argument points, if a local
        for k, v in outs:
            q = struct.unpack('<I', mu.mem_read(esp + 4 + 4 * k, 4))[0]
            if esp < q < self.entry_esp and not q & 3:
                self._poke(mu, q, struct.pack('<I', v))

    def _unmapped(self, mu, access, address, size, value_, user):
        if len(self.mapped) > 4096:
            # a run touching more than 16 MB is no state a real call has (0x4541e0's made-up
            # indices wrote across hundreds of MB, and unicorn kept the memory: 15 GB)
            if not self.stopped:
                self.stopped = 'maps more than 16 MB'
            mu.emu_stop()
            return False
        if access == UC_MEM_FETCH_UNMAPPED:
            p = address & ~(PAGE - 1)
            if address < 0x10000 or HEAP <= address < HEAP + HEAP_PAGES * PAGE or ALLOC <= address < ALLOC + 0x1000000:
                # _null_call answers before anything here runs; the page holds what a read
                # would have found (which run touches it first must not matter)
                mu.mem_map(p, PAGE, UC_PROT_ALL)
                self.mapped.add(p)
                if not ALLOC <= p < ALLOC + 0x1000000:
                    mu.mem_write(p, self.lazy.get(p) or fill(self.seed, p, self.profile, self.ov))
                return True
            if address >= 0x10000 and not self.exe.base <= address < self.exe.end:
                # a call through made-up memory to anywhere: a slide of nops to a
                # jump to SLIDE_END, where _null_call answers as for a null vtable
                mu.mem_map(p, PAGE, UC_PROT_ALL)
                self.mapped.add(p)
                mu.mem_write(p, bytes([0x90]) * (PAGE - 6) + bytes([0xff, 0x25]) + struct.pack('<I', oc.SCRATCH + 0xf80))
                return True
            return super()._unmapped(mu, access, address, size, value_, user)
        for q in {address & ~(PAGE - 1), (address + size - 1) & ~(PAGE - 1)}:
            if q not in self.lazy and q not in self.mapped:
                self.lazy[q] = bytes(PAGE) if ALLOC <= q < ALLOC + 0x1000000 else fill(self.seed, q, self.profile, self.ov)
        return super()._unmapped(mu, access, address, size, value_, user)

    def _import(self, mu, address, size, user):
        name = self.stub_names.get(address & ~0xf, '?').split('!')[-1]
        esp = mu.reg_read(UC_X86_REG_ESP)
        ret, a1, a2, a3 = struct.unpack('<4I', mu.mem_read(esp, 16))
        answers = {'HeapAlloc': 3, 'HeapFree': 3, 'GetProcessHeap': 0, 'timeGetTime': 0, 'GetTickCount': 0,
                   'OutputDebugStringA': 1, 'TlsGetValue': 1, 'CreateFileA': 7, 'ReadFile': 5, 'WriteFile': 5,
                   'CloseHandle': 1, 'GetFileSize': 2, 'SetFilePointer': 4, 'GetFileType': 1}
        r = random.Random((self.seed << 24) ^ self.imports_i)
        self.imports_i += 1
        if name in ('ExitProcess', 'exit', '_exit', 'RaiseException'):
            # the game's fatal error (0x42cfa0) ends the process: the run ends there, as
            # if the function had returned the exit code. A C++ throw (RaiseException
            # from _CxxThrowException, in 0x4ec2f0's callees) ends it too: both versions
            # throw at the same point, and the unwinding is not the function's own work
            self._end(mu, a1)
            return
        if name not in answers:
            full = self.stub_names.get(address & ~0xf, '?')
            dll = full.split('!')[0]
            if name in BASE_IMPORTS:
                return super()._import(mu, address, size, user)
            r = random.Random((self.seed << 24) ^ self.imports_i)
            self.imports_i += 1
            if name in ('QueryPerformanceCounter', 'QueryPerformanceFrequency'):
                mu.mem_write(a1, struct.pack('<Q', r.randrange(1 << 40)))
                pops = 4
            elif dll.startswith('msvcr'):
                pops = 0                                    # cdecl: the caller pops
            else:
                pops = ORDINAL_ARITY.get((dll.lower(), name)) if name.startswith('#') else import_arity(dll, name)
                if pops is None:
                    return super()._import(mu, address, size, user)
                cbk = CALLBACK_IMPORTS.get((dll.lower(), name))
                if cbk and not os.environ.get('FUZZ_NOCB') and random.Random((self.seed << 24) ^ 0x5bd1 ^ self.imports_i).random() < .6:
                    # one device: the callback (lpGuid, description, module, context) runs for
                    # real and returns to `xor eax, eax; ret pops` (DS_OK from the import)
                    cb, ctx = struct.unpack('<2I', mu.mem_read(esp + 4 + 4 * cbk[0], 4) + mu.mem_read(esp + 4 + 4 * cbk[1], 4))
                    import fingerprint as fp
                    fns = fp.funcs()
                    if self.exe.base <= cb < self.exe.end and cb not in fns:
                        # Ghidra has no function there (0x516ed0 is reached only through the
                        # pointer): one up to the next known start, so callsites can count the
                        # pushes of its COM calls
                        fns[cb] = ('callback_%08x' % cb, min(b for b in fns if b > cb) - cb, False)
                        if hasattr(self, '_fstarts'):
                            import bisect
                            bisect.insort(self._fstarts, cb)
                    stub, text = CBSTUBS + 16 * (pops // 4), CBTEXT
                    self._poke(mu, esp - 20, struct.pack('<5I', stub, 0, text, text + 24, ctx))
                    mu.reg_write(UC_X86_REG_ESP, esp - 20)
                    mu.reg_write(UC_X86_REG_EIP, cb)
                    return
            # any other import: a made-up result, nothing written (its outputs read as made-up memory)
            # (E_FAIL too: `test eax, eax / jge` after DirectSoundCreate8 at 0x516af1 has a
            # failure path no 0 / 1 / made-up value took)
            mu.reg_write(UC_X86_REG_EAX, r.choice((0, 1, 1, 1, 0x80004005, value(r, self.profile))))
            mu.reg_write(UC_X86_REG_ESP, esp + 4 + pops)
            mu.reg_write(UC_X86_REG_EIP, ret)
            return
        if name == 'HeapAlloc':
            eax = self.alloc
            self.alloc += (a3 + 0x1f) & ~0xf
        elif name in ('timeGetTime', 'GetTickCount'):
            eax = 1000
        elif name == 'TlsGetValue':
            eax = HEAP
        elif name == 'CreateFileA':
            eax = r.choice((0x1234, 0x1234, 0x1234, 0xffffffff))
        elif name in ('ReadFile', 'WriteFile'):
            # (handle, buffer, bytes, &done, overlapped): a made-up file's bytes
            done = struct.unpack('<I', mu.mem_read(esp + 16, 4))[0]
            n = a3 if r.random() < .8 else r.randrange(a3 + 1)
            if name == 'ReadFile' and 0 < n <= 0x100000:
                rr = random.Random(r.getrandbits(32))
                mu.mem_write(a2, bytes(struct.pack('<%dI' % ((n + 3) // 4), *(value(rr, self.profile) for _ in range((n + 3) // 4))))[:n])
            if done:
                mu.mem_write(done, struct.pack('<I', n))
            eax = 1
        elif name == 'GetFileSize':
            eax = r.choice((0, 16, 0x100, 0x1000, r.randrange(0x10000)))
        elif name == 'SetFilePointer':
            eax = 0
        else:
            eax = 1
        mu.reg_write(UC_X86_REG_EAX, eax)
        mu.reg_write(UC_X86_REG_ESP, esp + 4 + 4 * answers[name])
        mu.reg_write(UC_X86_REG_EIP, ret)


def entry_esp(seed):
    """the entry ESP make_state gives a state"""
    return STACK + 0xc00 + 4 * random.Random(seed * 7919 + 17).randrange(64)


def make_state(emu, st):
    """the entry state of a fuzz state: dict(seed, prof, ov {address: dword}, rov {register: dword})"""
    seed, profile, ov = st['seed'], PROFILES[st['prof']], st['ov']
    r = random.Random(seed * 7919 + 17)
    esp = STACK + 0xc00 + 4 * r.randrange(64)
    regs = [value(r, profile) for _ in range(8)]
    regs[1] = HEAP + r.randrange(HEAP_PAGES) * PAGE + 16 * r.randrange(32)   # ecx: a `this`
    for k, v in st['rov'].items():
        regs[k] = v
    regs[4] = esp
    cap = dict(regs_in=regs, fpu_in=bytes(FPU0), stack=[(STACK - PAGE, 0, 0), (STACK, 0, 0), (STACK + PAGE, 0, 0)],
               ilog=None)
    pages = {p: fill(seed, p, profile, ov) for p in (STACK - PAGE, STACK, STACK + PAGE)}
    # the game's globals the state changes (BEA.exe's data: the file's bytes elsewhere)
    for a in ov:
        p = a & ~(PAGE - 1)
        if emu.exe.base <= p < emu.exe.end and p not in pages:
            for va, raw in emu.baseline:
                if va <= p < va + len(raw):
                    b = bytearray(raw[p - va:p - va + PAGE].ljust(PAGE, b'\0'))
                    for q, v in ov.items():
                        if p <= q <= p + PAGE - 4:
                            struct.pack_into('<I', b, q - p, v)
                    pages[p] = bytes(b)
    emu.seed, emu.profile, emu.ov = seed, profile, ov
    emu.plan, emu.nres = st.get('plan', {}), st.get('nres', {})
    emu.outv = st.get('outv', {})
    emu.stuball = st.get('stuball', False)
    return cap, pages


DICT = []                  # the constants the function compares with (its immediates and constants it reads)


def constants(ins, exe_bytes):
    out = set()
    for i in ins:
        for tok in i.op_str.replace(',', ' ').replace('[', ' ').replace(']', ' ').split():
            neg = tok.startswith('-')
            tok = tok.lstrip('-')             # (`add eax, -0x2a`: 0x2a is what the input is compared with)
            if tok.startswith('0x') or tok.isdigit():
                v = int(tok, 0) & 0xffffffff
                out.update((v, (v + 1) & 0xffffffff, (v - 1) & 0xffffffff))
                if neg:                       # (and `cmp [edi+0x10], -2`: -2 itself, 0x458ee0)
                    out.add(-v & 0xffffffff)
                if 0x5d8000 <= v < 0x622000:              # a constant in .rdata (a float the code compares with)
                    b = exe_bytes(v, 4)
                    if len(b) == 4:
                        c = struct.unpack('<I', b)[0]
                        f = struct.unpack('<f', b)[0]
                        out.add(c)
                        if f == f and abs(f) < 1e30:
                            for g in (f * 1.01 + 0.01, f * 0.99 - 0.01, -f):
                                out.add(struct.unpack('<I', struct.pack('<f', g))[0])
    return sorted(out)


SWITCH = []               # the case values of the function's jump-table switches


def switch_cases(ins):
    """the input values that pick each case of a jump-table switch: `[add r, -C | sub r, C]
    cmp r, N / ja / ... jmp [table]` (0x51ccb0's key codes 0x2a..0x37) gives C..C+N"""
    out = set()
    for k, i in enumerate(ins):
        if i.mnemonic != 'cmp' or len(i.operands) != 2 or i.operands[0].type != 1 or i.operands[1].type != 2:
            continue                          # (capstone: 1 a register, 2 an immediate)
        n = i.operands[1].imm & 0xffffffff
        if n > 255 or not any(j.mnemonic in ('ja', 'jae') for j in ins[k + 1:k + 3]) or \
                not any(j.mnemonic == 'jmp' and '*4' in j.op_str for j in ins[k + 1:k + 8]):
            continue
        reg = i.reg_name(i.operands[0].reg)
        c = 0
        for j in reversed(ins[max(0, k - 6):k]):
            if j.mnemonic in ('add', 'sub') and j.operands[0].type == 1 and j.reg_name(j.operands[0].reg) == reg \
                    and j.operands[1].type == 2:
                c = (-j.operands[1].imm if j.mnemonic == 'add' else j.operands[1].imm) & 0xffffffff
                break
        out.update((c + v) & 0xffffffff for v in range(n + 1))
    return sorted(out)


SWITCH_SRC = []           # the globals a switch's index is loaded from


def switch_sources(ins):
    """globals read into registers just before a jump-table switch's bound check
    (0x51ccb0: `mov eax, [0x8a180c] / ... / mov eax, [0x8a1808] / ... cmp eax, 0xe`)"""
    from capstone.x86 import X86_OP_MEM, X86_OP_REG
    out = []
    for k, i in enumerate(ins):
        if i.mnemonic != 'cmp' or len(i.operands) != 2 or i.operands[0].type != X86_OP_REG                 or not any(j.mnemonic == 'jmp' and '*4' in j.op_str for j in ins[k + 1:k + 8]):
            continue
        for j in ins[max(0, k - 8):k]:
            if j.mnemonic == 'mov' and len(j.operands) == 2 and j.operands[0].type == X86_OP_REG                     and j.operands[1].type == X86_OP_MEM and not j.operands[1].mem.base and not j.operands[1].mem.index:
                a = j.operands[1].mem.disp & 0xffffffff
                if a not in out:
                    out.append(a)
    return out


def operand_values(mu, i):
    """the values of a cmp/test's two operands as the CPU sees them now, and their size"""
    from capstone.x86 import X86_OP_REG, X86_OP_IMM, X86_OP_MEM
    import unicorn.x86_const as U
    out = []
    for op in i.operands:
        if op.type == X86_OP_IMM:
            out.append(op.imm & 0xffffffff)
        elif op.type == X86_OP_REG:
            out.append(mu.reg_read(getattr(U, 'UC_X86_REG_' + i.reg_name(op.reg).upper())))
        elif op.type == X86_OP_MEM:
            m = op.mem
            if m.segment:
                return None
            a = m.disp
            if m.base:
                a += mu.reg_read(getattr(U, 'UC_X86_REG_' + i.reg_name(m.base).upper()))
            if m.index:
                a += m.scale * mu.reg_read(getattr(U, 'UC_X86_REG_' + i.reg_name(m.index).upper()))
            try:
                b = bytes(mu.mem_read(a & 0xffffffff, op.size))
            except Exception:
                return None
            out.append(int.from_bytes(b, 'little'))
    if len(out) != 2:
        return None
    return out[0], out[1], i.operands[0].size


def hints(reads, pairs):
    """input-to-state guesses (as RedQueen makes them): a value read that equals one side
    of a compare, set to the other side (and its neighbours, and below a bound)"""
    out = []
    for a, b, size in pairs:
        mask = (1 << (8 * size)) - 1
        for x, y in ((a, b), (b, a)):
            if (x & mask) == (y & mask):
                continue
            hits = 0
            for q, rv in reads.items():
                if hits >= 16 or len(out) >= 3000:
                    # (a compare with 0 matched every zero byte of big buffers: 0x4541e0's
                    # frontier states held 6.9 million hints, 22 GB in all)
                    break
                # at each position of the dword the read is keyed by: a byte compare of
                # a TGA header's type at +2 (0x4f2d76) is not the dword's low byte
                for sh in range(0, 4 if size < 4 else 1, size):
                    m = mask << (8 * sh)
                    if (rv >> (8 * sh)) & mask == x & mask:
                        hits += 1
                        for t in (y, y + 1, y - 1):
                            out.append((q, (rv & ~m & 0xffffffff) | ((t & mask) << (8 * sh))))
                        if 0 < y < 0x100:
                            out.append((q, (rv & ~m & 0xffffffff) | (random.randrange(y) << (8 * sh))))
    return out


def mutate(r, st, reads):
    """a copy of the state with one to three of the values the function read changed"""
    new = dict(seed=st['seed'], prof=st['prof'], ov=dict(st['ov']), rov=dict(st['rov']), stuball=st.get('stuball', False),
               plan=dict(st.get('plan', {})), nres=dict(st.get('nres', {})), outv=dict(st.get('outv', {})))
    hs = [v for k, v in reads.items() if isinstance(k, tuple) and k[0] == 'h']
    if hs and r.random() < .5:
        q, v = r.choice(hs)                                 # a compare's other side
        if isinstance(q, tuple) and q[0] == 'o':
            new['outv'][(q[1], q[2])] = v & 0xffffffff
        elif isinstance(q, tuple):
            new['rov'][q[1]] = v & 0xffffffff
        else:
            new['ov'][q] = v & 0xffffffff
        return new
    cands = [k for k in reads if not (isinstance(k, tuple) and k[0] == 'h')] + [('r', k) for k in (0, 1, 2, 3, 5, 6, 7)]
    ptrs = [v for k, v in reads.items() if not isinstance(k, tuple) and HEAP <= v < HEAP + HEAP_PAGES * PAGE and not v & 3]
    plain = [k for k in reads if not isinstance(k, tuple)]
    if (ptrs or plain) and r.random() < .15:
        # a string where a pointer the function read points (strlen, strcpy, names),
        # or a value it read made such a pointer
        if ptrs and r.random() < .6:
            a = r.choice(ptrs)
        else:
            a = HEAP + (HEAP_PAGES - 1) * PAGE + 0x40 * r.randrange(48)
            new['ov'][r.choice(plain)] = a
        n = r.choice((0, 1, 4, 8, 9, 10, 12, 16, 31, 32, 40, 63))
        text = bytes(r.choice(b'abcdefghijklmnopqrstuvwxyz_0123456789./ ') for _ in range(n)) + bytes(4 - n % 4)
        for i in range(0, len(text), 4):
            new['ov'][a + i] = struct.unpack('<I', text[i:i + 4])[0]
        return new
    if SWITCH and r.random() < .15:
        # a case of a switch, in an argument or a register (what switches mostly test)
        esp = entry_esp(st['seed'])
        args = [k for k in reads if not isinstance(k, tuple) and esp < k <= esp + 0x40]
        c = r.choice(args) if args and r.random() < .75 else ('r', r.choice((0, 1, 2, 3, 5, 6, 7)))
        if isinstance(c, tuple):
            new['rov'][c[1]] = r.choice(SWITCH)
        else:
            new['ov'][c] = r.choice(SWITCH)
        return new
    for _ in range(r.choice((1, 1, 2, 3))):
        c = r.choice(cands)
        old = reads.get(c, 0)
        x = r.random()
        if x < .08 and SWITCH:
            v = r.choice(SWITCH)                            # a case of a switch
        elif x < .15 and DICT:
            v = r.choice(DICT)
            if r.random() < .3:
                v = (old & ~0xff) | (v & 0xff)                  # a byte compare (cmp al, 0x29)
        elif x < .35:
            v = value(r, PROFILES[r.randrange(len(PROFILES))])
        elif x < .5:
            f = struct.unpack('<f', struct.pack('<I', old))[0]
            f = r.choice((-f, f * 2 + 1, f / 2 - 1, f + r.uniform(-100, 100), 0.0, 1e6, -1e6))
            v = struct.unpack('<I', struct.pack('<f', f))[0] if f == f and abs(f) < 3e38 else 0
        elif x < .7:
            v = old ^ (1 << r.randrange(32))
        elif x < .85:
            v = (old + r.choice((1, -1, 2, -2, 0x10))) & 0xffffffff
        else:
            v = r.choice((0, 1, 2, 0xffffffff, 0x80000000, HEAP + 0x100))
        if isinstance(c, tuple) and c[0] == 'c':
            # a call answered made-up (or run again)
            k = (c[1], c[2])
            if r.random() < .25:
                new['plan'][k] = 'real'
            else:
                f = r.choice(FLOATS + [r.uniform(-500, 500)])
                new['plan'][k] = (v, f if c[1] in float_ret() else None)
        elif isinstance(c, tuple) and c[0] == 'o':
            new['outv'][(c[1], c[2])] = None if r.random() < .3 else v     # (None: left alone)
        elif isinstance(c, tuple) and c[0] == 'n':
            new['nres'][c[1]] = (v, r.choice(FLOATS + [r.uniform(-500, 500)]))
        elif isinstance(c, tuple):
            new['rov'][c[1]] = v
        else:
            new['ov'][c] = v
    return new


def rss_mb():
    """this process's working set (MB): unicorn's memory grows with the mappings of many runs
    (one run of 12 functions reached 27 GB and starved the machine, 2026-11-01)"""
    import ctypes
    from ctypes import wintypes

    class PMC(ctypes.Structure):
        _fields_ = [('cb', wintypes.DWORD), ('PageFaultCount', wintypes.DWORD)] + \
                   [(n, ctypes.c_size_t) for n in ('PeakWorkingSetSize', 'WorkingSetSize', 'QuotaPeakPagedPoolUsage',
                                                   'QuotaPagedPoolUsage', 'QuotaPeakNonPagedPoolUsage',
                                                   'QuotaNonPagedPoolUsage', 'PagefileUsage', 'PeakPagefileUsage')]
    c = PMC()
    c.cb = ctypes.sizeof(PMC)
    k32 = ctypes.WinDLL('kernel32')
    psapi = ctypes.WinDLL('psapi')
    k32.GetCurrentProcess.restype = wintypes.HANDLE
    psapi.GetProcessMemoryInfo.argtypes = [wintypes.HANDLE, ctypes.POINTER(PMC), wintypes.DWORD]
    psapi.GetProcessMemoryInfo(k32.GetCurrentProcess(), ctypes.byref(c), c.cb)
    return max(c.WorkingSetSize, c.PagefileUsage) // (1 << 20)


MAX_MB = int(os.environ.get('FUZZ_MAX_MB', 2500))   # per process; checked before every state (11-04: four
                                                    # processes at 4 GB, checked every 16, ran the machine out of memory)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('addr', nargs='+')
    ap.add_argument('--dll', default=os.path.join(oc.ROOT, 'build_pool', 'zlib.dll'))
    ap.add_argument('--states', type=int, default=48, help='random states first')
    ap.add_argument('--guided', type=int, default=400, help='then states made by changing what a state read')
    ap.add_argument('--count', type=int, default=3_000_000, help='instructions per run at most')
    ap.add_argument('--save', help='a JSON file the results add to (runs with other seeds widen the coverage)')
    ap.add_argument('--seed', type=int, default=0, help='first state seed')
    ap.add_argument('--dump', help='with -v: save each differing state to DUMP_<addr>_<n>.pkl')
    ap.add_argument('--replay', help='judge only this saved state')
    ap.add_argument('-v', action='store_true')
    a = ap.parse_args()
    oc.RUN_COUNT = a.count
    oc.RUN_TIMEOUT = int(os.environ.get("FUZZ_TIMEOUT_US", 5 * 1000 * 1000))   # (wall clock: a busy machine makes slow runs "not return")
    syms = oc.port_symbols(a.dll)
    emu = FuzzEmu(a.dll)
    import fingerprint as fp
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    seen, reads, body_rng, pairs, hint_list = set(), {}, [0, 0], [], []
    pair_at = collections.Counter()           # compare address -> the pairs it gave this state
    md.detail = True

    def on_read(mu, access, address, size, value_, user):
        # what the function's own instructions read (callees' reads are theirs)
        if body_rng[0] <= mu.reg_read(UC_X86_REG_EIP) < body_rng[1] and size <= 4:
            q = address & ~3
            if q not in reads and not oc.SCRATCH <= q < oc.SCRATCH + 0x10000:
                try:
                    reads[q] = struct.unpack('<I', mu.mem_read(q, 4))[0]
                except Exception:
                    pass
    emu.mu.hook_add(UC_HOOK_MEM_READ, on_read)
    for x in a.addr:
        if emu is None:
            emu = FuzzEmu(a.dll)
            emu.mu.hook_add(UC_HOOK_MEM_READ, on_read)
        addr = int(x, 16)
        fn = fp.funcs().get(addr)
        if addr not in syms or not fn:
            print('%08x  no port in the DLL' % addr if fn else '%08x  not a function start' % addr)
            continue
        size = fn[1]
        try:
            # the code reachable from the entry, where it runs past Ghidra's size: 0x559410
            # ends at 0x559b6a, not 0x559afb, and the call at 0x559afb counted as another
            # function's, so the port's replay of the original's answers fell out of step
            dins, _ = decoded(addr)
            size = max(size, max(a + dins[a].size for a in dins) - addr)
        except Exception:
            pass
        body_rng[:] = [addr, addr + size]
        ins = list(md.disasm(fp.exe_bytes(addr, size), addr))
        body = {i.address for i in ins}
        emu.body = (addr, addr + size)
        emu.stop_at = NORETURN.get(addr)
        DICT[:] = constants(ins, fp.exe_bytes)
        SWITCH[:] = switch_cases(ins)
        SWITCH_SRC[:] = switch_sources(ins)
        callees = {int(i.op_str, 16) for i in ins if i.mnemonic == 'call' and i.op_str.startswith('0x')}
        chooks = [emu.mu.hook_add(UC_HOOK_CODE, emu._callee, begin=c, end=c) for c in callees]
        insat = {i.address: i for i in ins if i.mnemonic in ('cmp', 'test')}

        def on_cmp(mu, ad, sz, u):
            # at most 4 per compare: a loop's compare filled all 200 before the later ones ran
            if len(pairs) < 200 and pair_at[ad] < 4:
                v = operand_values(mu, insat[ad])
                if v:
                    pairs.append(v)
                    pair_at[ad] += 1
        chooks += [emu.mu.hook_add(UC_HOOK_CODE, on_cmp, begin=c, end=c) for c in insat]

        # x87 compares with a constant (`fld [esp+0x63c] / fcomp [1.0]`, 0x458ee0): the
        # dwords the last two `fld dword [mem]` loaded get that constant (and just
        # either side of it) as hints; the emulator's FPU stack is not read
        fldat = {i.address: i for i in ins if i.mnemonic == 'fld' and i.operands and i.operands[0].type == 3
                 and i.operands[0].size == 4}
        fcmpat = {}
        for i in ins:
            if i.mnemonic in ('fcom', 'fcomp', 'fucom', 'fucomp') and i.operands and i.operands[0].type == 3                     and i.operands[0].size == 4 and not i.operands[0].mem.base and not i.operands[0].mem.index:
                b = fp.exe_bytes(i.operands[0].mem.disp & 0xffffffff, 4)
                if len(b) == 4:
                    fcmpat[i.address] = struct.unpack('<I', b)[0]

        def mem_addr(mu, i):
            import unicorn.x86_const as U
            m = i.operands[0].mem
            a = m.disp
            if m.base:
                a += mu.reg_read(getattr(U, 'UC_X86_REG_' + i.reg_name(m.base).upper()))
            if m.index:
                a += m.scale * mu.reg_read(getattr(U, 'UC_X86_REG_' + i.reg_name(m.index).upper()))
            return a & 0xffffffff

        def on_fld(mu, ad, sz, u):
            flds.append(mem_addr(mu, fldat[ad]))
            del flds[:-2]

        def on_fcmp(mu, ad, sz, u):
            if len(fhints) < 64 and pair_at[ad] < 2:
                pair_at[ad] += 1
                c = fcmpat[ad]
                f = struct.unpack('<f', struct.pack('<I', c))[0]
                near = [c] + ([struct.unpack('<I', struct.pack('<f', g))[0] for g in (f * 1.01 + 1e-3, f * 0.99 - 1e-3)]
                              if f == f and abs(f) < 1e30 else [])
                for q in flds:
                    fhints.extend((q & ~3, v) for v in near if not q & 3)
        flds, fhints = [], []
        chooks += [emu.mu.hook_add(UC_HOOK_CODE, on_fld, begin=c, end=c) for c in fldat]
        chooks += [emu.mu.hook_add(UC_HOOK_CODE, on_fcmp, begin=c, end=c) for c in fcmpat]
        st = collections.Counter()
        cov = emu.mu.hook_add(UC_HOOK_CODE, lambda mu, ad, sz, u: seen.add(ad), begin=addr, end=addr + size - 1)
        first, reached, corpus, frontier = None, set(), [], []
        em, ab = oc.eax_mask(addr), oc.cdecl_arg_bytes(addr)
        rng = random.Random(addr ^ (a.seed << 32))

        def judge(n, state):
            nonlocal first
            if rss_mb() > MAX_MB:
                st['why:memory cap'] += 1
                return None
            cap, pages = make_state(emu, state)
            # the stack pages, and those below them a big frame reaches (0x51c280's 8 KB,
            # __alloca_probe): dead once the function has returned
            stackpages = {p for p, _, _ in cap['stack']} | set(range(STACK - 0x40000, STACK, PAGE))
            callseed = state['seed'] * 31 + 5
            emu.alloc, emu.callr = ALLOC, random.Random(callseed)
            seen.clear()
            reads.clear()
            pairs.clear()
            pair_at.clear()
            flds.clear()
            fhints.clear()
            try:
                o = emu.run(cap, addr, pages)
            except oc.Untestable as e:
                if not state.get('stuball') and any(c[0] not in ('n', 'o') for c in emu.calls_seen):
                    # a callee run for real on made-up data can wreck the frame (0x421db0's
                    # 0x44b370 wrote over its return address): the state again, every call
                    # answered made-up (in place, so the corpus keeps the state that ran)
                    state['stuball'] = True
                    return judge(n, state)
                st['untestable'] += 1
                st['why:' + str(e).split(' at ')[0][:40]] += 1
                if (seen & body) - reached and len(frontier) < 64:
                    # not judged, but a base to mutate from: 0x54e9d0's states that reached
                    # its pixel loop all ran out of instructions (width x height made up)
                    fr = dict(reads)
                    # its compare hints too: one sets a loop's made-up bound to the counter
                    # (0x4ec2f0 loops over [this+0x15c] entries)
                    for q, v in hints({k: v for k, v in fr.items() if not isinstance(k, tuple)} |
                                      {('r', k): v for k, v in enumerate(cap['regs_in']) if k != 4}, pairs):
                        if q in emu.out_at:
                            q = ('o',) + emu.out_at[q]
                        hint_list.append(q)
                        fr.setdefault(('h', len(hint_list) - 1), (q, v))
                    for c in emu.calls_seen:
                        fr[('c',) + c if c[0] not in ('n', 'o') else c] = 0
                    frontier.append((state, fr))
                return None
            ran, rd = seen & body, dict(reads)
            for q, v in hints({k: v for k, v in rd.items() if not isinstance(k, tuple)} |
                              {('r', k): v for k, v in enumerate(cap['regs_in']) if k != 4}, pairs):
                if q in emu.out_at:
                    q = ('o',) + emu.out_at[q]          # (the value was a made-up call's out-parameter)
                hint_list.append(q)
                rd.setdefault(('h', len(hint_list) - 1), (q, v))
            for q, v in fhints:
                if q in rd:
                    hint_list.append(q)
                    rd.setdefault(('h', len(hint_list) - 1), (q, v))
            for c in emu.calls_seen:
                rd[('c',) + c if c[0] not in ('n', 'o') else c] = 0
            o['stackpages'] = stackpages
            emu.alloc = ALLOC
            try:
                p = emu.run(cap, syms[addr], pages)
            except oc.Untestable as e:
                st['port_untestable'] += 1
                first = first or 'state %d port: %s' % (n, e)
                return None
            p['stackpages'] = stackpages
            d = oc.compare(o, p, o['regs'][4], 'memory', ('ecx', 'edx'), eax=em, args=ab)
            if d:
                runs = []
                for f in (bytes([0xa5]), bytes([0x3c])):
                    emu.alloc, emu.callr = ALLOC, random.Random(callseed)
                    try:
                        q = emu.run(cap, addr, oc.poisoned(pages, stackpages, cap['regs_in'][4], f), f)
                    except oc.Untestable:
                        q = None
                    runs.append(q)
                stale = oc.stale_dependent(o, runs) or set()
                d = oc.compare(o, p, o['regs'][4], 'memory', ('ecx', 'edx'), stale, em, ab)
            if d and all(z.startswith('eax ') for z in d):
                st['eax_only'] += 1
            elif d:
                st['differs'] += 1
                first = first or 'state %d: %s' % (n, '; '.join(d[:3]))
                if a.v:
                    print('%08x state %d: PORT DIFFERS: %s' % (addr, n, '; '.join(d[:4])))
                    if a.dump:
                        import pickle
                        pickle.dump(state, open('%s_%08x_%d.pkl' % (a.dump, addr, n), 'wb'))
                return None
            else:
                st['same'] += 1
            return ran, rd

        if a.replay:
            import pickle
            from unicorn import UC_HOOK_MEM_WRITE
            lo, hi = (int(x, 16) for x in os.environ.get('FUZZ_WATCH', '0-1000').split('-'))
            wh = emu.mu.hook_add(UC_HOOK_MEM_WRITE, lambda mu, acc, ad, sz, val, u: print(
                '  write %08x <- %x (%d) at eip %08x esp %08x' % (ad, val & 0xffffffff, sz, mu.reg_read(UC_X86_REG_EIP), mu.reg_read(UC_X86_REG_ESP))),
                begin=lo, end=hi)
            # FUZZ_TRACE=lo-hi: every instruction executed in [lo, hi) with ESP and EBP
            th = None
            if os.environ.get('FUZZ_TRACE'):
                import unicorn as _uc
                from unicorn.x86_const import UC_X86_REG_EBP as _EBP
                tlo, thi = (int(x, 16) for x in os.environ['FUZZ_TRACE'].split('-'))
                th = emu.mu.hook_add(_uc.UC_HOOK_CODE, lambda mu, ad, sz, u: print(
                    '  exec %08x esp %08x ebp %08x' % (ad, mu.reg_read(UC_X86_REG_ESP), mu.reg_read(_EBP))),
                    begin=tlo, end=thi)
            for f in a.replay.split(','):
                res = judge(0, pickle.load(open(f, 'rb')))
                print('replayed %s: %s' % (os.path.basename(f), 'same' if res else dict(st)), first)
            emu.mu.hook_del(wh)
            if th is not None:
                emu.mu.hook_del(th)
            continue
        for s in range(a.states):
            if s % 16 == 0 and rss_mb() > MAX_MB:
                st['why:memory cap'] += 1
                break
            state = dict(seed=a.seed + s + 1, prof=s % len(PROFILES), ov={}, rov={}, stuball=bool(s & 1))
            res = judge(s + 1, state)
            if res:
                if res[0] - reached:
                    corpus.append((state, res[1]))
                reached |= res[0]
        def switch_pass(n0, picks):
            # every case of a switch, in each argument the given states read, and in each
            # result of a call they made (0x557060 switches on 0x513760's)
            nonlocal reached
            sw = []
            for base, rd in picks:
                esp = entry_esp(base['seed'])
                for q in sorted(q for q in rd if not isinstance(q, tuple) and esp < q <= esp + 0x10):
                    for v in SWITCH:
                        sw.append(dict(base, ov={**base['ov'], q: v}, rov=dict(base['rov'])))
                for c in sorted((q for q in rd if isinstance(q, tuple) and q[0] in ('c', 'n')), key=str)[:6]:
                    for v in SWITCH:
                        if c[0] == 'c':
                            f = FLOATS[0] if c[1] in float_ret() else None
                            sw.append(dict(base, plan={**base.get('plan', {}), (c[1], c[2]): (v, f)}))
                        else:
                            sw.append(dict(base, nres={**base.get('nres', {}), c[1]: (v, FLOATS[0])}))
                # and in the globals a switch index is loaded from, the others 0
                for g in SWITCH_SRC:
                    for v in SWITCH:
                        sw.append(dict(base, ov={**base['ov'], **{h: 0 for h in SWITCH_SRC}, g: v},
                                       rov=dict(base['rov'])))
            if os.environ.get('FUZZ_SWDEBUG'):
                print('switch states %d, cases %s' % (len(sw), SWITCH[:20]))
            for n, state in enumerate(sw[:400]):
                res = judge(n0 + n + 1, state)
                if res:
                    if res[0] - reached:
                        corpus.append((state, res[1]))
                    reached |= res[0]

        def richest(k):
            # (the first states may leave early: 0x557060's random ones all did)
            return sorted(corpus, key=lambda c: -len(c[1]))[:k]

        if SWITCH:
            switch_pass(a.states + a.guided, corpus[:2] + [c for c in richest(2) if c not in corpus[:2]])
        for g in range(a.guided):
            if not (corpus or frontier) or len(reached) == len(body):
                break
            if g % 16 == 0 and rss_mb() > MAX_MB:
                st['why:memory cap'] += 1
                break
            shrink = False
            if frontier and (not corpus or rng.random() < .25):
                base, rd = frontier[-1 - min(int(rng.expovariate(0.5)), len(frontier) - 1)]
                shrink = rng.random() < .5
            else:
                base, rd = corpus[-1 - min(int(rng.expovariate(0.3)), len(corpus) - 1)]
            state = mutate(rng, base, rd)
            if shrink:
                # a frontier state mostly ran out of instructions in a loop over made-up
                # sizes: small counts in two to four of its stack arguments at once
                # (or locals: 0x4f2ce0's TGA header, width and height 16-bit at +0xc/+0xe)
                esp = entry_esp(base['seed'])
                args = sorted(q for q in rd if not isinstance(q, tuple) and esp < q <= esp + 0x40)
                x = rng.random()
                if x < .35:
                    args = sorted(q for q in rd if not isinstance(q, tuple) and STACK - 0x40000 <= q < esp + 0x40)
                elif x < .7:
                    # or fields of objects (0x4ec2f0's outer loop counts [this+0x15c] entries)
                    args = sorted(q for q in rd if not isinstance(q, tuple))
                for q in rng.sample(args, min(len(args), rng.randint(2, 6))):
                    state['ov'][q] = rng.randint(1, 4) * rng.choice((1, 1, 0x10001))
            res = judge(a.states + g + 1, state)
            if res:
                if res[0] - reached:
                    corpus.append((state, res[1]))
                reached |= res[0]
        if SWITCH and len(reached) < len(body):
            switch_pass(a.states + a.guided + 400, richest(3))
        if len(reached) < len(body):
            # every compare hint of the states that found code last (and the richest) once:
            # random picks among a hundred hints missed 0x458ee0's `fcomp [1.0]`
            tried, hs = set(), []
            picks = corpus[-4:] + [c for c in richest(2) if c not in corpus[-4:]]
            for base, rd in picks:
                for k, h in rd.items():
                    if isinstance(k, tuple) and k[0] == 'h' and (str(h[0]), h[1]) not in tried:
                        tried.add((str(h[0]), h[1]))
                        q, v = h
                        st2 = dict(base, ov=dict(base['ov']), rov=dict(base['rov']), outv=dict(base.get('outv', {})))
                        if isinstance(q, tuple) and q[0] == 'o':
                            st2['outv'][(q[1], q[2])] = v & 0xffffffff
                        elif isinstance(q, tuple):
                            st2['rov'][q[1]] = v & 0xffffffff
                        else:
                            st2['ov'][q] = v & 0xffffffff
                        hs.append(st2)
            for n, state in enumerate(hs[:400]):
                res = judge(a.states + a.guided + 800 + n + 1, state)
                if res:
                    if res[0] - reached:
                        corpus.append((state, res[1]))
                    reached |= res[0]
        emu.mu.hook_del(cov)
        for h in chooks:
            emu.mu.hook_del(h)
        why = ', '.join('%s %d' % (k[4:], v) for k, v in st.most_common() if k.startswith('why:'))
        verdict = 'DIFFERS' if st['differs'] else 'EAX ONLY' if st['eax_only'] else 'same' if st['same'] else 'not judged'
        print('%08x  %3d same, %2d differ, %2d eax, %3d untestable, %2d port untestable; reached %3d%% of %d instructions  %s%s%s' % (
            addr, st['same'], st['differs'], st['eax_only'], st['untestable'], st['port_untestable'],
            100 * len(reached) // max(1, len(body)), len(body), verdict, ('  - ' + first) if first else '',
            ('  [untestable: %s]' % why) if why and a.v else ''), flush=True)
        if a.save:
            import json
            try:
                db = json.load(open(a.save))
            except (OSError, ValueError):
                db = {}
            e = db.setdefault('%08x' % addr, dict(reached=[], body=len(body), same=0, differs=0, eax_only=0))
            e['reached'] = sorted(set(e['reached']) | reached)
            for k in ('same', 'differs', 'eax_only'):
                e[k] += st[k]
            if first and st['differs']:
                e['first'] = first
            json.dump(db, open(a.save + '.tmp', 'w'))
            os.replace(a.save + '.tmp', a.save)
        if a.v and len(reached) < len(body):
            print('    not reached: %s' % ' '.join('%x' % m for m in sorted(body - reached)[:40]))
        emu = None                         # (a fresh emulator for the next function)
        import gc
        gc.collect()


if __name__ == '__main__':
    main()
