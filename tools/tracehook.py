"""Turn a direct port into a trace hook: after every call the hook logs chosen
dwords of `this` (or, with --args, every argument and the return) and the
game clock, running either the port or, with BEA_TRACE_ORIG=1 in the
environment, the original through the trampoline.  Two runs of the same
level under the fixed clock give two logs; the first line that differs is
where the port diverges.  For functions whose effect is on the object or on
callees, where a differential hook (tools/diffhook.py) cannot run the two
side by side.  A hooked callee traced with --args logs in both runs, so the
caller's behaviour can be compared through what it hands its callees.

    python -I tools/tracehook.py ADDR OFF [OFF...]   e.g. 00428110 0x7c 0x80 0x84 0xf8 0x268
    python -I tools/tracehook.py --args ADDR          log every argument and the return instead
    python -I tools/tracehook.py --undo ADDR

Then build, install, and run the level twice:
    BEA_TRACE_ORIG=1 ... smoke_test.ps1 ... -SaveLog trace_orig.log
    ... smoke_test.ps1 ... -SaveLog trace_port.log
    grep "TRACE ADDR" each log, strip `this=`/pointer values (the heap moves), diff.
"""
import os, re, shutil, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SIG = re.compile(r'^static (?P<ret>[\w:]+(?:\s*\*+)?)\s+(?P<conv>BEA_\w+)\s+ap_(?P<addr>[0-9a-f]{8})\((?P<params>.*)\)\s*$', re.M)
REG = re.compile(r'^BEA_HOOKS\(BEA_HOOK\(0x(?P<addr>[0-9a-f]{8}), ap_[0-9a-f]{8}\)\);\s*$', re.M)


def main():
    argv = sys.argv[1:]
    undo = '--undo' in argv
    args_mode = '--args' in argv
    argv = [a for a in argv if not a.startswith('--')]
    if not argv:
        sys.exit(__doc__)
    addr = int(argv[0], 16)
    path = os.path.join(ROOT, 'src', 'bea', 'direct', 'ap_%08x.cpp' % addr)
    if undo:
        if os.path.exists(path + '.orig'):
            shutil.move(path + '.orig', path)
            print('restored', os.path.relpath(path, ROOT))
        return
    offs = [int(o, 16) for o in argv[1:]]
    if not offs and not args_mode:
        sys.exit('give the this-relative offsets to log, or --args')
    src = open(path, encoding='utf-8', errors='replace').read()
    if '@tracehook' in src:
        sys.exit('already a trace hook')
    m = SIG.search(src)
    r = REG.search(src)
    if not m or not r:
        sys.exit('signature or registration not recognised')
    ret, conv, params = m.group('ret').strip(), m.group('conv'), m.group('params').strip()
    plist = [p.strip() for p in params.split(',')] if params else []
    names = []
    for p in plist:
        pm = re.match(r'^(.*?)\s*([A-Za-z_]\w*)$', p)
        if not pm:
            sys.exit('parameter not recognised: ' + p)
        names.append(pm.group(2))
    is_void = ret == 'void'
    is_float = ret in ('float', 'double', 'float10', 'long double')
    if args_mode:
        fmt = ' '.join('%s=%%08lx' % n for n in names)
        vals = ''.join(', (unsigned long)(uintptr_t)(%s)' % n for n in names)
        if not is_void:
            fmt += ' ret=%.9g' if is_float else ' ret=%08lx'
            vals += ', (double)r' if is_float else ', (unsigned long)(uintptr_t)r'
    else:
        if conv != 'BEA_THISCALL' or not names:
            sys.exit('a thiscall with `this` as its first parameter is needed')
        this = names[0]
        fmt = 'this=%p ' + ' '.join('+%x=%%08lx' % o for o in offs)
        vals = ', (void*)(%s)' % this + ''.join(', (unsigned long)*(volatile uint32_t*)((char*)(%s) + 0x%x)' % (this, o) for o in offs)
    argl = ', '.join(names)
    if is_void:
        call = 'if (use_orig) g_orig_%08x(%s); else ap_%08x(%s);' % (addr, argl, addr, argl)
        ret_stmt = ''
    else:
        call = '%s r = use_orig ? g_orig_%08x(%s) : ap_%08x(%s);' % (ret, addr, argl, addr, argl)
        ret_stmt = 'return r;'
    code = '''
// @tracehook (tools/tracehook.py): the port, or the original with BEA_TRACE_ORIG=1; logged after each call
typedef %(ret)s (%(conv)s* orig_%(a)08x_t)(%(params)s);
static orig_%(a)08x_t g_orig_%(a)08x = nullptr;
static %(ret)s %(conv)s trace_%(a)08x(%(params)s)
{
    static int use_orig = -1;
    if (use_orig < 0) { char b[8] = ""; GetEnvironmentVariableA("BEA_TRACE_ORIG", b, sizeof b); use_orig = b[0] == '1'; }
    static unsigned calls = 0;
    ++calls;
    %(call)s
    bea_log("TRACE %(a)08x #%%u clock=%%.3f %(fmt)s", calls, (double)*(volatile float*)0x00672fd0%(vals)s);
    %(ret_stmt)s
}
BEA_HOOKS(BEA_SHADOW_HOOK(0x%(a)08x, trace_%(a)08x, g_orig_%(a)08x));
''' % dict(ret=ret, conv=conv, a=addr, params=params, fmt=fmt, vals=vals, call=call, ret_stmt=ret_stmt)
    shutil.copy(path, path + '.orig')
    out = src[:r.start()] + code.lstrip('\n') + src[r.end():]
    open(path, 'w', encoding='utf-8').write(out)
    print('trace hook written to', os.path.relpath(path, ROOT), '(original kept as .orig)')


if __name__ == '__main__':
    main()
