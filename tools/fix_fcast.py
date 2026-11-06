"""Rewrite Ghidra's ambiguous `(float)x` casts as reinterpretations.

Ghidra prints `(float)x` both for an int->float conversion (fild) and for an
int-typed slot the original loads with fld (NOTES A1-13, bug class 7).  When
the original function has no integer x87 instruction at all, every such cast
is a reinterpretation, so `(float)E`, `(double)E` and `(float10)E` become
`bea_fcast<float>(E)` etc. (ghidra_compat.h: a no-op for float operands, a
bit reinterpretation for 4/8-byte integers).  tools/check_fild.py verifies
the result (the port must not have more integer x87 ops than the original).

    python -I tools/fix_fcast.py FILE.cpp...
"""
import re, sys

CAST = re.compile(r'\((float|double|float10)\)')
TYPE = re.compile(r'^\s*(?:unsigned |signed )?[A-Za-z_]\w*(?:\s*\*+)?\s*$')


def match(text, i):
    """index after the bracket group opening at text[i]."""
    pairs = {'(': ')', '[': ']'}
    depth, j = 0, i
    while j < len(text):
        c = text[j]
        if c in '([':
            depth += 1
        elif c in ')]':
            depth -= 1
            if depth == 0:
                return j + 1
        j += 1
    raise ValueError('unbalanced at %d' % i)


def unary(text, i):
    """end index of the unary expression starting at text[i]."""
    while text[i] == ' ':
        i += 1
    c = text[i]
    if c in '*-&!~':
        return unary(text, i + 1)
    if c == '(':
        end = match(text, i)
        inner = text[i + 1:end - 1]
        k = end
        while k < len(text) and text[k] == ' ':
            k += 1
        # a cast: `(int *)x`, `(float)x`: its operand follows directly
        if TYPE.match(inner) and k < len(text) and (text[k].isalnum() or text[k] in '_(*&-'):
            return unary(text, k)
        j = end
    else:
        m = re.match(r'[A-Za-z_0-9.]+', text[i:])
        if not m:
            raise ValueError('no operand at %d' % i)
        j = i + m.end()
        # template arguments: bea_vcall<float10>(...)
        t = re.match(r'<[\w\s*,]*>', text[j:])
        if t and text[j + t.end():j + t.end() + 1] == '(':
            j += t.end()
    # postfix: subscripts, calls, member access
    while True:
        if j < len(text) and text[j] in '[(':
            j = match(text, j)
        elif text.startswith('->', j):
            m = re.match(r'->\s*\w+', text[j:])
            j += m.end()
        elif j < len(text) and text[j] == '.' and re.match(r'\.[A-Za-z_]', text[j:]):
            m = re.match(r'\.\w+', text[j:])
            j += m.end()
        else:
            return j


TYPED_PTR_ONLY = False


def rewrite(text):
    out, pos, n = [], 0, 0
    for m in CAST.finditer(text):
        if m.start() < pos:
            continue
        end = unary(text, m.end())
        operand = text[m.end():end].strip()
        # --typed-ptr-only (originals that also convert): only `v[i]` / `*v`
        # reads through a pointer variable Ghidra forced to int*; an explicit
        # `*(int *)(...)` read stays a conversion (fild from memory)
        if TYPED_PTR_ONLY and not re.match(r'^(\*\s*[A-Za-z_]\w*$|[A-Za-z_]\w*\[)', operand):
            continue
        out.append(text[pos:m.start()])
        # nested casts inside the operand are rewritten too
        out.append('bea_fcast<%s>(%s)' % (m.group(1), rewrite(operand)[0]))
        pos = end
        n += 1
    out.append(text[pos:])
    return ''.join(out), n


def main():
    global TYPED_PTR_ONLY
    args = sys.argv[1:]
    if args and args[0] == '--typed-ptr-only':
        TYPED_PTR_ONLY, args = True, args[1:]
    for f in args:
        text = open(f, encoding='utf-8', newline='').read()
        # only the port's body, not the callee typedefs above it (`(float)`
        # is also a one-parameter list there)
        m = re.search(r'\nstatic [^\n]*\bap_[0-9a-f]{8}\(', text)
        if not m:
            print('%s: no function body found' % f)
            continue
        new, n = rewrite(text[m.end():])
        open(f, 'w', encoding='utf-8', newline='').write(text[:m.end()] + new)
        print('%s: %d cast(s)' % (f, n))


if __name__ == '__main__':
    main()
