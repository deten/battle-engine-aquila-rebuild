"""Turn a direct port into a differential hook: the original runs first (through
the trampoline), then the port on the same arguments, and the first results
that differ are logged with the arguments.

Finds the expression a port gets wrong in one run: 0x5099a0's `-0.7853982 <
fVar3` (a float literal read as a double) showed up as 192.268 vs 194.914
on the same inputs (2026-10-20).  Only for functions whose effect is their
return value (no writes the second call would repeat with a difference), and
whose callees are the same code for both calls.  The shadow framework cannot
test such a function when it follows pointers out of the copied object.

    python -I tools/diffhook.py ADDR          rewrite src/bea/direct/ap_ADDR.cpp (keeps a .orig copy)
    python -I tools/diffhook.py --undo ADDR   restore the plain registration

Then build, install, run a level, and grep the hook log for `DIFF ADDR`.
"""
import os, re, shutil, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SIG = re.compile(r'^static (?P<ret>[\w:]+(?:\s*\*+)?)\s+(?P<conv>BEA_\w+)\s+ap_(?P<addr>[0-9a-f]{8})\((?P<params>.*)\)\s*$', re.M)
REG = re.compile(r'^BEA_HOOKS\(BEA_HOOK\(0x(?P<addr>[0-9a-f]{8}), ap_[0-9a-f]{8}\)\);\s*$', re.M)


def fmt_of(t):
    t = t.strip()
    if '*' in t or t in ('void', 'code'):
        return '%p', '(void*)(uintptr_t)(%s)'
    if t in ('float', 'double', 'float10', 'long double'):
        return '%.9g', '(double)(%s)'
    return '%#x', '(unsigned)(%s)'


def main():
    argv = sys.argv[1:]
    undo = '--undo' in argv
    argv = [a for a in argv if not a.startswith('--')]
    if len(argv) != 1:
        sys.exit(__doc__)
    addr = int(argv[0], 16)
    path = os.path.join(ROOT, 'src', 'bea', 'direct', 'ap_%08x.cpp' % addr)
    if undo:
        if os.path.exists(path + '.orig'):
            shutil.move(path + '.orig', path)
            print('restored', os.path.relpath(path, ROOT))
        return
    src = open(path, encoding='utf-8', errors='replace').read()
    if '@diffhook' in src:
        sys.exit('already a diff hook')
    m = SIG.search(src)
    r = REG.search(src)
    if not m or not r:
        sys.exit('signature or registration not recognised')
    ret, conv, params = m.group('ret').strip(), m.group('conv'), m.group('params').strip()
    if ret == 'void':
        sys.exit('void function: nothing to compare')
    plist = [p.strip() for p in params.split(',')] if params else []
    names, types = [], []
    for p in plist:
        pm = re.match(r'^(.*?)\s*([A-Za-z_]\w*)$', p)
        if not pm:
            sys.exit('parameter not recognised: ' + p)
        types.append(pm.group(1).strip())
        names.append(pm.group(2))
    rf, rc = fmt_of(ret)
    fmts, vals = [], []
    for t, n in zip(types, names):
        f, c = fmt_of(t)
        fmts.append('%s=%s' % (n, f))
        vals.append(c % n)
    is_float = ret in ('float', 'double', 'float10', 'long double')
    differ = ('!(o == p) && !(o != o && p != p)' if is_float else 'o != p')
    code = '''
// @diffhook (tools/diffhook.py): original first, then the port, mismatches logged
typedef %(ret)s (%(conv)s* orig_%(a)08x_t)(%(params)s);
static orig_%(a)08x_t g_orig_%(a)08x = nullptr;
static %(ret)s %(conv)s diff_%(a)08x(%(params)s)
{
    static unsigned calls = 0, mism = 0;
    ++calls;
    %(ret)s o = g_orig_%(a)08x(%(args)s);
    %(ret)s p = ap_%(a)08x(%(args)s);
    bool differ = %(differ)s;
    if (differ) ++mism;
    if ((differ && mism <= 40) || calls %% 5000 == 0)
        bea_log("DIFF %(a)08x %%s calls=%%u mism=%%u %(fmts)s | orig=%(rf)s port=%(rf)s",
                differ ? "MISMATCH" : "ok", calls, mism%(vals)s, %(rc_o)s, %(rc_p)s);
    return o;
}
BEA_HOOKS(BEA_SHADOW_HOOK(0x%(a)08x, diff_%(a)08x, g_orig_%(a)08x));
''' % dict(ret=ret, conv=conv, a=addr, params=params, args=', '.join(names), differ=differ,
           fmts=' '.join(fmts), rf=rf, vals=''.join(', ' + v for v in vals), rc_o=rc % 'o', rc_p=rc % 'p')
    shutil.copy(path, path + '.orig')
    out = src[:r.start()] + code.lstrip('\n') + src[r.end():]
    open(path, 'w', encoding='utf-8').write(out)
    print('diff hook written to', os.path.relpath(path, ROOT), '(original kept as .orig)')


if __name__ == '__main__':
    main()
