"""Which functions that are not ported yet does each level run?

    python -I tools/coverage_unported.py run [--levels "100 200 ..."] [--secs 120]
    python -I tools/coverage_unported.py report

`run` writes SCRATCH/unported.txt (game functions, not thunks, not hooked),
plays each level (two at a time, every port on, fixed clock, end clock 320)
with BEA_COVERAGE=<that file> - the DLL counts every listed original through
a thunk (hooks.cpp install_coverage) and logs "ucalled+: addr ..." - and keeps
the logs as SCRATCH/cov_<level>.log.  `report` reads them: per level the
unported functions it ran, then the union ranked by how many levels need
each one.  The shortest route to a level that runs entirely on ported code
is that level's list (2026-10-23).
"""
import argparse, csv, glob, json, os, re, subprocess, sys, threading

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
SCRATCH = os.environ.get('BEA_SCRATCH', os.path.join(ROOT, 'build'))
GAME = os.path.join(ROOT, 'Battle Engine Aquila')


def functions():
    out = {}
    for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace')):
        a = int(r['address'], 16)
        if 0x401000 <= a < 0x55a420 and r.get('is_thunk', 'false') != 'true':
            out[a] = (r['name'], int(r['size']))
    return out


def run(levels, secs):
    import direct_batch as d
    funcs = functions()
    hooked = d.hooked_addrs()
    todo = sorted(a for a in funcs if a not in hooked)
    lst = os.path.join(SCRATCH, 'unported.txt')
    open(lst, 'w').write(''.join('%08x\n' % a for a in todo))
    print('%d unported game functions listed' % len(todo), flush=True)
    for inst in (1, 2):
        p = os.path.join(GAME, 'bea_hook_disable%d.txt' % inst)
        if os.path.exists(p):
            os.remove(p)
    pending = list(levels)
    while pending:
        pair, pending = pending[:2], pending[2:]
        ths = []
        for inst, lv in enumerate(pair, 1):
            def t(lv=lv, inst=inst):
                env = dict(os.environ, BEA_ENDEXIT='1', BEA_COVERAGE=lst.replace('/', '\\'))
                subprocess.run(['powershell', '-ExecutionPolicy', 'Bypass', '-File', os.path.join(ROOT, 'tools', 'smoke_test.ps1'),
                                '-Seconds', str(secs), '-Instance', str(inst), '-TimeScale', '1', '-FixedStep', '0.016667',
                                '-EndClock', '320', '-SaveLog', os.path.join(SCRATCH, 'cov_%s.log' % lv),
                                '-GameArgs', '-forcewindowed -skipfmv -level %s' % lv],
                               cwd=ROOT, env=env, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            ths.append(threading.Thread(target=t))
        for th in ths: th.start()
        for th in ths: th.join()
        for lv in pair:
            print('  level %s: %d unported functions ran' % (lv, len(called(lv))), flush=True)


def called(lv):
    p = os.path.join(SCRATCH, 'cov_%s.log' % lv)
    if not os.path.exists(p):
        return set()
    s = set()
    for line in open(p, errors='replace'):
        if 'ucalled+:' in line:
            s.update(int(x, 16) for x in re.findall(r'\b([0-9a-f]{8})\b', line.split('ucalled+:', 1)[1]))
    return s


def report():
    funcs = functions()
    logs = sorted(glob.glob(os.path.join(SCRATCH, 'cov_*.log')))
    per = {}
    for p in logs:
        lv = os.path.basename(p)[4:-4]
        per[lv] = called(lv)
    union = {}
    for lv, s in per.items():
        for a in s:
            union.setdefault(a, []).append(lv)
    print('%d level(s); %d distinct unported functions ran' % (len(per), len(union)))
    for lv in sorted(per, key=lambda l: len(per[l])):
        s = per[lv]
        print('  level %-4s %4d unported, %7d bytes' % (lv, len(s), sum(funcs.get(a, ('', 0))[1] for a in s)))
    print('most-used unported functions:')
    for a, lvs in sorted(union.items(), key=lambda kv: (-len(kv[1]), -funcs.get(kv[0], ('', 0))[1]))[:40]:
        print('  %08x %-40s %5d bytes  %2d level(s)' % (a, funcs.get(a, ('?', 0))[0][:40], funcs.get(a, ('?', 0))[1], len(lvs)))
    json.dump({lv: sorted('%08x' % a for a in s) for lv, s in per.items()}, open(os.path.join(SCRATCH, 'coverage_unported.json'), 'w'), indent=1)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('cmd', choices=['run', 'report'])
    ap.add_argument('--levels', default='100 110 200 211 221 231 300 311 321 400 411 500 511 600 700')
    ap.add_argument('--secs', type=int, default=120)
    a = ap.parse_args()
    if a.cmd == 'run':
        run(a.levels.split(), a.secs)
    report()


if __name__ == '__main__':
    main()
