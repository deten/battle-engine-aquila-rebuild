"""Install auto-ported *direct* replacements in batches and keep the game
playable (NOTES A1-10).

    python -I tools/direct_batch.py --from DIR [--count 80] [--seconds 30]
                                    [--levels "100 200 511 400"] [--max-size N]

DIR holds compiled ports (tools/autoport.py --direct --check --keep ...).
Each round: copy the next --count smallest ports that are not hooked yet and
not blocklisted into src/bea/direct/, build, run tools/check_ret.py, install,
soak the given levels; on a failure bisect the batch (tools/bisect.py),
move the culprits to tools/direct_quarantine/ (kept for manual review) and
record them in tools/direct_blocklist.txt, then rebuild and re-soak.
Exit code 0 means the installed DLL passed the soak with the batch in.
"""
import argparse, csv, glob, os, re, shutil, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DIRECT = os.path.join(ROOT, 'src', 'bea', 'direct')
QUAR = os.path.join(ROOT, 'tools', 'direct_quarantine')
BLOCK = os.path.join(ROOT, 'tools', 'direct_blocklist.txt')
GAME = os.path.join(ROOT, 'Battle Engine Aquila')
SCRATCH = os.environ.get('BEA_SCRATCH', os.path.join(ROOT, 'build'))


def sh(cmd, **kw):
    print('+ ' + cmd, flush=True)
    kw.setdefault('timeout', 3600)      # nothing here legitimately takes an hour
    try:
        return subprocess.run(cmd, shell=True, text=True, capture_output=True, cwd=ROOT, **kw)
    except subprocess.TimeoutExpired:
        print('FATAL: command did not return within %ds (harness stalled)' % kw['timeout'])
        sys.exit(4)


def hooked_addrs():
    out = set()
    for path in glob.glob(os.path.join(ROOT, 'src', '**', '*.cpp'), recursive=True) + \
            glob.glob(os.path.join(ROOT, 'src', '**', '*.inc'), recursive=True):
        # parity ports (BEA_PARITY_HOOK) and lifted functions (LIFT_FUNCTION) are hooks too: left out,
        # they stayed on in the "original" runs of menu_test (2026-11-01)
        for m in re.finditer(r'(?:BEA_(?:SHADOW_)?HOOK(?:_T|_TRIVIAL)?|BEA_PARITY_HOOK|LIFT_FUNCTION(?:_NF)?)\(\s*(0x[0-9A-Fa-f]+)',
                             open(path, encoding='utf-8', errors='replace').read()):
            out.add(int(m.group(1), 16))
    return out


def blocklist():
    if not os.path.exists(BLOCK):
        return set()
    return set(int(l.split()[0], 16) for l in open(BLOCK) if l.strip() and not l.startswith('#'))


def build_check_install():
    # Ghidra's implicit float->int assignments are 4-byte moves: keep the bits
    r = sh('python -I tools/fix_floatbits.py')
    if r.returncode != 0:
        print(r.stdout[-3000:], r.stderr[-3000:])
        return 'fix_floatbits failed'
    r = sh('bash tools/build.sh')
    if r.returncode != 0 or 'error:' in r.stdout + r.stderr:
        if 'cannot open output file' in r.stdout + r.stderr:
            # transient: the previous DLL is still being scanned/copied; retry once
            import time
            time.sleep(5)
            r = sh('bash tools/build.sh')
        if r.returncode != 0 or 'error:' in r.stdout + r.stderr:
            print(r.stdout[-3000:], r.stderr[-3000:])
            return 'build failed'
    r = sh('python -I tools/check_ret.py')
    bad = [l for l in r.stdout.splitlines() if l.startswith('BAD') or l.startswith('NARROW')]
    if bad:
        print('\n'.join(bad))
        return 'check_ret: ' + ' '.join(re.findall(r'^(?:BAD|NARROW)\s+([0-9a-f]{8})', r.stdout, re.M))
    # variadic calls whose format needs more arguments than Ghidra kept
    r = sh('python -I tools/check_varargs.py src/bea/direct')
    bad = sorted(set(re.findall(r'^([0-9a-f]{8}) FUN_', r.stdout, re.M)))
    if bad:
        print(r.stdout[-3000:])
        return 'check_varargs: ' + ' '.join(bad)
    # x87 return mismatches: an unpopped float return overflows the FPU stack
    # (every later load is a NaN), a popped non-float underflows it
    r = sh('python -I tools/check_st0.py src/bea/direct')
    bad = sorted(set(re.findall(r'^([0-9a-f]{8}) [0-9a-f]{8} original=', r.stdout, re.M))
                 # a port's own return, when the original's direct callers settle it
                 # (0x4b5250 and 0x4cac80 returned nothing to callers that store
                 # the float; 0x4e66e0 returned a float nobody pops, 2026-10-27)
                 | set(re.findall(r'^([0-9a-f]{8}) self original=.*callers decide', r.stdout, re.M)))
    if bad:
        print(r.stdout[-3000:])
        return 'check_st0: ' + ' '.join(bad)
    # callees that read ECX called through a cdecl/stdcall pointer
    r = sh('python -I tools/check_ecx.py src/bea/direct')
    bad = sorted(set(re.findall(r'^([0-9a-f]{8}) [0-9a-f]{8}\(', r.stdout, re.M)))
    if bad:
        print(r.stdout[-3000:])
        return 'check_ecx: ' + ' '.join(bad)
    # originals with a try block: catch (...) also catches access violations
    r = sh('python -I tools/check_eh_try.py src/bea/direct')
    bad = sorted(set(re.findall(r'^([0-9a-f]{8}) tries=', r.stdout, re.M)))
    if bad:
        print(r.stdout[-3000:])
        return 'check_eh_try: ' + ' '.join(bad)
    # `(float)x` that the original loads with fld (a reinterpretation) but the
    # port compiled as an int->float conversion
    r = sh('python -I tools/check_fild.py')
    bad = sorted(set(re.findall(r'^([0-9a-f]{8}): port has', r.stdout, re.M)))
    if bad:
        print(r.stdout[-3000:])
        return 'check_fild: ' + ' '.join(bad)
    # the compiled port must use the original's calls, globals, float
    # constants and x87 operations (tools/fingerprint.py; reviewed exceptions
    # in tools/fingerprint_allow.txt)
    r = sh('python -I tools/fingerprint.py')
    bad = sorted(set(re.findall(r'^([0-9a-f]{8}): (?!ok)', r.stdout, re.M)))
    if bad:
        print(r.stdout[-3000:])
        return 'fingerprint: ' + ' '.join(bad)
    # a stack local the port reads but never writes, whose slot the original
    # stores to: Ghidra dropped the store (0x4ff4f0's dx, tools/check_uninit.py)
    r = sh('python -I tools/check_uninit.py')
    bad = sorted(set(re.findall(r'^([0-9a-f]{8}): ', r.stdout, re.M)))
    if bad:
        print(r.stdout[-3000:])
        return 'check_uninit: ' + ' '.join(bad)
    # a Ghidra local in the saved-register slots or below the frame: its
    # stack-depth model drifted after an indirect call, and the port names one
    # memory slot two ways (0x49f820's out-vector, tools/check_frame.py)
    r = sh('python -I tools/check_frame.py')
    bad = sorted(set(re.findall(r'^([0-9a-f]{8}): ', r.stdout, re.M)))
    if bad:
        print(r.stdout[-3000:])
        return 'check_frame: ' + ' '.join(bad)
    # a global table indexed with another element size than the original
    # (0x515970 read another key's state: tools/check_table_index.py)
    r = sh('python -I tools/check_table_index.py')
    bad = sorted(set(re.findall(r'^([0-9a-f]{8}): ', r.stdout, re.M)))
    if bad:
        print(r.stdout[-3000:])
        return 'check_table_index: ' + ' '.join(bad)
    # `&DAT_x + n` scaled by another element size than Ghidra's (0x4f7d30's
    # buffer: the Load Game screen rejected the save, tools/check_dat_arith.py)
    r = sh('python -I tools/check_dat_arith.py')
    bad = sorted(set(re.findall(r'ap_([0-9a-f]{8})\.cpp(?::\d+)?: ', r.stdout)))
    if bad:
        print(r.stdout[-3000:])
        return 'check_dat_arith: ' + ' '.join(bad)
    # a float's bit pattern given as an integer to a float parameter (the old
    # 0x555be0 prototype: 0x43a00000 became 1.1e9, tools/check_float_literals.py)
    r = sh('python -I tools/check_float_literals.py')
    bad = sorted(set(re.findall(r'ap_([0-9a-f]{8})\.cpp:\d+: ', r.stdout)))
    if bad:
        print(r.stdout[-3000:])
        return 'check_float_literals: ' + ' '.join(bad)
    # a float sum or product grouped otherwise than the original's x87 code
    # (bug class 19: Ghidra's `z*z + y*y + x*x`; the landing test's collision
    # and lighting differences, tools/check_fp_order.py)
    r = sh('python -I tools/check_fp_order.py')
    bad = sorted(set(re.findall(r'^([0-9a-f]{8}): original', r.stdout, re.M)))
    if bad:
        print(r.stdout[-3000:])
        return 'check_fp_order: ' + ' '.join(bad)
    r = sh('bash tools/install_hook.sh install')
    return None


def soak(levels, seconds):
    r = sh('sh tools/coverage.sh %d %s' % (seconds, levels))
    print(r.stdout)
    # keep the hook log of every failing item: the next soak overwrites build/soak_<level>.log
    stamp = __import__('time').strftime('%Y%m%d_%H%M%S')
    for lv in re.findall(r'^level (\w+): (?!ALIVE|DEVICE)', r.stdout, re.M):
        try:
            shutil.copy(os.path.join(ROOT, 'build', 'soak_%s.log' % lv), os.path.join(SCRATCH, 'fail_%s_%s.log' % (stamp, lv)))
        except OSError:
            pass
    if 'STALLED' in r.stdout:
        # an unkillable game process: the machine is stalling (2026-10-18 disk
        # incident), nothing can be learned about the ports; stop the loop
        print('FATAL: harness stalled; stopping instead of bisecting')
        sys.exit(4)
    # DEVICE LOST: the session was locked, the level is untested rather than failed
    failed = [l for l in r.stdout.splitlines() if l.startswith('level') and 'ALIVE' not in l and 'DEVICE LOST' not in l]
    return failed


def quarantine(addrs, why):
    os.makedirs(QUAR, exist_ok=True)
    with open(BLOCK, 'a') as f:
        for a in addrs:
            src = os.path.join(DIRECT, 'ap_%08x.cpp' % a)
            if os.path.exists(src):
                shutil.move(src, os.path.join(QUAR, 'ap_%08x.cpp' % a))
            f.write('%08x %s\n' % (a, why))
    print('quarantined: ' + ' '.join('%08x' % a for a in addrs))


class _Tee:
    """Copy everything printed to a per-batch log in SCRATCH (the loop only
    keeps the last lines of the output)."""
    def __init__(self, *streams):
        self.streams = streams

    def write(self, s):
        for st in self.streams:
            st.write(s)
            st.flush()

    def flush(self):
        for st in self.streams:
            st.flush()


def main():
    os.makedirs(SCRATCH, exist_ok=True)
    sys.stdout = _Tee(sys.stdout, open(os.path.join(SCRATCH, 'direct_batch_%s.log' % __import__('time').strftime('%Y%m%d_%H%M%S')), 'a', encoding='utf-8'))
    ap = argparse.ArgumentParser()
    ap.add_argument('--from', dest='src', required=True)
    ap.add_argument('--count', type=int, default=80)
    ap.add_argument('--seconds', type=int, default=30)
    ap.add_argument('--levels', default='100 200 511 400')
    ap.add_argument('--max-size', type=int, default=100000)
    ap.add_argument('--bisect-args', default='-forcewindowed -skipfmv -level %s')
    ap.add_argument('--resume', action='store_true',
                    help='finish the batch already copied into src/bea/direct (untracked files) instead of adding one')
    a = ap.parse_args()
    sizes = {int(r['address'], 16): int(r['size']) for r in
             csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace'))}
    os.makedirs(DIRECT, exist_ok=True)
    have, block = hooked_addrs(), blocklist()
    # files that failed the syntax check are kept in DIR (--keep) and listed in _errors.txt
    errfile = os.path.join(a.src, '_errors.txt')
    failed_files = set(re.findall(r'^(ap_[0-9a-f]{8}\.cpp)', open(errfile).read(), re.M)) if os.path.exists(errfile) else set()
    cands = []
    for path in glob.glob(os.path.join(a.src, 'ap_*.cpp')):
        addr = int(os.path.basename(path)[3:11], 16)
        if addr in have or addr in block or sizes.get(addr, 1 << 30) > a.max_size or os.path.basename(path) in failed_files:
            continue
        cands.append((sizes[addr], addr, path))
    cands.sort()
    if a.resume:
        # an interrupted batch: its surviving ports are the untracked files
        r = subprocess.run(['git', 'ls-files', '--others', '--exclude-standard', 'src/bea/direct'],
                           cwd=ROOT, capture_output=True, text=True)
        addrs = sorted(int(os.path.basename(f)[3:11], 16) for f in r.stdout.split() if os.path.basename(f).startswith('ap_'))
        if not addrs:
            print('nothing to install')
            return 0
        print('resuming a batch of %d untracked ports' % len(addrs))
    else:
        batch = cands[:a.count]
        if not batch:
            print('nothing to install')
            return 0
        for _, addr, path in batch:
            shutil.copy(path, os.path.join(DIRECT, os.path.basename(path)))
        addrs = [addr for _, addr, _ in batch]
        print('batch of %d (sizes %d..%d bytes), %d candidates remain' % (len(batch), batch[0][0], batch[-1][0], len(cands) - len(batch)))
    # each failed attempt quarantines at least one port, so the count only
    # bounds a runaway; 4 was too few for 200-port batches (culprits on
    # several levels, 2026-10-19 02:19)
    for attempt in range(12):
        err = build_check_install()
        if err:
            m = re.findall(r'[0-9a-f]{8}', err)
            if err.startswith('check_') and m:
                quarantine([int(x, 16) for x in m], err.split(':')[0])
                continue
            print('FATAL: ' + err)
            return 1
        failed = soak(a.levels, a.seconds)
        if not failed:
            print('batch OK: %d direct ports installed' % len([x for x in addrs if os.path.exists(os.path.join(DIRECT, 'ap_%08x.cpp' % x))]))
            return 0
        level = re.search(r'level (\w+)', failed[0]).group(1)
        installed = [x for x in addrs if os.path.exists(os.path.join(DIRECT, 'ap_%08x.cpp' % x))]
        # first try to read the culprit off the crash log: a fault inside a
        # port, or a port on the stack of a game-code fault, names it directly
        # (tools/crashmap.py); one confirmation run replaces the bisect
        sys.path.append(os.path.join(ROOT, 'tools'))
        import crashmap
        named = []
        for lv in [re.search(r'level (\w+)', f_).group(1) for f_ in failed]:
            try:
                named += [x for x, _, _ in crashmap.implicated(os.path.join(ROOT, 'build', 'soak_%s.log' % lv)) if x in installed]
            except Exception as e:
                print('crashmap: ' + str(e))
        named = list(dict.fromkeys(named))
        if named:
            print('crash log names: ' + ' '.join('%08x' % x for x in named) + ' -> confirming')
            with open(os.path.join(GAME, 'bea_hook_disable.txt'), 'w') as f:
                f.write(''.join('%08x\n' % x for x in named))
            confirmed = not soak(a.levels, a.seconds)
            os.remove(os.path.join(GAME, 'bea_hook_disable.txt'))
            if confirmed:
                quarantine(named, 'soak level %s (crash log)' % level)
                continue
            print('disabling the named ports did not fix it; bisecting')
        print('soak failed: ' + failed[0] + ' -> bisecting the batch')
        listfile = os.path.join(SCRATCH, 'direct_batch_cands.txt')
        with open(listfile, 'w') as f:
            f.write(''.join('%08x\n' % x for x in installed))
        # the front end (coverage.sh `level frontend`) runs without -level
        bargs = '-forcewindowed -skipfmv' if level == 'frontend' else a.bisect_args % level
        # a bisect of a 200-port batch with several culprits or an interaction
        # can legitimately run past an hour; each of its smoke tests has its own
        # 165 s stall guard, so the outer limit only has to catch a wedged bisect
        r = sh('python -I tools/bisect.py --candidates "%s" --args "%s" --seconds %d' % (listfile, bargs, max(a.seconds, 15)), timeout=4 * 3600)
        print(r.stdout[-2000:])
        try:
            os.remove(os.path.join(GAME, 'bea_hook_disable.txt'))
        except OSError:
            pass
        if r.returncode == 3 or 'HARNESS STALLED' in r.stdout:
            print('FATAL: harness stalled during bisect; stopping')
            sys.exit(4)
        m = re.search(r'bad hooks: (.*)', r.stdout)
        culprits = [int(x, 16) for x in m.group(1).split()] if m and m.group(1).strip() else []
        if not culprits:
            # no deterministic culprit: soak once more; keep the batch if it
            # passes (a timing-dependent crash is not attributable), else drop it
            print('bisect found no deterministic culprit; re-soaking')
            failed = soak(a.levels, a.seconds)
            if not failed:
                print('batch OK after re-soak (flaky crash not reproduced): %d direct ports installed' % len(addrs))
                return 0
            # before blaming the whole batch, soak that level without it: if the
            # committed build fails too, the level is flaky or broken already and
            # quarantining 200 ports would only lose them (2026-10-19 02:30, 172
            # ports lost to a level-231 failure that a later soak did not repeat)
            level = re.search(r'level (\w+)', failed[0]).group(1)
            installed = [x for x in addrs if os.path.exists(os.path.join(DIRECT, 'ap_%08x.cpp' % x))]
            shared = os.path.join(GAME, 'bea_hook_disable.txt')
            with open(shared, 'w') as f:
                f.write(''.join('%08x\n' % x for x in installed))
            base_failed = soak(level, a.seconds)
            os.remove(shared)
            if any(re.match(r'level %s:' % re.escape(level), l) for l in base_failed):
                print('BASELINE FAILS level %s with the whole batch disabled: the committed build is flaky '
                      'or broken there; the batch is withdrawn, not quarantined' % level)
                for x in installed:
                    os.remove(os.path.join(DIRECT, 'ap_%08x.cpp' % x))
                return 1
            # a single baseline pass proves little with the autopilot's random
            # play: the same 68 innocent ports were quarantined twice
            # (2026-10-20, the failures were a pre-existing restart crash).
            # Withdraw the batch and stop instead; the files stay in the census.
            print('no culprit for level %s and the baseline passed once: the batch is withdrawn, '
                  'not quarantined (investigate the level before rerunning)' % level)
            for x in installed:
                os.remove(os.path.join(DIRECT, 'ap_%08x.cpp' % x))
            return 1
        else:
            quarantine(culprits, 'soak level %s' % level)
    print('giving up after repeated failures')
    return 1


if __name__ == '__main__':
    sys.exit(main())
