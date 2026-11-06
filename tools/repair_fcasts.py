"""Repair the casts GCC rejects between a float and a pointer in generated
ports: a float stored in a slot Ghidra typed as a pointer (`param_1 =
(float *)(*(float *)((int)this_ + 8) + *param_1)` in 0x44b2d0: the original
stores the bits with fstp) or a pointer slot read as a float.  Both are
same-size reinterpretations in the original, never conversions.

The compiler locates them (`file:line:col: error: invalid cast from type
'float' to type 'T*'`, col = the cast's opening parenthesis); each becomes
`(T*)(uintptr_t)bea_piece32(x)` or `__builtin_bit_cast(float, (uint32_t)
(uintptr_t)(x))`, and the file is compiled again until no such error is left
(2026-10-27: 13 of the 62 candidates that did not compile).

    python -I tools/repair_fcasts.py FILE...   (rewrites in place, prints a summary)
"""
import os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import fix_fcast as ff                              # noqa: E402

ERR = re.compile(r":(\d+):(\d+): error: invalid cast from type '([^']+)'(?: \{aka '[^']*'\})? to type '([^']+)'")
FLOATS = ('float', 'double', 'float10', 'long double')


def errors(path):
    cmd = ("cd '%s' && g++ -fsyntax-only -std=gnu++17 -m32 -mfpmath=387 -fpermissive -w -I src "
           "-I third_party/minhook/include '%s'" % (ROOT.replace('\\', '/'), path.replace('\\', '/')))
    r = subprocess.run([r'C:\msys64\usr\bin\bash.exe', '-lc', cmd], capture_output=True, text=True,
                       env=dict(os.environ, MSYSTEM='MINGW32'))
    return r.returncode, [(int(m.group(1)), int(m.group(2)), m.group(3), m.group(4)) for m in ERR.finditer(r.stderr)]


def repair(path, rounds=8):
    total = 0
    for _ in range(rounds):
        rc, errs = errors(path)
        todo = [e for e in errs if (e[2] in FLOATS and e[3].endswith('*')) or (e[2].endswith('*') and e[3] in FLOATS)]
        if not todo:
            return rc, total
        text = open(path, encoding='utf-8').read()
        starts = [0]
        for line in text.split('\n'):
            starts.append(starts[-1] + len(line) + 1)
        done = 0
        for ln, col, frm, to in sorted(set(todo), reverse=True):
            i = starts[ln - 1] + col - 1
            if i >= len(text) or text[i] != '(':
                continue
            try:
                cast_end = ff.match(text, i)
                op_end = ff.unary(text, cast_end)
            except (ValueError, IndexError):
                continue
            ty = text[i + 1:cast_end - 1]
            operand = text[cast_end:op_end].strip()
            if frm in FLOATS:
                new = '(%s)(uintptr_t)bea_piece32(%s)' % (ty, operand)
            else:
                new = '__builtin_bit_cast(float, (uint32_t)(uintptr_t)(%s))' % operand
            text = text[:i] + new + text[op_end:]
            done += 1
        if not done:
            return rc, total
        total += done
        open(path, 'w', encoding='utf-8', newline='\n').write(text)
    rc, _ = errors(path)
    return rc, total


def main():
    for p in sys.argv[1:]:
        rc, n = repair(p)
        if n:
            t = open(p, encoding='utf-8').read()
            note = '// @autoport-repair: %d float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)\n' % n
            if '@autoport-repair' not in t:
                k = t.find('#include')
                t = t[:k] + note + t[k:] if k >= 0 else note + t
                open(p, 'w', encoding='utf-8', newline='\n').write(t)
        print('%s: %d repaired, %s' % (os.path.basename(p), n, 'compiles' if rc == 0 else 'still fails'))


if __name__ == '__main__':
    main()
