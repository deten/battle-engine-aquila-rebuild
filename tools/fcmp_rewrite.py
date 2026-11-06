"""Give a port's float comparisons VC6's x87 meaning on NaN.

VC6 compiles `a < b` to `fcomp; fnstsw; test ah,1` and `a <= b` to `test
ah,0x41`, `a == b` to `test ah,0x40`: the tested flags are set for an
unordered compare too, so every relational compare is TRUE when an operand is
a NaN and `!=` is FALSE.  C (and GCC) do the opposite.  Ghidra prints the
test as plain `a < b` (it canonicalises to `<`, `<=`, `==`, `!=`; `>` and
`>=` almost never appear), losing the unordered case.  0x5099a0 (a weapon's
range) takes sqrt of a negative, the original clamps the NaN to 0 with
`if (x < 0.0) x = 0;`, the port kept the NaN and returned it, and level 400
ended differently with 0x4fb670 on top (2026-10-20).

rewrite() turns every comparison with a float operand into the x87 form:
    a < b   ->  !(a >= b)          a <= b  ->  !(a > b)
    a == b  ->  !(a < b || a > b)  a != b  ->  (a < b || a > b)
An operand is float when it is a float literal, a `(float)`/`(float10)` cast,
`*(float *)...`, a call to fsin/fcos/SQRT/ABS/fpatan, or a variable the body
declares as float/double/float10 (also `float &local_x` references).
Comparisons Ghidra already wrote with NAN() are left alone.

    python -I tools/fcmp_rewrite.py [--check] [FILE.cpp...]   (default: src/bea/direct)
tools/autoport.py applies rewrite() to every new port.
"""
import glob, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FLOAT_DECL = re.compile(r'^\s*(?:float|double|float10|long double)\s*&?\s*([A-Za-z_]\w*)(?:\s*\[[^\]]*\])?\s*(?:=[^;]*)?;', re.M)
FLOAT_REF = re.compile(r'^\s*(?:float|double|float10)\s*&([A-Za-z_]\w*)\s*=', re.M)
FLOAT_PARAM = re.compile(r'(?:float|double|float10)\s+([A-Za-z_]\w*)\s*[,)]')
OPS = ('<=', '==', '!=', '<')     # longest first; `>`/`>=` are left alone (see the docstring)
STOP = set('(,;?:{}')


def float_names(body):
    names = set(FLOAT_DECL.findall(body)) | set(FLOAT_REF.findall(body))
    m = re.search(r'\bap_[0-9a-f]{8}\(([^)]*)\)', body)
    if m:
        names |= set(FLOAT_PARAM.findall(m.group(1) + ')'))
    return names


def looks_float(expr, names):
    e = expr.strip()
    if re.search(r'(?<![\w.])\d+\.\d+(?:[eE][-+]?\d+)?f?(?![\w.])', e):
        return True
    if re.search(r'\((?:float|float10|double)\s*\)', e) or '*(float *)' in e or '(float *)' in e:
        return True
    if re.search(r'bea_fcast<(?:float|float10|double)>', e):
        return True
    if re.search(r'\b(?:fsin|fcos|fpatan|SQRT|ABS|fabsl_|ROUND)\s*\(', e):
        return True
    for n in re.findall(r'\b[A-Za-z_]\w*\b', e):
        if n in names:
            return True
    return False


def operand_left(s, i):
    """start of the expression that ends at i (exclusive), depth-aware"""
    depth = 0
    j = i
    while j > 0:
        c = s[j - 1]
        if c in ')]':
            depth += 1
        elif c in '([':
            if depth == 0:
                break
            depth -= 1
        elif depth == 0:
            if c in STOP:          # a wrapped condition continues on the next line
                break
            if c in '&|' and j >= 2 and s[j - 2] == c:
                break
            if c == '=' and j >= 2 and s[j - 2] not in '<>=!':
                break
        j -= 1
    return j


def operand_right(s, i):
    """end of the expression that starts at i, depth-aware; `name<...>` is a
    template-id (bea_fcast<float>(x)), `->` an arrow, everything else with
    `<`, `>`, `==`, `!=`, `=` an operator that ends the operand"""
    depth = 0
    j = i
    n = len(s)
    while j < n:
        c = s[j]
        if c in '([':
            depth += 1
        elif c in ')]':
            if depth == 0:
                break
            depth -= 1
        elif depth == 0:
            if c in STOP:          # a wrapped condition continues on the next line
                break
            if c in '&|' and j + 1 < n and s[j + 1] == c:
                break
            if c == '<':
                if j > 0 and (s[j - 1].isalnum() or s[j - 1] == '_'):
                    d = 0
                    while j < n:
                        if s[j] == '<':
                            d += 1
                        elif s[j] == '>':
                            d -= 1
                            if d == 0:
                                break
                        j += 1
                    j += 1
                    continue
                break
            if c == '>' and not (j > 0 and s[j - 1] == '-'):
                break
            if c == '=' or (c == '!' and j + 1 < n and s[j + 1] == '='):
                break
        j += 1
    return j


def rewrite(body):
    names = float_names(body)
    out = []
    i = 0
    n = len(body)
    count = 0
    while i < n:
        op = None
        for cand in OPS:
            if body.startswith(cand, i):
                op = cand
                break
        # Ghidra writes `a < b` with spaces: anything else (`bea_fcast<float>`,
        # `<<`, `<=` seen from its `<`) is not a comparison
        if not op or body[i - 1:i] != ' ' or body[i + len(op):i + len(op) + 1] != ' ':
            out.append(body[i])
            i += 1
            continue
        # not a template argument list / shift / already NaN-aware line
        line_start = body.rfind('\n', 0, i) + 1
        line = body[line_start:body.find('\n', i)]
        if 'NAN(' in line or 'bea_isnan' in line or 'bea_vcall<' in line or 'template' in line or '#' in line[:1]:
            out.append(body[i]); i += 1; continue
        ls = operand_left(body, i)
        re_ = operand_right(body, i + len(op))
        left, right = body[ls:i], body[i + len(op):re_]
        if not left.strip() or not right.strip() or not (looks_float(left, names) or looks_float(right, names)):
            out.append(body[i]); i += 1; continue
        # the text already emitted includes `left`: take it back
        emitted = ''.join(out)
        if not emitted.endswith(body[ls:i]):      # the left operand was itself rewritten: leave this one
            out.append(body[i]); i += 1; continue
        emitted = emitted[:len(emitted) - (i - ls)]
        a, b = left.strip(), right.strip()
        if op == '<':
            repl = '!(%s >= %s)' % (a, b)
        elif op == '<=':
            repl = '!(%s > %s)' % (a, b)
        elif op == '==':
            repl = '!(%s < %s || %s > %s)' % (a, b, a, b)
        else:
            repl = '(%s < %s || %s > %s)' % (a, b, a, b)
        lead = left[:len(left) - len(left.lstrip())]
        trail = right[len(right.rstrip()):]
        out = [emitted + lead + repl + trail]
        count += 1
        i = re_
    return ''.join(out), count


def main():
    argv = sys.argv[1:]
    check = '--check' in argv
    files = [a for a in argv if not a.startswith('--')] or sorted(glob.glob(os.path.join(ROOT, 'src', 'bea', 'direct', 'ap_*.cpp')))
    total = nfiles = 0
    for p in files:
        src = open(p, encoding='utf-8', errors='replace').read()
        if '@fcmp-x87' in src:
            continue
        head, sep, body = src.partition('\n{\n')
        if not sep:
            continue
        body2, k = rewrite(body)
        if k:
            total += k
            nfiles += 1
            print('%s: %d comparison(s)' % (os.path.relpath(p, ROOT), k))
            if not check:
                open(p, 'w', encoding='utf-8').write(head.replace('// @autoport-mode', '// @fcmp-x87 (tools/fcmp_rewrite.py)\n// @autoport-mode', 1) + sep + body2)
    print('%d comparison(s) in %d file(s)%s' % (total, nfiles, ' would change' if check else ' rewritten'))


if __name__ == '__main__':
    main()
